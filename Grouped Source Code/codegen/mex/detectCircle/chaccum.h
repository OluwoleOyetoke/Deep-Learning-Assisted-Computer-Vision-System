/*
 * chaccum.h
 *
 * Code generation for function 'chaccum'
 *
 */

#ifndef CHACCUM_H
#define CHACCUM_H

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
extern void chaccum(const emlrtStack *sp, const emxArray_real_T *varargin_1,
                    const real_T varargin_2_data[], const int32_T
                    varargin_2_size[2], emxArray_creal_T *accumMatrix,
                    emxArray_real_T *gradientImg);

#endif

/* End of code generation (chaccum.h) */
