/*
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "error.h"
#include "libmwgetnumcores.h"
#include "libmwgrayto8.h"
#include "libmwimfilter.h"
#include "libmwimregionalmax.h"
#include "libmwippfilter.h"
#include "libmwippreconstruct.h"
#include "libmwordfilt2.h"
#include "libmwtbbhist.h"

/* Variable Definitions */
static emlrtRTEInfo ce_emlrtRTEI = { 17, 9, "error",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\error.m"
};

/* Function Definitions */
void error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &ce_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
}

/* End of code generation (error.c) */
