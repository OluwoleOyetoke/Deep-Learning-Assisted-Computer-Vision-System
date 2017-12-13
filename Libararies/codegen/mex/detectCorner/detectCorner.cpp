/*
 * detectCorner.cpp
 *
 * Code generation for function 'detectCorner'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCorner.h"
#include "xaxpy.h"
#include "detectCorner_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "ordfilt2.h"
#include "power.h"
#include "conv2.h"
#include "detectCorner_data.h"
#include "blas.h"
#include "libmwordfilt2.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 28, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtRSInfo b_emlrtRSI = { 29, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtRSInfo c_emlrtRSI = { 45, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtRSInfo d_emlrtRSI = { 46, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtRSInfo e_emlrtRSI = { 47, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtRSInfo f_emlrtRSI = { 50, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtRSInfo g_emlrtRSI = { 55, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtRSInfo h_emlrtRSI = { 62, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtRSInfo i_emlrtRSI = { 68, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 18, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 186, 13, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 187, 13, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 28, 1, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 29, 1, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 45, 5, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 46, 5, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 50, 5, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 55, 1, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtRTEInfo j_emlrtRTEI = { 50, 15, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo r_emlrtRTEI = { 172, 9, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 126, 19, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtECInfo emlrtECI = { 2, 66, 6, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtECInfo b_emlrtECI = { 2, 66, 7, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtECInfo c_emlrtECI = { 2, 55, 5, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtECInfo d_emlrtECI = { 2, 51, 14, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtECInfo e_emlrtECI = { 2, 50, 12, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtECInfo f_emlrtECI = { 2, 50, 13, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

static emlrtECInfo g_emlrtECI = { 2, 34, 8, "detectCorner",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCorner.m"
};

/* Function Definitions */
void detectCorner(const emlrtStack *sp, const emxArray_real_T *img,
                  emxArray_real_T *r, emxArray_real_T *c)
{
  emxArray_real_T *Ix;
  emxArray_real_T *Iy;
  emxArray_real_T *r0;
  int32_T ii;
  int32_T jj;
  int32_T unnamed_idx_0;
  int32_T unnamed_idx_1;
  boolean_T b0;
  int32_T ma;
  int32_T na;
  int32_T firstColB;
  int32_T b_Ix[2];
  int32_T lastColB;
  int32_T b_Iy[2];
  int32_T firstRowB;
  emxArray_real_T *c_Ix;
  int32_T lastRowB;
  int32_T firstColA;
  int32_T lastColA;
  emxArray_real_T *Ix2;
  emxArray_real_T *c_Iy;
  int32_T b_firstColB;
  int32_T iC;
  int32_T b_c;
  int32_T iB;
  int32_T i;
  emxArray_real_T *Iy2;
  emxArray_real_T *d_Ix;
  int32_T b_i;
  int32_T a_length;
  static const int8_T iv0[9] = { -1, 0, 1, -1, 0, 1, -1, 0, 1 };

  int32_T nx;
  emxArray_real_T *r1;
  int32_T b_Ix2[2];
  int32_T b_Iy2[2];
  emxArray_real_T *det;
  emxArray_real_T *r2;
  int32_T b_det[2];
  int32_T d_Iy[2];
  int32_T c_Ix2[2];
  int32_T c_Iy2[2];
  emxArray_real_T *d_Ix2;
  emxArray_real_T *r3;
  int32_T c_det[2];
  int32_T e_Ix[2];
  int32_T d_det[2];
  int32_T f_Ix[2];
  emxArray_boolean_T *R;
  emxArray_boolean_T *r4;
  int32_T b_R[2];
  int32_T iv1[2];
  emxArray_int32_T *b_ii;
  emxArray_int32_T *b_jj;
  emxArray_boolean_T *v;
  boolean_T exitg1;
  boolean_T guard1 = false;
  int32_T iv2[2];
  int32_T iv3[2];
  int32_T iv4[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &Ix, 2, &d_emlrtRTEI, true);
  emxInit_real_T(sp, &Iy, 2, &e_emlrtRTEI, true);
  emxInit_real_T(sp, &r0, 2, &emlrtRTEI, true);

  /* detectCorner: Corner Detecter using Harris Method */
  /* Input image should be grayscale */
  /* Validation */
  /* if nargin ~= 1 */
  /*     error('detectCorner:Input_Argument_Error','This function works with 1 input argument -img- ') */
  /* end */
  /* Declare needed parameters */
  /*  Sobel mask used for the derivative */
  /* Transpose of dx */
  /* window size */
  /* Check if image is coloured */
  /* { */
  /* if (zDim>1) */
  /* img = double(rgb2gray(img)); %Convert image to grayscale */
  /* else */
  /* Do nothing */
  /* end */
  /* } */
  /* Compute image FIRST ORDER DERIVATE of the image in both the x and y */
  /* direction by convolving it with the derivatice mask */
  st.site = &emlrtRSI;
  conv2(&st, img, r0);
  ii = Ix->size[0] * Ix->size[1];
  Ix->size[0] = r0->size[0];
  Ix->size[1] = r0->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Ix, ii, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  jj = r0->size[0] * r0->size[1];
  for (ii = 0; ii < jj; ii++) {
    Ix->data[ii] = r0->data[ii];
  }

  emxFree_real_T(&r0);

  /*  Image derivatives */
  st.site = &b_emlrtRSI;
  b_st.site = &j_emlrtRSI;
  c_st.site = &k_emlrtRSI;
  unnamed_idx_0 = img->size[0];
  unnamed_idx_1 = img->size[1];
  d_st.site = &l_emlrtRSI;
  ii = Iy->size[0] * Iy->size[1];
  Iy->size[0] = unnamed_idx_0;
  Iy->size[1] = unnamed_idx_1;
  emxEnsureCapacity(&d_st, (emxArray__common *)Iy, ii, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  jj = unnamed_idx_0 * unnamed_idx_1;
  for (ii = 0; ii < jj; ii++) {
    Iy->data[ii] = 0.0;
  }

  if ((img->size[0] == 0) || (img->size[1] == 0) || ((unnamed_idx_0 == 0) ||
       (unnamed_idx_1 == 0))) {
    b0 = true;
  } else {
    b0 = false;
  }

  if (!b0) {
    e_st.site = &m_emlrtRSI;
    ma = img->size[0];
    na = img->size[1] - 1;
    if (img->size[1] < 1) {
      firstColB = 2;
    } else {
      firstColB = 0;
    }

    if (3 <= unnamed_idx_1) {
      lastColB = 2;
    } else {
      lastColB = unnamed_idx_1;
    }

    if (img->size[0] < 1) {
      firstRowB = 2;
    } else {
      firstRowB = 0;
    }

    if (3 <= unnamed_idx_0) {
      lastRowB = 2;
    } else {
      lastRowB = unnamed_idx_0;
    }

    f_st.site = &n_emlrtRSI;
    while (firstColB <= lastColB) {
      firstColA = (firstColB < 1);
      if (firstColB + na < unnamed_idx_1) {
        lastColA = na;
      } else {
        lastColA = unnamed_idx_1 - firstColB;
      }

      f_st.site = &o_emlrtRSI;
      if ((!(firstColA > lastColA)) && (lastColA > 2147483646)) {
        g_st.site = &s_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (firstColA <= lastColA) {
        if (firstColB + firstColA > 1) {
          b_firstColB = (firstColB + firstColA) - 1;
        } else {
          b_firstColB = 0;
        }

        iC = b_firstColB * unnamed_idx_0;
        b_c = firstColA * ma;
        iB = firstRowB + firstColB * 3;
        f_st.site = &p_emlrtRSI;
        for (i = firstRowB; i <= lastRowB; i++) {
          ii = (i < 1);
          if (i + ma <= unnamed_idx_0) {
            b_i = ma;
          } else {
            b_i = (unnamed_idx_0 - i) + 1;
          }

          a_length = b_i - ii;
          if (ma > 128) {
            f_st.site = &q_emlrtRSI;
            xaxpy(a_length, (real_T)iv0[iB], img, (b_c + ii) + 1, Iy, iC + 1);
          } else {
            ii += b_c;
            jj = iC;
            f_st.site = &r_emlrtRSI;
            if ((!(1 > a_length)) && (a_length > 2147483646)) {
              g_st.site = &s_emlrtRSI;
              check_forloop_overflow_error(&g_st);
            }

            for (nx = 1; nx <= a_length; nx++) {
              Iy->data[jj] += (real_T)iv0[iB] * img->data[ii];
              ii++;
              jj++;
            }
          }

          iB++;
          if (i >= 1) {
            iC++;
          }
        }

        firstColA++;
      }

      firstColB++;
    }
  }

  /* Compute image SECOND ORDER DERIVATIVE by carrying out an element wise  */
  /* multiplication of the first order derivates */
  for (ii = 0; ii < 2; ii++) {
    b_Ix[ii] = Ix->size[ii];
  }

  for (ii = 0; ii < 2; ii++) {
    b_Iy[ii] = Iy->size[ii];
  }

  emxInit_real_T(sp, &c_Ix, 2, &emlrtRTEI, true);
  if ((b_Ix[0] != b_Iy[0]) || (b_Ix[1] != b_Iy[1])) {
    emlrtSizeEqCheckNDR2012b(&b_Ix[0], &b_Iy[0], (emlrtECInfo *)&g_emlrtECI, sp);
  }

  /* To check the cornerness of each pixel of an image,a small window around  */
  /* that pixel is checked using a smooth circular window. To do this, we */
  /* filter all three second-order derivatives by convolving them with a  */
  /* Gaussian kernel. */
  /*  Gaussian filter size = 6*sigma (+/- 3sigma). Minimum sixe 1x1. */
  ii = c_Ix->size[0] * c_Ix->size[1];
  c_Ix->size[0] = Ix->size[0];
  c_Ix->size[1] = Ix->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_Ix, ii, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  jj = Ix->size[0] * Ix->size[1];
  for (ii = 0; ii < jj; ii++) {
    c_Ix->data[ii] = Ix->data[ii] * Ix->data[ii];
  }

  emxInit_real_T(sp, &Ix2, 2, &f_emlrtRTEI, true);
  emxInit_real_T(sp, &c_Iy, 2, &emlrtRTEI, true);
  st.site = &c_emlrtRSI;
  b_conv2(&st, c_Ix, Ix2);
  ii = c_Iy->size[0] * c_Iy->size[1];
  c_Iy->size[0] = Iy->size[0];
  c_Iy->size[1] = Iy->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_Iy, ii, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  jj = Iy->size[0] * Iy->size[1];
  emxFree_real_T(&c_Ix);
  for (ii = 0; ii < jj; ii++) {
    c_Iy->data[ii] = Iy->data[ii] * Iy->data[ii];
  }

  emxInit_real_T(sp, &Iy2, 2, &g_emlrtRTEI, true);
  emxInit_real_T(sp, &d_Ix, 2, &emlrtRTEI, true);
  st.site = &d_emlrtRSI;
  b_conv2(&st, c_Iy, Iy2);
  ii = d_Ix->size[0] * d_Ix->size[1];
  d_Ix->size[0] = Ix->size[0];
  d_Ix->size[1] = Ix->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d_Ix, ii, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  jj = Ix->size[0] * Ix->size[1];
  emxFree_real_T(&c_Iy);
  for (ii = 0; ii < jj; ii++) {
    d_Ix->data[ii] = Ix->data[ii] * Iy->data[ii];
  }

  emxInit_real_T(sp, &r1, 2, &emlrtRTEI, true);
  st.site = &e_emlrtRSI;
  b_conv2(&st, d_Ix, r1);
  ii = Ix->size[0] * Ix->size[1];
  Ix->size[0] = r1->size[0];
  Ix->size[1] = r1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Ix, ii, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  jj = r1->size[0] * r1->size[1];
  emxFree_real_T(&d_Ix);
  for (ii = 0; ii < jj; ii++) {
    Ix->data[ii] = r1->data[ii];
  }

  emxFree_real_T(&r1);

  /* we compute the values of its trace and determinant.  */
  for (ii = 0; ii < 2; ii++) {
    b_Ix2[ii] = Ix2->size[ii];
  }

  for (ii = 0; ii < 2; ii++) {
    b_Iy2[ii] = Iy2->size[ii];
  }

  emxInit_real_T(sp, &det, 2, &h_emlrtRTEI, true);
  if ((b_Ix2[0] != b_Iy2[0]) || (b_Ix2[1] != b_Iy2[1])) {
    emlrtSizeEqCheckNDR2012b(&b_Ix2[0], &b_Iy2[0], (emlrtECInfo *)&f_emlrtECI,
      sp);
  }

  ii = det->size[0] * det->size[1];
  det->size[0] = Ix2->size[0];
  det->size[1] = Ix2->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)det, ii, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  jj = Ix2->size[0] * Ix2->size[1];
  for (ii = 0; ii < jj; ii++) {
    det->data[ii] = Ix2->data[ii] * Iy2->data[ii];
  }

  emxInit_real_T(sp, &r2, 2, &emlrtRTEI, true);
  st.site = &f_emlrtRSI;
  power(&st, Ix, r2);
  ii = Iy->size[0] * Iy->size[1];
  Iy->size[0] = r2->size[0];
  Iy->size[1] = r2->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Iy, ii, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  jj = r2->size[0] * r2->size[1];
  for (ii = 0; ii < jj; ii++) {
    Iy->data[ii] = r2->data[ii];
  }

  emxFree_real_T(&r2);
  for (ii = 0; ii < 2; ii++) {
    b_det[ii] = det->size[ii];
  }

  for (ii = 0; ii < 2; ii++) {
    d_Iy[ii] = Iy->size[ii];
  }

  if ((b_det[0] != d_Iy[0]) || (b_det[1] != d_Iy[1])) {
    emlrtSizeEqCheckNDR2012b(&b_det[0], &d_Iy[0], (emlrtECInfo *)&e_emlrtECI, sp);
  }

  ii = det->size[0] * det->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)det, ii, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  jj = det->size[0];
  ii = det->size[1];
  jj *= ii;
  for (ii = 0; ii < jj; ii++) {
    det->data[ii] -= Iy->data[ii];
  }

  for (ii = 0; ii < 2; ii++) {
    c_Ix2[ii] = Ix2->size[ii];
  }

  for (ii = 0; ii < 2; ii++) {
    c_Iy2[ii] = Iy2->size[ii];
  }

  emxInit_real_T(sp, &d_Ix2, 2, &emlrtRTEI, true);
  if ((c_Ix2[0] != c_Iy2[0]) || (c_Ix2[1] != c_Iy2[1])) {
    emlrtSizeEqCheckNDR2012b(&c_Ix2[0], &c_Iy2[0], (emlrtECInfo *)&d_emlrtECI,
      sp);
  }

  /* Find the harris response for each pixel */
  /*  R = det(M) - k(trace M)^2 */
  /* Emperically computed and given by Harris */
  ii = d_Ix2->size[0] * d_Ix2->size[1];
  d_Ix2->size[0] = Ix2->size[0];
  d_Ix2->size[1] = Ix2->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d_Ix2, ii, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  jj = Ix2->size[0] * Ix2->size[1];
  for (ii = 0; ii < jj; ii++) {
    d_Ix2->data[ii] = Ix2->data[ii] + Iy2->data[ii];
  }

  emxFree_real_T(&Iy2);
  emxFree_real_T(&Ix2);
  emxInit_real_T(sp, &r3, 2, &emlrtRTEI, true);
  st.site = &g_emlrtRSI;
  power(&st, d_Ix2, r3);
  ii = Ix->size[0] * Ix->size[1];
  Ix->size[0] = r3->size[0];
  Ix->size[1] = r3->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Ix, ii, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  jj = r3->size[0] * r3->size[1];
  emxFree_real_T(&d_Ix2);
  for (ii = 0; ii < jj; ii++) {
    Ix->data[ii] = r3->data[ii];
  }

  emxFree_real_T(&r3);
  ii = Ix->size[0] * Ix->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Ix, ii, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  jj = Ix->size[0];
  ii = Ix->size[1];
  jj *= ii;
  for (ii = 0; ii < jj; ii++) {
    Ix->data[ii] *= 0.04;
  }

  for (ii = 0; ii < 2; ii++) {
    c_det[ii] = det->size[ii];
  }

  for (ii = 0; ii < 2; ii++) {
    e_Ix[ii] = Ix->size[ii];
  }

  if ((c_det[0] != e_Ix[0]) || (c_det[1] != e_Ix[1])) {
    emlrtSizeEqCheckNDR2012b(&c_det[0], &e_Ix[0], (emlrtECInfo *)&c_emlrtECI, sp);
  }

  ii = det->size[0] * det->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)det, ii, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  jj = det->size[0];
  ii = det->size[1];
  jj *= ii;
  for (ii = 0; ii < jj; ii++) {
    det->data[ii] -= Ix->data[ii];
  }

  /*  Harris corner measure */
  /* Select corners */
  /* The Harris response for each pixel in the image is used to determine  */
  /* whether a pixel is a corner or not through non-maximal suppression */
  /* and thresholding */
  ii = Ix->size[0] * Ix->size[1];
  Ix->size[0] = det->size[0];
  Ix->size[1] = det->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Ix, ii, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  jj = det->size[0] * det->size[1];
  for (ii = 0; ii < jj; ii++) {
    Ix->data[ii] = det->data[ii];
  }

  st.site = &h_emlrtRSI;
  ordfilt2(&st, Ix);

  /*  Grey-scale dilate. */
  /* By thresholding the response array with the minimum desired Harris  */
  /* response, which,we can calculate a binary response array for which  */
  /* only pixels with a value greater than this threshold will be true */
  for (ii = 0; ii < 2; ii++) {
    d_det[ii] = det->size[ii];
  }

  for (ii = 0; ii < 2; ii++) {
    f_Ix[ii] = Ix->size[ii];
  }

  emxInit_boolean_T(sp, &R, 2, &i_emlrtRTEI, true);
  if ((d_det[0] != f_Ix[0]) || (d_det[1] != f_Ix[1])) {
    emlrtSizeEqCheckNDR2012b(&d_det[0], &f_Ix[0], (emlrtECInfo *)&b_emlrtECI, sp);
  }

  ii = R->size[0] * R->size[1];
  R->size[0] = det->size[0];
  R->size[1] = det->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)R, ii, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  jj = det->size[0] * det->size[1];
  for (ii = 0; ii < jj; ii++) {
    R->data[ii] = (det->data[ii] == Ix->data[ii]);
  }

  emxInit_boolean_T(sp, &r4, 2, &emlrtRTEI, true);
  ii = r4->size[0] * r4->size[1];
  r4->size[0] = det->size[0];
  r4->size[1] = det->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r4, ii, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  jj = det->size[0] * det->size[1];
  for (ii = 0; ii < jj; ii++) {
    r4->data[ii] = (det->data[ii] > 1.0E+6);
  }

  emxFree_real_T(&det);
  for (ii = 0; ii < 2; ii++) {
    b_R[ii] = R->size[ii];
  }

  for (ii = 0; ii < 2; ii++) {
    iv1[ii] = r4->size[ii];
  }

  if ((b_R[0] != iv1[0]) || (b_R[1] != iv1[1])) {
    emlrtSizeEqCheckNDR2012b(&b_R[0], &iv1[0], (emlrtECInfo *)&emlrtECI, sp);
  }

  ii = R->size[0] * R->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)R, ii, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  jj = R->size[0];
  ii = R->size[1];
  jj *= ii;
  for (ii = 0; ii < jj; ii++) {
    R->data[ii] = (R->data[ii] && r4->data[ii]);
  }

  emxFree_boolean_T(&r4);

  /*  Find maxima. */
  st.site = &i_emlrtRSI;
  b_st.site = &db_emlrtRSI;
  nx = R->size[0] * R->size[1];
  ma = 0;
  if ((!((R->size[0] == 1) || (R->size[1] == 1))) || (R->size[0] != 1) ||
      (R->size[1] <= 1)) {
    b0 = true;
  } else {
    b0 = false;
  }

  if (b0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &s_emlrtRTEI,
      "Coder:toolbox:find_incompatibleShape", 0);
  }

  emxInit_int32_T(&b_st, &b_ii, 1, &emlrtRTEI, true);
  emxInit_int32_T(&b_st, &b_jj, 1, &emlrtRTEI, true);
  emxInit_boolean_T1(&b_st, &v, 1, &j_emlrtRTEI, true);
  ii = b_ii->size[0];
  b_ii->size[0] = nx;
  emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, ii, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  ii = b_jj->size[0];
  b_jj->size[0] = nx;
  emxEnsureCapacity(&b_st, (emxArray__common *)b_jj, ii, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  ii = v->size[0];
  v->size[0] = nx;
  emxEnsureCapacity(&b_st, (emxArray__common *)v, ii, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  if (nx == 0) {
    ii = b_ii->size[0];
    b_ii->size[0] = 0;
    emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, ii, (int32_T)sizeof
                      (int32_T), &emlrtRTEI);
    ii = b_jj->size[0];
    b_jj->size[0] = 0;
    emxEnsureCapacity(&b_st, (emxArray__common *)b_jj, ii, (int32_T)sizeof
                      (int32_T), &emlrtRTEI);
  } else {
    ii = 1;
    jj = 1;
    exitg1 = false;
    while ((!exitg1) && (jj <= R->size[1])) {
      guard1 = false;
      if (R->data[(ii + R->size[0] * (jj - 1)) - 1]) {
        ma++;
        b_ii->data[ma - 1] = ii;
        b_jj->data[ma - 1] = jj;
        v->data[ma - 1] = R->data[(ii + R->size[0] * (jj - 1)) - 1];
        if (ma >= nx) {
          exitg1 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        ii++;
        if (ii > R->size[0]) {
          ii = 1;
          jj++;
        }
      }
    }

    if (ma <= nx) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &r_emlrtRTEI,
        "Coder:builtins:AssertionFailed", 0);
    }

    if (nx == 1) {
      if (ma == 0) {
        ii = b_ii->size[0];
        b_ii->size[0] = 0;
        emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, ii, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
        ii = b_jj->size[0];
        b_jj->size[0] = 0;
        emxEnsureCapacity(&b_st, (emxArray__common *)b_jj, ii, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
      }
    } else {
      if (1 > ma) {
        ii = 0;
      } else {
        ii = ma;
      }

      iv2[0] = 1;
      iv2[1] = ii;
      c_st.site = &gb_emlrtRSI;
      indexShapeCheck(&c_st, b_ii->size[0], iv2);
      jj = b_ii->size[0];
      b_ii->size[0] = ii;
      emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, jj, (int32_T)sizeof
                        (int32_T), &b_emlrtRTEI);
      if (1 > ma) {
        ii = 0;
      } else {
        ii = ma;
      }

      iv3[0] = 1;
      iv3[1] = ii;
      c_st.site = &fb_emlrtRSI;
      indexShapeCheck(&c_st, b_jj->size[0], iv3);
      jj = b_jj->size[0];
      b_jj->size[0] = ii;
      emxEnsureCapacity(&b_st, (emxArray__common *)b_jj, jj, (int32_T)sizeof
                        (int32_T), &c_emlrtRTEI);
      iv4[0] = 1;
      if (1 > ma) {
        iv4[1] = 0;
      } else {
        iv4[1] = ma;
      }

      c_st.site = &eb_emlrtRSI;
      indexShapeCheck(&c_st, v->size[0], iv4);
    }
  }

  emxFree_boolean_T(&v);
  emxFree_boolean_T(&R);
  ii = r->size[0];
  r->size[0] = b_ii->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r, ii, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  jj = b_ii->size[0];
  for (ii = 0; ii < jj; ii++) {
    r->data[ii] = b_ii->data[ii];
  }

  emxFree_int32_T(&b_ii);
  ii = c->size[0];
  c->size[0] = b_jj->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)c, ii, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  jj = b_jj->size[0];
  for (ii = 0; ii < jj; ii++) {
    c->data[ii] = b_jj->data[ii];
  }

  emxFree_int32_T(&b_jj);

  /*  Find row,col coords. */
  /* r = x */
  /* c = y */
  /* figure, imagesc(img), axis image, colormap(gray), hold on */
  /* plot(c,r,'go'), title('Detected Corners'); */
  /* fprintf('Corner Detection Carried Out\n') */
  /* end of function */
  emxFree_real_T(&Iy);
  emxFree_real_T(&Ix);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (detectCorner.cpp) */
