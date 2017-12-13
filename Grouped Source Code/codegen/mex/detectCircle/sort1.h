/*
 * sort1.h
 *
 * Code generation for function 'sort1'
 *
 */

#ifndef SORT1_H
#define SORT1_H

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
extern void b_sort(const emlrtStack *sp, emxArray_real_T *x, emxArray_int32_T
                   *idx);
extern void sort(const emlrtStack *sp, emxArray_real_T *x);

#endif

/* End of code generation (sort1.h) */
