/*
 * repmat.h
 *
 * Code generation for function 'repmat'
 *
 */

#ifndef REPMAT_H
#define REPMAT_H

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
extern void repmat(const emlrtStack *sp, const real_T varargin_1[2],
                   emxArray_real_T *b);

#endif

/* End of code generation (repmat.h) */
