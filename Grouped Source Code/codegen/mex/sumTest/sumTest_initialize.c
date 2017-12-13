/*
 * sumTest_initialize.c
 *
 * Code generation for function 'sumTest_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sumTest.h"
#include "sumTest_initialize.h"
#include "_coder_sumTest_mex.h"
#include "sumTest_data.h"

/* Function Declarations */
static void sumTest_once(void);

/* Function Definitions */
static void sumTest_once(void)
{
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\sumTest.m",
                  0, 1, 5, 1, 0, 0, 0, 1, 0, 0, 0);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0, 0, "sumTest", 0, -1, 1169);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 4, 1125, -1, 1144);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 3, 1041, -1, 1101);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 2, 851, -1, 1022);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 1, 627, -1, 739);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 0, 261, -1, 584);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 0, 0, 768, 788, 1029, 1112);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 0, 0, 592, 622, 1164);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void sumTest_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    sumTest_once();
  }
}

/* End of code generation (sumTest_initialize.c) */
