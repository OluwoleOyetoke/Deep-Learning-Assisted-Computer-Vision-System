/*
 * multithresh.c
 *
 * Code generation for function 'multithresh'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "multithresh.h"
#include "detectCircle_emxutil.h"
#include "any.h"
#include "abs.h"
#include "sort1.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "warning.h"
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
static emlrtRSInfo yc_emlrtRSI = { 399, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo ad_emlrtRSI = { 411, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo bd_emlrtRSI = { 418, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo cd_emlrtRSI = { 428, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo dd_emlrtRSI = { 23, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

static emlrtRSInfo id_emlrtRSI = { 31, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"
};

static emlrtRSInfo ke_emlrtRSI = { 181, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo le_emlrtRSI = { 212, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo me_emlrtRSI = { 213, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo ne_emlrtRSI = { 199, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo oe_emlrtRSI = { 200, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo pe_emlrtRSI = { 39, "im2uint8",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\im2uint8.m"
};

static emlrtRSInfo qe_emlrtRSI = { 95, "im2uint8",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\im2uint8.m"
};

static emlrtRSInfo re_emlrtRSI = { 19, "grayto8",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\grayto8.m"
};

static emlrtRSInfo se_emlrtRSI = { 121, "imhist",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imhist.m" };

static emlrtRSInfo te_emlrtRSI = { 154, "imhist",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imhist.m" };

static emlrtRSInfo ue_emlrtRSI = { 174, "imhist",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imhist.m" };

static emlrtRSInfo ve_emlrtRSI = { 185, "imhist",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imhist.m" };

static emlrtRSInfo we_emlrtRSI = { 410, "imhist",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imhist.m" };

static emlrtRSInfo xe_emlrtRSI = { 414, "imhist",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imhist.m" };

static emlrtRSInfo ye_emlrtRSI = { 13, "min",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"
};

static emlrtRSInfo cf_emlrtRSI = { 340, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo df_emlrtRSI = { 345, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo ef_emlrtRSI = { 44, "unique",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"
};

static emlrtRSInfo ff_emlrtRSI = { 152, "unique",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"
};

static emlrtRSInfo gf_emlrtRSI = { 154, "unique",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"
};

static emlrtRSInfo hf_emlrtRSI = { 163, "unique",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"
};

static emlrtRSInfo if_emlrtRSI = { 188, "unique",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"
};

static emlrtRSInfo jf_emlrtRSI = { 201, "unique",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"
};

static emlrtRSInfo kf_emlrtRSI = { 212, "unique",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"
};

static emlrtRSInfo lf_emlrtRSI = { 220, "unique",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"
};

static emlrtRSInfo mf_emlrtRSI = { 226, "unique",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"
};

static emlrtRSInfo nf_emlrtRSI = { 101, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo of_emlrtRSI = { 239, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo pf_emlrtRSI = { 292, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo rf_emlrtRSI = { 10, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo sf_emlrtRSI = { 14, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo tf_emlrtRSI = { 165, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo uf_emlrtRSI = { 168, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRSInfo vf_emlrtRSI = { 128, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRTEInfo hb_emlrtRTEI = { 377, 19, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRTEInfo ib_emlrtRTEI = { 399, 9, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRTEInfo jb_emlrtRTEI = { 104, 1, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

static emlrtRTEInfo nb_emlrtRTEI = { 163, 36, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRTEInfo ob_emlrtRTEI = { 207, 1, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRTEInfo pb_emlrtRTEI = { 163, 43, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRTEInfo qb_emlrtRTEI = { 338, 39, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRTEInfo rb_emlrtRTEI = { 234, 9, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRTEInfo sb_emlrtRTEI = { 220, 1, "unique",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"
};

static emlrtRTEInfo tb_emlrtRTEI = { 181, 9, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRTEInfo ub_emlrtRTEI = { 152, 1, "unique",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"
};

static emlrtRTEInfo vb_emlrtRTEI = { 234, 1, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRTEInfo wb_emlrtRTEI = { 329, 22, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtBCInfo fd_emlrtBCI = { -1, -1, 413, 37, "", "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m",
  0 };

static emlrtBCInfo gd_emlrtBCI = { -1, -1, 399, 46, "", "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m",
  0 };

static emlrtBCInfo hd_emlrtBCI = { -1, -1, 396, 9, "", "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m",
  0 };

static emlrtBCInfo id_emlrtBCI = { -1, -1, 423, 17, "", "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m",
  0 };

static emlrtBCInfo jd_emlrtBCI = { -1, -1, 173, 29, "", "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m",
  0 };

static emlrtBCInfo kd_emlrtBCI = { -1, -1, 182, 13, "", "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m",
  0 };

static emlrtBCInfo ld_emlrtBCI = { -1, -1, 208, 11, "", "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m",
  0 };

static emlrtBCInfo md_emlrtBCI = { -1, -1, 631, 39, "", "imhist",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imhist.m", 0
};

static emlrtBCInfo nd_emlrtBCI = { -1, -1, 619, 40, "", "imhist",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imhist.m", 0
};

static emlrtBCInfo od_emlrtBCI = { -1, -1, 618, 40, "", "imhist",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imhist.m", 0
};

static emlrtBCInfo pd_emlrtBCI = { -1, -1, 617, 40, "", "imhist",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imhist.m", 0
};

static emlrtBCInfo qd_emlrtBCI = { -1, -1, 616, 40, "", "imhist",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imhist.m", 0
};

static emlrtBCInfo rd_emlrtBCI = { -1, -1, 179, 12, "", "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m",
  0 };

static emlrtBCInfo sd_emlrtBCI = { -1, -1, 180, 12, "", "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m",
  0 };

static emlrtRTEInfo xd_emlrtRTEI = { 180, 9, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRTEInfo yd_emlrtRTEI = { 81, 27, "nullAssignment",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"
};

static emlrtRTEInfo ae_emlrtRTEI = { 219, 1, "unique",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"
};

static emlrtECInfo d_emlrtECI = { 2, 345, 12, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

/* Function Definitions */
void b_getDegenerateThresholds(const emlrtStack *sp, const emxArray_real_T
  *uniqueVals, emxArray_real_T *thresh)
{
  int32_T i19;
  int32_T loop_ub;
  if (uniqueVals->size[1] == 0) {
    i19 = thresh->size[0] * thresh->size[1];
    thresh->size[0] = 1;
    thresh->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)thresh, i19, (int32_T)sizeof
                      (real_T), &hb_emlrtRTEI);
    thresh->data[0] = 1.0;
  } else {
    i19 = thresh->size[0] * thresh->size[1];
    thresh->size[0] = 1;
    thresh->size[1] = uniqueVals->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)thresh, i19, (int32_T)sizeof
                      (real_T), &hb_emlrtRTEI);
    loop_ub = uniqueVals->size[0] * uniqueVals->size[1];
    for (i19 = 0; i19 < loop_ub; i19++) {
      thresh->data[i19] = uniqueVals->data[i19];
    }
  }
}

void checkForDegenerateInput(const emlrtStack *sp, const emxArray_real_T *A,
  boolean_T *isDegenerate, emxArray_real_T *uniqueVals)
{
  emxArray_int32_T *idx;
  int32_T A_idx_0;
  int32_T i2;
  int32_T i;
  int32_T b_A_idx_0;
  emxArray_int32_T *iwork;
  emxArray_real_T *b;
  boolean_T overflow;
  int32_T k;
  int32_T p;
  int32_T j;
  int32_T pEnd;
  int32_T q;
  int32_T qEnd;
  int32_T kEnd;
  real_T x;
  int32_T exitg1;
  real_T absxk;
  int32_T exponent;
  int32_T iv29[2];
  emxArray_boolean_T *b_idx;
  emxArray_boolean_T *r5;
  int32_T c_idx[2];
  int32_T iv30[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_int32_T(sp, &idx, 1, &ub_emlrtRTEI, true);
  st.site = &cf_emlrtRSI;
  b_st.site = &ef_emlrtRSI;
  A_idx_0 = A->size[0] * A->size[1];
  c_st.site = &ff_emlrtRSI;
  i2 = A->size[0] * A->size[1];
  i = idx->size[0];
  idx->size[0] = i2;
  emxEnsureCapacity(&c_st, (emxArray__common *)idx, i, (int32_T)sizeof(int32_T),
                    &qb_emlrtRTEI);
  for (i = 0; i < i2; i++) {
    idx->data[i] = 0;
  }

  b_A_idx_0 = A->size[0] * A->size[1];
  if (b_A_idx_0 == 0) {
  } else {
    emxInit_int32_T(&c_st, &iwork, 1, &vb_emlrtRTEI, true);
    d_st.site = &nf_emlrtRSI;
    b_A_idx_0 = A->size[0] * A->size[1];
    i = iwork->size[0];
    iwork->size[0] = i2;
    emxEnsureCapacity(&d_st, (emxArray__common *)iwork, i, (int32_T)sizeof
                      (int32_T), &rb_emlrtRTEI);
    e_st.site = &of_emlrtRSI;
    i2 = A->size[0] * A->size[1];
    if (1 > i2 - 1) {
      overflow = false;
    } else {
      i2 = A->size[0] * A->size[1];
      overflow = (i2 - 1 > 2147483645);
    }

    if (overflow) {
      f_st.site = &eb_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }

    for (k = 1; k <= b_A_idx_0 - 1; k += 2) {
      if ((A->data[k - 1] <= A->data[k]) || muDoubleScalarIsNaN(A->data[k])) {
        overflow = true;
      } else {
        overflow = false;
      }

      if (overflow) {
        idx->data[k - 1] = k;
        idx->data[k] = k + 1;
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }

    i2 = A->size[0] * A->size[1];
    if ((i2 & 1) != 0) {
      i2 = A->size[0] * A->size[1];
      i = A->size[0] * A->size[1];
      idx->data[i - 1] = i2;
    }

    i = 2;
    while (i < b_A_idx_0) {
      i2 = i << 1;
      j = 1;
      for (pEnd = 1 + i; pEnd < b_A_idx_0 + 1; pEnd = qEnd + i) {
        p = j;
        q = pEnd - 1;
        qEnd = j + i2;
        if (qEnd > b_A_idx_0 + 1) {
          qEnd = b_A_idx_0 + 1;
        }

        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          if ((A->data[idx->data[p - 1] - 1] <= A->data[idx->data[q] - 1]) ||
              muDoubleScalarIsNaN(A->data[idx->data[q] - 1])) {
            overflow = true;
          } else {
            overflow = false;
          }

          if (overflow) {
            iwork->data[k] = idx->data[p - 1];
            p++;
            if (p == pEnd) {
              while (q + 1 < qEnd) {
                k++;
                iwork->data[k] = idx->data[q];
                q++;
              }
            }
          } else {
            iwork->data[k] = idx->data[q];
            q++;
            if (q + 1 == qEnd) {
              while (p < pEnd) {
                k++;
                iwork->data[k] = idx->data[p - 1];
                p++;
              }
            }
          }

          k++;
        }

        e_st.site = &pf_emlrtRSI;
        for (k = 0; k + 1 <= kEnd; k++) {
          idx->data[(j + k) - 1] = iwork->data[k];
        }

        j = qEnd;
      }

      i = i2;
    }

    emxFree_int32_T(&iwork);
  }

  emxInit_real_T1(&c_st, &b, 1, &qb_emlrtRTEI, true);
  i2 = A->size[0] * A->size[1];
  i = b->size[0];
  b->size[0] = i2;
  emxEnsureCapacity(&b_st, (emxArray__common *)b, i, (int32_T)sizeof(real_T),
                    &qb_emlrtRTEI);
  c_st.site = &gf_emlrtRSI;
  i2 = A->size[0] * A->size[1];
  if (1 > i2) {
    overflow = false;
  } else {
    i2 = A->size[0] * A->size[1];
    overflow = (i2 > 2147483646);
  }

  if (overflow) {
    d_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 0; k + 1 <= A_idx_0; k++) {
    b->data[k] = A->data[idx->data[k] - 1];
  }

  emxFree_int32_T(&idx);
  k = 0;
  while ((k + 1 <= A_idx_0) && muDoubleScalarIsInf(b->data[k]) && (b->data[k] <
          0.0)) {
    k++;
  }

  p = k;
  k = A->size[0] * A->size[1];
  while ((k >= 1) && muDoubleScalarIsNaN(b->data[k - 1])) {
    k--;
  }

  A_idx_0 = A->size[0] * A->size[1];
  pEnd = A_idx_0 - k;
  while ((k >= 1) && muDoubleScalarIsInf(b->data[k - 1]) && (b->data[k - 1] >
          0.0)) {
    k--;
  }

  A_idx_0 = A->size[0] * A->size[1];
  i = (A_idx_0 - k) - pEnd;
  qEnd = 0;
  if (p > 0) {
    qEnd = 1;
    c_st.site = &hf_emlrtRSI;
  }

  i2 = (p + k) - p;
  while (p + 1 <= i2) {
    x = b->data[p];
    q = p;
    do {
      exitg1 = 0;
      p++;
      if (p + 1 > i2) {
        exitg1 = 1;
      } else {
        absxk = muDoubleScalarAbs(x / 2.0);
        if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
          if (absxk <= 2.2250738585072014E-308) {
            absxk = 4.94065645841247E-324;
          } else {
            frexp(absxk, &exponent);
            absxk = ldexp(1.0, exponent - 53);
          }
        } else {
          absxk = rtNaN;
        }

        if ((muDoubleScalarAbs(x - b->data[p]) < absxk) || (muDoubleScalarIsInf
             (b->data[p]) && muDoubleScalarIsInf(x) && ((b->data[p] > 0.0) == (x
               > 0.0)))) {
          overflow = true;
        } else {
          overflow = false;
        }

        if (!overflow) {
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);

    qEnd++;
    b->data[qEnd - 1] = x;
    c_st.site = &if_emlrtRSI;
    if ((!(q + 1 > p)) && (p > 2147483646)) {
      d_st.site = &eb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
  }

  if (i > 0) {
    qEnd++;
    b->data[qEnd - 1] = b->data[i2];
    c_st.site = &jf_emlrtRSI;
    if (i > 2147483646) {
      d_st.site = &eb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
  }

  p = i2 + i;
  c_st.site = &kf_emlrtRSI;
  if ((!(1 > pEnd)) && (pEnd > 2147483646)) {
    d_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (j = 1; j <= pEnd; j++) {
    qEnd++;
    b->data[qEnd - 1] = b->data[(p + j) - 1];
  }

  A_idx_0 = A->size[0] * A->size[1];
  if (qEnd <= A_idx_0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &ae_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > qEnd) {
    i = 0;
  } else {
    i = qEnd;
  }

  iv29[0] = 1;
  iv29[1] = i;
  c_st.site = &lf_emlrtRSI;
  indexShapeCheck(&c_st, b->size[0], iv29);
  i2 = b->size[0];
  b->size[0] = i;
  emxEnsureCapacity(&b_st, (emxArray__common *)b, i2, (int32_T)sizeof(real_T),
                    &sb_emlrtRTEI);
  c_st.site = &mf_emlrtRSI;
  if ((!(1 > qEnd)) && (qEnd > 2147483646)) {
    d_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  i = uniqueVals->size[0] * uniqueVals->size[1];
  uniqueVals->size[0] = 1;
  uniqueVals->size[1] = b->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)uniqueVals, i, (int32_T)sizeof
                    (real_T), &qb_emlrtRTEI);
  i2 = b->size[0];
  for (i = 0; i < i2; i++) {
    uniqueVals->data[uniqueVals->size[0] * i] = b->data[i];
  }

  emxFree_real_T(&b);
  emxInit_boolean_T(sp, &b_idx, 2, &qb_emlrtRTEI, true);
  i = b_idx->size[0] * b_idx->size[1];
  b_idx->size[0] = 1;
  b_idx->size[1] = uniqueVals->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_idx, i, (int32_T)sizeof(boolean_T),
                    &qb_emlrtRTEI);
  i2 = uniqueVals->size[0] * uniqueVals->size[1];
  for (i = 0; i < i2; i++) {
    b_idx->data[i] = muDoubleScalarIsInf(uniqueVals->data[i]);
  }

  emxInit_boolean_T(sp, &r5, 2, &qb_emlrtRTEI, true);
  i = r5->size[0] * r5->size[1];
  r5->size[0] = 1;
  r5->size[1] = uniqueVals->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r5, i, (int32_T)sizeof(boolean_T),
                    &qb_emlrtRTEI);
  i2 = uniqueVals->size[0] * uniqueVals->size[1];
  for (i = 0; i < i2; i++) {
    r5->data[i] = muDoubleScalarIsNaN(uniqueVals->data[i]);
  }

  for (i = 0; i < 2; i++) {
    c_idx[i] = b_idx->size[i];
  }

  for (i = 0; i < 2; i++) {
    iv30[i] = r5->size[i];
  }

  if ((c_idx[0] != iv30[0]) || (c_idx[1] != iv30[1])) {
    emlrtSizeEqCheckNDR2012b(&c_idx[0], &iv30[0], &d_emlrtECI, sp);
  }

  st.site = &df_emlrtRSI;
  i = b_idx->size[0] * b_idx->size[1];
  b_idx->size[0] = 1;
  emxEnsureCapacity(&st, (emxArray__common *)b_idx, i, (int32_T)sizeof(boolean_T),
                    &qb_emlrtRTEI);
  i2 = b_idx->size[0];
  i = b_idx->size[1];
  i2 *= i;
  for (i = 0; i < i2; i++) {
    b_idx->data[i] = (b_idx->data[i] || r5->data[i]);
  }

  emxFree_boolean_T(&r5);
  b_st.site = &rf_emlrtRSI;
  k = b_idx->size[1];
  while ((k >= 1) && (!b_idx->data[k - 1])) {
    k--;
  }

  if (k <= uniqueVals->size[1]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &yd_emlrtRTEI,
      "MATLAB:subsdeldimmismatch", 0);
  }

  b_st.site = &sf_emlrtRSI;
  i = uniqueVals->size[1];
  c_st.site = &tf_emlrtRSI;
  i2 = 0;
  d_st.site = &vf_emlrtRSI;
  overflow = ((!(1 > b_idx->size[1])) && (b_idx->size[1] > 2147483646));
  if (overflow) {
    e_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (k = 1; k <= b_idx->size[1]; k++) {
    i2 += b_idx->data[k - 1];
  }

  i2 = uniqueVals->size[1] - i2;
  q = -1;
  c_st.site = &uf_emlrtRSI;
  overflow = ((!(1 > uniqueVals->size[1])) && (uniqueVals->size[1] > 2147483646));
  if (overflow) {
    d_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 1; k <= i; k++) {
    if ((k > b_idx->size[1]) || (!b_idx->data[k - 1])) {
      q++;
      uniqueVals->data[q] = uniqueVals->data[k - 1];
    }
  }

  emxFree_boolean_T(&b_idx);
  if (i2 <= i) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &xd_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > i2) {
    i = 0;
  } else {
    i = i2;
  }

  i2 = uniqueVals->size[0] * uniqueVals->size[1];
  uniqueVals->size[1] = i;
  emxEnsureCapacity(&b_st, (emxArray__common *)uniqueVals, i2, (int32_T)sizeof
                    (real_T), &tb_emlrtRTEI);
  *isDegenerate = (i <= 1);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void getDegenerateThresholds(const emlrtStack *sp, const emxArray_real_T
  *uniqueVals, emxArray_real_T *thresh)
{
  int32_T i14;
  emxArray_real_T *threshL;
  int32_T loop_ub;
  real_T ndbl;
  int32_T n;
  real_T anew;
  boolean_T n_too_large;
  int32_T q;
  emxArray_real_T *y;
  int32_T result;
  cell_wrap_17 reshapes[2];
  int32_T i15;
  cell_wrap_17 b_reshapes[2];
  int32_T b_loop_ub;
  emxArray_real_T *r2;
  emxArray_boolean_T *r3;
  emxArray_real_T *b_uniqueVals;
  int32_T exponent;
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
  if ((uniqueVals->size[0] == 0) || (uniqueVals->size[1] == 0)) {
    i14 = thresh->size[0] * thresh->size[1];
    thresh->size[0] = 1;
    thresh->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)thresh, i14, (int32_T)sizeof
                      (real_T), &hb_emlrtRTEI);
    thresh->data[0] = 1.0;
  } else if (1.0 - (real_T)(uniqueVals->size[0] * uniqueVals->size[1]) > 0.0) {
    i14 = uniqueVals->size[0] * uniqueVals->size[1];
    if (!(1 <= i14)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i14, &hd_emlrtBCI, sp);
    }

    emxInit_real_T(sp, &threshL, 2, &ib_emlrtRTEI, true);
    if (uniqueVals->data[0] > 1.0) {
      i14 = uniqueVals->size[0] * uniqueVals->size[1];
      if (!(1 <= i14)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i14, &gd_emlrtBCI, sp);
      }

      ndbl = muDoubleScalarMin(1.0, muDoubleScalarCeil(uniqueVals->data[0]) -
        1.0);
      st.site = &yc_emlrtRSI;
      b_st.site = &rb_emlrtRSI;
      c_st.site = &sb_emlrtRSI;
      if (muDoubleScalarIsNaN(ndbl)) {
        n = 1;
        anew = rtNaN;
        n_too_large = false;
      } else if (ndbl < 1.0) {
        n = 0;
        anew = 1.0;
        n_too_large = false;
      } else if (muDoubleScalarIsInf(ndbl)) {
        n = 1;
        anew = rtNaN;
        n_too_large = !(1.0 == ndbl);
      } else {
        anew = 1.0;
        ndbl = muDoubleScalarFloor((ndbl - 1.0) + 0.5);
        ndbl++;
        n_too_large = false;
        if (ndbl >= 0.0) {
          n = (int32_T)ndbl;
        } else {
          n = 0;
        }
      }

      d_st.site = &tb_emlrtRSI;
      if (!n_too_large) {
      } else {
        emlrtErrorWithMessageIdR2012b(&d_st, &jd_emlrtRTEI,
          "Coder:MATLAB:pmaxsize", 0);
      }

      emxInit_real_T(&d_st, &y, 2, &hb_emlrtRTEI, true);
      i14 = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = n;
      emxEnsureCapacity(&c_st, (emxArray__common *)y, i14, (int32_T)sizeof
                        (real_T), &hb_emlrtRTEI);
      if (n > 0) {
        y->data[0] = anew;
      }

      st.site = &yc_emlrtRSI;
      b_st.site = &dd_emlrtRSI;
      if (!(y->size[1] == 0)) {
        q = 1;
      } else {
        q = uniqueVals->size[0];
      }

      c_st.site = &ed_emlrtRSI;
      if ((1 == q) || (y->size[1] == 0)) {
        n_too_large = true;
      } else {
        n_too_large = false;
      }

      if (n_too_large) {
      } else {
        emlrtErrorWithMessageIdR2012b(&c_st, &wd_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if (q == uniqueVals->size[0]) {
      } else {
        n_too_large = false;
      }

      if (n_too_large) {
      } else {
        emlrtErrorWithMessageIdR2012b(&c_st, &wd_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if (!(y->size[1] == 0)) {
        result = y->size[1];
      } else {
        result = 0;
      }

      emxInitMatrix_cell_wrap_17(&b_st, b_reshapes, &jb_emlrtRTEI, true);
      i14 = b_reshapes[0].f1->size[0] * b_reshapes[0].f1->size[1];
      b_reshapes[0].f1->size[0] = q;
      b_reshapes[0].f1->size[1] = result;
      emxEnsureCapacity(&b_st, (emxArray__common *)b_reshapes[0].f1, i14,
                        (int32_T)sizeof(real_T), &hb_emlrtRTEI);
      loop_ub = q * result;
      for (i14 = 0; i14 < loop_ub; i14++) {
        b_reshapes[0].f1->data[i14] = y->data[i14];
      }

      emxFree_real_T(&y);
      result = uniqueVals->size[1];
      i14 = threshL->size[0] * threshL->size[1];
      threshL->size[0] = b_reshapes[0].f1->size[0];
      threshL->size[1] = b_reshapes[0].f1->size[1] + result;
      emxEnsureCapacity(&b_st, (emxArray__common *)threshL, i14, (int32_T)sizeof
                        (real_T), &hb_emlrtRTEI);
      loop_ub = b_reshapes[0].f1->size[1];
      for (i14 = 0; i14 < loop_ub; i14++) {
        b_loop_ub = b_reshapes[0].f1->size[0];
        for (i15 = 0; i15 < b_loop_ub; i15++) {
          threshL->data[i15 + threshL->size[0] * i14] = b_reshapes[0].f1->
            data[i15 + b_reshapes[0].f1->size[0] * i14];
        }
      }

      for (i14 = 0; i14 < result; i14++) {
        for (i15 = 0; i15 < q; i15++) {
          threshL->data[i15 + threshL->size[0] * (i14 + b_reshapes[0].f1->size[1])]
            = uniqueVals->data[i15 + q * i14];
        }
      }

      emxFreeMatrix_cell_wrap_17(b_reshapes);
    } else {
      i14 = threshL->size[0] * threshL->size[1];
      threshL->size[0] = uniqueVals->size[0];
      threshL->size[1] = uniqueVals->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)threshL, i14, (int32_T)sizeof
                        (real_T), &hb_emlrtRTEI);
      loop_ub = uniqueVals->size[0] * uniqueVals->size[1];
      for (i14 = 0; i14 < loop_ub; i14++) {
        threshL->data[i14] = uniqueVals->data[i14];
      }
    }

    if (1.0 - (real_T)(threshL->size[0] * threshL->size[1]) > 0.0) {
      if (threshL->size[1] == 0) {
        n = 0;
      } else {
        n = muIntScalarMax_sint32(threshL->size[0], threshL->size[1]);
      }

      st.site = &ad_emlrtRSI;
      b_st.site = &dd_emlrtRSI;
      if (!(threshL->size[1] == 0)) {
        q = threshL->size[0];
      } else {
        q = 1;
      }

      c_st.site = &ed_emlrtRSI;
      if ((q == threshL->size[0]) || (threshL->size[1] == 0)) {
        n_too_large = true;
      } else {
        n_too_large = false;
      }

      if (n_too_large) {
      } else {
        emlrtErrorWithMessageIdR2012b(&c_st, &wd_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if (1 == q) {
      } else {
        n_too_large = false;
      }

      if (n_too_large) {
      } else {
        emlrtErrorWithMessageIdR2012b(&c_st, &wd_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if (!(threshL->size[1] == 0)) {
        result = threshL->size[1];
      } else {
        result = 0;
      }

      emxInitMatrix_cell_wrap_17(&b_st, reshapes, &jb_emlrtRTEI, true);
      i14 = reshapes[1].f1->size[0] * reshapes[1].f1->size[1];
      reshapes[1].f1->size[0] = q;
      reshapes[1].f1->size[1] = 1;
      emxEnsureCapacity(&b_st, (emxArray__common *)reshapes[1].f1, i14, (int32_T)
                        sizeof(real_T), &hb_emlrtRTEI);
      for (i14 = 0; i14 < q; i14++) {
        reshapes[1].f1->data[i14] = 0.0;
      }

      i14 = thresh->size[0] * thresh->size[1];
      thresh->size[0] = q;
      thresh->size[1] = result + reshapes[1].f1->size[1];
      emxEnsureCapacity(&b_st, (emxArray__common *)thresh, i14, (int32_T)sizeof
                        (real_T), &hb_emlrtRTEI);
      for (i14 = 0; i14 < result; i14++) {
        for (i15 = 0; i15 < q; i15++) {
          thresh->data[i15 + thresh->size[0] * i14] = threshL->data[i15 + q *
            i14];
        }
      }

      loop_ub = reshapes[1].f1->size[1];
      for (i14 = 0; i14 < loop_ub; i14++) {
        b_loop_ub = reshapes[1].f1->size[0];
        for (i15 = 0; i15 < b_loop_ub; i15++) {
          thresh->data[i15 + thresh->size[0] * (i14 + result)] = reshapes[1].
            f1->data[i15 + reshapes[1].f1->size[0] * i14];
        }
      }

      emxFreeMatrix_cell_wrap_17(reshapes);
      i14 = uniqueVals->size[0] * uniqueVals->size[1];
      if (!(1 <= i14)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i14, &fd_emlrtBCI, sp);
      }

      ndbl = muDoubleScalarMax(muDoubleScalarFloor(uniqueVals->data[0]), 0.0);
      q = 1;
      emxInit_real_T1(sp, &r2, 1, &hb_emlrtRTEI, true);
      emxInit_boolean_T1(sp, &r3, 1, &hb_emlrtRTEI, true);
      emxInit_real_T1(sp, &b_uniqueVals, 1, &hb_emlrtRTEI, true);
      while (q <= 1) {
        ndbl++;
        if ((!muDoubleScalarIsInf(ndbl)) && (!muDoubleScalarIsNaN(ndbl))) {
          frexp(ndbl, &exponent);
          anew = ldexp(1.0, exponent - 53);
        } else {
          anew = rtNaN;
        }

        i14 = b_uniqueVals->size[0];
        b_uniqueVals->size[0] = uniqueVals->size[0] * uniqueVals->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)b_uniqueVals, i14, (int32_T)
                          sizeof(real_T), &hb_emlrtRTEI);
        loop_ub = uniqueVals->size[0] * uniqueVals->size[1];
        for (i14 = 0; i14 < loop_ub; i14++) {
          b_uniqueVals->data[i14] = uniqueVals->data[i14] - ndbl;
        }

        st.site = &bd_emlrtRSI;
        b_abs(&st, b_uniqueVals, r2);
        i14 = r3->size[0];
        r3->size[0] = r2->size[0];
        emxEnsureCapacity(sp, (emxArray__common *)r3, i14, (int32_T)sizeof
                          (boolean_T), &hb_emlrtRTEI);
        loop_ub = r2->size[0];
        for (i14 = 0; i14 < loop_ub; i14++) {
          r3->data[i14] = (r2->data[i14] < anew);
        }

        st.site = &bd_emlrtRSI;
        if (any(&st, r3)) {
        } else {
          i14 = thresh->size[0] * thresh->size[1];
          i15 = (int32_T)(n + 1U);
          if (!((i15 >= 1) && (i15 <= i14))) {
            emlrtDynamicBoundsCheckR2012b(i15, 1, i14, &id_emlrtBCI, sp);
          }

          thresh->data[i15 - 1] = ndbl;
          q = 2;
        }
      }

      emxFree_real_T(&b_uniqueVals);
      emxFree_boolean_T(&r3);
      emxFree_real_T(&r2);
      st.site = &cd_emlrtRSI;
      b_st.site = &id_emlrtRSI;
      sort(&b_st, thresh);
    } else {
      i14 = thresh->size[0] * thresh->size[1];
      thresh->size[0] = threshL->size[0];
      thresh->size[1] = threshL->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)thresh, i14, (int32_T)sizeof
                        (real_T), &hb_emlrtRTEI);
      loop_ub = threshL->size[0] * threshL->size[1];
      for (i14 = 0; i14 < loop_ub; i14++) {
        thresh->data[i14] = threshL->data[i14];
      }
    }

    emxFree_real_T(&threshL);
  } else {
    i14 = thresh->size[0] * thresh->size[1];
    thresh->size[0] = uniqueVals->size[0];
    thresh->size[1] = uniqueVals->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)thresh, i14, (int32_T)sizeof
                      (real_T), &hb_emlrtRTEI);
    loop_ub = uniqueVals->size[0] * uniqueVals->size[1];
    for (i14 = 0; i14 < loop_ub; i14++) {
      thresh->data[i14] = uniqueVals->data[i14];
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void getpdf(const emlrtStack *sp, emxArray_real_T *A, real_T p[256], real_T
            *minA, real_T *maxA, boolean_T *emptyp)
{
  int32_T idx;
  int32_T N;
  boolean_T exitg3;
  int32_T A_idx_0;
  boolean_T guard2 = false;
  boolean_T overflow;
  real_T numCores;
  emxArray_boolean_T *nans;
  boolean_T guard1 = false;
  boolean_T exitg2;
  int32_T i;
  emxArray_int32_T *r4;
  emxArray_real_T *img;
  boolean_T exitg1;
  emxArray_uint8_T *b_A;
  boolean_T nanFlag;
  real_T localBins1[256];
  real_T localBins2[256];
  real_T localBins3[256];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  *emptyp = true;
  idx = 1;
  N = A->size[0] * A->size[1];
  exitg3 = false;
  while ((!exitg3) && (idx <= N)) {
    A_idx_0 = A->size[0] * A->size[1];
    if (!((idx >= 1) && (idx <= A_idx_0))) {
      emlrtDynamicBoundsCheckR2012b(idx, 1, A_idx_0, &jd_emlrtBCI, sp);
    }

    if (!((!muDoubleScalarIsInf(A->data[idx - 1])) && (!muDoubleScalarIsNaN
          (A->data[idx - 1])))) {
      idx++;
    } else {
      exitg3 = true;
    }
  }

  if (idx <= N) {
    A_idx_0 = A->size[0] * A->size[1];
    if (!((idx >= 1) && (idx <= A_idx_0))) {
      emlrtDynamicBoundsCheckR2012b(idx, 1, A_idx_0, &rd_emlrtBCI, sp);
    }

    *minA = A->data[idx - 1];
    A_idx_0 = A->size[0] * A->size[1];
    if (!((idx >= 1) && (idx <= A_idx_0))) {
      emlrtDynamicBoundsCheckR2012b(idx, 1, A_idx_0, &sd_emlrtBCI, sp);
    }

    *maxA = A->data[idx - 1];
    st.site = &ke_emlrtRSI;
    if ((!(idx + 1 > N)) && (N > 2147483646)) {
      b_st.site = &eb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    while (idx + 1 <= N) {
      A_idx_0 = A->size[0] * A->size[1];
      if (!((idx + 1 >= 1) && (idx + 1 <= A_idx_0))) {
        emlrtDynamicBoundsCheckR2012b(idx + 1, 1, A_idx_0, &kd_emlrtBCI, sp);
      }

      if ((A->data[idx] < *minA) && ((!muDoubleScalarIsInf(A->data[idx])) &&
           (!muDoubleScalarIsNaN(A->data[idx])))) {
        *minA = A->data[idx];
      } else {
        if ((A->data[idx] > *maxA) && ((!muDoubleScalarIsInf(A->data[idx])) && (
              !muDoubleScalarIsNaN(A->data[idx])))) {
          *maxA = A->data[idx];
        }
      }

      idx++;
    }

    if (*minA == *maxA) {
    } else {
      numCores = *maxA - *minA;
      A_idx_0 = A->size[0] * A->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)A, A_idx_0, (int32_T)sizeof
                        (real_T), &nb_emlrtRTEI);
      idx = A->size[0];
      N = A->size[1];
      idx *= N;
      for (A_idx_0 = 0; A_idx_0 < idx; A_idx_0++) {
        A->data[A_idx_0] = (A->data[A_idx_0] - *minA) / numCores;
      }

      emxInit_boolean_T1(sp, &nans, 1, &ob_emlrtRTEI, true);
      A_idx_0 = nans->size[0];
      nans->size[0] = A->size[0] * A->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)nans, A_idx_0, (int32_T)sizeof
                        (boolean_T), &nb_emlrtRTEI);
      idx = A->size[0] * A->size[1];
      for (A_idx_0 = 0; A_idx_0 < idx; A_idx_0++) {
        nans->data[A_idx_0] = muDoubleScalarIsNaN(A->data[A_idx_0]);
      }

      N = nans->size[0];
      for (i = 0; i < N; i++) {
        if (!nans->data[i]) {
          A_idx_0 = A->size[0] * A->size[1];
          if (!((i + 1 >= 1) && (i + 1 <= A_idx_0))) {
            emlrtDynamicBoundsCheckR2012b(i + 1, 1, A_idx_0, &ld_emlrtBCI, sp);
          }
        }
      }

      N = nans->size[0];
      idx = 0;
      for (i = 0; i < N; i++) {
        if (!nans->data[i]) {
          idx++;
        }
      }

      if (!(idx == 0)) {
        emxInit_int32_T(sp, &r4, 1, &nb_emlrtRTEI, true);
        N = nans->size[0] - 1;
        idx = 0;
        for (i = 0; i <= N; i++) {
          if (!nans->data[i]) {
            idx++;
          }
        }

        A_idx_0 = r4->size[0];
        r4->size[0] = idx;
        emxEnsureCapacity(sp, (emxArray__common *)r4, A_idx_0, (int32_T)sizeof
                          (int32_T), &nb_emlrtRTEI);
        idx = 0;
        for (i = 0; i <= N; i++) {
          if (!nans->data[i]) {
            r4->data[idx] = i + 1;
            idx++;
          }
        }

        emxInit_real_T1(sp, &img, 1, &nb_emlrtRTEI, true);
        st.site = &le_emlrtRSI;
        A_idx_0 = img->size[0];
        img->size[0] = r4->size[0];
        emxEnsureCapacity(&st, (emxArray__common *)img, A_idx_0, (int32_T)sizeof
                          (real_T), &nb_emlrtRTEI);
        idx = r4->size[0];
        for (A_idx_0 = 0; A_idx_0 < idx; A_idx_0++) {
          img->data[A_idx_0] = A->data[r4->data[A_idx_0] - 1];
        }

        emxInit_uint8_T(&st, &b_A, 1, &pb_emlrtRTEI, true);
        b_st.site = &pe_emlrtRSI;
        c_st.site = &qe_emlrtRSI;
        A_idx_0 = b_A->size[0];
        b_A->size[0] = r4->size[0];
        emxEnsureCapacity(&c_st, (emxArray__common *)b_A, A_idx_0, (int32_T)
                          sizeof(uint8_T), &nb_emlrtRTEI);
        d_st.site = &re_emlrtRSI;
        grayto8_real64(&img->data[0], &b_A->data[0], (real_T)r4->size[0]);
        st.site = &me_emlrtRSI;
        b_st.site = &se_emlrtRSI;
        c_st.site = &te_emlrtRSI;
        numCores = 1.0;
        getnumcores(&numCores);
        emxFree_real_T(&img);
        emxFree_int32_T(&r4);
        if ((b_A->size[0] > 500000) && (numCores > 1.0)) {
          overflow = true;
        } else {
          overflow = false;
        }

        if (overflow) {
          c_st.site = &ue_emlrtRSI;
          nanFlag = false;
          overflow = false;
          tbbhist_uint8(&b_A->data[0], (real_T)b_A->size[0], (real_T)b_A->size[0],
                        (real_T)b_A->size[0] / (real_T)b_A->size[0], p, 256.0,
                        256.0, &overflow, &nanFlag);
        } else {
          c_st.site = &ve_emlrtRSI;
          memset(&p[0], 0, sizeof(real_T) << 8);
          memset(&localBins1[0], 0, sizeof(real_T) << 8);
          memset(&localBins2[0], 0, sizeof(real_T) << 8);
          memset(&localBins3[0], 0, sizeof(real_T) << 8);
          for (i = 1; i + 3 <= b_A->size[0]; i += 4) {
            A_idx_0 = b_A->size[0];
            if (!((i >= 1) && (i <= A_idx_0))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, A_idx_0, &qd_emlrtBCI, &c_st);
            }

            A_idx_0 = b_A->size[0];
            if (!((i + 1 >= 1) && (i + 1 <= A_idx_0))) {
              emlrtDynamicBoundsCheckR2012b(i + 1, 1, A_idx_0, &pd_emlrtBCI,
                &c_st);
            }

            A_idx_0 = b_A->size[0];
            if (!((i + 2 >= 1) && (i + 2 <= A_idx_0))) {
              emlrtDynamicBoundsCheckR2012b(i + 2, 1, A_idx_0, &od_emlrtBCI,
                &c_st);
            }

            A_idx_0 = b_A->size[0];
            if (!((i + 3 >= 1) && (i + 3 <= A_idx_0))) {
              emlrtDynamicBoundsCheckR2012b(i + 3, 1, A_idx_0, &nd_emlrtBCI,
                &c_st);
            }

            localBins1[b_A->data[i - 1]]++;
            localBins2[b_A->data[i]]++;
            localBins3[b_A->data[i + 1]]++;
            p[b_A->data[i + 2]]++;
          }

          while (i <= b_A->size[0]) {
            A_idx_0 = b_A->size[0];
            if (!((i >= 1) && (i <= A_idx_0))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, A_idx_0, &md_emlrtBCI, &c_st);
            }

            p[b_A->data[i - 1]]++;
            i++;
          }

          for (i = 0; i < 256; i++) {
            p[i] = ((p[i] + localBins1[i]) + localBins2[i]) + localBins3[i];
          }

          overflow = false;
          nanFlag = false;
        }

        emxFree_uint8_T(&b_A);
        if (overflow) {
          c_st.site = &we_emlrtRSI;
          d_warning(&c_st);
        }

        if (nanFlag) {
          c_st.site = &xe_emlrtRSI;
          e_warning(&c_st);
        }

        numCores = p[0];
        for (idx = 0; idx < 255; idx++) {
          numCores += p[idx + 1];
        }

        for (A_idx_0 = 0; A_idx_0 < 256; A_idx_0++) {
          p[A_idx_0] /= numCores;
        }

        *emptyp = false;
      }

      emxFree_boolean_T(&nans);
    }
  } else {
    st.site = &ne_emlrtRSI;
    b_st.site = &ye_emlrtRSI;
    c_st.site = &hc_emlrtRSI;
    A_idx_0 = A->size[0] * A->size[1];
    guard2 = false;
    if (A_idx_0 == 1) {
      guard2 = true;
    } else {
      A_idx_0 = A->size[0] * A->size[1];
      if (A_idx_0 != 1) {
        guard2 = true;
      } else {
        overflow = false;
      }
    }

    if (guard2) {
      overflow = true;
    }

    if (overflow) {
    } else {
      emlrtErrorWithMessageIdR2012b(&c_st, &qd_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    A_idx_0 = A->size[0] * A->size[1];
    if (A_idx_0 > 0) {
    } else {
      emlrtErrorWithMessageIdR2012b(&c_st, &pd_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    d_st.site = &ic_emlrtRSI;
    N = 1;
    A_idx_0 = A->size[0] * A->size[1];
    *minA = A->data[0];
    idx = A->size[0] * A->size[1];
    if (idx > 1) {
      if (muDoubleScalarIsNaN(A->data[0])) {
        e_st.site = &kc_emlrtRSI;
        idx = A->size[0] * A->size[1];
        if (2 > idx) {
          overflow = false;
        } else {
          idx = A->size[0] * A->size[1];
          overflow = (idx > 2147483646);
        }

        if (overflow) {
          f_st.site = &eb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        idx = 2;
        exitg2 = false;
        while ((!exitg2) && (idx <= A_idx_0)) {
          N = idx;
          if (!muDoubleScalarIsNaN(A->data[idx - 1])) {
            *minA = A->data[idx - 1];
            exitg2 = true;
          } else {
            idx++;
          }
        }
      }

      idx = A->size[0] * A->size[1];
      if (N < idx) {
        e_st.site = &jc_emlrtRSI;
        idx = A->size[0] * A->size[1];
        if (N + 1 > idx) {
          overflow = false;
        } else {
          idx = A->size[0] * A->size[1];
          overflow = (idx > 2147483646);
        }

        if (overflow) {
          f_st.site = &eb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        while (N + 1 <= A_idx_0) {
          if (A->data[N] < *minA) {
            *minA = A->data[N];
          }

          N++;
        }
      }
    }

    st.site = &oe_emlrtRSI;
    b_st.site = &gc_emlrtRSI;
    c_st.site = &hc_emlrtRSI;
    A_idx_0 = A->size[0] * A->size[1];
    guard1 = false;
    if (A_idx_0 == 1) {
      guard1 = true;
    } else {
      A_idx_0 = A->size[0] * A->size[1];
      if (A_idx_0 != 1) {
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
      emlrtErrorWithMessageIdR2012b(&c_st, &qd_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    A_idx_0 = A->size[0] * A->size[1];
    if (A_idx_0 > 0) {
    } else {
      emlrtErrorWithMessageIdR2012b(&c_st, &pd_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    d_st.site = &ic_emlrtRSI;
    N = 1;
    A_idx_0 = A->size[0] * A->size[1];
    *maxA = A->data[0];
    idx = A->size[0] * A->size[1];
    if (idx > 1) {
      if (muDoubleScalarIsNaN(A->data[0])) {
        e_st.site = &kc_emlrtRSI;
        idx = A->size[0] * A->size[1];
        if (2 > idx) {
          overflow = false;
        } else {
          idx = A->size[0] * A->size[1];
          overflow = (idx > 2147483646);
        }

        if (overflow) {
          f_st.site = &eb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        idx = 2;
        exitg1 = false;
        while ((!exitg1) && (idx <= A_idx_0)) {
          N = idx;
          if (!muDoubleScalarIsNaN(A->data[idx - 1])) {
            *maxA = A->data[idx - 1];
            exitg1 = true;
          } else {
            idx++;
          }
        }
      }

      idx = A->size[0] * A->size[1];
      if (N < idx) {
        e_st.site = &jc_emlrtRSI;
        idx = A->size[0] * A->size[1];
        if (N + 1 > idx) {
          overflow = false;
        } else {
          idx = A->size[0] * A->size[1];
          overflow = (idx > 2147483646);
        }

        if (overflow) {
          f_st.site = &eb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        while (N + 1 <= A_idx_0) {
          if (A->data[N] > *maxA) {
            *maxA = A->data[N];
          }

          N++;
        }
      }
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void map2OriginalScale(const emlrtStack *sp, const emxArray_real_T *thresh,
  real_T minA, real_T maxA, emxArray_real_T *sclThresh)
{
  real_T b;
  int32_T i20;
  int32_T loop_ub;
  b = maxA - minA;
  i20 = sclThresh->size[0] * sclThresh->size[1];
  sclThresh->size[0] = 1;
  sclThresh->size[1] = thresh->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)sclThresh, i20, (int32_T)sizeof
                    (real_T), &wb_emlrtRTEI);
  loop_ub = thresh->size[0] * thresh->size[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    sclThresh->data[i20] = minA + thresh->data[i20] / 255.0 * b;
  }
}

/* End of code generation (multithresh.c) */
