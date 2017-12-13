/*
 * _coder_myDetectCircle_mex.c
 *
 * Code generation for function '_coder_myDetectCircle_mex'
 *
 */

/* Include files */
#include "myDetectCircle.h"
#include "_coder_myDetectCircle_mex.h"
#include "myDetectCircle_terminate.h"
#include "_coder_myDetectCircle_api.h"
#include "myDetectCircle_initialize.h"
#include "myDetectCircle_data.h"

/* Function Declarations */
static void myDetectCircle_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T
  nrhs, const mxArray *prhs[1]);

/* Function Definitions */
static void myDetectCircle_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T
  nrhs, const mxArray *prhs[1])
{
  int32_T n;
  const mxArray *inputs[1];
  const mxArray *outputs[2];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        14, "myDetectCircle");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "myDetectCircle");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  myDetectCircle_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  myDetectCircle_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(myDetectCircle_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  myDetectCircle_initialize();

  /* Dispatch the entry-point. */
  myDetectCircle_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_myDetectCircle_mex.c) */
