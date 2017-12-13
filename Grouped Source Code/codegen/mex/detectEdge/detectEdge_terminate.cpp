/*
 * detectEdge_terminate.cpp
 *
 * Code generation for function 'detectEdge_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectEdge.h"
#include "detectEdge_terminate.h"
#include "_coder_detectEdge_mex.h"
#include "detectEdge_data.h"

/* Function Definitions */
void detectEdge_atexit()
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void detectEdge_terminate()
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (detectEdge_terminate.cpp) */
