// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// code.cpp
cpp11::writable::doubles buggy_init(cpp11::integers size);
extern "C" SEXP _vsexample_buggy_init(SEXP size) {
  BEGIN_CPP11
    return cpp11::as_sexp(buggy_init(cpp11::as_cpp<cpp11::decay_t<cpp11::integers>>(size)));
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_vsexample_buggy_init", (DL_FUNC) &_vsexample_buggy_init, 1},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_vsexample(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}
