/*
 * analyseCriticalAreas_terminate.c
 *
 * Code generation for function 'analyseCriticalAreas_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "analyseCriticalAreas.h"
#include "analyseCriticalAreas_terminate.h"
#include "_coder_analyseCriticalAreas_mex.h"
#include "analyseCriticalAreas_data.h"
#include "blas.h"
#include "libmwordfilt2.h"

/* Function Definitions */
void analyseCriticalAreas_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void analyseCriticalAreas_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (analyseCriticalAreas_terminate.c) */
