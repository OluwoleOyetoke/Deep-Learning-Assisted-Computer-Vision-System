/*
 * ordfilt2.c
 *
 * Code generation for function 'ordfilt2'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "analyseCriticalAreas.h"
#include "ordfilt2.h"
#include "abs.h"
#include "analyseCriticalAreas_emxutil.h"
#include "padarray.h"
#include "indexShapeCheck.h"
#include "analyseCriticalAreas_data.h"
#include "blas.h"
#include "libmwordfilt2.h"

/* Variable Definitions */
static emlrtRSInfo cb_emlrtRSI = { 83, "ordfilt2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\ordfilt2.m"
};

static emlrtRSInfo db_emlrtRSI = { 99, "ordfilt2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\ordfilt2.m"
};

static emlrtRSInfo eb_emlrtRSI = { 102, "ordfilt2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\ordfilt2.m"
};

static emlrtRSInfo fb_emlrtRSI = { 116, "ordfilt2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\ordfilt2.m"
};

static emlrtRSInfo nb_emlrtRSI = { 13, "max",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"
};

static emlrtRSInfo ob_emlrtRSI = { 19, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo xb_emlrtRSI = { 140, "ordfilt2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\ordfilt2.m"
};

static emlrtRTEInfo p_emlrtRTEI = { 1, 14, "ordfilt2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\ordfilt2.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 102, 5, "ordfilt2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\ordfilt2.m"
};

static emlrtRTEInfo eb_emlrtRTEI = { 121, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo fb_emlrtRTEI = { 39, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtECInfo h_emlrtECI = { -1, 114, 25, "ordfilt2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\ordfilt2.m"
};

/* Function Definitions */
void ordfilt2(const emlrtStack *sp, emxArray_real_T *varargin_1)
{
  int32_T idx;
  int32_T indices_data[400];
  int8_T jj_data[400];
  int32_T ii;
  int32_T jj;
  boolean_T exitg1;
  int32_T loop_ub;
  int32_T iv12[2];
  int32_T b_loop_ub;
  int32_T iv13[2];
  int32_T iv14[2];
  int32_T rows_size[1];
  int32_T cols_size[1];
  real_T rows_data[400];
  real_T varargin_1_data[400];
  int32_T varargin_1_size[1];
  real_T cols_data[400];
  real_T b_varargin_1_data[400];
  boolean_T b3;
  real_T padSize;
  real_T mtmp;
  real_T center[2];
  emxArray_real_T *Apad;
  real_T startIdx[2];
  real_T b_varargin_1[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &cb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  idx = 0;
  ii = 1;
  jj = 1;
  exitg1 = false;
  while ((!exitg1) && (jj <= 20)) {
    idx++;
    indices_data[idx - 1] = ii;
    jj_data[idx - 1] = (int8_T)jj;
    if (idx >= 400) {
      exitg1 = true;
    } else {
      ii++;
      if (ii > 20) {
        ii = 1;
        jj++;
      }
    }
  }

  if (1 > idx) {
    loop_ub = 0;
  } else {
    loop_ub = idx;
  }

  iv12[0] = 1;
  iv12[1] = loop_ub;
  c_st.site = &jb_emlrtRSI;
  indexShapeCheck(&c_st, 400, iv12);
  if (1 > idx) {
    b_loop_ub = 0;
  } else {
    b_loop_ub = idx;
  }

  iv13[0] = 1;
  iv13[1] = b_loop_ub;
  c_st.site = &ib_emlrtRSI;
  indexShapeCheck(&c_st, 400, iv13);
  iv14[0] = 1;
  if (1 > idx) {
    iv14[1] = 0;
  } else {
    iv14[1] = idx;
  }

  c_st.site = &hb_emlrtRSI;
  indexShapeCheck(&c_st, 400, iv14);
  rows_size[0] = loop_ub;
  for (jj = 0; jj < loop_ub; jj++) {
    rows_data[jj] = (real_T)indices_data[jj] - 10.0;
  }

  cols_size[0] = b_loop_ub;
  for (jj = 0; jj < b_loop_ub; jj++) {
    cols_data[jj] = (real_T)jj_data[jj] - 10.0;
  }

  st.site = &db_emlrtRSI;
  b_abs(rows_data, rows_size, varargin_1_data, varargin_1_size);
  st.site = &db_emlrtRSI;
  b_abs(cols_data, cols_size, b_varargin_1_data, rows_size);
  st.site = &db_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &ob_emlrtRSI;
  if ((varargin_1_size[0] == 1) || (varargin_1_size[0] != 1)) {
    b3 = true;
  } else {
    b3 = false;
  }

  if (b3) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &fb_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (varargin_1_size[0] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &eb_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  padSize = varargin_1_data[0];
  if (varargin_1_size[0] > 1) {
    for (ii = 1; ii + 1 <= varargin_1_size[0]; ii++) {
      if (varargin_1_data[ii] > padSize) {
        padSize = varargin_1_data[ii];
      }
    }
  }

  st.site = &db_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &ob_emlrtRSI;
  if ((rows_size[0] == 1) || (rows_size[0] != 1)) {
    b3 = true;
  } else {
    b3 = false;
  }

  if (b3) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &fb_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (rows_size[0] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &eb_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  mtmp = b_varargin_1_data[0];
  if (rows_size[0] > 1) {
    for (ii = 1; ii + 1 <= rows_size[0]; ii++) {
      if (b_varargin_1_data[ii] > mtmp) {
        mtmp = b_varargin_1_data[ii];
      }
    }
  }

  padSize = muDoubleScalarMax(padSize, mtmp);
  for (jj = 0; jj < 2; jj++) {
    center[jj] = padSize;
  }

  emxInit_real_T1(sp, &Apad, 2, &s_emlrtRTEI, true);
  st.site = &eb_emlrtRSI;
  padarray(&st, varargin_1, center, Apad);
  if ((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0)) {
  } else {
    ii = Apad->size[0];
    for (jj = 0; jj < b_loop_ub; jj++) {
      cols_data[jj] *= (real_T)ii;
    }

    if (b_loop_ub != loop_ub) {
      emlrtSizeEqCheck1DR2012b(b_loop_ub, loop_ub, &h_emlrtECI, sp);
    }

    for (jj = 0; jj < b_loop_ub; jj++) {
      mtmp = muDoubleScalarRound(cols_data[jj] + rows_data[jj]);
      if (mtmp < 2.147483648E+9) {
        if (mtmp >= -2.147483648E+9) {
          ii = (int32_T)mtmp;
        } else {
          ii = MIN_int32_T;
        }
      } else if (mtmp >= 2.147483648E+9) {
        ii = MAX_int32_T;
      } else {
        ii = 0;
      }

      indices_data[jj] = ii;
    }

    startIdx[0] = padSize;
    startIdx[1] = padSize;
    st.site = &fb_emlrtRSI;
    for (jj = 0; jj < 2; jj++) {
      center[jj] = varargin_1->size[jj];
    }

    jj = varargin_1->size[0] * varargin_1->size[1];
    varargin_1->size[0] = (int32_T)center[0];
    varargin_1->size[1] = (int32_T)center[1];
    emxEnsureCapacity(&st, (emxArray__common *)varargin_1, jj, (int32_T)sizeof
                      (real_T), &p_emlrtRTEI);
    b_st.site = &xb_emlrtRSI;
    for (jj = 0; jj < 2; jj++) {
      center[jj] = 20.0;
      b_varargin_1[jj] = varargin_1->size[jj];
    }

    ordfilt2_real64(&Apad->data[0], (real_T)Apad->size[0], startIdx,
                    &indices_data[0], (real_T)b_loop_ub, center, 399.0,
                    &varargin_1->data[0], b_varargin_1);
  }

  emxFree_real_T(&Apad);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (ordfilt2.c) */
