// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// ScoreU
Rcpp::List ScoreU(int n, arma::vec& k, arma::vec& y, arma::mat& x, int p, arma::vec& beta, char corre);
RcppExport SEXP _interep_ScoreU(SEXP nSEXP, SEXP kSEXP, SEXP ySEXP, SEXP xSEXP, SEXP pSEXP, SEXP betaSEXP, SEXP correSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< char >::type corre(correSEXP);
    rcpp_result_gen = Rcpp::wrap(ScoreU(n, k, y, x, p, beta, corre));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_interep_ScoreU", (DL_FUNC) &_interep_ScoreU, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_interep(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
