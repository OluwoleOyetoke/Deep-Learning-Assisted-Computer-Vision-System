/*
 * padarray.h
 *
 * Code generation for function 'padarray'
 *
 */

#ifndef PADARRAY_H
#define PADARRAY_H

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
extern void padarray(const emlrtStack *sp, const emxArray_real_T *varargin_1,
                     const real_T varargin_2[2], emxArray_real_T *b);

#endif

/* End of code generation (padarray.h) */
