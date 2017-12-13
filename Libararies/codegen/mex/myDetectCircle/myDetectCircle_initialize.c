/*
 * myDetectCircle_initialize.c
 *
 * Code generation for function 'myDetectCircle_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "myDetectCircle.h"
#include "myDetectCircle_initialize.h"
#include "_coder_myDetectCircle_mex.h"
#include "myDetectCircle_data.h"

/* Function Definitions */
void myDetectCircle_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (myDetectCircle_initialize.c) */
