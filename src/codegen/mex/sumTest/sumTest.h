/*
 * sumTest.h
 *
 * Code generation for function 'sumTest'
 *
 */

#ifndef SUMTEST_H
#define SUMTEST_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "covrt.h"
#include "rtwtypes.h"
#include "sumTest_types.h"

/* Function Declarations */
extern void sumTest(const emlrtStack *sp, real_T xDim, real_T yDim, real_T zDim,
                    real_T stepSize, real_T beacon, real_T windowSize, const
                    emxArray_real_T *regionShed, emxArray_real_T *regionSumArray);

#endif

/* End of code generation (sumTest.h) */
