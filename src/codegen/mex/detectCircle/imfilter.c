/*
 * imfilter.c
 *
 * Code generation for function 'imfilter'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "imfilter.h"
#include "detectCircle_emxutil.h"
#include "repmat.h"
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
static emlrtRSInfo kb_emlrtRSI = { 565, "imfilter",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfilter.m"
};

static emlrtRSInfo nb_emlrtRSI = { 77, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

static emlrtRSInfo pb_emlrtRSI = { 484, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

static emlrtRSInfo qb_emlrtRSI = { 593, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

static emlrtRTEInfo db_emlrtRTEI = { 558, 14, "imfilter",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfilter.m"
};

static emlrtRTEInfo eb_emlrtRTEI = { 77, 5, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

static emlrtRTEInfo fb_emlrtRTEI = { 587, 9, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

static emlrtBCInfo xc_emlrtBCI = { -1, -1, 594, 14, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtECInfo c_emlrtECI = { -1, 594, 9, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

static emlrtBCInfo yc_emlrtBCI = { -1, -1, 96, 28, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo ad_emlrtBCI = { -1, -1, 96, 33, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo bd_emlrtBCI = { -1, -1, 96, 38, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo cd_emlrtBCI = { -1, -1, 96, 43, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo dd_emlrtBCI = { -1, -1, 96, 19, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

static emlrtBCInfo ed_emlrtBCI = { -1, -1, 96, 21, "", "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m",
  0 };

/* Function Definitions */
void padImage(const emlrtStack *sp, const emxArray_real_T *a_tmp, const real_T
              pad[2], emxArray_real_T *a)
{
  real_T sizeA[2];
  int32_T i10;
  real_T b_sizeA[2];
  uint32_T c_sizeA[2];
  uint32_T varargin_1[2];
  uint32_T mtmp;
  emxArray_int32_T *idxA;
  int32_T ndbl;
  int32_T apnd;
  int32_T cdiff;
  emxArray_real_T *y;
  emxArray_uint32_T *idxDir;
  int32_T k;
  emxArray_int32_T *r1;
  real_T d0;
  uint32_T u0;
  emxArray_int32_T *b_idxDir;
  int32_T iv18[1];
  emxArray_int32_T *c_idxDir;
  int32_T iv19[1];
  int32_T i11;
  int32_T i12;
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
  st.site = &kb_emlrtRSI;
  b_st.site = &lb_emlrtRSI;
  validateattributes(&b_st, pad);
  if ((a_tmp->size[0] == 0) || (a_tmp->size[1] == 0)) {
    for (i10 = 0; i10 < 2; i10++) {
      sizeA[i10] = (real_T)a_tmp->size[i10] + 2.0 * pad[i10];
    }

    b_sizeA[0] = sizeA[0];
    b_sizeA[1] = sizeA[1];
    b_st.site = &mb_emlrtRSI;
    repmat(&b_st, b_sizeA, a);
  } else {
    for (i10 = 0; i10 < 2; i10++) {
      sizeA[i10] = a_tmp->size[i10];
    }

    b_st.site = &nb_emlrtRSI;
    c_st.site = &pb_emlrtRSI;
    c_sizeA[0] = (uint32_T)sizeA[0];
    c_sizeA[1] = (uint32_T)sizeA[1];
    for (i10 = 0; i10 < 2; i10++) {
      varargin_1[i10] = 2U + c_sizeA[i10];
    }

    mtmp = varargin_1[0];
    if (varargin_1[1] > varargin_1[0]) {
      mtmp = varargin_1[1];
    }

    emxInit_int32_T1(&c_st, &idxA, 2, &eb_emlrtRTEI, true);
    i10 = idxA->size[0] * idxA->size[1];
    idxA->size[0] = (int32_T)mtmp;
    idxA->size[1] = 2;
    emxEnsureCapacity(&c_st, (emxArray__common *)idxA, i10, (int32_T)sizeof
                      (int32_T), &db_emlrtRTEI);
    d_st.site = &qb_emlrtRSI;
    e_st.site = &rb_emlrtRSI;
    f_st.site = &sb_emlrtRSI;
    ndbl = (int32_T)muDoubleScalarFloor(((real_T)(uint32_T)sizeA[0] - 1.0) + 0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - (int32_T)(uint32_T)sizeA[0]) + 1;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)(int32_T)
        (uint32_T)sizeA[0]) {
      ndbl++;
      apnd = (int32_T)(uint32_T)sizeA[0];
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    emxInit_real_T(&f_st, &y, 2, &db_emlrtRTEI, true);
    i10 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = ndbl;
    emxEnsureCapacity(&f_st, (emxArray__common *)y, i10, (int32_T)sizeof(real_T),
                      &db_emlrtRTEI);
    if (ndbl > 0) {
      y->data[0] = 1.0;
      if (ndbl > 1) {
        y->data[ndbl - 1] = apnd;
        cdiff = (ndbl - 1) / 2;
        for (k = 1; k < cdiff; k++) {
          y->data[k] = 1.0 + (real_T)k;
          y->data[(ndbl - k) - 1] = apnd - k;
        }

        if (cdiff << 1 == ndbl - 1) {
          y->data[cdiff] = (1.0 + (real_T)apnd) / 2.0;
        } else {
          y->data[cdiff] = 1.0 + (real_T)cdiff;
          y->data[cdiff + 1] = apnd - cdiff;
        }
      }
    }

    emxInit_uint32_T(&f_st, &idxDir, 2, &fb_emlrtRTEI, true);
    i10 = idxDir->size[0] * idxDir->size[1];
    idxDir->size[0] = 1;
    idxDir->size[1] = 2 + y->size[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)idxDir, i10, (int32_T)sizeof
                      (uint32_T), &db_emlrtRTEI);
    idxDir->data[0] = 1U;
    cdiff = y->size[1];
    for (i10 = 0; i10 < cdiff; i10++) {
      d0 = muDoubleScalarRound(y->data[y->size[0] * i10]);
      if (d0 < 4.294967296E+9) {
        if (d0 >= 0.0) {
          u0 = (uint32_T)d0;
        } else {
          u0 = 0U;
        }
      } else if (d0 >= 4.294967296E+9) {
        u0 = MAX_uint32_T;
      } else {
        u0 = 0U;
      }

      idxDir->data[idxDir->size[0] * (i10 + 1)] = u0;
    }

    emxInit_int32_T(&c_st, &r1, 1, &db_emlrtRTEI, true);
    idxDir->data[idxDir->size[0] * (1 + y->size[1])] = (uint32_T)
      muDoubleScalarRound((uint32_T)sizeA[0]);
    i10 = (int32_T)mtmp;
    cdiff = idxDir->size[1];
    if (!((cdiff >= 1) && (cdiff <= i10))) {
      emlrtDynamicBoundsCheckR2012b(cdiff, 1, i10, &xc_emlrtBCI, &c_st);
    }

    cdiff = idxDir->size[1];
    i10 = r1->size[0];
    r1->size[0] = cdiff;
    emxEnsureCapacity(&c_st, (emxArray__common *)r1, i10, (int32_T)sizeof
                      (int32_T), &db_emlrtRTEI);
    for (i10 = 0; i10 < cdiff; i10++) {
      r1->data[i10] = i10;
    }

    emxInit_int32_T1(&c_st, &b_idxDir, 2, &db_emlrtRTEI, true);
    iv18[0] = r1->size[0];
    emlrtSubAssignSizeCheckR2012b(iv18, 1, *(int32_T (*)[2])idxDir->size, 2,
      &c_emlrtECI, &c_st);
    i10 = b_idxDir->size[0] * b_idxDir->size[1];
    b_idxDir->size[0] = 1;
    b_idxDir->size[1] = idxDir->size[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)b_idxDir, i10, (int32_T)sizeof
                      (int32_T), &db_emlrtRTEI);
    cdiff = idxDir->size[1];
    for (i10 = 0; i10 < cdiff; i10++) {
      b_idxDir->data[b_idxDir->size[0] * i10] = (int32_T)idxDir->data
        [idxDir->size[0] * i10];
    }

    cdiff = r1->size[0];
    for (i10 = 0; i10 < cdiff; i10++) {
      idxA->data[r1->data[i10]] = b_idxDir->data[i10];
    }

    emxFree_int32_T(&b_idxDir);
    d_st.site = &qb_emlrtRSI;
    e_st.site = &rb_emlrtRSI;
    f_st.site = &sb_emlrtRSI;
    ndbl = (int32_T)muDoubleScalarFloor(((real_T)(uint32_T)sizeA[1] - 1.0) + 0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - (int32_T)(uint32_T)sizeA[1]) + 1;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)(int32_T)
        (uint32_T)sizeA[1]) {
      ndbl++;
      apnd = (int32_T)(uint32_T)sizeA[1];
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    i10 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = ndbl;
    emxEnsureCapacity(&f_st, (emxArray__common *)y, i10, (int32_T)sizeof(real_T),
                      &db_emlrtRTEI);
    if (ndbl > 0) {
      y->data[0] = 1.0;
      if (ndbl > 1) {
        y->data[ndbl - 1] = apnd;
        cdiff = (ndbl - 1) / 2;
        for (k = 1; k < cdiff; k++) {
          y->data[k] = 1.0 + (real_T)k;
          y->data[(ndbl - k) - 1] = apnd - k;
        }

        if (cdiff << 1 == ndbl - 1) {
          y->data[cdiff] = (1.0 + (real_T)apnd) / 2.0;
        } else {
          y->data[cdiff] = 1.0 + (real_T)cdiff;
          y->data[cdiff + 1] = apnd - cdiff;
        }
      }
    }

    i10 = idxDir->size[0] * idxDir->size[1];
    idxDir->size[0] = 1;
    idxDir->size[1] = 2 + y->size[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)idxDir, i10, (int32_T)sizeof
                      (uint32_T), &db_emlrtRTEI);
    idxDir->data[0] = 1U;
    cdiff = y->size[1];
    for (i10 = 0; i10 < cdiff; i10++) {
      d0 = muDoubleScalarRound(y->data[y->size[0] * i10]);
      if (d0 < 4.294967296E+9) {
        if (d0 >= 0.0) {
          u0 = (uint32_T)d0;
        } else {
          u0 = 0U;
        }
      } else if (d0 >= 4.294967296E+9) {
        u0 = MAX_uint32_T;
      } else {
        u0 = 0U;
      }

      idxDir->data[idxDir->size[0] * (i10 + 1)] = u0;
    }

    idxDir->data[idxDir->size[0] * (1 + y->size[1])] = (uint32_T)
      muDoubleScalarRound((uint32_T)sizeA[1]);
    i10 = idxA->size[0];
    cdiff = idxDir->size[1];
    if (!((cdiff >= 1) && (cdiff <= i10))) {
      emlrtDynamicBoundsCheckR2012b(cdiff, 1, i10, &xc_emlrtBCI, &c_st);
    }

    cdiff = idxDir->size[1];
    i10 = r1->size[0];
    r1->size[0] = cdiff;
    emxEnsureCapacity(&c_st, (emxArray__common *)r1, i10, (int32_T)sizeof
                      (int32_T), &db_emlrtRTEI);
    emxFree_real_T(&y);
    for (i10 = 0; i10 < cdiff; i10++) {
      r1->data[i10] = i10;
    }

    emxInit_int32_T1(&c_st, &c_idxDir, 2, &db_emlrtRTEI, true);
    iv19[0] = r1->size[0];
    emlrtSubAssignSizeCheckR2012b(iv19, 1, *(int32_T (*)[2])idxDir->size, 2,
      &c_emlrtECI, &c_st);
    i10 = c_idxDir->size[0] * c_idxDir->size[1];
    c_idxDir->size[0] = 1;
    c_idxDir->size[1] = idxDir->size[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)c_idxDir, i10, (int32_T)sizeof
                      (int32_T), &db_emlrtRTEI);
    cdiff = idxDir->size[1];
    for (i10 = 0; i10 < cdiff; i10++) {
      c_idxDir->data[c_idxDir->size[0] * i10] = (int32_T)idxDir->data
        [idxDir->size[0] * i10];
    }

    emxFree_uint32_T(&idxDir);
    cdiff = r1->size[0];
    for (i10 = 0; i10 < cdiff; i10++) {
      idxA->data[r1->data[i10] + idxA->size[0]] = c_idxDir->data[i10];
    }

    emxFree_int32_T(&c_idxDir);
    emxFree_int32_T(&r1);
    for (i10 = 0; i10 < 2; i10++) {
      sizeA[i10] = (real_T)a_tmp->size[i10] + 2.0 * pad[i10];
    }

    i10 = a->size[0] * a->size[1];
    a->size[0] = (int32_T)sizeA[0];
    a->size[1] = (int32_T)sizeA[1];
    emxEnsureCapacity(&st, (emxArray__common *)a, i10, (int32_T)sizeof(real_T),
                      &db_emlrtRTEI);
    i10 = a->size[1];
    for (k = 1; k - 1 < i10; k++) {
      cdiff = a->size[0];
      for (ndbl = 1; ndbl - 1 < cdiff; ndbl++) {
        apnd = a_tmp->size[0];
        i11 = idxA->size[0];
        if (!((ndbl >= 1) && (ndbl <= i11))) {
          emlrtDynamicBoundsCheckR2012b(ndbl, 1, i11, &ad_emlrtBCI, &st);
        }

        i11 = idxA->data[ndbl - 1];
        if (!((i11 >= 1) && (i11 <= apnd))) {
          emlrtDynamicBoundsCheckR2012b(i11, 1, apnd, &yc_emlrtBCI, &st);
        }

        apnd = a_tmp->size[1];
        i12 = idxA->size[0];
        if (!((k >= 1) && (k <= i12))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i12, &cd_emlrtBCI, &st);
        }

        i12 = idxA->data[(k + idxA->size[0]) - 1];
        if (!((i12 >= 1) && (i12 <= apnd))) {
          emlrtDynamicBoundsCheckR2012b(i12, 1, apnd, &bd_emlrtBCI, &st);
        }

        apnd = a->size[0];
        if (!((ndbl >= 1) && (ndbl <= apnd))) {
          emlrtDynamicBoundsCheckR2012b(ndbl, 1, apnd, &dd_emlrtBCI, &st);
        }

        apnd = a->size[1];
        if (!((k >= 1) && (k <= apnd))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, apnd, &ed_emlrtBCI, &st);
        }

        a->data[(ndbl + a->size[0] * (k - 1)) - 1] = a_tmp->data[(i11 +
          a_tmp->size[0] * (i12 - 1)) - 1];
      }
    }

    emxFree_int32_T(&idxA);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (imfilter.c) */
