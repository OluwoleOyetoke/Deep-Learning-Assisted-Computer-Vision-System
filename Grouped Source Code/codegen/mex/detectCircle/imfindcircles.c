/*
 * imfindcircles.c
 *
 * Code generation for function 'imfindcircles'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "imfindcircles.h"
#include "detectCircle_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "assertValidSizeArg.h"
#include "chradiiphcode.h"
#include "indexShapeCheck.h"
#include "chcenters.h"
#include "chaccum.h"
#include "warning.h"
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

/* Variable Definitions */
static emlrtRSInfo c_emlrtRSI = { 6, "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m"
};

static emlrtRSInfo d_emlrtRSI = { 16, "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m"
};

static emlrtRSInfo e_emlrtRSI = { 24, "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m"
};

static emlrtRSInfo f_emlrtRSI = { 28, "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m"
};

static emlrtRSInfo g_emlrtRSI = { 32, "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m"
};

static emlrtRSInfo h_emlrtRSI = { 38, "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m"
};

static emlrtRSInfo i_emlrtRSI = { 46, "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m"
};

static emlrtRSInfo j_emlrtRSI = { 60, "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m"
};

static emlrtRSInfo k_emlrtRSI = { 64, "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m"
};

static emlrtRSInfo l_emlrtRSI = { 84, "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m"
};

static emlrtRSInfo m_emlrtRSI = { 97, "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m"
};

static emlrtRSInfo oj_emlrtRSI = { 44, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo pj_emlrtRSI = { 253, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo qj_emlrtRSI = { 234, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo rj_emlrtRSI = { 117, "repmat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRSInfo sj_emlrtRSI = { 114, "repmat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtMCInfo emlrtMCI = { 18, 13, "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m"
};

static emlrtMCInfo d_emlrtMCI = { 37, 5, "repmat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 1, 43, "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 253, 13, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 46, 1, "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 36, 6, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo yc_emlrtRTEI = { 243, 9, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo hd_emlrtRTEI = { 103, 1, "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m"
};

static emlrtRTEInfo id_emlrtRTEI = { 87, 1, "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m"
};

static emlrtBCInfo k_emlrtBCI = { -1, -1, 47, 19, "", "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 48, 17, "", "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m",
  0 };

static emlrtRSInfo ik_emlrtRSI = { 37, "repmat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRSInfo lk_emlrtRSI = { 18, "imfindcircles",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfindcircles.m"
};

/* Function Declarations */
static void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);

/* Function Definitions */
static void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m9;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m9, 1, &pArray, "sprintf", true, location);
}

void imfindcircles(const emlrtStack *sp, const emxArray_real_T *varargin_1,
                   const real_T varargin_2[2], emxArray_real_T *centers,
                   emxArray_real_T *r_estimated, emxArray_real_T *metric)
{
  boolean_T overflow;
  int32_T k;
  boolean_T exitg6;
  boolean_T exitg5;
  boolean_T exitg4;
  int32_T radiusRange_size[2];
  real_T radiusRange_data[2];
  int32_T i1;
  const mxArray *m0 = NULL;
  char_T u[119];
  static const char_T cv0[119] = { '\\', 't', '[', 'C', 'E', 'N', 'T', 'E', 'R',
    'S', '1', ',', ' ', 'R', 'A', 'D', 'I', 'I', '1', ',', ' ', 'M', 'E', 'T',
    'R', 'I', 'C', '1', ']', ' ', '=', ' ', 'I', 'M', 'F', 'I', 'N', 'D', 'C',
    'I', 'R', 'C', 'L', 'E', 'S', '(', 'A', ',', ' ', '[', '2', '0', ' ', '6',
    '0', ']', ')', ';', '\\', 'n', '\\', 't', '[', 'C', 'E', 'N', 'T', 'E', 'R',
    'S', '2', ',', ' ', 'R', 'A', 'D', 'I', 'I', '2', ',', ' ', 'M', 'E', 'T',
    'R', 'I', 'C', '2', ']', ' ', '=', ' ', 'I', 'M', 'F', 'I', 'N', 'D', 'C',
    'I', 'R', 'C', 'L', 'E', 'S', '(', 'A', ',', ' ', '[', '6', '1', ' ', '1',
    '0', '0', ']', ')', ';' };

  const mxArray *y;
  emxArray_creal_T *accumMatrix;
  const mxArray *m1;
  static const int32_T iv0[2] = { 1, 119 };

  emxArray_real_T *gradientImg;
  boolean_T p;
  int32_T exitg3;
  int32_T nx;
  boolean_T guard1 = false;
  boolean_T b_y;
  int32_T exitg2;
  emxArray_real_T *b_centers;
  emxArray_real_T *b_metric;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  int32_T idx;
  boolean_T exitg1;
  boolean_T b_guard1 = false;
  int32_T iv1[2];
  emxArray_real_T *idx2Keep;
  int32_T loop_ub;
  int32_T i2;
  const mxArray *c_y;
  char_T b_u[15];
  static const char_T cv1[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  static const int32_T iv2[2] = { 1, 15 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &c_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  if (!((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0))) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&b_st, &gd_emlrtRTEI,
      "MATLAB:imfindcircles:expectedNonempty", 43,
      "Expected input number 1, A, to be nonempty.");
  }

  overflow = ((varargin_1->size[0] == 1) || (varargin_1->size[1] == 1));
  if (!overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &id_emlrtRTEI,
      "images:imfindcircles:invalidInputImage", 0);
  }

  b_st.site = &m_emlrtRSI;
  if (all(varargin_2)) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&b_st, &fd_emlrtRTEI,
      "MATLAB:imfindcircles:expectedInteger", 60,
      "Expected input number 2, RADIUS_RANGE, to be integer-valued.");
  }

  overflow = true;
  k = 0;
  exitg6 = false;
  while ((!exitg6) && (k < 2)) {
    if (!muDoubleScalarIsNaN(varargin_2[k])) {
      k++;
    } else {
      overflow = false;
      exitg6 = true;
    }
  }

  if (overflow) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&b_st, &ed_emlrtRTEI,
      "MATLAB:imfindcircles:expectedNonNaN", 53,
      "Expected input number 2, RADIUS_RANGE, to be non-NaN.");
  }

  overflow = true;
  k = 0;
  exitg5 = false;
  while ((!exitg5) && (k < 2)) {
    if (!(varargin_2[k] <= 0.0)) {
      k++;
    } else {
      overflow = false;
      exitg5 = true;
    }
  }

  if (overflow) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&b_st, &dd_emlrtRTEI,
      "MATLAB:imfindcircles:expectedPositive", 54,
      "Expected input number 2, RADIUS_RANGE, to be positive.");
  }

  overflow = true;
  k = 0;
  exitg4 = false;
  while ((!exitg4) && (k < 2)) {
    if ((!muDoubleScalarIsInf(varargin_2[k])) && (!muDoubleScalarIsNaN
         (varargin_2[k]))) {
      k++;
    } else {
      overflow = false;
      exitg4 = true;
    }
  }

  if (overflow) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&b_st, &cd_emlrtRTEI,
      "MATLAB:imfindcircles:expectedFinite", 52,
      "Expected input number 2, RADIUS_RANGE, to be finite.");
  }

  if (!(varargin_2[0] > varargin_2[1])) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &hd_emlrtRTEI,
      "images:imfindcircles:invalidRadiusRange", 0);
  }

  if (varargin_2[0] == varargin_2[1]) {
    radiusRange_size[0] = 1;
    radiusRange_size[1] = 1;
    radiusRange_data[0] = varargin_2[0];
  } else {
    radiusRange_size[0] = 1;
    radiusRange_size[1] = 2;
    for (i1 = 0; i1 < 2; i1++) {
      radiusRange_data[i1] = varargin_2[i1];
    }
  }

  i1 = centers->size[0] * centers->size[1];
  centers->size[0] = 0;
  centers->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)centers, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  i1 = r_estimated->size[0] * r_estimated->size[1];
  r_estimated->size[0] = 0;
  r_estimated->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)r_estimated, i1, (int32_T)sizeof
                    (real_T), &f_emlrtRTEI);
  i1 = metric->size[0] * metric->size[1];
  metric->size[0] = 0;
  metric->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)metric, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  if ((radiusRange_size[1] == 2) && ((radiusRange_data[1] > 3.0 *
        radiusRange_data[0]) || (radiusRange_data[1] - radiusRange_data[0] >
        100.0))) {
    memcpy(&u[0], &cv0[0], 119U * sizeof(char_T));
    y = NULL;
    m1 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(sp, 119, m1, &u[0]);
    emlrtAssign(&y, m1);
    st.site = &lk_emlrtRSI;
    emlrtAssign(&m0, b_sprintf(&st, y, &emlrtMCI));
    st.site = &d_emlrtRSI;
    warning(&st, emlrtAlias(m0));
  }

  if (radiusRange_data[0] <= 5.0) {
    st.site = &e_emlrtRSI;
    b_warning(&st);
  }

  emxInit_creal_T(sp, &accumMatrix, 2, &f_emlrtRTEI, true);
  emxInit_real_T(sp, &gradientImg, 2, &f_emlrtRTEI, true);
  st.site = &f_emlrtRSI;
  chaccum(&st, varargin_1, radiusRange_data, radiusRange_size, accumMatrix,
          gradientImg);
  st.site = &g_emlrtRSI;
  b_st.site = &hd_emlrtRSI;
  overflow = false;
  p = false;
  k = 0;
  emxFree_real_T(&gradientImg);
  do {
    exitg3 = 0;
    if (k < 2) {
      if (k + 1 <= 1) {
        nx = accumMatrix->size[0] * accumMatrix->size[1];
      } else {
        nx = 1;
      }

      if (nx != 0) {
        exitg3 = 1;
      } else {
        k++;
      }
    } else {
      p = true;
      exitg3 = 1;
    }
  } while (exitg3 == 0);

  if (!p) {
  } else {
    overflow = true;
  }

  if (!overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &bd_emlrtRTEI,
      "Coder:toolbox:eml_all_or_any_specialEmpty", 0);
  }

  nx = accumMatrix->size[0] * accumMatrix->size[1];
  guard1 = false;
  if (nx == 1) {
    guard1 = true;
  } else {
    nx = accumMatrix->size[0] * accumMatrix->size[1];
    if (nx != 1) {
      guard1 = true;
    } else {
      overflow = false;
    }
  }

  if (guard1) {
    overflow = true;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &ad_emlrtRTEI,
      "Coder:toolbox:eml_all_or_any_autoDimIncompatibility", 0);
  }

  b_y = false;
  c_st.site = &db_emlrtRSI;
  nx = accumMatrix->size[0] * accumMatrix->size[1];
  if (1 > nx) {
    overflow = false;
  } else {
    nx = accumMatrix->size[0] * accumMatrix->size[1];
    overflow = (nx > 2147483646);
  }

  if (overflow) {
    d_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  k = 0;
  do {
    exitg2 = 0;
    nx = accumMatrix->size[0] * accumMatrix->size[1];
    if (k + 1 <= nx) {
      p = ((accumMatrix->data[k].re == 0.0) && (accumMatrix->data[k].im == 0.0));
      if (p || (muDoubleScalarIsNaN(accumMatrix->data[k].re) ||
                muDoubleScalarIsNaN(accumMatrix->data[k].im))) {
        overflow = true;
      } else {
        overflow = false;
      }

      if (!overflow) {
        b_y = true;
        exitg2 = 1;
      } else {
        k++;
      }
    } else {
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  if (!b_y) {
  } else {
    emxInit_real_T(sp, &b_centers, 2, &f_emlrtRTEI, true);
    emxInit_real_T(sp, &b_metric, 2, &f_emlrtRTEI, true);
    st.site = &h_emlrtRSI;
    chcenters(&st, accumMatrix, b_centers, b_metric);
    i1 = centers->size[0] * centers->size[1];
    centers->size[0] = b_centers->size[0];
    centers->size[1] = b_centers->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)centers, i1, (int32_T)sizeof
                      (real_T), &f_emlrtRTEI);
    nx = b_centers->size[0] * b_centers->size[1];
    for (i1 = 0; i1 < nx; i1++) {
      centers->data[i1] = b_centers->data[i1];
    }

    i1 = metric->size[0] * metric->size[1];
    metric->size[0] = b_metric->size[0];
    metric->size[1] = b_metric->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)metric, i1, (int32_T)sizeof(real_T),
                      &f_emlrtRTEI);
    nx = b_metric->size[0] * b_metric->size[1];
    for (i1 = 0; i1 < nx; i1++) {
      metric->data[i1] = b_metric->data[i1];
    }

    if ((b_centers->size[0] == 0) || (b_centers->size[1] == 0)) {
    } else {
      emxInit_boolean_T(sp, &x, 2, &f_emlrtRTEI, true);
      st.site = &i_emlrtRSI;
      i1 = x->size[0] * x->size[1];
      x->size[0] = b_metric->size[0];
      x->size[1] = b_metric->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)x, i1, (int32_T)sizeof
                        (boolean_T), &f_emlrtRTEI);
      nx = b_metric->size[0] * b_metric->size[1];
      for (i1 = 0; i1 < nx; i1++) {
        x->data[i1] = (b_metric->data[i1] >= 0.15000000000000002);
      }

      emxInit_int32_T(&st, &ii, 1, &i_emlrtRTEI, true);
      b_st.site = &oj_emlrtRSI;
      nx = x->size[0] * x->size[1];
      idx = 0;
      i1 = ii->size[0];
      ii->size[0] = nx;
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i1, (int32_T)sizeof
                        (int32_T), &f_emlrtRTEI);
      c_st.site = &qj_emlrtRSI;
      if ((!(1 > nx)) && (nx > 2147483646)) {
        d_st.site = &eb_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      k = 1;
      exitg1 = false;
      while ((!exitg1) && (k <= nx)) {
        b_guard1 = false;
        if (x->data[k - 1]) {
          idx++;
          ii->data[idx - 1] = k;
          if (idx >= nx) {
            exitg1 = true;
          } else {
            b_guard1 = true;
          }
        } else {
          b_guard1 = true;
        }

        if (b_guard1) {
          k++;
        }
      }

      emxFree_boolean_T(&x);
      if (idx <= nx) {
      } else {
        emlrtErrorWithMessageIdR2012b(&b_st, &yc_emlrtRTEI,
          "Coder:builtins:AssertionFailed", 0);
      }

      if (nx == 1) {
        if (idx == 0) {
          i1 = ii->size[0];
          ii->size[0] = 0;
          emxEnsureCapacity(&b_st, (emxArray__common *)ii, i1, (int32_T)sizeof
                            (int32_T), &f_emlrtRTEI);
        }
      } else {
        if (1 > idx) {
          i1 = 0;
        } else {
          i1 = idx;
        }

        iv1[0] = 1;
        iv1[1] = i1;
        c_st.site = &pj_emlrtRSI;
        indexShapeCheck(&c_st, ii->size[0], iv1);
        idx = ii->size[0];
        ii->size[0] = i1;
        emxEnsureCapacity(&b_st, (emxArray__common *)ii, idx, (int32_T)sizeof
                          (int32_T), &g_emlrtRTEI);
      }

      emxInit_real_T1(&b_st, &idx2Keep, 1, &h_emlrtRTEI, true);
      i1 = idx2Keep->size[0];
      idx2Keep->size[0] = ii->size[0];
      emxEnsureCapacity(&st, (emxArray__common *)idx2Keep, i1, (int32_T)sizeof
                        (real_T), &f_emlrtRTEI);
      nx = ii->size[0];
      for (i1 = 0; i1 < nx; i1++) {
        idx2Keep->data[i1] = ii->data[i1];
      }

      emxFree_int32_T(&ii);
      k = b_centers->size[0];
      nx = b_centers->size[1];
      i1 = centers->size[0] * centers->size[1];
      centers->size[0] = idx2Keep->size[0];
      centers->size[1] = nx;
      emxEnsureCapacity(sp, (emxArray__common *)centers, i1, (int32_T)sizeof
                        (real_T), &f_emlrtRTEI);
      for (i1 = 0; i1 < nx; i1++) {
        loop_ub = idx2Keep->size[0];
        for (idx = 0; idx < loop_ub; idx++) {
          i2 = (int32_T)idx2Keep->data[idx];
          if (!((i2 >= 1) && (i2 <= k))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, k, &k_emlrtBCI, sp);
          }

          centers->data[idx + centers->size[0] * i1] = b_centers->data[(i2 +
            b_centers->size[0] * i1) - 1];
        }
      }

      k = b_metric->size[0];
      nx = b_metric->size[1];
      i1 = metric->size[0] * metric->size[1];
      metric->size[0] = idx2Keep->size[0];
      metric->size[1] = nx;
      emxEnsureCapacity(sp, (emxArray__common *)metric, i1, (int32_T)sizeof
                        (real_T), &f_emlrtRTEI);
      for (i1 = 0; i1 < nx; i1++) {
        loop_ub = idx2Keep->size[0];
        for (idx = 0; idx < loop_ub; idx++) {
          i2 = (int32_T)idx2Keep->data[idx];
          if (!((i2 >= 1) && (i2 <= k))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, k, &l_emlrtBCI, sp);
          }

          metric->data[idx + metric->size[0] * i1] = b_metric->data[(i2 +
            b_metric->size[0] * i1) - 1];
        }
      }

      if (idx2Keep->size[0] == 0) {
        i1 = centers->size[0] * centers->size[1];
        centers->size[0] = 0;
        centers->size[1] = 0;
        emxEnsureCapacity(sp, (emxArray__common *)centers, i1, (int32_T)sizeof
                          (real_T), &f_emlrtRTEI);
        i1 = metric->size[0] * metric->size[1];
        metric->size[0] = 0;
        metric->size[1] = 0;
        emxEnsureCapacity(sp, (emxArray__common *)metric, i1, (int32_T)sizeof
                          (real_T), &f_emlrtRTEI);
      } else if (radiusRange_size[1] == 1) {
        st.site = &j_emlrtRSI;
        b_st.site = &ob_emlrtRSI;
        assertValidSizeArg(&b_st, idx2Keep->size[0]);
        nx = idx2Keep->size[0];
        k = idx2Keep->size[0];
        if (nx == k) {
        } else {
          for (i1 = 0; i1 < 15; i1++) {
            b_u[i1] = cv1[i1];
          }

          c_y = NULL;
          m1 = emlrtCreateCharArray(2, iv2);
          emlrtInitCharArrayR2013a(&st, 15, m1, &b_u[0]);
          emlrtAssign(&c_y, m1);
          b_st.site = &ik_emlrtRSI;
          b_error(&b_st, c_y, &d_emlrtMCI);
        }

        i1 = r_estimated->size[0] * r_estimated->size[1];
        r_estimated->size[0] = nx;
        r_estimated->size[1] = 1;
        emxEnsureCapacity(&st, (emxArray__common *)r_estimated, i1, (int32_T)
                          sizeof(real_T), &f_emlrtRTEI);
        if (!(nx == 0)) {
          nx = idx2Keep->size[0];
          b_st.site = &sj_emlrtRSI;
          b_st.site = &rj_emlrtRSI;
          if ((!(1 > nx)) && (nx > 2147483646)) {
            c_st.site = &eb_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }

          for (k = 1; k <= nx; k++) {
            r_estimated->data[k - 1] = radiusRange_data[0];
          }
        }
      } else {
        st.site = &k_emlrtRSI;
        chradiiphcode(&st, centers, accumMatrix, radiusRange_data,
                      radiusRange_size, idx2Keep);
        i1 = r_estimated->size[0] * r_estimated->size[1];
        r_estimated->size[0] = idx2Keep->size[0];
        r_estimated->size[1] = 1;
        emxEnsureCapacity(sp, (emxArray__common *)r_estimated, i1, (int32_T)
                          sizeof(real_T), &f_emlrtRTEI);
        nx = idx2Keep->size[0];
        for (i1 = 0; i1 < nx; i1++) {
          r_estimated->data[i1] = idx2Keep->data[i1];
        }
      }

      emxFree_real_T(&idx2Keep);
    }

    emxFree_real_T(&b_metric);
    emxFree_real_T(&b_centers);
  }

  emxFree_creal_T(&accumMatrix);
  emlrtDestroyArray(&m0);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (imfindcircles.c) */
