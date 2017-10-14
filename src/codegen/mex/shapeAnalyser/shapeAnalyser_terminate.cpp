/*
 * shapeAnalyser_terminate.cpp
 *
 * Code generation for function 'shapeAnalyser_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "shapeAnalyser.h"
#include "shapeAnalyser_terminate.h"
#include "_coder_shapeAnalyser_mex.h"
#include "shapeAnalyser_data.h"

/* Function Definitions */
void shapeAnalyser_atexit()
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void shapeAnalyser_terminate()
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (shapeAnalyser_terminate.cpp) */
