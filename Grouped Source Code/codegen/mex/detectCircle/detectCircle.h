/*
 * detectCircle.h
 *
 * Code generation for function 'detectCircle'
 *
 */

#ifndef DETECTCIRCLE_H
#define DETECTCIRCLE_H

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
extern void detectCircle(const emlrtStack *sp, const emxArray_real_T *img,
  real_T *circleAvailable, real_T *strength);

#endif

/* End of code generation (detectCircle.h) */
