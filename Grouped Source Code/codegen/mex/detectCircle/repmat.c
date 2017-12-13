/*
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "repmat.h"
#include "detectCircle_emxutil.h"
#include "detectCircle_data.h"
#include "libmwgetnumcores.h"
#include "libmwgrayto8.h"
#include "libmwimfilter.h"
#include "libmwimregionalmax.h"
#include "libmwippfilter.h"
#include "libmwippreconstruct.h"
#include "libmwordfilt2.h"
#include "libmwtbbhist.h"

/* Variable Definitions */
static emlrtRTEInfo gb_emlrtRTEI = { 1, 14, "repmat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRTEInfo ud_emlrtRTEI = { 44, 19, "assertValidSizeArg",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"
};

/* Function Definitions */
void repmat(const emlrtStack *sp, const real_T varargin_1[2], emxArray_real_T *b)
{
  int32_T k;
  int32_T exitg2;
  boolean_T p;
  boolean_T guard1 = false;
  int32_T exitg1;
  real_T n;
  int32_T loop_ub;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ob_emlrtRSI;
  k = 0;
  do {
    exitg2 = 0;
    if (k < 2) {
      if ((varargin_1[k] != varargin_1[k]) || muDoubleScalarIsInf(varargin_1[k]))
      {
        p = false;
        exitg2 = 1;
      } else {
        k++;
      }
    } else {
      p = true;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  guard1 = false;
  if (p) {
    k = 0;
    do {
      exitg1 = 0;
      if (k < 2) {
        if (2.147483647E+9 < varargin_1[k]) {
          p = false;
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        p = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    if (p) {
      p = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    p = false;
  }

  if (p) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &ud_emlrtRTEI,
      "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector", 4, 12,
      MIN_int32_T, 12, MAX_int32_T);
  }

  n = 1.0;
  for (k = 0; k < 2; k++) {
    if (varargin_1[k] <= 0.0) {
      n = 0.0;
    } else {
      n *= varargin_1[k];
    }
  }

  if (2.147483647E+9 >= n) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &vd_emlrtRTEI, "Coder:MATLAB:pmaxsize", 0);
  }

  k = b->size[0] * b->size[1];
  b->size[0] = (int32_T)varargin_1[0];
  b->size[1] = (int32_T)varargin_1[1];
  emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = (int32_T)varargin_1[0] * (int32_T)varargin_1[1];
  for (k = 0; k < loop_ub; k++) {
    b->data[k] = 0.0;
  }
}

/* End of code generation (repmat.c) */
