/*
 * shapeAnalyser.h
 *
 * Code generation for function 'shapeAnalyser'
 *
 */

#ifndef SHAPEANALYSER_H
#define SHAPEANALYSER_H

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
#include "shapeAnalyser_types.h"

/* Function Declarations */
extern void shapeAnalyser(const emlrtStack *sp, const emxArray_real_T
  *edgedRegion, real_T availableShapes[3]);

#endif

/* End of code generation (shapeAnalyser.h) */
