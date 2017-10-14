/*
 * validateattributes.c
 *
 * Code generation for function 'validateattributes'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "validateattributes.h"
#include "detectCircle_data.h"
#include "libmwgetnumcores.h"
#include "libmwgrayto8.h"
#include "libmwimfilter.h"
#include "libmwimregionalmax.h"
#include "libmwippfilter.h"
#include "libmwippreconstruct.h"
#include "libmwordfilt2.h"
#include "libmwtbbhist.h"

/* Function Definitions */
boolean_T all(const real_T a[2])
{
  boolean_T p;
  int32_T k;
  boolean_T exitg1;
  boolean_T b_p;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if ((!muDoubleScalarIsInf(a[k])) && (!muDoubleScalarIsNaN(a[k])) &&
        (muDoubleScalarFloor(a[k]) == a[k])) {
      b_p = true;
    } else {
      b_p = false;
    }

    if (b_p) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  return p;
}

boolean_T b_all(const real_T a_data[], const int32_T a_size[2])
{
  boolean_T p;
  int32_T k;
  boolean_T exitg1;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= a_size[1] - 1)) {
    if ((!muDoubleScalarIsInf(a_data[k])) && (!muDoubleScalarIsNaN(a_data[k])))
    {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  return p;
}

void b_validateattributes(const emlrtStack *sp, const emxArray_real_T *a)
{
  boolean_T p;
  int32_T i22;
  int32_T k;
  boolean_T exitg1;
  p = true;
  i22 = a->size[0] * a->size[1];
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= i22 - 1)) {
    if (!muDoubleScalarIsNaN(a->data[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (p) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(sp, &ed_emlrtRTEI,
      "MATLAB:imreconstruct:expectedNonNaN", 29, "Expected input to be non-NaN.");
  }
}

boolean_T c_all(const real_T a_data[], const int32_T a_size[2])
{
  boolean_T p;
  int32_T k;
  boolean_T exitg1;
  boolean_T b_p;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= a_size[1] - 1)) {
    if ((!muDoubleScalarIsInf(a_data[k])) && (!muDoubleScalarIsNaN(a_data[k])) &&
        (muDoubleScalarFloor(a_data[k]) == a_data[k])) {
      b_p = true;
    } else {
      b_p = false;
    }

    if (b_p) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  return p;
}

void validateattributes(const emlrtStack *sp, const real_T a[2])
{
  boolean_T p;
  int32_T k;
  boolean_T exitg1;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!muDoubleScalarIsNaN(a[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (p) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(sp, &ed_emlrtRTEI,
      "MATLAB:padarray:expectedNonNaN", 48,
      "Expected input number 2, PADSIZE, to be non-NaN.");
  }

  if (all(a)) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(sp, &fd_emlrtRTEI,
      "MATLAB:padarray:expectedInteger", 55,
      "Expected input number 2, PADSIZE, to be integer-valued.");
  }
}

/* End of code generation (validateattributes.c) */
