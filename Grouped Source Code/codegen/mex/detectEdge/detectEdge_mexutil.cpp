/*
 * detectEdge_mexutil.cpp
 *
 * Code generation for function 'detectEdge_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectEdge.h"
#include "detectEdge_mexutil.h"
#include "detectEdge_data.h"

/* Function Definitions */
emlrtCTX emlrtGetRootTLSGlobal()
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, const emlrtConstCTX aTLS,
  void *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

/* End of code generation (detectEdge_mexutil.cpp) */
