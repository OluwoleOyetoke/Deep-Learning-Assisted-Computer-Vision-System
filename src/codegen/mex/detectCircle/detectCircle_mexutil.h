/*
 * detectCircle_mexutil.h
 *
 * Code generation for function 'detectCircle_mexutil'
 *
 */

#ifndef DETECTCIRCLE_MEXUTIL_H
#define DETECTCIRCLE_MEXUTIL_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "omp.h"
#include "detectCircle_types.h"

/* Function Declarations */
extern emlrtCTX emlrtGetRootTLSGlobal(void);
extern void emlrtLockerFunction(EmlrtLockeeFunction aLockee, const emlrtConstCTX
  aTLS, void *aData);
extern const mxArray *emlrt_marshallOut(const real_T u);

#endif

/* End of code generation (detectCircle_mexutil.h) */
