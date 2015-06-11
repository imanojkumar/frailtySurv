// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

// dgamma_c
NumericVector dgamma_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtyr_dgamma_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(dgamma_c(x, theta));
    return __result;
END_RCPP
}
// deriv_dgamma_c
NumericVector deriv_dgamma_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtyr_deriv_dgamma_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(deriv_dgamma_c(x, theta));
    return __result;
END_RCPP
}
// lt_dgamma_c
double lt_dgamma_c(int p, double s, double theta);
RcppExport SEXP frailtyr_lt_dgamma_c(SEXP pSEXP, SEXP sSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    __result = Rcpp::wrap(lt_dgamma_c(p, s, theta));
    return __result;
END_RCPP
}
// dlognormal_c
NumericVector dlognormal_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtyr_dlognormal_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(dlognormal_c(x, theta));
    return __result;
END_RCPP
}
// deriv_dlognormal_c
NumericVector deriv_dlognormal_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtyr_deriv_dlognormal_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(deriv_dlognormal_c(x, theta));
    return __result;
END_RCPP
}
// dinvgauss_c
NumericVector dinvgauss_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtyr_dinvgauss_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(dinvgauss_c(x, theta));
    return __result;
END_RCPP
}
// deriv_dinvgauss_c
NumericVector deriv_dinvgauss_c(NumericVector x, NumericVector theta);
RcppExport SEXP frailtyr_deriv_dinvgauss_c(SEXP xSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    __result = Rcpp::wrap(deriv_dinvgauss_c(x, theta));
    return __result;
END_RCPP
}
// dposstab_c
NumericVector dposstab_c(NumericVector x, NumericVector alpha);
RcppExport SEXP frailtyr_dposstab_c(SEXP xSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    __result = Rcpp::wrap(dposstab_c(x, alpha));
    return __result;
END_RCPP
}
// lt_dposstab_c
double lt_dposstab_c(int p, double s, double theta);
RcppExport SEXP frailtyr_lt_dposstab_c(SEXP pSEXP, SEXP sSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    __result = Rcpp::wrap(lt_dposstab_c(p, s, theta));
    return __result;
END_RCPP
}
// dpvf_c
NumericVector dpvf_c(NumericVector x, NumericVector alpha);
RcppExport SEXP frailtyr_dpvf_c(SEXP xSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    __result = Rcpp::wrap(dpvf_c(x, alpha));
    return __result;
END_RCPP
}
// lt_dpvf_c
double lt_dpvf_c(int p, double s, double theta);
RcppExport SEXP frailtyr_lt_dpvf_c(SEXP pSEXP, SEXP sSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    __result = Rcpp::wrap(lt_dpvf_c(p, s, theta));
    return __result;
END_RCPP
}
// baseline_hazard_estimator
Rcpp::List baseline_hazard_estimator(Rcpp::List X_, Rcpp::List R_, NumericVector d_, Rcpp::List Y_, Rcpp::List N_dot, NumericVector beta, NumericVector theta, String frailty);
RcppExport SEXP frailtyr_baseline_hazard_estimator(SEXP X_SEXP, SEXP R_SEXP, SEXP d_SEXP, SEXP Y_SEXP, SEXP N_dotSEXP, SEXP betaSEXP, SEXP thetaSEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type R_(R_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type d_(d_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type Y_(Y_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type N_dot(N_dotSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(baseline_hazard_estimator(X_, R_, d_, Y_, N_dot, beta, theta, frailty));
    return __result;
END_RCPP
}
// U_r
double U_r(Rcpp::List X_, Rcpp::List R_, Rcpp::List I_, Rcpp::List N_dot, Rcpp::List H_, Rcpp::List H_dot, NumericVector beta, NumericVector theta, int beta_idx, String frailty);
RcppExport SEXP frailtyr_U_r(SEXP X_SEXP, SEXP R_SEXP, SEXP I_SEXP, SEXP N_dotSEXP, SEXP H_SEXP, SEXP H_dotSEXP, SEXP betaSEXP, SEXP thetaSEXP, SEXP beta_idxSEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type R_(R_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type I_(I_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type N_dot(N_dotSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type H_(H_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type H_dot(H_dotSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type beta_idx(beta_idxSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(U_r(X_, R_, I_, N_dot, H_, H_dot, beta, theta, beta_idx, frailty));
    return __result;
END_RCPP
}
// U_p
double U_p(Rcpp::List X_, Rcpp::List R_, Rcpp::List I_, Rcpp::List N_dot, Rcpp::List H_, Rcpp::List H_dot, NumericVector beta, NumericVector theta, int theta_idx, String frailty);
RcppExport SEXP frailtyr_U_p(SEXP X_SEXP, SEXP R_SEXP, SEXP I_SEXP, SEXP N_dotSEXP, SEXP H_SEXP, SEXP H_dotSEXP, SEXP betaSEXP, SEXP thetaSEXP, SEXP theta_idxSEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type R_(R_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type I_(I_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type N_dot(N_dotSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type H_(H_SEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type H_dot(H_dotSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type theta_idx(theta_idxSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(U_p(X_, R_, I_, N_dot, H_, H_dot, beta, theta, theta_idx, frailty));
    return __result;
END_RCPP
}
// loglikelihood
double loglikelihood(List X_, List R_, List I_, List N_dot, List H_dot, NumericVector lambda, NumericVector beta, NumericVector theta, String frailty);
RcppExport SEXP frailtyr_loglikelihood(SEXP X_SEXP, SEXP R_SEXP, SEXP I_SEXP, SEXP N_dotSEXP, SEXP H_dotSEXP, SEXP lambdaSEXP, SEXP betaSEXP, SEXP thetaSEXP, SEXP frailtySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type X_(X_SEXP);
    Rcpp::traits::input_parameter< List >::type R_(R_SEXP);
    Rcpp::traits::input_parameter< List >::type I_(I_SEXP);
    Rcpp::traits::input_parameter< List >::type N_dot(N_dotSEXP);
    Rcpp::traits::input_parameter< List >::type H_dot(H_dotSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< String >::type frailty(frailtySEXP);
    __result = Rcpp::wrap(loglikelihood(X_, R_, I_, N_dot, H_dot, lambda, beta, theta, frailty));
    return __result;
END_RCPP
}
