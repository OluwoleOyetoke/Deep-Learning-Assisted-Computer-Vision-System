/*
 * multithresh.h
 *
 * Code generation for function 'multithresh'
 *
 */

#ifndef MULTITHRESH_H
#define MULTITHRESH_H

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
extern void b_getDegenerateThresholds(const emlrtStack *sp, const
  emxArray_real_T *uniqueVals, emxArray_real_T *thresh);
extern void checkForDegenerateInput(const emlrtStack *sp, const emxArray_real_T *
  A, boolean_T *isDegenerate, emxArray_real_T *uniqueVals);
extern void getDegenerateThresholds(const emlrtStack *sp, const emxArray_real_T *
  uniqueVals, emxArray_real_T *thresh);
extern void getpdf(const emlrtStack *sp, emxArray_real_T *A, real_T p[256],
                   real_T *minA, real_T *maxA, boolean_T *emptyp);
extern void map2OriginalScale(const emlrtStack *sp, const emxArray_real_T
  *thresh, real_T minA, real_T maxA, emxArray_real_T *sclThresh);

#endif

/* End of code generation (multithresh.h) */
