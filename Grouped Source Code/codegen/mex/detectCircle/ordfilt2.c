/*
 * ordfilt2.c
 *
 * Code generation for function 'ordfilt2'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "ordfilt2.h"
#include "detectCircle_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "repmat.h"
#include "validateattributes.h"
#include "abs.h"
#include "indexShapeCheck.h"
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
static emlrtRSInfo wg_emlrtRSI = { 83, "ordfilt2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\ordfilt2.m"
};

static emlrtRSInfo xg_emlrtRSI = { 99, "ordfilt2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\ordfilt2.m"
};

static emlrtRSInfo yg_emlrtRSI = { 102, "ordfilt2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\ordfilt2.m"
};

static emlrtRSInfo ah_emlrtRSI = { 116, "ordfilt2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\ordfilt2.m"
};

static emlrtRSInfo bh_emlrtRSI = { 72, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

static emlrtRSInfo ch_emlrtRSI = { 385, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

static emlrtRSInfo dh_emlrtRSI = { 400, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

static emlrtRSInfo eh_emlrtRSI = { 140, "ordfilt2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\ordfilt2.m"
};

static emlrtRTEInfo dc_emlrtRTEI = { 1, 14, "ordfilt2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\ordfilt2.m"
};

static emlrtRTEInfo xc_emlrtRTEI = { 102, 5, "ordfilt2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\ordfilt2.m"
};

static emlrtECInfo g_emlrtECI = { -1, 114, 25, "ordfilt2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\ordfilt2.m"
};

static emlrtBCInfo wg_emlrtBCI = { -1, -1, 424, 102, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo xg_emlrtBCI = { -1, -1, 424, 104, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo yg_emlrtBCI = { -1, -1, 424, 19, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo ah_emlrtBCI = { -1, -1, 424, 58, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo bh_emlrtBCI = { -1, -1, 401, 19, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo ch_emlrtBCI = { -1, -1, 401, 21, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo dh_emlrtBCI = { -1, -1, 394, 19, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo eh_emlrtBCI = { -1, -1, 394, 21, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo fh_emlrtBCI = { -1, -1, 387, 19, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo gh_emlrtBCI = { -1, -1, 387, 21, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo hh_emlrtBCI = { -1, -1, 380, 19, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo ih_emlrtBCI = { -1, -1, 380, 21, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

/* Function Definitions */
void ordfilt2(const emlrtStack *sp, emxArray_real_T *varargin_1)
{
  int32_T idx;
  int32_T indices_data[25];
  int8_T jj_data[25];
  int32_T ii;
  int32_T jj;
  boolean_T exitg3;
  int32_T iv36[2];
  int32_T iv37[2];
  int32_T iv38[2];
  int32_T rows_size[1];
  int32_T i31;
  int32_T cols_size[1];
  real_T rows_data[25];
  emxArray_real_T *b_varargin_1;
  real_T cols_data[25];
  emxArray_real_T *c_varargin_1;
  emxArray_real_T b_rows_data;
  emxArray_real_T b_cols_data;
  boolean_T overflow;
  real_T mtmp;
  boolean_T exitg2;
  real_T padSize;
  real_T sizeB[2];
  boolean_T exitg1;
  emxArray_real_T *Apad;
  real_T b_sizeB[2];
  int32_T i32;
  real_T startIdx[2];
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
  st.site = &wg_emlrtRSI;
  b_st.site = &wf_emlrtRSI;
  idx = 0;
  ii = 1;
  jj = 1;
  exitg3 = false;
  while ((!exitg3) && (jj <= 5)) {
    idx++;
    indices_data[idx - 1] = ii;
    jj_data[idx - 1] = (int8_T)jj;
    if (idx >= 25) {
      exitg3 = true;
    } else {
      ii++;
      if (ii > 5) {
        ii = 1;
        jj++;
      }
    }
  }

  if (1 > idx) {
    jj = 0;
  } else {
    jj = idx;
  }

  iv36[0] = 1;
  iv36[1] = jj;
  c_st.site = &xf_emlrtRSI;
  indexShapeCheck(&c_st, 25, iv36);
  if (1 > idx) {
    ii = 0;
  } else {
    ii = idx;
  }

  iv37[0] = 1;
  iv37[1] = ii;
  c_st.site = &yf_emlrtRSI;
  indexShapeCheck(&c_st, 25, iv37);
  iv38[0] = 1;
  if (1 > idx) {
    iv38[1] = 0;
  } else {
    iv38[1] = idx;
  }

  c_st.site = &ag_emlrtRSI;
  indexShapeCheck(&c_st, 25, iv38);
  rows_size[0] = jj;
  for (i31 = 0; i31 < jj; i31++) {
    rows_data[i31] = (real_T)indices_data[i31] - 3.0;
  }

  cols_size[0] = ii;
  for (i31 = 0; i31 < ii; i31++) {
    cols_data[i31] = (real_T)jj_data[i31] - 3.0;
  }

  emxInit_real_T1(sp, &b_varargin_1, 1, &dc_emlrtRTEI, true);
  emxInit_real_T1(sp, &c_varargin_1, 1, &dc_emlrtRTEI, true);
  b_rows_data.data = (real_T *)&rows_data;
  b_rows_data.size = (int32_T *)&rows_size;
  b_rows_data.allocatedSize = 25;
  b_rows_data.numDimensions = 1;
  b_rows_data.canFreeData = false;
  st.site = &xg_emlrtRSI;
  b_abs(&st, &b_rows_data, c_varargin_1);
  b_cols_data.data = (real_T *)&cols_data;
  b_cols_data.size = (int32_T *)&cols_size;
  b_cols_data.allocatedSize = 25;
  b_cols_data.numDimensions = 1;
  b_cols_data.canFreeData = false;
  st.site = &xg_emlrtRSI;
  b_abs(&st, &b_cols_data, b_varargin_1);
  st.site = &xg_emlrtRSI;
  b_st.site = &gc_emlrtRSI;
  c_st.site = &hc_emlrtRSI;
  if ((c_varargin_1->size[0] == 1) || (c_varargin_1->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &qd_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (c_varargin_1->size[0] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &pd_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &ic_emlrtRSI;
  ii = 1;
  jj = c_varargin_1->size[0];
  mtmp = c_varargin_1->data[0];
  if (c_varargin_1->size[0] > 1) {
    if (muDoubleScalarIsNaN(c_varargin_1->data[0])) {
      e_st.site = &kc_emlrtRSI;
      overflow = (c_varargin_1->size[0] > 2147483646);
      if (overflow) {
        f_st.site = &eb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      idx = 2;
      exitg2 = false;
      while ((!exitg2) && (idx <= jj)) {
        ii = idx;
        if (!muDoubleScalarIsNaN(c_varargin_1->data[idx - 1])) {
          mtmp = c_varargin_1->data[idx - 1];
          exitg2 = true;
        } else {
          idx++;
        }
      }
    }

    if (ii < c_varargin_1->size[0]) {
      e_st.site = &jc_emlrtRSI;
      overflow = ((!(ii + 1 > c_varargin_1->size[0])) && (c_varargin_1->size[0] >
        2147483646));
      if (overflow) {
        f_st.site = &eb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (ii + 1 <= jj) {
        if (c_varargin_1->data[ii] > mtmp) {
          mtmp = c_varargin_1->data[ii];
        }

        ii++;
      }
    }
  }

  st.site = &xg_emlrtRSI;
  b_st.site = &gc_emlrtRSI;
  c_st.site = &hc_emlrtRSI;
  if ((b_varargin_1->size[0] == 1) || (b_varargin_1->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &qd_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (b_varargin_1->size[0] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &pd_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &ic_emlrtRSI;
  ii = 1;
  jj = b_varargin_1->size[0];
  padSize = b_varargin_1->data[0];
  if (b_varargin_1->size[0] > 1) {
    if (muDoubleScalarIsNaN(b_varargin_1->data[0])) {
      e_st.site = &kc_emlrtRSI;
      overflow = (b_varargin_1->size[0] > 2147483646);
      if (overflow) {
        f_st.site = &eb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      idx = 2;
      exitg1 = false;
      while ((!exitg1) && (idx <= jj)) {
        ii = idx;
        if (!muDoubleScalarIsNaN(b_varargin_1->data[idx - 1])) {
          padSize = b_varargin_1->data[idx - 1];
          exitg1 = true;
        } else {
          idx++;
        }
      }
    }

    if (ii < b_varargin_1->size[0]) {
      e_st.site = &jc_emlrtRSI;
      overflow = ((!(ii + 1 > b_varargin_1->size[0])) && (b_varargin_1->size[0] >
        2147483646));
      if (overflow) {
        f_st.site = &eb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (ii + 1 <= jj) {
        if (b_varargin_1->data[ii] > padSize) {
          padSize = b_varargin_1->data[ii];
        }

        ii++;
      }
    }
  }

  emxFree_real_T(&b_varargin_1);
  padSize = muDoubleScalarMax(mtmp, padSize);
  for (i31 = 0; i31 < 2; i31++) {
    sizeB[i31] = padSize;
  }

  st.site = &yg_emlrtRSI;
  b_st.site = &lb_emlrtRSI;
  validateattributes(&b_st, sizeB);
  emxInit_real_T(&st, &Apad, 2, &xc_emlrtRTEI, true);
  if ((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0)) {
    for (i31 = 0; i31 < 2; i31++) {
      mtmp = (real_T)varargin_1->size[i31] + 2.0 * sizeB[i31];
      sizeB[i31] = mtmp;
    }

    b_sizeB[0] = sizeB[0];
    b_sizeB[1] = sizeB[1];
    b_st.site = &mb_emlrtRSI;
    repmat(&b_st, b_sizeB, Apad);
  } else {
    b_st.site = &bh_emlrtRSI;
    for (i31 = 0; i31 < 2; i31++) {
      b_sizeB[i31] = (real_T)varargin_1->size[i31] + 2.0 * sizeB[i31];
    }

    i31 = Apad->size[0] * Apad->size[1];
    Apad->size[0] = (int32_T)b_sizeB[0];
    Apad->size[1] = (int32_T)b_sizeB[1];
    emxEnsureCapacity(&b_st, (emxArray__common *)Apad, i31, (int32_T)sizeof
                      (real_T), &dc_emlrtRTEI);
    for (jj = 0; jj < (int32_T)sizeB[1]; jj++) {
      i31 = Apad->size[0];
      for (idx = 0; idx < i31; idx++) {
        i32 = Apad->size[0];
        if (!((idx + 1 >= 1) && (idx + 1 <= i32))) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, i32, &hh_emlrtBCI, &b_st);
        }

        i32 = Apad->size[1];
        if (!((jj + 1 >= 1) && (jj + 1 <= i32))) {
          emlrtDynamicBoundsCheckR2012b(jj + 1, 1, i32, &ih_emlrtBCI, &b_st);
        }

        Apad->data[idx + Apad->size[0] * jj] = 0.0;
      }
    }

    jj = (varargin_1->size[1] + (int32_T)sizeB[1]) + 1;
    ii = Apad->size[1];
    c_st.site = &ch_emlrtRSI;
    overflow = ((!(jj > Apad->size[1])) && (Apad->size[1] > 2147483646));
    if (overflow) {
      d_st.site = &eb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    while (jj <= ii) {
      i31 = Apad->size[0];
      for (idx = 0; idx < i31; idx++) {
        i32 = Apad->size[0];
        if (!((idx + 1 >= 1) && (idx + 1 <= i32))) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, i32, &fh_emlrtBCI, &b_st);
        }

        i32 = Apad->size[1];
        if (!((jj >= 1) && (jj <= i32))) {
          emlrtDynamicBoundsCheckR2012b(jj, 1, i32, &gh_emlrtBCI, &b_st);
        }

        Apad->data[idx + Apad->size[0] * (jj - 1)] = 0.0;
      }

      jj++;
    }

    for (jj = 0; jj < varargin_1->size[1]; jj++) {
      for (idx = 0; idx < (int32_T)sizeB[0]; idx++) {
        i31 = Apad->size[0];
        if (!((idx + 1 >= 1) && (idx + 1 <= i31))) {
          emlrtDynamicBoundsCheckR2012b(idx + 1, 1, i31, &dh_emlrtBCI, &b_st);
        }

        i31 = Apad->size[1];
        i32 = (jj + (int32_T)sizeB[1]) + 1;
        if (!((i32 >= 1) && (i32 <= i31))) {
          emlrtDynamicBoundsCheckR2012b(i32, 1, i31, &eh_emlrtBCI, &b_st);
        }

        Apad->data[idx + Apad->size[0] * (i32 - 1)] = 0.0;
      }
    }

    for (jj = 0; jj < varargin_1->size[1]; jj++) {
      idx = ((int32_T)sizeB[0] + varargin_1->size[0]) + 1;
      ii = Apad->size[0];
      c_st.site = &dh_emlrtRSI;
      overflow = ((!(idx > Apad->size[0])) && (Apad->size[0] > 2147483646));
      if (overflow) {
        d_st.site = &eb_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      while (idx <= ii) {
        i31 = Apad->size[0];
        if (!((idx >= 1) && (idx <= i31))) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, i31, &bh_emlrtBCI, &b_st);
        }

        i31 = Apad->size[1];
        i32 = (jj + (int32_T)sizeB[1]) + 1;
        if (!((i32 >= 1) && (i32 <= i31))) {
          emlrtDynamicBoundsCheckR2012b(i32, 1, i31, &ch_emlrtBCI, &b_st);
        }

        Apad->data[(idx + Apad->size[0] * (i32 - 1)) - 1] = 0.0;
        idx++;
      }
    }

    for (jj = 1; jj - 1 < varargin_1->size[1]; jj++) {
      for (idx = 1; idx - 1 < varargin_1->size[0]; idx++) {
        i31 = varargin_1->size[0];
        if (!((idx >= 1) && (idx <= i31))) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, i31, &wg_emlrtBCI, &b_st);
        }

        i31 = varargin_1->size[1];
        if (!((jj >= 1) && (jj <= i31))) {
          emlrtDynamicBoundsCheckR2012b(jj, 1, i31, &xg_emlrtBCI, &b_st);
        }

        i31 = Apad->size[0];
        i32 = idx + (int32_T)sizeB[0];
        if (!((i32 >= 1) && (i32 <= i31))) {
          emlrtDynamicBoundsCheckR2012b(i32, 1, i31, &yg_emlrtBCI, &b_st);
        }

        i31 = Apad->size[1];
        ii = jj + (int32_T)sizeB[1];
        if (!((ii >= 1) && (ii <= i31))) {
          emlrtDynamicBoundsCheckR2012b(ii, 1, i31, &ah_emlrtBCI, &b_st);
        }

        Apad->data[(i32 + Apad->size[0] * (ii - 1)) - 1] = varargin_1->data[(idx
          + varargin_1->size[0] * (jj - 1)) - 1];
      }
    }
  }

  if ((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0)) {
  } else {
    ii = Apad->size[0];
    i31 = c_varargin_1->size[0];
    c_varargin_1->size[0] = cols_size[0];
    emxEnsureCapacity(sp, (emxArray__common *)c_varargin_1, i31, (int32_T)sizeof
                      (real_T), &dc_emlrtRTEI);
    jj = cols_size[0];
    for (i31 = 0; i31 < jj; i31++) {
      c_varargin_1->data[i31] = cols_data[i31] * (real_T)ii;
    }

    i31 = c_varargin_1->size[0];
    if (i31 != rows_size[0]) {
      emlrtSizeEqCheck1DR2012b(i31, rows_size[0], &g_emlrtECI, sp);
    }

    ii = c_varargin_1->size[0];
    jj = c_varargin_1->size[0];
    for (i31 = 0; i31 < jj; i31++) {
      mtmp = muDoubleScalarRound(c_varargin_1->data[i31] + rows_data[i31]);
      if (mtmp < 2.147483648E+9) {
        if (mtmp >= -2.147483648E+9) {
          i32 = (int32_T)mtmp;
        } else {
          i32 = MIN_int32_T;
        }
      } else if (mtmp >= 2.147483648E+9) {
        i32 = MAX_int32_T;
      } else {
        i32 = 0;
      }

      indices_data[i31] = i32;
    }

    startIdx[0] = padSize;
    startIdx[1] = padSize;
    st.site = &ah_emlrtRSI;
    for (i31 = 0; i31 < 2; i31++) {
      b_sizeB[i31] = varargin_1->size[i31];
    }

    i31 = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = (int32_T)b_sizeB[0];
    varargin_1->size[1] = (int32_T)b_sizeB[1];
    emxEnsureCapacity(&st, (emxArray__common *)varargin_1, i31, (int32_T)sizeof
                      (real_T), &dc_emlrtRTEI);
    b_st.site = &eh_emlrtRSI;
    for (i31 = 0; i31 < 2; i31++) {
      sizeB[i31] = 5.0;
      b_sizeB[i31] = varargin_1->size[i31];
    }

    ordfilt2_real64(&Apad->data[0], (real_T)Apad->size[0], startIdx,
                    &indices_data[0], (real_T)ii, sizeB, 12.0, &varargin_1->
                    data[0], b_sizeB);
  }

  emxFree_real_T(&c_varargin_1);
  emxFree_real_T(&Apad);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (ordfilt2.c) */
