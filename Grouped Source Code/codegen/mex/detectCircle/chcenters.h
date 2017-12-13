/*
 * chcenters.h
 *
 * Code generation for function 'chcenters'
 *
 */

#ifndef CHCENTERS_H
#define CHCENTERS_H

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
extern void chcenters(const emlrtStack *sp, const emxArray_creal_T *varargin_1,
                      emxArray_real_T *centers, emxArray_real_T *metric);

#endif

/* End of code generation (chcenters.h) */
