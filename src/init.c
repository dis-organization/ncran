#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP _ncran_ncran_close(SEXP);
extern SEXP _ncran_ncran_inq_dims(SEXP);
extern SEXP _ncran_ncran_inq_grps(SEXP);
extern SEXP _ncran_ncran_open(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_ncran_ncran_close",    (DL_FUNC) &_ncran_ncran_close,    1},
    {"_ncran_ncran_inq_dims", (DL_FUNC) &_ncran_ncran_inq_dims, 1},
    {"_ncran_ncran_inq_grps", (DL_FUNC) &_ncran_ncran_inq_grps, 1},
    {"_ncran_ncran_open",     (DL_FUNC) &_ncran_ncran_open,     1},
    {NULL, NULL, 0}
};

void R_init_ncran(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
