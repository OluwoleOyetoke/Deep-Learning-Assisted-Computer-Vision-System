/*
 * detectEdge_initialize.cpp
 *
 * Code generation for function 'detectEdge_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectEdge.h"
#include "detectEdge_initialize.h"
#include "_coder_detectEdge_mex.h"
#include "detectEdge_data.h"

/* Function Definitions */
void detectEdge_initialize()
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (detectEdge_initialize.cpp) */
