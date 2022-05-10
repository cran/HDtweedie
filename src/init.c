#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>
#include <R_ext/RS.h>

/* .Fortran calls */
extern void F77_NAME(tweediegrpnet)(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);

static const R_FortranMethodDef FortranEntries[] = {
    {"tweediegrpnet", (DL_FUNC) &F77_NAME(tweediegrpnet), 29},
    {NULL, NULL, 0}
};

void R_init_HDtweedie(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, NULL, FortranEntries, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
