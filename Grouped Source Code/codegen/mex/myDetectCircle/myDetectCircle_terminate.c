/*
 * myDetectCircle_terminate.c
 *
 * Code generation for function 'myDetectCircle_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "myDetectCircle.h"
#include "myDetectCircle_terminate.h"
#include "_coder_myDetectCircle_mex.h"
#include "myDetectCircle_data.h"

/* Function Definitions */
void myDetectCircle_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void myDetectCircle_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (myDetectCircle_terminate.c) */
