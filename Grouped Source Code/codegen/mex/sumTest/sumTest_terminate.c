/*
 * sumTest_terminate.c
 *
 * Code generation for function 'sumTest_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sumTest.h"
#include "sumTest_terminate.h"
#include "_coder_sumTest_mex.h"
#include "sumTest_data.h"

/* Function Definitions */
void sumTest_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void sumTest_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (sumTest_terminate.c) */
