/*
 * chradiiphcode.h
 *
 * Code generation for function 'chradiiphcode'
 *
 */

#ifndef CHRADIIPHCODE_H
#define CHRADIIPHCODE_H

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
extern void chradiiphcode(const emlrtStack *sp, const emxArray_real_T
  *varargin_1, const emxArray_creal_T *varargin_2, const real_T varargin_3_data[],
  const int32_T varargin_3_size[2], emxArray_real_T *r_estimated);

#endif

/* End of code generation (chradiiphcode.h) */
