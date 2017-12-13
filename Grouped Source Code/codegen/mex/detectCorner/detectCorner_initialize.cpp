/*
 * detectCorner_initialize.cpp
 *
 * Code generation for function 'detectCorner_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCorner.h"
#include "detectCorner_initialize.h"
#include "_coder_detectCorner_mex.h"
#include "detectCorner_data.h"
#include "blas.h"
#include "libmwordfilt2.h"

/* Function Definitions */
void detectCorner_initialize()
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

/* End of code generation (detectCorner_initialize.cpp) */
