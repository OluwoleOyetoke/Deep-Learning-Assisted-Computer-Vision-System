/*
 * detectCircle_initialize.c
 *
 * Code generation for function 'detectCircle_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "detectCircle_initialize.h"
#include "_coder_detectCircle_mex.h"
#include "detectCircle_data.h"
#include "libmwgetnumcores.h"
#include "libmwgrayto8.h"
#include "libmwimfilter.h"
#include "libmwimregionalmax.h"
#include "libmwippfilter.h"
#include "libmwippreconstruct.h"
#include "libmwordfilt2.h"
#include "libmwtbbhist.h"

/* Function Definitions */
void detectCircle_initialize(void)
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

/* End of code generation (detectCircle_initialize.c) */
