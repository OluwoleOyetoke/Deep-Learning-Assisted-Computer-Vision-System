/*
 * chradiiphcode.c
 *
 * Code generation for function 'chradiiphcode'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "chradiiphcode.h"
#include "detectCircle_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "log.h"
#include "indexShapeCheck.h"
#include "sub2ind.h"
#include "round.h"
#include "all.h"
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
static emlrtRSInfo tj_emlrtRSI = { 6, "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"
};

static emlrtRSInfo uj_emlrtRSI = { 14, "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"
};

static emlrtRSInfo vj_emlrtRSI = { 15, "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"
};

static emlrtRSInfo wj_emlrtRSI = { 16, "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"
};

static emlrtRSInfo xj_emlrtRSI = { 32, "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"
};

static emlrtRSInfo yj_emlrtRSI = { 33, "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"
};

static emlrtRSInfo ak_emlrtRSI = { 34, "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"
};

static emlrtRSInfo bk_emlrtRSI = { 35, "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"
};

static emlrtRSInfo ck_emlrtRSI = { 44, "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"
};

static emlrtRSInfo dk_emlrtRSI = { 51, "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"
};

static emlrtRSInfo ek_emlrtRSI = { 58, "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"
};

static emlrtRSInfo fk_emlrtRSI = { 72, "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"
};

static emlrtRSInfo gk_emlrtRSI = { 73, "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"
};

static emlrtRSInfo hk_emlrtRSI = { 9, "angle",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\angle.m"
};

static emlrtRTEInfo pc_emlrtRTEI = { 1, 24, "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"
};

static emlrtRTEInfo qc_emlrtRTEI = { 14, 1, "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"
};

static emlrtRTEInfo ne_emlrtRTEI = { 72, 1, "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"
};

static emlrtRTEInfo oe_emlrtRTEI = { 212, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtRTEInfo pe_emlrtRTEI = { 64, 1, "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"
};

static emlrtRTEInfo qe_emlrtRTEI = { 240, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtBCInfo sg_emlrtBCI = { -1, -1, 14, 18, "", "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m",
  0 };

static emlrtBCInfo tg_emlrtBCI = { -1, -1, 16, 44, "", "chradiiphcode",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m",
  0 };

/* Function Definitions */
void chradiiphcode(const emlrtStack *sp, const emxArray_real_T *varargin_1,
                   const emxArray_creal_T *varargin_2, const real_T
                   varargin_3_data[], const int32_T varargin_3_size[2],
                   emxArray_real_T *r_estimated)
{
  boolean_T overflow;
  int32_T i29;
  int32_T k;
  boolean_T exitg4;
  boolean_T exitg3;
  boolean_T exitg2;
  emxArray_boolean_T *b_varargin_1;
  int32_T loop_ub;
  int32_T n;
  emxArray_boolean_T *c_varargin_1;
  boolean_T guard1 = false;
  emxArray_real_T *d_varargin_1;
  emxArray_real_T *cenPhase;
  int32_T siz[2];
  int32_T e_varargin_1[2];
  int32_T b_varargin_2[2];
  boolean_T p;
  boolean_T exitg1;
  emxArray_creal_T *x;
  emxArray_real_T *r6;
  real_T lnR_data[2];
  real_T b;
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
  st.site = &tj_emlrtRSI;
  b_st.site = &xj_emlrtRSI;
  c_st.site = &ck_emlrtRSI;
  overflow = true;
  i29 = varargin_1->size[0] * varargin_1->size[1];
  k = 0;
  exitg4 = false;
  while ((!exitg4) && (k <= i29 - 1)) {
    if (!(varargin_1->data[k] <= 0.0)) {
      k++;
    } else {
      overflow = false;
      exitg4 = true;
    }
  }

  if (overflow) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&c_st, &dd_emlrtRTEI,
      "MATLAB:chradiiphcode:expectedPositive", 49,
      "Expected input number 1, centers, to be positive.");
  }

  if (!((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0))) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&c_st, &gd_emlrtRTEI,
      "MATLAB:chradiiphcode:expectedNonempty", 49,
      "Expected input number 1, centers, to be nonempty.");
  }

  if (varargin_1->size[1] == 2) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&c_st, &qe_emlrtRTEI,
      "MATLAB:chradiiphcode:incorrectNumcols", 83,
      "Expected input number 1, centers, to be an array with number of columns equal to 2.");
  }

  b_st.site = &yj_emlrtRSI;
  c_st.site = &dk_emlrtRSI;
  if (!((varargin_2->size[0] == 0) || (varargin_2->size[1] == 0))) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&c_st, &gd_emlrtRTEI,
      "MATLAB:chradiiphcode:expectedNonempty", 43,
      "Expected input number 2, H, to be nonempty.");
  }

  b_st.site = &ak_emlrtRSI;
  c_st.site = &ek_emlrtRSI;
  overflow = true;
  k = 0;
  exitg3 = false;
  while ((!exitg3) && (k <= varargin_3_size[1] - 1)) {
    if (!muDoubleScalarIsNaN(varargin_3_data[k])) {
      k++;
    } else {
      overflow = false;
      exitg3 = true;
    }
  }

  if (overflow) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&c_st, &ed_emlrtRTEI,
      "MATLAB:chradiiphcode:expectedNonNaN", 42,
      "Expected input number 3, R, to be non-NaN.");
  }

  overflow = c_all(varargin_3_data, varargin_3_size);
  if (overflow) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&c_st, &fd_emlrtRTEI,
      "MATLAB:chradiiphcode:expectedInteger", 49,
      "Expected input number 3, R, to be integer-valued.");
  }

  overflow = true;
  k = 0;
  exitg2 = false;
  while ((!exitg2) && (k <= varargin_3_size[1] - 1)) {
    if (!(varargin_3_data[k] <= 0.0)) {
      k++;
    } else {
      overflow = false;
      exitg2 = true;
    }
  }

  if (overflow) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&c_st, &dd_emlrtRTEI,
      "MATLAB:chradiiphcode:expectedPositive", 43,
      "Expected input number 3, R, to be positive.");
  }

  overflow = b_all(varargin_3_data, varargin_3_size);
  if (overflow) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&c_st, &cd_emlrtRTEI,
      "MATLAB:chradiiphcode:expectedFinite", 41,
      "Expected input number 3, R, to be finite.");
  }

  if (varargin_3_size[1] == 2) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&c_st, &oe_emlrtRTEI,
      "MATLAB:chradiiphcode:incorrectNumel", 78,
      "Expected input number 3, R, to be an array with number of elements equal to 2.");
  }

  if (!(varargin_3_data[0] >= varargin_3_data[1])) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &pe_emlrtRTEI,
      "images:imfindcircles:invalidRadiusRange", 0);
  }

  emxInit_boolean_T1(&b_st, &b_varargin_1, 1, &pc_emlrtRTEI, true);
  b_st.site = &bk_emlrtRSI;
  loop_ub = varargin_1->size[0];
  n = varargin_2->size[1];
  i29 = b_varargin_1->size[0];
  b_varargin_1->size[0] = loop_ub;
  emxEnsureCapacity(&b_st, (emxArray__common *)b_varargin_1, i29, (int32_T)
                    sizeof(boolean_T), &pc_emlrtRTEI);
  for (i29 = 0; i29 < loop_ub; i29++) {
    b_varargin_1->data[i29] = (varargin_1->data[i29] <= n);
  }

  emxInit_boolean_T1(&b_st, &c_varargin_1, 1, &pc_emlrtRTEI, true);
  guard1 = false;
  c_st.site = &fk_emlrtRSI;
  if (d_all(&c_st, b_varargin_1)) {
    loop_ub = varargin_1->size[0];
    n = varargin_2->size[0];
    i29 = c_varargin_1->size[0];
    c_varargin_1->size[0] = loop_ub;
    emxEnsureCapacity(&b_st, (emxArray__common *)c_varargin_1, i29, (int32_T)
                      sizeof(boolean_T), &pc_emlrtRTEI);
    for (i29 = 0; i29 < loop_ub; i29++) {
      c_varargin_1->data[i29] = (varargin_1->data[i29 + varargin_1->size[0]] <=
        n);
    }

    c_st.site = &gk_emlrtRSI;
    if (d_all(&c_st, c_varargin_1)) {
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

  emxFree_boolean_T(&b_varargin_1);
  emxFree_boolean_T(&c_varargin_1);
  if (!!overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &ne_emlrtRTEI,
      "images:imfindcircles:outOfBoundCenters", 0);
  }

  emxInit_real_T1(&b_st, &d_varargin_1, 1, &pc_emlrtRTEI, true);
  loop_ub = varargin_1->size[0];
  i29 = d_varargin_1->size[0];
  d_varargin_1->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)d_varargin_1, i29, (int32_T)sizeof
                    (real_T), &pc_emlrtRTEI);
  for (i29 = 0; i29 < loop_ub; i29++) {
    d_varargin_1->data[i29] = varargin_1->data[i29 + varargin_1->size[0]];
  }

  emxInit_real_T1(sp, &cenPhase, 1, &qc_emlrtRTEI, true);
  st.site = &uj_emlrtRSI;
  b_round(&st, d_varargin_1);
  loop_ub = varargin_1->size[0];
  i29 = cenPhase->size[0];
  cenPhase->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)cenPhase, i29, (int32_T)sizeof
                    (real_T), &pc_emlrtRTEI);
  for (i29 = 0; i29 < loop_ub; i29++) {
    cenPhase->data[i29] = varargin_1->data[i29];
  }

  st.site = &uj_emlrtRSI;
  b_round(&st, cenPhase);
  st.site = &uj_emlrtRSI;
  b_st.site = &bg_emlrtRSI;
  for (i29 = 0; i29 < 2; i29++) {
    siz[i29] = varargin_2->size[i29];
  }

  if (allinrange(d_varargin_1, siz[0])) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &ld_emlrtRTEI,
      "MATLAB:sub2ind:IndexOutOfRange", 0);
  }

  e_varargin_1[0] = d_varargin_1->size[0];
  e_varargin_1[1] = 1;
  b_varargin_2[0] = cenPhase->size[0];
  b_varargin_2[1] = 1;
  overflow = false;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!(e_varargin_1[k] == b_varargin_2[k])) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (!p) {
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &md_emlrtRTEI,
      "MATLAB:sub2ind:SubscriptVectorSize", 0);
  }

  c_st.site = &cg_emlrtRSI;
  if (allinrange(cenPhase, siz[1])) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &ld_emlrtRTEI,
      "MATLAB:sub2ind:IndexOutOfRange", 0);
  }

  i29 = d_varargin_1->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)d_varargin_1, i29, (int32_T)sizeof
                    (real_T), &pc_emlrtRTEI);
  loop_ub = d_varargin_1->size[0];
  for (i29 = 0; i29 < loop_ub; i29++) {
    d_varargin_1->data[i29] = (int32_T)d_varargin_1->data[i29] + siz[0] *
      ((int32_T)cenPhase->data[i29] - 1);
  }

  emxInit_creal_T1(&st, &x, 1, &pc_emlrtRTEI, true);
  st.site = &uj_emlrtRSI;
  b_indexShapeCheck(&st, *(int32_T (*)[2])varargin_2->size, d_varargin_1->size[0]);
  st.site = &uj_emlrtRSI;
  n = varargin_2->size[0] * varargin_2->size[1];
  i29 = x->size[0];
  x->size[0] = d_varargin_1->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)x, i29, (int32_T)sizeof(creal_T),
                    &pc_emlrtRTEI);
  loop_ub = d_varargin_1->size[0];
  for (i29 = 0; i29 < loop_ub; i29++) {
    k = (int32_T)d_varargin_1->data[i29];
    if (!((k >= 1) && (k <= n))) {
      emlrtDynamicBoundsCheckR2012b(k, 1, n, &sg_emlrtBCI, &st);
    }

    x->data[i29].re = varargin_2->data[k - 1].re;
    k = (int32_T)d_varargin_1->data[i29];
    if (!((k >= 1) && (k <= n))) {
      emlrtDynamicBoundsCheckR2012b(k, 1, n, &sg_emlrtBCI, &st);
    }

    x->data[i29].im = varargin_2->data[k - 1].im;
  }

  b_st.site = &hk_emlrtRSI;
  n = d_varargin_1->size[0];
  i29 = cenPhase->size[0];
  cenPhase->size[0] = n;
  emxEnsureCapacity(&b_st, (emxArray__common *)cenPhase, i29, (int32_T)sizeof
                    (real_T), &pc_emlrtRTEI);
  n = d_varargin_1->size[0];
  c_st.site = &gd_emlrtRSI;
  overflow = ((!(1 > d_varargin_1->size[0])) && (d_varargin_1->size[0] >
    2147483646));
  emxFree_real_T(&d_varargin_1);
  if (overflow) {
    d_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k + 1 <= n; k++) {
    cenPhase->data[k] = muDoubleScalarAtan2(x->data[k].im, x->data[k].re);
  }

  emxFree_creal_T(&x);
  emxInit_real_T(&b_st, &r6, 2, &pc_emlrtRTEI, true);
  i29 = r6->size[0] * r6->size[1];
  r6->size[0] = 1;
  r6->size[1] = varargin_3_size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r6, i29, (int32_T)sizeof(real_T),
                    &pc_emlrtRTEI);
  loop_ub = varargin_3_size[0] * varargin_3_size[1];
  for (i29 = 0; i29 < loop_ub; i29++) {
    r6->data[i29] = varargin_3_data[i29];
  }

  st.site = &vj_emlrtRSI;
  b_log(&st, r6);
  n = r6->size[1];
  loop_ub = r6->size[0] * r6->size[1];
  for (i29 = 0; i29 < loop_ub; i29++) {
    lnR_data[i29] = r6->data[i29];
  }

  emxFree_real_T(&r6);
  if (!(n >= 1)) {
    emlrtDynamicBoundsCheckR2012b(n, 1, n, &tg_emlrtBCI, sp);
  }

  b = lnR_data[n - 1] - lnR_data[0];
  st.site = &wj_emlrtRSI;
  i29 = cenPhase->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)cenPhase, i29, (int32_T)sizeof
                    (real_T), &pc_emlrtRTEI);
  loop_ub = cenPhase->size[0];
  for (i29 = 0; i29 < loop_ub; i29++) {
    cenPhase->data[i29] = (cenPhase->data[i29] + 3.1415926535897931) /
      6.2831853071795862 * b + lnR_data[0];
  }

  b_st.site = &hg_emlrtRSI;
  i29 = r_estimated->size[0];
  r_estimated->size[0] = cenPhase->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)r_estimated, i29, (int32_T)sizeof
                    (real_T), &pc_emlrtRTEI);
  loop_ub = cenPhase->size[0];
  for (i29 = 0; i29 < loop_ub; i29++) {
    r_estimated->data[i29] = cenPhase->data[i29];
  }

  c_st.site = &gg_emlrtRSI;
  overflow = ((!(1 > cenPhase->size[0])) && (cenPhase->size[0] > 2147483646));
  if (overflow) {
    d_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k + 1 <= cenPhase->size[0]; k++) {
    r_estimated->data[k] = muDoubleScalarExp(r_estimated->data[k]);
  }

  emxFree_real_T(&cenPhase);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (chradiiphcode.c) */
