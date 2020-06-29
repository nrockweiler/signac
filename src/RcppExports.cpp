// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// groupCommand
SEXP groupCommand(std::string fragments, Rcpp::Nullable<Rcpp::StringVector> some_whitelist_cells, std::size_t max_lines, bool verbose);
RcppExport SEXP _Signac_groupCommand(SEXP fragmentsSEXP, SEXP some_whitelist_cellsSEXP, SEXP max_linesSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fragments(fragmentsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::StringVector> >::type some_whitelist_cells(some_whitelist_cellsSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type max_lines(max_linesSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(groupCommand(fragments, some_whitelist_cells, max_lines, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Signac_groupCommand", (DL_FUNC) &_Signac_groupCommand, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_Signac(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}