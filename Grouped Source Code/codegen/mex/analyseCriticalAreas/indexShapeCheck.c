/*
 * indexShapeCheck.c
 *
 * Code generation for function 'indexShapeCheck'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "analyseCriticalAreas.h"
#include "indexShapeCheck.h"
#include "blas.h"
#include "libmwordfilt2.h"

/* Variable Definitions */
static emlrtRSInfo kb_emlrtRSI = { 18, "indexShapeCheck",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"
};

static emlrtRTEInfo x_emlrtRTEI = { 88, 9, "indexShapeCheck",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"
};

/* Function Definitions */
void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, const int32_T
                     indexSize[2])
{
  boolean_T guard1 = false;
  boolean_T nonSingletonDimFound;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  guard1 = false;
  if (!(matrixSize != 1)) {
    nonSingletonDimFound = false;
    if (indexSize[1] != 1) {
      nonSingletonDimFound = true;
    }

    if (nonSingletonDimFound) {
      nonSingletonDimFound = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    nonSingletonDimFound = false;
  }

  st.site = &kb_emlrtRSI;
  if (!nonSingletonDimFound) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &x_emlrtRTEI,
      "Coder:FE:PotentialVectorVector", 0);
  }
}

/* End of code generation (indexShapeCheck.c) */
