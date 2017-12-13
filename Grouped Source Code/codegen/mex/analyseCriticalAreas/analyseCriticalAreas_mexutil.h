/*
 * analyseCriticalAreas_mexutil.h
 *
 * Code generation for function 'analyseCriticalAreas_mexutil'
 *
 */

#ifndef ANALYSECRITICALAREAS_MEXUTIL_H
#define ANALYSECRITICALAREAS_MEXUTIL_H

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
#include "analyseCriticalAreas_types.h"

/* Function Declarations */
extern emlrtCTX emlrtGetRootTLSGlobal(void);
extern void emlrtLockerFunction(EmlrtLockeeFunction aLockee, const emlrtConstCTX
  aTLS, void *aData);

#endif

/* End of code generation (analyseCriticalAreas_mexutil.h) */
