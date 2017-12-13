/*
 * detectEdge.h
 *
 * Code generation for function 'detectEdge'
 *
 */

#ifndef DETECTEDGE_H
#define DETECTEDGE_H

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
#include "detectEdge_types.h"

/* Function Declarations */
extern void detectEdge(const emlrtStack *sp, const emxArray_real_T *graySImg,
  emxArray_real_T *edgedRegion);

#endif

/* End of code generation (detectEdge.h) */
