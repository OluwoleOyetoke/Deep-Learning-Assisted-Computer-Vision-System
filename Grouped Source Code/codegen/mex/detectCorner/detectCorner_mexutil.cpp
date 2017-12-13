/*
 * detectCorner_mexutil.cpp
 *
 * Code generation for function 'detectCorner_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCorner.h"
#include "detectCorner_mexutil.h"
#include "detectCorner_data.h"
#include "blas.h"
#include "libmwordfilt2.h"

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

/* End of code generation (detectCorner_mexutil.cpp) */
