// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// force_materialization
void force_materialization(SEXP x);
RcppExport SEXP _vroom_force_materialization(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    force_materialization(x);
    return R_NilValue;
END_RCPP
}
// vroom_materialize
void vroom_materialize(Rcpp::List x);
RcppExport SEXP _vroom_vroom_materialize(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    vroom_materialize(x);
    return R_NilValue;
END_RCPP
}
// gen_character_
CharacterVector gen_character_(int n, int min, int max, std::string values);
RcppExport SEXP _vroom_gen_character_(SEXP nSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type min(minSEXP);
    Rcpp::traits::input_parameter< int >::type max(maxSEXP);
    Rcpp::traits::input_parameter< std::string >::type values(valuesSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_character_(n, min, max, values));
    return rcpp_result_gen;
END_RCPP
}
// vroom_
SEXP vroom_(List inputs, SEXP delim, const char quote, bool trim_ws, bool escape_double, bool escape_backslash, const char comment, size_t skip, size_t n_max, bool progress, RObject col_names, RObject col_types, RObject col_keep, RObject col_skip, SEXP id, CharacterVector na, List locale, size_t guess_max, size_t num_threads, size_t altrep_opts);
RcppExport SEXP _vroom_vroom_(SEXP inputsSEXP, SEXP delimSEXP, SEXP quoteSEXP, SEXP trim_wsSEXP, SEXP escape_doubleSEXP, SEXP escape_backslashSEXP, SEXP commentSEXP, SEXP skipSEXP, SEXP n_maxSEXP, SEXP progressSEXP, SEXP col_namesSEXP, SEXP col_typesSEXP, SEXP col_keepSEXP, SEXP col_skipSEXP, SEXP idSEXP, SEXP naSEXP, SEXP localeSEXP, SEXP guess_maxSEXP, SEXP num_threadsSEXP, SEXP altrep_optsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type inputs(inputsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type delim(delimSEXP);
    Rcpp::traits::input_parameter< const char >::type quote(quoteSEXP);
    Rcpp::traits::input_parameter< bool >::type trim_ws(trim_wsSEXP);
    Rcpp::traits::input_parameter< bool >::type escape_double(escape_doubleSEXP);
    Rcpp::traits::input_parameter< bool >::type escape_backslash(escape_backslashSEXP);
    Rcpp::traits::input_parameter< const char >::type comment(commentSEXP);
    Rcpp::traits::input_parameter< size_t >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< size_t >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_types(col_typesSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_keep(col_keepSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_skip(col_skipSEXP);
    Rcpp::traits::input_parameter< SEXP >::type id(idSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type na(naSEXP);
    Rcpp::traits::input_parameter< List >::type locale(localeSEXP);
    Rcpp::traits::input_parameter< size_t >::type guess_max(guess_maxSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< size_t >::type altrep_opts(altrep_optsSEXP);
    rcpp_result_gen = Rcpp::wrap(vroom_(inputs, delim, quote, trim_ws, escape_double, escape_backslash, comment, skip, n_max, progress, col_names, col_types, col_keep, col_skip, id, na, locale, guess_max, num_threads, altrep_opts));
    return rcpp_result_gen;
END_RCPP
}
// vroom_fwf_
List vroom_fwf_(List inputs, std::vector<int> col_starts, std::vector<int> col_ends, bool trim_ws, RObject col_names, RObject col_types, RObject col_keep, RObject col_skip, size_t skip, const char comment, size_t n_max, SEXP id, CharacterVector na, List locale, size_t guess_max, size_t num_threads, size_t altrep_opts);
RcppExport SEXP _vroom_vroom_fwf_(SEXP inputsSEXP, SEXP col_startsSEXP, SEXP col_endsSEXP, SEXP trim_wsSEXP, SEXP col_namesSEXP, SEXP col_typesSEXP, SEXP col_keepSEXP, SEXP col_skipSEXP, SEXP skipSEXP, SEXP commentSEXP, SEXP n_maxSEXP, SEXP idSEXP, SEXP naSEXP, SEXP localeSEXP, SEXP guess_maxSEXP, SEXP num_threadsSEXP, SEXP altrep_optsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type inputs(inputsSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type col_starts(col_startsSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type col_ends(col_endsSEXP);
    Rcpp::traits::input_parameter< bool >::type trim_ws(trim_wsSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_types(col_typesSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_keep(col_keepSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_skip(col_skipSEXP);
    Rcpp::traits::input_parameter< size_t >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< const char >::type comment(commentSEXP);
    Rcpp::traits::input_parameter< size_t >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< SEXP >::type id(idSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type na(naSEXP);
    Rcpp::traits::input_parameter< List >::type locale(localeSEXP);
    Rcpp::traits::input_parameter< size_t >::type guess_max(guess_maxSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< size_t >::type altrep_opts(altrep_optsSEXP);
    rcpp_result_gen = Rcpp::wrap(vroom_fwf_(inputs, col_starts, col_ends, trim_ws, col_names, col_types, col_keep, col_skip, skip, comment, n_max, id, na, locale, guess_max, num_threads, altrep_opts));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_vroom_force_materialization", (DL_FUNC) &_vroom_force_materialization, 1},
    {"_vroom_vroom_materialize", (DL_FUNC) &_vroom_vroom_materialize, 1},
    {"_vroom_gen_character_", (DL_FUNC) &_vroom_gen_character_, 4},
    {"_vroom_vroom_", (DL_FUNC) &_vroom_vroom_, 20},
    {"_vroom_vroom_fwf_", (DL_FUNC) &_vroom_vroom_fwf_, 17},
    {NULL, NULL, 0}
};

void init_vroom_chr(DllInfo* dll);
void init_vroom_date(DllInfo* dll);
void init_vroom_dbl(DllInfo* dll);
void init_vroom_dttm(DllInfo* dll);
void init_vroom_fct(DllInfo* dll);
void init_vroom_int(DllInfo* dll);
void init_vroom_num(DllInfo* dll);
void init_vroom_time(DllInfo* dll);
RcppExport void R_init_vroom(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
    init_vroom_chr(dll);
    init_vroom_date(dll);
    init_vroom_dbl(dll);
    init_vroom_dttm(dll);
    init_vroom_fct(dll);
    init_vroom_int(dll);
    init_vroom_num(dll);
    init_vroom_time(dll);
}
