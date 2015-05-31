// [[Rcpp::depends(RcppGSL)]]
#include <Rcpp.h>
#include <RcppGSL.h>
// #include <RcppArmadillo.h>
#include <cmath>
#include <gsl/gsl_integration.h>
#include <gsl/gsl_randist.h>
#include <gsl/gsl_sf_psi.h>

using namespace Rcpp;

// Args to the adaptive quadrature integration

// integrate from (LOWER, infty), which is mapped to (0, 1] by  x = a + (1-t)/t
#define LOWER 0 

// Convergence of integration reached when either the absolute or relative error 
// is within these tolerances
#define EPSABS 0
#define EPSREL 1e-8

// Size of the work space and max number of subintervals
#define LIMIT 1e5

// [[Rcpp::export]]
NumericVector dgamma_(NumericVector x, double theta) {
  int n = x.size();
  NumericVector out(n);
  for(int i = 0; i < n; ++i) {
    out[i] = gsl_ran_gamma_pdf(x[i], 1/theta, theta);
  }
  return out;
}

// [[Rcpp::export]]
NumericVector deriv_dgamma(NumericVector x, NumericVector params, int deriv_idx) {
  if (params.size() != 1) {
    throw std::range_error("params must be length 1 for the gamma distribution");
  }
  
  // deriv_idx is an R index for the parameter to take a partial derivative against
  if (deriv_idx <= 0 || deriv_idx > params.size()) {
    throw std::range_error("deriv_idx out of range, must be > 0 and <= length(params)");
  }
  
  double theta = params[0];
  int n = x.size();
  NumericVector out(n);
  double term1, term2, term3;
  for(int i = 0; i < n; ++i) {
      term1 = pow((x[i]/theta),(1/theta - 1));
      term2 = exp(-x[i]/theta);
      term3 = log(theta/x[i]) + gsl_sf_psi(1/theta) + x[i] - 1;
      out[i] = (term1 * term2 * term3)/(tgamma(1/theta)*pow(theta,3));
  }
  return out;
}

double integrate(double (*f)(double,void*), void* data) {
    gsl_integration_workspace *work = gsl_integration_workspace_alloc(LIMIT);
    
    double result, error;
    
    gsl_function F;
    F.function = f;
    F.params = data;
    
    int ret = gsl_integration_qagiu(&F, LOWER, EPSABS, EPSREL, LIMIT, work, &result, &error);
    
    gsl_integration_workspace_free(work);
    return result;
}

double phi_1(double w, void* data) {
  double (*params)[3] = (double (*)[3]) data;
  double N_dot = (*params)[0];
  double H_dot = (*params)[1];
  double theta = (*params)[2];
  return pow(w, N_dot) * exp(-w * H_dot) * gsl_ran_gamma_pdf(w, 1/theta, theta);
}

double phi_2(double w, void* data) {
  double (*params)[3] = (double (*)[3]) data;
  double N_dot = (*params)[0];
  double H_dot = (*params)[1];
  double theta = (*params)[2];
  return pow(w, N_dot + 1) * exp(-w * H_dot) * gsl_ran_gamma_pdf(w, 1/theta, theta);
}

// [[Rcpp::export]]
NumericVector psi(double theta, NumericVector N_dot, NumericVector H_dot, String frailty_distr) {
  
  if (N_dot.size() != H_dot.size()) {
    throw std::range_error("N_dot and H_dot must be the same size");
  }
  
  if (frailty_distr == "gamma") {
    
  } else {
    throw std::range_error("Unsupported frailty distribution");
  }
  
  int n = N_dot.size();
  NumericVector out(n);
  double data[3];
  for(int i = 0; i < n; ++i) {
    data[0] = N_dot[i];
    data[1] = H_dot[i];
    data[2] = theta;
    out[i] = integrate(&phi_2, &data)/integrate(&phi_1, &data);
  }
  return out;
}

double mult(NumericVector a, NumericVector b) {
  
}

// [[Rcpp::export]]
Rcpp::List baseline_hazard_estimator(Rcpp::List X_, Rcpp::List k_,
                                     NumericVector d_,
                                     Rcpp::List Y_, Rcpp::List N_dot,
                                     NumericVector beta, double theta, 
                                     String frailty_distr) {
  int n_timesteps = d_.size();
  int n_clusters = Y_.size();
  // std::vector<std::string> cluster_names = Y_.names();
  
  // H_ is a list of matrices
  Rcpp::List H_ = clone(Y_); //Rcpp::List::create();
  
  // H_dot is a list of numeric vectors
  Rcpp::List H_dot = clone(N_dot);
  
  for (int i = 0; i < n_clusters; ++i) {
    // H_[i](NumericMatrix(n_members, n_timesteps));
    Rcpp::NumericMatrix H_i = H_[i];
    Rcpp::NumericVector H_dot_i = H_dot[i];
    H_dot_i[0] += 3;
    H_i[0, 0] += 3;
  }
  
  // lambda_hat is the baseline cumulative hazard estimate
  NumericVector lambda_hat(n_timesteps);
  NumericVector delta_lambda_hat(n_timesteps);
  
  double denom;
  // k starts from 1, not a typo
  for (int k = 1; k < n_timesteps; ++k) {
    denom = 0;
    for (int i = 0; i < n_clusters; ++i) {
      Rcpp::NumericMatrix X_i = X_[i];
      Rcpp::NumericVector k_i = k_[i];
      
      Rcpp::NumericMatrix Y_i = Y_[i];
      Rcpp::NumericVector N_dot_i = N_dot[i];
      
      Rcpp::NumericMatrix H_i = H_[i];
      Rcpp::NumericVector H_dot_i = H_dot[i];
      
//       denom += psi(theta, N_dot_i[k-1], H_dot_i[k-1], frailty_distr) * \
//                 sum(Y_i(j, k) * sum(exp(beta) * X_i(j, _)));
    }
    
    delta_lambda_hat[k] = d_[k]/denom;
    
    lambda_hat[k] = lambda_hat[k-1] + delta_lambda_hat[k];
    
    for (int i = 0; i < n_clusters; ++i) {
      Rcpp::NumericMatrix X_i = X_[i];
      Rcpp::NumericVector k_i = k_[i];
      
      Rcpp::NumericMatrix H_i = H_[i];
      Rcpp::NumericVector H_dot_i = H_dot[i];
      
      for (int j = 0; j < H_i.nrow(); ++j) {
        int k_min = min(NumericVector::create(k_i[j], k));
        H_i[j, k] = lambda_hat[k_min] * sum(exp(beta) * X_i(j, _));
      }
      
      H_dot_i[k] = sum(H_i( _ , k));
    }
  }
  return Rcpp::List::create(Rcpp::Named("H_") = H_,
                            Rcpp::Named("H_dot") = H_dot,
                            Rcpp::Named("lambda_hat") = lambda_hat);
}
