// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// ncran_open
int ncran_open(CharacterVector dsn);
RcppExport SEXP _ncran_ncran_open(SEXP dsnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    rcpp_result_gen = Rcpp::wrap(ncran_open(dsn));
    return rcpp_result_gen;
END_RCPP
}
// ncran_close
void ncran_close(int ncid);
RcppExport SEXP _ncran_ncran_close(SEXP ncidSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type ncid(ncidSEXP);
    ncran_close(ncid);
    return R_NilValue;
END_RCPP
}
// ncran_inq_grps
IntegerVector ncran_inq_grps(int ncid);
RcppExport SEXP _ncran_ncran_inq_grps(SEXP ncidSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type ncid(ncidSEXP);
    rcpp_result_gen = Rcpp::wrap(ncran_inq_grps(ncid));
    return rcpp_result_gen;
END_RCPP
}
// ncran_inq_dims
int ncran_inq_dims(int grpid);
RcppExport SEXP _ncran_ncran_inq_dims(SEXP grpidSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type grpid(grpidSEXP);
    rcpp_result_gen = Rcpp::wrap(ncran_inq_dims(grpid));
    return rcpp_result_gen;
END_RCPP
}