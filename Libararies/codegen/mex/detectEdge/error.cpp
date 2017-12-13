/*
 * error.cpp
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectEdge.h"
#include "error.h"

/* Variable Definitions */
static emlrtRTEInfo m_emlrtRTEI = { 17, 9, "error",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\error.m"
};

/* Function Definitions */
void error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &m_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
}

/* End of code generation (error.cpp) */
