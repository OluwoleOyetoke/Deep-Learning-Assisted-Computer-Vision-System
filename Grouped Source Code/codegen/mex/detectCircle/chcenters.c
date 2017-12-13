/*
 * chcenters.c
 *
 * Code generation for function 'chcenters'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "chcenters.h"
#include "detectCircle_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "sort1.h"
#include "indexShapeCheck.h"
#include "sub2ind.h"
#include "round.h"
#include "regionprops.h"
#include "validateattributes.h"
#include "ordfilt2.h"
#include "all.h"
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
static emlrtRSInfo jg_emlrtRSI = { 6, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtRSInfo kg_emlrtRSI = { 13, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtRSInfo lg_emlrtRSI = { 16, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtRSInfo mg_emlrtRSI = { 29, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtRSInfo ng_emlrtRSI = { 34, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtRSInfo og_emlrtRSI = { 35, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtRSInfo pg_emlrtRSI = { 36, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtRSInfo qg_emlrtRSI = { 48, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtRSInfo rg_emlrtRSI = { 53, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtRSInfo sg_emlrtRSI = { 55, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtRSInfo tg_emlrtRSI = { 96, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtRSInfo ug_emlrtRSI = { 102, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtRSInfo vg_emlrtRSI = { 37, "medfilt2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\medfilt2.m"
};

static emlrtRSInfo fh_emlrtRSI = { 66, "imhmax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\imhmax.m" };

static emlrtRSInfo gh_emlrtRSI = { 10, "imreconstruct",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imreconstruct.m"
};

static emlrtRSInfo hh_emlrtRSI = { 14, "imreconstruct",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imreconstruct.m"
};

static emlrtRSInfo ih_emlrtRSI = { 71, "imreconstruct",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imreconstruct.m"
};

static emlrtRSInfo jh_emlrtRSI = { 14, "imregionalmax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imregionalmax.m"
};

static emlrtRSInfo kh_emlrtRSI = { 36, "imregionalmax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imregionalmax.m"
};

static emlrtRSInfo cj_emlrtRSI = { 19, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo dj_emlrtRSI = { 23, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo ej_emlrtRSI = { 270, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo fj_emlrtRSI = { 271, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo hj_emlrtRSI = { 26, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"
};

static emlrtRTEInfo xb_emlrtRTEI = { 1, 30, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtRTEInfo yb_emlrtRTEI = { 13, 1, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtRTEInfo ac_emlrtRTEI = { 29, 5, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtRTEInfo bc_emlrtRTEI = { 35, 1, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtRTEInfo cc_emlrtRTEI = { 36, 1, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtBCInfo td_emlrtBCI = { -1, -1, 16, 32, "", "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m",
  0 };

static emlrtBCInfo ud_emlrtBCI = { -1, -1, 42, 17, "", "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m",
  0 };

static emlrtECInfo e_emlrtECI = { -1, 42, 9, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtRTEInfo de_emlrtRTEI = { 46, 5, "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m"
};

static emlrtBCInfo vd_emlrtBCI = { -1, -1, 47, 26, "", "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m",
  0 };

static emlrtBCInfo wd_emlrtBCI = { -1, -1, 47, 51, "", "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m",
  0 };

static emlrtRTEInfo ee_emlrtRTEI = { 23, 1, "imreconstruct",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imreconstruct.m"
};

static emlrtRTEInfo fe_emlrtRTEI = { 77, 27, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRTEInfo ge_emlrtRTEI = { 293, 1, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtBCInfo xd_emlrtBCI = { -1, -1, 53, 18, "", "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m",
  0 };

static emlrtBCInfo yd_emlrtBCI = { -1, -1, 56, 27, "", "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m",
  0 };

static emlrtBCInfo ae_emlrtBCI = { -1, -1, 42, 26, "", "chcenters",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chcenters.m",
  0 };

/* Function Definitions */
void chcenters(const emlrtStack *sp, const emxArray_creal_T *varargin_1,
               emxArray_real_T *centers, emxArray_real_T *metric)
{
  emxArray_real_T *Hd;
  boolean_T b1;
  int32_T i21;
  real_T b_varargin_1[2];
  emxArray_real_T *accumMatrixRe;
  int32_T n;
  int32_T k;
  emxArray_boolean_T *b_accumMatrixRe;
  real_T c_accumMatrixRe;
  boolean_T flat;
  emxArray_real_T *marker;
  real_T varargin_2[2];
  boolean_T p;
  boolean_T exitg3;
  emxArray_real_T *mask;
  boolean_T exitg2;
  emxArray_boolean_T *bw;
  int32_T i;
  boolean_T conn[9];
  emxArray_struct_T *s;
  int32_T idx;
  emxArray_real_T *x;
  emxArray_real_T *b_x;
  int32_T siz[2];
  int32_T iv34[2];
  int32_T b_idx;
  emxArray_real_T *c_varargin_1;
  boolean_T guard1 = false;
  emxArray_real_T *b_varargin_2;
  boolean_T exitg1;
  emxArray_real_T *b_metric;
  emxArray_real_T *b_sortIdx;
  emxArray_int32_T *iidx;
  emxArray_real_T *c_sortIdx;
  emxArray_real_T *b_centers;
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
  emxInit_real_T(sp, &Hd, 2, &ac_emlrtRTEI, true);
  b1 = false;
  st.site = &jg_emlrtRSI;
  b_st.site = &tg_emlrtRSI;
  c_st.site = &ug_emlrtRSI;
  if (!((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0))) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&c_st, &gd_emlrtRTEI,
      "MATLAB:chcenters:expectedNonempty", 43,
      "Expected input number 1, H, to be nonempty.");
  }

  i21 = centers->size[0] * centers->size[1];
  centers->size[0] = 0;
  centers->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)centers, i21, (int32_T)sizeof(real_T),
                    &xb_emlrtRTEI);
  i21 = metric->size[0] * metric->size[1];
  metric->size[0] = 0;
  metric->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)metric, i21, (int32_T)sizeof(real_T),
                    &xb_emlrtRTEI);
  st.site = &kg_emlrtRSI;
  b_st.site = &fd_emlrtRSI;
  for (i21 = 0; i21 < 2; i21++) {
    b_varargin_1[i21] = varargin_1->size[i21];
  }

  emxInit_real_T(&b_st, &accumMatrixRe, 2, &yb_emlrtRTEI, true);
  i21 = accumMatrixRe->size[0] * accumMatrixRe->size[1];
  accumMatrixRe->size[0] = (int32_T)b_varargin_1[0];
  accumMatrixRe->size[1] = (int32_T)b_varargin_1[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)accumMatrixRe, i21, (int32_T)
                    sizeof(real_T), &xb_emlrtRTEI);
  n = varargin_1->size[0] * varargin_1->size[1];
  c_st.site = &gd_emlrtRSI;
  if ((!(1 > n)) && (n > 2147483646)) {
    d_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k + 1 <= n; k++) {
    accumMatrixRe->data[k] = muDoubleScalarHypot(varargin_1->data[k].re,
      varargin_1->data[k].im);
  }

  emxInit_boolean_T1(&b_st, &b_accumMatrixRe, 1, &xb_emlrtRTEI, true);
  i21 = accumMatrixRe->size[0] * accumMatrixRe->size[1];
  if (!(1 <= i21)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i21, &td_emlrtBCI, sp);
  }

  c_accumMatrixRe = accumMatrixRe->data[0];
  i21 = b_accumMatrixRe->size[0];
  b_accumMatrixRe->size[0] = accumMatrixRe->size[0] * accumMatrixRe->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_accumMatrixRe, i21, (int32_T)
                    sizeof(boolean_T), &xb_emlrtRTEI);
  k = accumMatrixRe->size[0] * accumMatrixRe->size[1];
  for (i21 = 0; i21 < k; i21++) {
    b_accumMatrixRe->data[i21] = (accumMatrixRe->data[i21] == c_accumMatrixRe);
  }

  st.site = &lg_emlrtRSI;
  flat = d_all(&st, b_accumMatrixRe);
  emxFree_boolean_T(&b_accumMatrixRe);
  if (flat) {
  } else {
    for (i21 = 0; i21 < 2; i21++) {
      b_varargin_1[i21] = accumMatrixRe->size[i21];
    }

    n = (int32_T)(uint32_T)b_varargin_1[0];
    if ((int32_T)(uint32_T)b_varargin_1[1] < (int32_T)(uint32_T)b_varargin_1[0])
    {
      n = (int32_T)(uint32_T)b_varargin_1[1];
    }

    if (n > 5) {
      st.site = &mg_emlrtRSI;
      i21 = Hd->size[0] * Hd->size[1];
      Hd->size[0] = accumMatrixRe->size[0];
      Hd->size[1] = accumMatrixRe->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)Hd, i21, (int32_T)sizeof(real_T),
                        &xb_emlrtRTEI);
      k = accumMatrixRe->size[0] * accumMatrixRe->size[1];
      for (i21 = 0; i21 < k; i21++) {
        Hd->data[i21] = accumMatrixRe->data[i21];
      }

      b_st.site = &vg_emlrtRSI;
      ordfilt2(&b_st, Hd);
    } else {
      i21 = Hd->size[0] * Hd->size[1];
      Hd->size[0] = accumMatrixRe->size[0];
      Hd->size[1] = accumMatrixRe->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)Hd, i21, (int32_T)sizeof(real_T),
                        &xb_emlrtRTEI);
      k = accumMatrixRe->size[0] * accumMatrixRe->size[1];
      for (i21 = 0; i21 < k; i21++) {
        Hd->data[i21] = accumMatrixRe->data[i21];
      }
    }

    emxInit_real_T(sp, &marker, 2, &xb_emlrtRTEI, true);
    st.site = &ng_emlrtRSI;
    b_st.site = &fh_emlrtRSI;
    i21 = marker->size[0] * marker->size[1];
    marker->size[0] = Hd->size[0];
    marker->size[1] = Hd->size[1];
    emxEnsureCapacity(&b_st, (emxArray__common *)marker, i21, (int32_T)sizeof
                      (real_T), &xb_emlrtRTEI);
    k = Hd->size[0] * Hd->size[1];
    for (i21 = 0; i21 < k; i21++) {
      marker->data[i21] = Hd->data[i21] - 0.15;
    }

    c_st.site = &gh_emlrtRSI;
    b_validateattributes(&c_st, marker);
    c_st.site = &hh_emlrtRSI;
    b_validateattributes(&c_st, Hd);
    for (i21 = 0; i21 < 2; i21++) {
      b_varargin_1[i21] = marker->size[i21];
    }

    for (i21 = 0; i21 < 2; i21++) {
      varargin_2[i21] = Hd->size[i21];
    }

    flat = false;
    p = true;
    k = 0;
    exitg3 = false;
    while ((!exitg3) && (k < 2)) {
      if (!(b_varargin_1[k] == varargin_2[k])) {
        p = false;
        exitg3 = true;
      } else {
        k++;
      }
    }

    if (!p) {
    } else {
      flat = true;
    }

    if (!!flat) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &ee_emlrtRTEI,
        "images:imreconstruct:notSameSize", 0);
    }

    emxInit_real_T(&b_st, &mask, 2, &xb_emlrtRTEI, true);
    c_st.site = &ih_emlrtRSI;
    i21 = mask->size[0] * mask->size[1];
    mask->size[0] = Hd->size[0];
    mask->size[1] = Hd->size[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)mask, i21, (int32_T)sizeof
                      (real_T), &xb_emlrtRTEI);
    k = Hd->size[0] * Hd->size[1];
    for (i21 = 0; i21 < k; i21++) {
      mask->data[i21] = Hd->data[i21];
    }

    for (i21 = 0; i21 < 2; i21++) {
      b_varargin_1[i21] = marker->size[i21];
    }

    i21 = Hd->size[0] * Hd->size[1];
    Hd->size[0] = marker->size[0];
    Hd->size[1] = marker->size[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)Hd, i21, (int32_T)sizeof(real_T),
                      &xb_emlrtRTEI);
    k = marker->size[0] * marker->size[1];
    for (i21 = 0; i21 < k; i21++) {
      Hd->data[i21] = marker->data[i21];
    }

    emxFree_real_T(&marker);
    ippreconstruct_real64(&Hd->data[0], &mask->data[0], b_varargin_1, 2.0);
    st.site = &og_emlrtRSI;
    b_st.site = &jh_emlrtRSI;
    flat = true;
    i21 = Hd->size[0] * Hd->size[1];
    k = 0;
    emxFree_real_T(&mask);
    exitg2 = false;
    while ((!exitg2) && (k <= i21 - 1)) {
      if (!muDoubleScalarIsNaN(Hd->data[k])) {
        k++;
      } else {
        flat = false;
        exitg2 = true;
      }
    }

    if (flat) {
    } else {
      emlrtErrMsgIdAndExplicitTxt(&b_st, &ed_emlrtRTEI,
        "MATLAB:imregionalmax:expectedNonNaN", 42,
        "Expected input number 1, I, to be non-NaN.");
    }

    emxInit_boolean_T(&b_st, &bw, 2, &bc_emlrtRTEI, true);
    for (i21 = 0; i21 < 2; i21++) {
      i = bw->size[0] * bw->size[1];
      bw->size[i21] = Hd->size[i21];
      emxEnsureCapacity(&st, (emxArray__common *)bw, i, (int32_T)sizeof
                        (boolean_T), &xb_emlrtRTEI);
    }

    b_st.site = &kh_emlrtRSI;
    for (i21 = 0; i21 < 2; i21++) {
      b_varargin_1[i21] = Hd->size[i21];
    }

    for (i21 = 0; i21 < 9; i21++) {
      conn[i21] = true;
    }

    for (i21 = 0; i21 < 2; i21++) {
      varargin_2[i21] = 3.0;
    }

    emxInit_struct_T(&b_st, &s, 1, &cc_emlrtRTEI, true);
    imregionalmax_real64(&Hd->data[0], &bw->data[0], 2.0, b_varargin_1, conn,
                         2.0, varargin_2);
    st.site = &pg_emlrtRSI;
    regionprops(&st, bw, accumMatrixRe, s);
    emxFree_boolean_T(&bw);
    if (!(s->size[0] == 0)) {
      i21 = centers->size[0] * centers->size[1];
      centers->size[0] = s->size[0];
      centers->size[1] = 2;
      emxEnsureCapacity(sp, (emxArray__common *)centers, i21, (int32_T)sizeof
                        (real_T), &xb_emlrtRTEI);
      for (idx = 0; idx < s->size[0]; idx++) {
        i21 = centers->size[0];
        i = idx + 1;
        if (!((i >= 1) && (i <= i21))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i21, &ud_emlrtBCI, sp);
        }

        if (!b1) {
          for (i21 = 0; i21 < 2; i21++) {
            siz[i21] = 1 + i21;
            iv34[i21] = 1 + i21;
          }

          b1 = true;
        }

        emlrtSubAssignSizeCheckR2012b(siz, 2, iv34, 2, &e_emlrtECI, sp);
        for (i21 = 0; i21 < 2; i21++) {
          i = s->size[0];
          n = 1 + idx;
          if (!((n >= 1) && (n <= i))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i, &ae_emlrtBCI, sp);
          }

          centers->data[idx + centers->size[0] * i21] = s->data[n - 1].
            WeightedCentroid[i21];
        }
      }

      i21 = centers->size[0];
      emlrtForLoopVectorCheckR2012b(centers->size[0], -1.0, 1.0, mxDOUBLE_CLASS,
        centers->size[0], &de_emlrtRTEI, sp);
      idx = 0;
      emxInit_real_T(sp, &x, 2, &xb_emlrtRTEI, true);
      emxInit_real_T(sp, &b_x, 2, &xb_emlrtRTEI, true);
      while (idx <= i21 - 1) {
        b_idx = i21 - idx;
        i = centers->size[0];
        if (!((b_idx >= 1) && (b_idx <= i))) {
          emlrtDynamicBoundsCheckR2012b(b_idx, 1, i, &vd_emlrtBCI, sp);
        }

        guard1 = false;
        if (muDoubleScalarIsNaN(centers->data[b_idx - 1])) {
          guard1 = true;
        } else {
          i = centers->size[0];
          if (!((b_idx >= 1) && (b_idx <= i))) {
            emlrtDynamicBoundsCheckR2012b(b_idx, 1, i, &wd_emlrtBCI, sp);
          }

          if (muDoubleScalarIsNaN(centers->data[(b_idx + centers->size[0]) - 1]))
          {
            guard1 = true;
          }
        }

        if (guard1) {
          st.site = &qg_emlrtRSI;
          b_st.site = &cj_emlrtRSI;
          flat = true;
          if (b_idx > centers->size[0]) {
            flat = false;
          }

          if (flat) {
          } else {
            emlrtErrorWithMessageIdR2012b(&b_st, &fe_emlrtRTEI,
              "MATLAB:subsdeldimmismatch", 0);
          }

          b_st.site = &dj_emlrtRSI;
          i = x->size[0] * x->size[1];
          x->size[0] = centers->size[0];
          x->size[1] = centers->size[1];
          emxEnsureCapacity(&b_st, (emxArray__common *)x, i, (int32_T)sizeof
                            (real_T), &xb_emlrtRTEI);
          k = centers->size[0] * centers->size[1];
          for (i = 0; i < k; i++) {
            x->data[i] = centers->data[i];
          }

          n = centers->size[0];
          c_st.site = &ej_emlrtRSI;
          for (k = 0; k < 2; k++) {
            c_st.site = &fj_emlrtRSI;
            for (i = b_idx; i < n; i++) {
              x->data[(i + x->size[0] * k) - 1] = x->data[i + x->size[0] * k];
            }
          }

          if (centers->size[0] - 1 <= centers->size[0]) {
          } else {
            emlrtErrorWithMessageIdR2012b(&b_st, &ge_emlrtRTEI,
              "Coder:builtins:AssertionFailed", 0);
          }

          if (1 > centers->size[0] - 1) {
            k = 0;
          } else {
            k = centers->size[0] - 1;
          }

          i = b_x->size[0] * b_x->size[1];
          b_x->size[0] = k;
          b_x->size[1] = 2;
          emxEnsureCapacity(&b_st, (emxArray__common *)b_x, i, (int32_T)sizeof
                            (real_T), &xb_emlrtRTEI);
          for (i = 0; i < 2; i++) {
            for (n = 0; n < k; n++) {
              b_x->data[n + b_x->size[0] * i] = x->data[n + x->size[0] * i];
            }
          }

          i = x->size[0] * x->size[1];
          x->size[0] = b_x->size[0];
          x->size[1] = 2;
          emxEnsureCapacity(&b_st, (emxArray__common *)x, i, (int32_T)sizeof
                            (real_T), &xb_emlrtRTEI);
          for (i = 0; i < 2; i++) {
            k = b_x->size[0];
            for (n = 0; n < k; n++) {
              x->data[n + x->size[0] * i] = b_x->data[n + b_x->size[0] * i];
            }
          }

          i = centers->size[0] * centers->size[1];
          centers->size[0] = x->size[0];
          centers->size[1] = 2;
          emxEnsureCapacity(sp, (emxArray__common *)centers, i, (int32_T)sizeof
                            (real_T), &xb_emlrtRTEI);
          k = x->size[0] * x->size[1];
          for (i = 0; i < k; i++) {
            centers->data[i] = x->data[i];
          }
        }

        idx++;
      }

      emxFree_real_T(&b_x);
      emxFree_real_T(&x);
      if (!(centers->size[0] == 0)) {
        emxInit_real_T1(sp, &c_varargin_1, 1, &xb_emlrtRTEI, true);
        k = centers->size[0];
        i21 = c_varargin_1->size[0];
        c_varargin_1->size[0] = k;
        emxEnsureCapacity(sp, (emxArray__common *)c_varargin_1, i21, (int32_T)
                          sizeof(real_T), &xb_emlrtRTEI);
        for (i21 = 0; i21 < k; i21++) {
          c_varargin_1->data[i21] = centers->data[i21 + centers->size[0]];
        }

        emxInit_real_T1(sp, &b_varargin_2, 1, &xb_emlrtRTEI, true);
        st.site = &rg_emlrtRSI;
        b_round(&st, c_varargin_1);
        k = centers->size[0];
        i21 = b_varargin_2->size[0];
        b_varargin_2->size[0] = k;
        emxEnsureCapacity(sp, (emxArray__common *)b_varargin_2, i21, (int32_T)
                          sizeof(real_T), &xb_emlrtRTEI);
        for (i21 = 0; i21 < k; i21++) {
          b_varargin_2->data[i21] = centers->data[i21];
        }

        st.site = &rg_emlrtRSI;
        b_round(&st, b_varargin_2);
        st.site = &rg_emlrtRSI;
        b_st.site = &bg_emlrtRSI;
        for (i21 = 0; i21 < 2; i21++) {
          siz[i21] = Hd->size[i21];
        }

        if (allinrange(c_varargin_1, siz[0])) {
        } else {
          emlrtErrorWithMessageIdR2012b(&b_st, &ld_emlrtRTEI,
            "MATLAB:sub2ind:IndexOutOfRange", 0);
        }

        b_varargin_1[0] = c_varargin_1->size[0];
        b_varargin_1[1] = 1.0;
        varargin_2[0] = b_varargin_2->size[0];
        varargin_2[1] = 1.0;
        flat = false;
        p = true;
        k = 0;
        exitg1 = false;
        while ((!exitg1) && (k < 2)) {
          if (!(b_varargin_1[k] == varargin_2[k])) {
            p = false;
            exitg1 = true;
          } else {
            k++;
          }
        }

        if (!p) {
        } else {
          flat = true;
        }

        if (flat) {
        } else {
          emlrtErrorWithMessageIdR2012b(&b_st, &md_emlrtRTEI,
            "MATLAB:sub2ind:SubscriptVectorSize", 0);
        }

        c_st.site = &cg_emlrtRSI;
        if (allinrange(b_varargin_2, siz[1])) {
        } else {
          emlrtErrorWithMessageIdR2012b(&b_st, &ld_emlrtRTEI,
            "MATLAB:sub2ind:IndexOutOfRange", 0);
        }

        i21 = c_varargin_1->size[0];
        emxEnsureCapacity(&st, (emxArray__common *)c_varargin_1, i21, (int32_T)
                          sizeof(real_T), &xb_emlrtRTEI);
        k = c_varargin_1->size[0];
        for (i21 = 0; i21 < k; i21++) {
          c_varargin_1->data[i21] = (int32_T)c_varargin_1->data[i21] + siz[0] *
            ((int32_T)b_varargin_2->data[i21] - 1);
        }

        emxFree_real_T(&b_varargin_2);
        st.site = &rg_emlrtRSI;
        b_indexShapeCheck(&st, *(int32_T (*)[2])Hd->size, c_varargin_1->size[0]);
        n = Hd->size[0] * Hd->size[1];
        k = c_varargin_1->size[0];
        for (i21 = 0; i21 < k; i21++) {
          i = (int32_T)c_varargin_1->data[i21];
          if (!((i >= 1) && (i <= n))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, n, &xd_emlrtBCI, sp);
          }
        }

        emxInit_real_T(sp, &b_metric, 2, &xb_emlrtRTEI, true);
        st.site = &sg_emlrtRSI;
        i21 = b_metric->size[0] * b_metric->size[1];
        b_metric->size[0] = c_varargin_1->size[0];
        b_metric->size[1] = 1;
        emxEnsureCapacity(&st, (emxArray__common *)b_metric, i21, (int32_T)
                          sizeof(real_T), &xb_emlrtRTEI);
        k = c_varargin_1->size[0];
        for (i21 = 0; i21 < k; i21++) {
          b_metric->data[i21] = Hd->data[(int32_T)c_varargin_1->data[i21] - 1];
        }

        emxFree_real_T(&c_varargin_1);
        emxInit_real_T(&st, &b_sortIdx, 2, &xb_emlrtRTEI, true);
        emxInit_int32_T1(&st, &iidx, 2, &xb_emlrtRTEI, true);
        b_st.site = &hj_emlrtRSI;
        b_sort(&b_st, b_metric, iidx);
        i21 = b_sortIdx->size[0] * b_sortIdx->size[1];
        b_sortIdx->size[0] = iidx->size[0];
        b_sortIdx->size[1] = 1;
        emxEnsureCapacity(&st, (emxArray__common *)b_sortIdx, i21, (int32_T)
                          sizeof(real_T), &xb_emlrtRTEI);
        k = iidx->size[0] * iidx->size[1];
        for (i21 = 0; i21 < k; i21++) {
          b_sortIdx->data[i21] = iidx->data[i21];
        }

        emxFree_int32_T(&iidx);
        i21 = metric->size[0] * metric->size[1];
        metric->size[0] = b_metric->size[0];
        metric->size[1] = 1;
        emxEnsureCapacity(sp, (emxArray__common *)metric, i21, (int32_T)sizeof
                          (real_T), &xb_emlrtRTEI);
        k = b_metric->size[0] * b_metric->size[1];
        for (i21 = 0; i21 < k; i21++) {
          metric->data[i21] = b_metric->data[i21];
        }

        emxFree_real_T(&b_metric);
        emxInit_real_T(sp, &c_sortIdx, 2, &xb_emlrtRTEI, true);
        n = centers->size[0];
        i21 = c_sortIdx->size[0] * c_sortIdx->size[1];
        c_sortIdx->size[0] = b_sortIdx->size[0];
        c_sortIdx->size[1] = 1;
        emxEnsureCapacity(sp, (emxArray__common *)c_sortIdx, i21, (int32_T)
                          sizeof(real_T), &xb_emlrtRTEI);
        k = b_sortIdx->size[0];
        for (i21 = 0; i21 < k; i21++) {
          i = (int32_T)b_sortIdx->data[i21];
          if (!((i >= 1) && (i <= n))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, n, &yd_emlrtBCI, sp);
          }

          c_sortIdx->data[i21] = i;
        }

        emxInit_real_T(sp, &b_centers, 2, &xb_emlrtRTEI, true);
        n = b_sortIdx->size[0];
        i21 = b_centers->size[0] * b_centers->size[1];
        b_centers->size[0] = n;
        b_centers->size[1] = 2;
        emxEnsureCapacity(sp, (emxArray__common *)b_centers, i21, (int32_T)
                          sizeof(real_T), &xb_emlrtRTEI);
        emxFree_real_T(&b_sortIdx);
        for (i21 = 0; i21 < 2; i21++) {
          for (i = 0; i < n; i++) {
            b_centers->data[i + b_centers->size[0] * i21] = centers->data
              [((int32_T)c_sortIdx->data[i] + centers->size[0] * i21) - 1];
          }
        }

        emxFree_real_T(&c_sortIdx);
        i21 = centers->size[0] * centers->size[1];
        centers->size[0] = b_centers->size[0];
        centers->size[1] = b_centers->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)centers, i21, (int32_T)sizeof
                          (real_T), &xb_emlrtRTEI);
        k = b_centers->size[1];
        for (i21 = 0; i21 < k; i21++) {
          n = b_centers->size[0];
          for (i = 0; i < n; i++) {
            centers->data[i + centers->size[0] * i21] = b_centers->data[i +
              b_centers->size[0] * i21];
          }
        }

        emxFree_real_T(&b_centers);
      }
    }

    emxFree_struct_T(&s);
  }

  emxFree_real_T(&accumMatrixRe);
  emxFree_real_T(&Hd);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (chcenters.c) */
