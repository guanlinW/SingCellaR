// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// compute_weights
NumericVector compute_weights(NumericMatrix idx);
RcppExport SEXP _SingCellaR_compute_weights(SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type idx(idxSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_weights(idx));
    return rcpp_result_gen;
END_RCPP
}
// getDetectedGenesPerCell
NumericVector getDetectedGenesPerCell(arma::sp_mat X, int k);
RcppExport SEXP _SingCellaR_getDetectedGenesPerCell(SEXP XSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(getDetectedGenesPerCell(X, k));
    return rcpp_result_gen;
END_RCPP
}
// getExpressingCellsPerGene
NumericVector getExpressingCellsPerGene(arma::sp_mat X, int k);
RcppExport SEXP _SingCellaR_getExpressingCellsPerGene(SEXP XSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(getExpressingCellsPerGene(X, k));
    return rcpp_result_gen;
END_RCPP
}
// makeBinaryMatrix
arma::sp_mat makeBinaryMatrix(arma::sp_mat X, int k);
RcppExport SEXP _SingCellaR_makeBinaryMatrix(SEXP XSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(makeBinaryMatrix(X, k));
    return rcpp_result_gen;
END_RCPP
}
// makeBinaryMatrix_for_float
arma::sp_mat makeBinaryMatrix_for_float(arma::sp_mat X);
RcppExport SEXP _SingCellaR_makeBinaryMatrix_for_float(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(makeBinaryMatrix_for_float(X));
    return rcpp_result_gen;
END_RCPP
}
// count_expressing_cells
NumericVector count_expressing_cells(arma::sp_mat X, arma::sp_mat Y);
RcppExport SEXP _SingCellaR_count_expressing_cells(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(count_expressing_cells(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// count_divided_by_libsize
arma::sp_mat count_divided_by_libsize(arma::sp_mat X);
RcppExport SEXP _SingCellaR_count_divided_by_libsize(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(count_divided_by_libsize(X));
    return rcpp_result_gen;
END_RCPP
}
// annoy_euclidean_nns
Rcpp::List annoy_euclidean_nns(const std::string& index_name, const Rcpp::NumericMatrix& mat, std::size_t n_neighbors, std::size_t search_k, std::size_t grain_size, bool verbose);
RcppExport SEXP _SingCellaR_annoy_euclidean_nns(SEXP index_nameSEXP, SEXP matSEXP, SEXP n_neighborsSEXP, SEXP search_kSEXP, SEXP grain_sizeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type index_name(index_nameSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_neighbors(n_neighborsSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type search_k(search_kSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type grain_size(grain_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(annoy_euclidean_nns(index_name, mat, n_neighbors, search_k, grain_size, verbose));
    return rcpp_result_gen;
END_RCPP
}
// annoy_cosine_nns
Rcpp::List annoy_cosine_nns(const std::string& index_name, const Rcpp::NumericMatrix& mat, std::size_t n_neighbors, std::size_t search_k, std::size_t grain_size, bool verbose);
RcppExport SEXP _SingCellaR_annoy_cosine_nns(SEXP index_nameSEXP, SEXP matSEXP, SEXP n_neighborsSEXP, SEXP search_kSEXP, SEXP grain_sizeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type index_name(index_nameSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_neighbors(n_neighborsSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type search_k(search_kSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type grain_size(grain_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(annoy_cosine_nns(index_name, mat, n_neighbors, search_k, grain_size, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SingCellaR_compute_weights", (DL_FUNC) &_SingCellaR_compute_weights, 1},
    {"_SingCellaR_getDetectedGenesPerCell", (DL_FUNC) &_SingCellaR_getDetectedGenesPerCell, 2},
    {"_SingCellaR_getExpressingCellsPerGene", (DL_FUNC) &_SingCellaR_getExpressingCellsPerGene, 2},
    {"_SingCellaR_makeBinaryMatrix", (DL_FUNC) &_SingCellaR_makeBinaryMatrix, 2},
    {"_SingCellaR_makeBinaryMatrix_for_float", (DL_FUNC) &_SingCellaR_makeBinaryMatrix_for_float, 1},
    {"_SingCellaR_count_expressing_cells", (DL_FUNC) &_SingCellaR_count_expressing_cells, 2},
    {"_SingCellaR_count_divided_by_libsize", (DL_FUNC) &_SingCellaR_count_divided_by_libsize, 1},
    {"_SingCellaR_annoy_euclidean_nns", (DL_FUNC) &_SingCellaR_annoy_euclidean_nns, 6},
    {"_SingCellaR_annoy_cosine_nns", (DL_FUNC) &_SingCellaR_annoy_cosine_nns, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_SingCellaR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
