// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// ising_gibbs_sweep_
IntegerMatrix ising_gibbs_sweep_(IntegerMatrix state, NumericVector proba_beta);
RcppExport SEXP _couplingsmontecarlo_ising_gibbs_sweep_(SEXP stateSEXP, SEXP proba_betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type state(stateSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type proba_beta(proba_betaSEXP);
    rcpp_result_gen = Rcpp::wrap(ising_gibbs_sweep_(state, proba_beta));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_couplingsmontecarlo_ising_gibbs_sweep_", (DL_FUNC) &_couplingsmontecarlo_ising_gibbs_sweep_, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_couplingsmontecarlo(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
