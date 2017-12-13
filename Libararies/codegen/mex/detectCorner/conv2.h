/*
 * conv2.h
 *
 * Code generation for function 'conv2'
 *
 */

#ifndef CONV2_H
#define CONV2_H

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
#include "detectCorner_types.h"

/* Function Declarations */
extern void b_conv2(const emlrtStack *sp, const emxArray_real_T *arg1,
                    emxArray_real_T *c);
extern void conv2(const emlrtStack *sp, const emxArray_real_T *arg1,
                  emxArray_real_T *c);

#endif

/* End of code generation (conv2.h) */
