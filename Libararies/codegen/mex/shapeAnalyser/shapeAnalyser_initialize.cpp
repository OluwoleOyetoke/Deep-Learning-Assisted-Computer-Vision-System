/*
 * shapeAnalyser_initialize.cpp
 *
 * Code generation for function 'shapeAnalyser_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "shapeAnalyser.h"
#include "shapeAnalyser_initialize.h"
#include "_coder_shapeAnalyser_mex.h"
#include "shapeAnalyser_data.h"

/* Function Definitions */
void shapeAnalyser_initialize()
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (shapeAnalyser_initialize.cpp) */
