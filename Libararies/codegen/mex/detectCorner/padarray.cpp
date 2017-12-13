/*
 * padarray.cpp
 *
 * Code generation for function 'padarray'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCorner.h"
#include "padarray.h"
#include "detectCorner_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "detectCorner_data.h"
#include "blas.h"
#include "libmwordfilt2.h"

/* Variable Definitions */
static emlrtRSInfo ob_emlrtRSI = { 20, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

static emlrtRSInfo pb_emlrtRSI = { 67, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

static emlrtRSInfo qb_emlrtRSI = { 72, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

static emlrtRSInfo rb_emlrtRSI = { 18, "repmat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRSInfo sb_emlrtRSI = { 385, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

static emlrtRSInfo tb_emlrtRSI = { 400, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 1, 14, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

static emlrtRTEInfo w_emlrtRTEI = { 138, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtRTEInfo x_emlrtRTEI = { 378, 9, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

static emlrtRTEInfo y_emlrtRTEI = { 393, 13, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

static emlrtRTEInfo ab_emlrtRTEI = { 44, 19, "assertValidSizeArg",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"
};

static emlrtRTEInfo bb_emlrtRTEI = { 59, 15, "assertValidSizeArg",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"
};

static emlrtDCInfo emlrtDCI = { 233, 35, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  1 };

static emlrtBCInfo emlrtBCI = { -1, -1, 424, 102, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 424, 104, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 424, 19, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 424, 58, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 401, 19, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 401, 21, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 394, 19, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 394, 21, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 387, 19, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 387, 21, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 380, 19, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 380, 21, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

/* Function Definitions */
void padarray(const emlrtStack *sp, const emxArray_real_T *varargin_1, const
              real_T varargin_2[2], emxArray_real_T *b)
{
  boolean_T overflow;
  int32_T k;
  boolean_T exitg3;
  real_T sizeB[2];
  int32_T i0;
  real_T n;
  real_T b_varargin_1[2];
  int32_T exitg2;
  int32_T j;
  int32_T i;
  boolean_T guard1 = false;
  int32_T i1;
  int32_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ob_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  overflow = true;
  k = 0;
  exitg3 = false;
  while ((!exitg3) && (k < 2)) {
    if (muDoubleScalarFloor(varargin_2[k]) == varargin_2[k]) {
      k++;
    } else {
      overflow = false;
      exitg3 = true;
    }
  }

  if (overflow) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&st, &w_emlrtRTEI,
      "MATLAB:padarray:expectedInteger", 55,
      "Expected input number 2, PADSIZE, to be integer-valued.");
  }

  if ((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0)) {
    for (i0 = 0; i0 < 2; i0++) {
      sizeB[i0] = (real_T)varargin_1->size[i0] + 2.0 * varargin_2[i0];
    }

    st.site = &pb_emlrtRSI;
    b_varargin_1[0] = sizeB[0];
    b_varargin_1[1] = sizeB[1];
    b_st.site = &rb_emlrtRSI;
    k = 0;
    do {
      exitg2 = 0;
      if (k < 2) {
        if (b_varargin_1[k] != muDoubleScalarFloor(b_varargin_1[k])) {
          overflow = false;
          exitg2 = 1;
        } else {
          k++;
        }
      } else {
        overflow = true;
        exitg2 = 1;
      }
    } while (exitg2 == 0);

    guard1 = false;
    if (overflow) {
      k = 0;
      do {
        exitg1 = 0;
        if (k < 2) {
          if (2.147483647E+9 < b_varargin_1[k]) {
            overflow = false;
            exitg1 = 1;
          } else {
            k++;
          }
        } else {
          overflow = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);

      if (overflow) {
        overflow = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      overflow = false;
    }

    if (overflow) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &ab_emlrtRTEI,
        "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector", 4, 12,
        MIN_int32_T, 12, MAX_int32_T);
    }

    n = 1.0;
    for (k = 0; k < 2; k++) {
      if (b_varargin_1[k] <= 0.0) {
        n = 0.0;
      } else {
        n *= b_varargin_1[k];
      }
    }

    if (2.147483647E+9 >= n) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &bb_emlrtRTEI,
        "Coder:MATLAB:pmaxsize", 0);
    }

    i0 = b->size[0] * b->size[1];
    b->size[0] = (int32_T)sizeB[0];
    b->size[1] = (int32_T)sizeB[1];
    emxEnsureCapacity(&st, (emxArray__common *)b, i0, (int32_T)sizeof(real_T),
                      &o_emlrtRTEI);
    k = (int32_T)sizeB[0] * (int32_T)sizeB[1];
    for (i0 = 0; i0 < k; i0++) {
      b->data[i0] = 0.0;
    }
  } else {
    st.site = &qb_emlrtRSI;
    for (i0 = 0; i0 < 2; i0++) {
      n = (real_T)varargin_1->size[i0] + 2.0 * varargin_2[i0];
      if (n != (int32_T)muDoubleScalarFloor(n)) {
        emlrtIntegerCheckR2012b(n, (emlrtDCInfo *)&emlrtDCI, &st);
      }

      sizeB[i0] = n;
    }

    i0 = b->size[0] * b->size[1];
    b->size[0] = (int32_T)sizeB[0];
    b->size[1] = (int32_T)sizeB[1];
    emxEnsureCapacity(&st, (emxArray__common *)b, i0, (int32_T)sizeof(real_T),
                      &o_emlrtRTEI);
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, varargin_2[1], mxDOUBLE_CLASS,
      (int32_T)varargin_2[1], (emlrtRTEInfo *)&x_emlrtRTEI, &st);
    for (j = 0; j < (int32_T)varargin_2[1]; j++) {
      i0 = b->size[0];
      for (i = 0; i < i0; i++) {
        i1 = b->size[0];
        if (!((i + 1 >= 1) && (i + 1 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i1, (emlrtBCInfo *)&k_emlrtBCI,
            &st);
        }

        i1 = b->size[1];
        if (!((j + 1 >= 1) && (j + 1 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, i1, (emlrtBCInfo *)&l_emlrtBCI,
            &st);
        }

        b->data[i + b->size[0] * j] = 0.0;
      }
    }

    j = (varargin_1->size[1] + (int32_T)varargin_2[1]) + 1;
    k = b->size[1];
    b_st.site = &sb_emlrtRSI;
    overflow = ((!(j > b->size[1])) && (b->size[1] > 2147483646));
    if (overflow) {
      c_st.site = &s_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    while (j <= k) {
      i0 = b->size[0];
      for (i = 0; i < i0; i++) {
        i1 = b->size[0];
        if (!((i + 1 >= 1) && (i + 1 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i1, (emlrtBCInfo *)&i_emlrtBCI,
            &st);
        }

        i1 = b->size[1];
        if (!((j >= 1) && (j <= i1))) {
          emlrtDynamicBoundsCheckR2012b(j, 1, i1, (emlrtBCInfo *)&j_emlrtBCI,
            &st);
        }

        b->data[i + b->size[0] * (j - 1)] = 0.0;
      }

      j++;
    }

    for (j = 0; j < varargin_1->size[1]; j++) {
      emlrtForLoopVectorCheckR2012b(1.0, 1.0, varargin_2[0], mxDOUBLE_CLASS,
        (int32_T)varargin_2[0], (emlrtRTEInfo *)&y_emlrtRTEI, &st);
      for (i = 0; i < (int32_T)varargin_2[0]; i++) {
        i0 = b->size[0];
        if (!((i + 1 >= 1) && (i + 1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i0, (emlrtBCInfo *)&g_emlrtBCI,
            &st);
        }

        i0 = b->size[1];
        i1 = (j + (int32_T)varargin_2[1]) + 1;
        if (!((i1 >= 1) && (i1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, i0, (emlrtBCInfo *)&h_emlrtBCI,
            &st);
        }

        b->data[i + b->size[0] * (i1 - 1)] = 0.0;
      }
    }

    for (j = 0; j < varargin_1->size[1]; j++) {
      i = ((int32_T)varargin_2[0] + varargin_1->size[0]) + 1;
      k = b->size[0];
      b_st.site = &tb_emlrtRSI;
      overflow = ((!(i > b->size[0])) && (b->size[0] > 2147483646));
      if (overflow) {
        c_st.site = &s_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      while (i <= k) {
        i0 = b->size[0];
        if (!((i >= 1) && (i <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i0, (emlrtBCInfo *)&e_emlrtBCI,
            &st);
        }

        i0 = b->size[1];
        i1 = (j + (int32_T)varargin_2[1]) + 1;
        if (!((i1 >= 1) && (i1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, i0, (emlrtBCInfo *)&f_emlrtBCI,
            &st);
        }

        b->data[(i + b->size[0] * (i1 - 1)) - 1] = 0.0;
        i++;
      }
    }

    for (j = 1; j - 1 < varargin_1->size[1]; j++) {
      for (i = 1; i - 1 < varargin_1->size[0]; i++) {
        i0 = varargin_1->size[0];
        if (!((i >= 1) && (i <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i0, (emlrtBCInfo *)&emlrtBCI, &st);
        }

        i0 = varargin_1->size[1];
        if (!((j >= 1) && (j <= i0))) {
          emlrtDynamicBoundsCheckR2012b(j, 1, i0, (emlrtBCInfo *)&b_emlrtBCI,
            &st);
        }

        i0 = b->size[0];
        i1 = i + (int32_T)varargin_2[0];
        if (!((i1 >= 1) && (i1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, i0, (emlrtBCInfo *)&c_emlrtBCI,
            &st);
        }

        i0 = b->size[1];
        k = j + (int32_T)varargin_2[1];
        if (!((k >= 1) && (k <= i0))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i0, (emlrtBCInfo *)&d_emlrtBCI,
            &st);
        }

        b->data[(i1 + b->size[0] * (k - 1)) - 1] = varargin_1->data[(i +
          varargin_1->size[0] * (j - 1)) - 1];
      }
    }
  }
}

/* End of code generation (padarray.cpp) */
