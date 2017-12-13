/*
 * bwconncomp.h
 *
 * Code generation for function 'bwconncomp'
 *
 */

#ifndef BWCONNCOMP_H
#define BWCONNCOMP_H

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
extern void bwconncomp(const emlrtStack *sp, const emxArray_boolean_T
  *varargin_1, real_T *CC_Connectivity, real_T CC_ImageSize[2], real_T
  *CC_NumObjects, emxArray_real_T *CC_RegionIndices, emxArray_int32_T
  *CC_RegionLengths);

#endif

/* End of code generation (bwconncomp.h) */
