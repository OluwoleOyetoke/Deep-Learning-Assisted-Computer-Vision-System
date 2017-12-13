/*
 * validateattributes.h
 *
 * Code generation for function 'validateattributes'
 *
 */

#ifndef VALIDATEATTRIBUTES_H
#define VALIDATEATTRIBUTES_H

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
extern boolean_T all(const real_T a[2]);
extern boolean_T b_all(const real_T a_data[], const int32_T a_size[2]);
extern void b_validateattributes(const emlrtStack *sp, const emxArray_real_T *a);
extern boolean_T c_all(const real_T a_data[], const int32_T a_size[2]);
extern void validateattributes(const emlrtStack *sp, const real_T a[2]);

#endif

/* End of code generation (validateattributes.h) */
