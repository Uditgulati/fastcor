#include <R.h>
#include <Rinternals.h>
#include <math.h>

SEXP R_cor_mat(SEXP mat)
{ 
  SEXP ret;
  PROTECT(cosim = allocVector(REALSXP, 1));

  REAL(ret)[0] = 10.0;

  UNPROTECT(1);
  return ret;
}
