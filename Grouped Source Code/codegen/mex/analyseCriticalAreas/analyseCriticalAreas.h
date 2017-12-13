/*
 * analyseCriticalAreas.h
 *
 * Code generation for function 'analyseCriticalAreas'
 *
 */

#ifndef ANALYSECRITICALAREAS_H
#define ANALYSECRITICALAREAS_H

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
extern void analyseCriticalAreas(const emlrtStack *sp, const emxArray_real_T
  *img, const emxArray_real_T *edgeXs, const emxArray_real_T *edgeYs, real_T
  chances[3], real_T shrinks[4]);

#endif

/* End of code generation (analyseCriticalAreas.h) */
