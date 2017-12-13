/*
 * detectCorner.h
 *
 * Code generation for function 'detectCorner'
 *
 */

#ifndef DETECTCORNER_H
#define DETECTCORNER_H

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
extern void detectCorner(const emlrtStack *sp, const emxArray_real_T *img,
  emxArray_real_T *r, emxArray_real_T *c);

#endif

/* End of code generation (detectCorner.h) */
