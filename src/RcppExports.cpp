// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cppIso
DataFrame cppIso(CharacterVector cvseq);
RcppExport SEXP _bacollite_cppIso(SEXP cvseqSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type cvseq(cvseqSEXP);
    rcpp_result_gen = Rcpp::wrap(cppIso(cvseq));
    return rcpp_result_gen;
END_RCPP
}
// cppIsoAtom
DataFrame cppIsoAtom(int nC, int nH, int nN, int nO, int nS);
RcppExport SEXP _bacollite_cppIsoAtom(SEXP nCSEXP, SEXP nHSEXP, SEXP nNSEXP, SEXP nOSEXP, SEXP nSSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nC(nCSEXP);
    Rcpp::traits::input_parameter< int >::type nH(nHSEXP);
    Rcpp::traits::input_parameter< int >::type nN(nNSEXP);
    Rcpp::traits::input_parameter< int >::type nO(nOSEXP);
    Rcpp::traits::input_parameter< int >::type nS(nSSEXP);
    rcpp_result_gen = Rcpp::wrap(cppIsoAtom(nC, nH, nN, nO, nS));
    return rcpp_result_gen;
END_RCPP
}
// cppIsoAtom_p
DataFrame cppIsoAtom_p(IntegerVector Ratoms);
RcppExport SEXP _bacollite_cppIsoAtom_p(SEXP RatomsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type Ratoms(RatomsSEXP);
    rcpp_result_gen = Rcpp::wrap(cppIsoAtom_p(Ratoms));
    return rcpp_result_gen;
END_RCPP
}
// aa_seq_to_atoms
IntegerVector aa_seq_to_atoms(CharacterVector cvseq);
RcppExport SEXP _bacollite_aa_seq_to_atoms(SEXP cvseqSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type cvseq(cvseqSEXP);
    rcpp_result_gen = Rcpp::wrap(aa_seq_to_atoms(cvseq));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bacollite_cppIso", (DL_FUNC) &_bacollite_cppIso, 1},
    {"_bacollite_cppIsoAtom", (DL_FUNC) &_bacollite_cppIsoAtom, 5},
    {"_bacollite_cppIsoAtom_p", (DL_FUNC) &_bacollite_cppIsoAtom_p, 1},
    {"_bacollite_aa_seq_to_atoms", (DL_FUNC) &_bacollite_aa_seq_to_atoms, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_bacollite(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
