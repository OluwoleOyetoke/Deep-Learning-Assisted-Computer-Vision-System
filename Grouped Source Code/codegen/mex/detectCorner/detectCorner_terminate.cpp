/*
 * detectCorner_terminate.cpp
 *
 * Code generation for function 'detectCorner_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCorner.h"
#include "detectCorner_terminate.h"
#include "_coder_detectCorner_mex.h"
#include "detectCorner_data.h"
#include "blas.h"
#include "libmwordfilt2.h"

/* Function Definitions */
void detectCorner_atexit()
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void detectCorner_terminate()
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (detectCorner_terminate.cpp) */
