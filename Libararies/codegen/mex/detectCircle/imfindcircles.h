/*
 * imfindcircles.h
 *
 * Code generation for function 'imfindcircles'
 *
 */

#ifndef IMFINDCIRCLES_H
#define IMFINDCIRCLES_H

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
extern void imfindcircles(const emlrtStack *sp, const emxArray_real_T
  *varargin_1, const real_T varargin_2[2], emxArray_real_T *centers,
  emxArray_real_T *r_estimated, emxArray_real_T *metric);

#endif

/* End of code generation (imfindcircles.h) */
