/*
 * analyseCriticalAreas_initialize.c
 *
 * Code generation for function 'analyseCriticalAreas_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "analyseCriticalAreas.h"
#include "analyseCriticalAreas_initialize.h"
#include "_coder_analyseCriticalAreas_mex.h"
#include "analyseCriticalAreas_data.h"
#include "blas.h"
#include "libmwordfilt2.h"

/* Function Definitions */
void analyseCriticalAreas_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2012b(&st, "Image_Toolbox", 2);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (analyseCriticalAreas_initialize.c) */
