/*
 * myDetectCircle.c
 *
 * Code generation for function 'myDetectCircle'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "myDetectCircle.h"
#include "myDetectCircle_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "myDetectCircle_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 40, "myDetectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\myDetectCircle.m"
};

static emlrtRSInfo b_emlrtRSI = { 103, "myDetectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\myDetectCircle.m"
};

static emlrtRSInfo c_emlrtRSI = { 15, "max",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"
};

static emlrtRSInfo d_emlrtRSI = { 16, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo e_emlrtRSI = { 140, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo f_emlrtRSI = { 375, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo g_emlrtRSI = { 347, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo h_emlrtRSI = { 20, "eml_int_forloop_overflow_check",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo i_emlrtRSI = { 13, "max",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"
};

static emlrtRSInfo j_emlrtRSI = { 19, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 40, "myDetectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\myDetectCircle.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 60, 1, "myDetectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\myDetectCircle.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 121, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 39, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtDCInfo emlrtDCI = { 60, 33, "myDetectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\myDetectCircle.m",
  4 };

static emlrtBCInfo emlrtBCI = { -1, -1, 85, 22, "edgedRegion", "myDetectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\myDetectCircle.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 85, 29, "edgedRegion",
  "myDetectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\myDetectCircle.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 85, 55, "edgedRegion",
  "myDetectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\myDetectCircle.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 85, 62, "edgedRegion",
  "myDetectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\myDetectCircle.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 92, 56, "Accumulator",
  "myDetectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\myDetectCircle.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 92, 58, "Accumulator",
  "myDetectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\myDetectCircle.m",
  0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 92, 60, "Accumulator",
  "myDetectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\myDetectCircle.m",
  0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 92, 33, "Accumulator",
  "myDetectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\myDetectCircle.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 92, 35, "Accumulator",
  "myDetectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\myDetectCircle.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 92, 37, "Accumulator",
  "myDetectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\myDetectCircle.m",
  0 };

/* Function Definitions */
void myDetectCircle(const emlrtStack *sp, const emxArray_real_T *inputImg,
                    real_T *circleAvailable, real_T *dummyVar)
{
  int32_T yDim;
  int32_T xDim;
  int32_T inputImg_idx_0;
  boolean_T guard2 = false;
  boolean_T overflow;
  int32_T ixstart;
  real_T mtmp;
  int32_T ix;
  emxArray_real_T *Accumulator;
  int32_T minRadius;
  int32_T range;
  boolean_T exitg1;
  int32_T i0;
  int32_T xPixel;
  int32_T yPixel;
  boolean_T guard1 = false;
  int32_T rad;
  int32_T radius;
  int32_T tetha;
  real_T a;
  static const real_T dv0[360] = { 0.99985, 0.99939, 0.99863, 0.99756, 0.99619,
    0.99452, 0.99255, 0.99027, 0.98769, 0.98481, 0.98163, 0.97815, 0.97437,
    0.9703, 0.96593, 0.96126, 0.9563, 0.95106, 0.94552, 0.93969, 0.93358,
    0.92718, 0.9205, 0.91355, 0.90631, 0.89879, 0.89101, 0.88295, 0.87462,
    0.86603, 0.85717, 0.84805, 0.83867, 0.82904, 0.81915, 0.80902, 0.79864,
    0.78801, 0.77715, 0.76604, 0.75471, 0.74314, 0.73135, 0.71934, 0.70711,
    0.69466, 0.682, 0.66913, 0.65606, 0.64279, 0.62932, 0.61566, 0.60182,
    0.58779, 0.57358, 0.55919, 0.54464, 0.52992, 0.51504, 0.5, 0.48481, 0.46947,
    0.45399, 0.43837, 0.42262, 0.40674, 0.39073, 0.37461, 0.35837, 0.34202,
    0.32557, 0.30902, 0.29237, 0.27564, 0.25882, 0.24192, 0.22495, 0.20791,
    0.19081, 0.17365, 0.15643, 0.13917, 0.12187, 0.10453, 0.087156, 0.069756,
    0.052336, 0.034899, 0.017452, 0.0, -0.017452, -0.034899, -0.052336,
    -0.069756, -0.087156, -0.10453, -0.12187, -0.13917, -0.15643, -0.17365,
    -0.19081, -0.20791, -0.22495, -0.24192, -0.25882, -0.27564, -0.29237,
    -0.30902, -0.32557, -0.34202, -0.35837, -0.37461, -0.39073, -0.40674,
    -0.42262, -0.43837, -0.45399, -0.46947, -0.48481, -0.5, -0.51504, -0.52992,
    -0.54464, -0.55919, -0.57358, -0.58779, -0.60182, -0.61566, -0.62932,
    -0.64279, -0.65606, -0.66913, -0.682, -0.69466, -0.70711, -0.71934, -0.73135,
    -0.74314, -0.75471, -0.76604, -0.77715, -0.78801, -0.79864, -0.80902,
    -0.81915, -0.82904, -0.83867, -0.84805, -0.85717, -0.86603, -0.87462,
    -0.88295, -0.89101, -0.89879, -0.90631, -0.91355, -0.9205, -0.92718,
    -0.93358, -0.93969, -0.94552, -0.95106, -0.9563, -0.96126, -0.96593, -0.9703,
    -0.97437, -0.97815, -0.98163, -0.98481, -0.98769, -0.99027, -0.99255,
    -0.99452, -0.99619, -0.99756, -0.99863, -0.99939, -0.99985, -1.0, -0.99985,
    -0.99939, -0.99863, -0.99756, -0.99619, -0.99452, -0.99255, -0.99027,
    -0.98769, -0.98481, -0.98163, -0.97815, -0.97437, -0.9703, -0.96593,
    -0.96126, -0.9563, -0.95106, -0.94552, -0.93969, -0.93358, -0.92718, -0.9205,
    -0.91355, -0.90631, -0.89879, -0.89101, -0.88295, -0.87462, -0.86603,
    -0.85717, -0.84805, -0.83867, -0.82904, -0.81915, -0.80902, -0.79864,
    -0.78801, -0.77715, -0.76604, -0.75471, -0.74314, -0.73135, -0.71934,
    -0.70711, -0.69466, -0.682, -0.66913, -0.65606, -0.64279, -0.62932, -0.61566,
    -0.60182, -0.58779, -0.57358, -0.55919, -0.54464, -0.52992, -0.51504, -0.5,
    -0.48481, -0.46947, -0.45399, -0.43837, -0.42262, -0.40674, -0.39073,
    -0.37461, -0.35837, -0.34202, -0.32557, -0.30902, -0.29237, -0.27564,
    -0.25882, -0.24192, -0.22495, -0.20791, -0.19081, -0.17365, -0.15643,
    -0.13917, -0.12187, -0.10453, -0.087156, -0.069756, -0.052336, -0.034899,
    -0.017452, 0.0, 0.017452, 0.034899, 0.052336, 0.069756, 0.087156, 0.10453,
    0.12187, 0.13917, 0.15643, 0.17365, 0.19081, 0.20791, 0.22495, 0.24192,
    0.25882, 0.27564, 0.29237, 0.30902, 0.32557, 0.34202, 0.35837, 0.37461,
    0.39073, 0.40674, 0.42262, 0.43837, 0.45399, 0.46947, 0.48481, 0.5, 0.51504,
    0.52992, 0.54464, 0.55919, 0.57358, 0.58779, 0.60182, 0.61566, 0.62932,
    0.64279, 0.65606, 0.66913, 0.682, 0.69466, 0.70711, 0.71934, 0.73135,
    0.74314, 0.75471, 0.76604, 0.77715, 0.78801, 0.79864, 0.80902, 0.81915,
    0.82904, 0.83867, 0.84805, 0.85717, 0.86603, 0.87462, 0.88295, 0.89101,
    0.89879, 0.90631, 0.91355, 0.9205, 0.92718, 0.93358, 0.93969, 0.94552,
    0.95106, 0.9563, 0.96126, 0.96593, 0.9703, 0.97437, 0.97815, 0.98163,
    0.98481, 0.98769, 0.99027, 0.99255, 0.99452, 0.99619, 0.99756, 0.99863,
    0.99939, 0.99985, 1.0 };

  real_T b;
  static const real_T dv1[360] = { 0.017452, 0.034899, 0.052336, 0.069756,
    0.087156, 0.10453, 0.12187, 0.13917, 0.15643, 0.17365, 0.19081, 0.20791,
    0.22495, 0.24192, 0.25882, 0.27564, 0.29237, 0.30902, 0.32557, 0.34202,
    0.35837, 0.37461, 0.39073, 0.40674, 0.42262, 0.43837, 0.45399, 0.46947,
    0.48481, 0.5, 0.51504, 0.52992, 0.54464, 0.55919, 0.57358, 0.58779, 0.60182,
    0.61566, 0.62932, 0.64279, 0.65606, 0.66913, 0.682, 0.69466, 0.70711,
    0.71934, 0.73135, 0.74314, 0.75471, 0.76604, 0.77715, 0.78801, 0.79864,
    0.80902, 0.81915, 0.82904, 0.83867, 0.84805, 0.85717, 0.86603, 0.87462,
    0.88295, 0.89101, 0.89879, 0.90631, 0.91355, 0.9205, 0.92718, 0.93358,
    0.93969, 0.94552, 0.95106, 0.9563, 0.96126, 0.96593, 0.9703, 0.97437,
    0.97815, 0.98163, 0.98481, 0.98769, 0.99027, 0.99255, 0.99452, 0.99619,
    0.99756, 0.99863, 0.99939, 0.99985, 1.0, 0.99985, 0.99939, 0.99863, 0.99756,
    0.99619, 0.99452, 0.99255, 0.99027, 0.98769, 0.98481, 0.98163, 0.97815,
    0.97437, 0.9703, 0.96593, 0.96126, 0.9563, 0.95106, 0.94552, 0.93969,
    0.93358, 0.92718, 0.9205, 0.91355, 0.90631, 0.89879, 0.89101, 0.88295,
    0.87462, 0.86603, 0.85717, 0.84805, 0.83867, 0.82904, 0.81915, 0.80902,
    0.79864, 0.78801, 0.77715, 0.76604, 0.75471, 0.74314, 0.73135, 0.71934,
    0.70711, 0.69466, 0.682, 0.66913, 0.65606, 0.64279, 0.62932, 0.61566,
    0.60182, 0.58779, 0.57358, 0.55919, 0.54464, 0.52992, 0.51504, 0.5, 0.48481,
    0.46947, 0.45399, 0.43837, 0.42262, 0.40674, 0.39073, 0.37461, 0.35837,
    0.34202, 0.32557, 0.30902, 0.29237, 0.27564, 0.25882, 0.24192, 0.22495,
    0.20791, 0.19081, 0.17365, 0.15643, 0.13917, 0.12187, 0.10453, 0.087156,
    0.069756, 0.052336, 0.034899, 0.017452, 0.0, -0.017452, -0.034899, -0.052336,
    -0.069756, -0.087156, -0.10453, -0.12187, -0.13917, -0.15643, -0.17365,
    -0.19081, -0.20791, -0.22495, -0.24192, -0.25882, -0.27564, -0.29237,
    -0.30902, -0.32557, -0.34202, -0.35837, -0.37461, -0.39073, -0.40674,
    -0.42262, -0.43837, -0.45399, -0.46947, -0.48481, -0.5, -0.51504, -0.52992,
    -0.54464, -0.55919, -0.57358, -0.58779, -0.60182, -0.61566, -0.62932,
    -0.64279, -0.65606, -0.66913, -0.682, -0.69466, -0.70711, -0.71934, -0.73135,
    -0.74314, -0.75471, -0.76604, -0.77715, -0.78801, -0.79864, -0.80902,
    -0.81915, -0.82904, -0.83867, -0.84805, -0.85717, -0.86603, -0.87462,
    -0.88295, -0.89101, -0.89879, -0.90631, -0.91355, -0.9205, -0.92718,
    -0.93358, -0.93969, -0.94552, -0.95106, -0.9563, -0.96126, -0.96593, -0.9703,
    -0.97437, -0.97815, -0.98163, -0.98481, -0.98769, -0.99027, -0.99255,
    -0.99452, -0.99619, -0.99756, -0.99863, -0.99939, -0.99985, -1.0, -0.99985,
    -0.99939, -0.99863, -0.99756, -0.99619, -0.99452, -0.99255, -0.99027,
    -0.98769, -0.98481, -0.98163, -0.97815, -0.97437, -0.9703, -0.96593,
    -0.96126, -0.9563, -0.95106, -0.94552, -0.93969, -0.93358, -0.92718, -0.9205,
    -0.91355, -0.90631, -0.89879, -0.89101, -0.88295, -0.87462, -0.86603,
    -0.85717, -0.84805, -0.83867, -0.82904, -0.81915, -0.80902, -0.79864,
    -0.78801, -0.77715, -0.76604, -0.75471, -0.74314, -0.73135, -0.71934,
    -0.70711, -0.69466, -0.682, -0.66913, -0.65606, -0.64279, -0.62932, -0.61566,
    -0.60182, -0.58779, -0.57358, -0.55919, -0.54464, -0.52992, -0.51504, -0.5,
    -0.48481, -0.46947, -0.45399, -0.43837, -0.42262, -0.40674, -0.39073,
    -0.37461, -0.35837, -0.34202, -0.32557, -0.30902, -0.29237, -0.27564,
    -0.25882, -0.24192, -0.22495, -0.20791, -0.19081, -0.17365, -0.15643,
    -0.13917, -0.12187, -0.10453, -0.087156, -0.069756, -0.052336, -0.034899,
    -0.017452, 0.0 };

  int32_T i1;
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

  /* { */
  /* --------------------------------------------------------------------------- */
  /* myDetectCircle Uses Circular Hough transform to detect the presence of a */
  /* circle in a  image */
  /*  */
  /* STEPS */
  /* 1. Convert image to gray scale */
  /* 2. Pass gray scaled image to edge detector */
  /* 3. Loop through accumulator to find actual cicle centre */
  /* 4. Draw & label detected circle */
  /*  */
  /*    Created on: 29th June, 2017 */
  /*    Author: Oluwole Oyetoke Jnr */
  /*    Email: oluwoleoyetoke@gmail.com */
  /*    Using MATLAB 2016 */
  /* --------------------------------------------------------------------------- */
  /* } */
  /* INPUT VALIDATION AND IMAGE TRANSFORMATION */
  /* -------------------------------------------------------------------------- */
  /* if nargin ~= 1 */
  /*     error('myDetectCircle:Input_Argument_Error','This function works with 1 input argument -img- ') */
  /* end  */
  /* Check if image is coloured */
  /* -------------------------------------------------------------------------- */
  /* EDGE DETECTION, RADIUS RANGE DERIVATION */
  /* -------------------------------------------------------------------------- */
  yDim = inputImg->size[1];
  xDim = inputImg->size[0];
  st.site = &emlrtRSI;
  b_st.site = &c_emlrtRSI;
  c_st.site = &d_emlrtRSI;
  inputImg_idx_0 = inputImg->size[0] * inputImg->size[1];
  guard2 = false;
  if (inputImg_idx_0 == 1) {
    guard2 = true;
  } else {
    inputImg_idx_0 = inputImg->size[0] * inputImg->size[1];
    if (inputImg_idx_0 != 1) {
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
    emlrtErrorWithMessageIdR2012b(&c_st, &e_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  inputImg_idx_0 = inputImg->size[0] * inputImg->size[1];
  if (inputImg_idx_0 > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &d_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &e_emlrtRSI;
  ixstart = 1;
  inputImg_idx_0 = inputImg->size[0] * inputImg->size[1];
  mtmp = inputImg->data[0];
  ix = inputImg->size[0] * inputImg->size[1];
  if (ix > 1) {
    if (muDoubleScalarIsNaN(inputImg->data[0])) {
      e_st.site = &g_emlrtRSI;
      ix = inputImg->size[0] * inputImg->size[1];
      if (2 > ix) {
        overflow = false;
      } else {
        ix = inputImg->size[0] * inputImg->size[1];
        overflow = (ix > 2147483646);
      }

      if (overflow) {
        f_st.site = &h_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      ix = 2;
      exitg1 = false;
      while ((!exitg1) && (ix <= inputImg_idx_0)) {
        ixstart = ix;
        if (!muDoubleScalarIsNaN(inputImg->data[ix - 1])) {
          mtmp = inputImg->data[ix - 1];
          exitg1 = true;
        } else {
          ix++;
        }
      }
    }

    ix = inputImg->size[0] * inputImg->size[1];
    if (ixstart < ix) {
      e_st.site = &f_emlrtRSI;
      ix = inputImg->size[0] * inputImg->size[1];
      if (ixstart + 1 > ix) {
        overflow = false;
      } else {
        ix = inputImg->size[0] * inputImg->size[1];
        overflow = (ix > 2147483646);
      }

      if (overflow) {
        f_st.site = &h_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (ixstart + 1 <= inputImg_idx_0) {
        if (inputImg->data[ixstart] > mtmp) {
          mtmp = inputImg->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  emxInit_real_T(&d_st, &Accumulator, 3, &b_emlrtRTEI, true);
  minRadius = (int32_T)muDoubleScalarCeil((real_T)inputImg->size[1] * 0.1);
  range = (int32_T)muDoubleScalarCeil((real_T)inputImg->size[1] / 2.0) -
    minRadius;

  /* -------------------------------------------------------------------------- */
  /* HOUGH TRANSFORM/DETECTION HAPPENS HERE */
  /* -------------------------------------------------------------------------- */
  /* { */
  /* Recall that  */
  /* h=x-rcos(?) */
  /* k=y-rcos(?) */
  /* ? = 0 - 360 */
  /* } */
  /* radius =10; */
  /* viewCircularHough( img, radius ) to view circular hough in operation */
  /* Create Accumulator */
  *dummyVar = 1.0;
  i0 = Accumulator->size[0] * Accumulator->size[1] * Accumulator->size[2];
  Accumulator->size[0] = inputImg->size[0];
  Accumulator->size[1] = inputImg->size[1];
  inputImg_idx_0 = range;
  if (!(inputImg_idx_0 >= 0)) {
    emlrtNonNegativeCheckR2012b(inputImg_idx_0, &emlrtDCI, sp);
  }

  Accumulator->size[2] = inputImg_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)Accumulator, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  i0 = range;
  if (!(i0 >= 0)) {
    emlrtNonNegativeCheckR2012b(i0, &emlrtDCI, sp);
  }

  inputImg_idx_0 = inputImg->size[0] * inputImg->size[1] * i0;
  for (i0 = 0; i0 < inputImg_idx_0; i0++) {
    Accumulator->data[i0] = 0.0;
  }

  /* sine look up table */
  /* Loop through all the pixels and apply hough transform technique */
  xPixel = 0;
  while (xPixel <= xDim - 1) {
    yPixel = 0;
    while (yPixel <= yDim - 1) {
      /* Looping through every pixel */
      i0 = inputImg->size[0];
      if (!((xPixel + 1 >= 1) && (xPixel + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(xPixel + 1, 1, i0, &emlrtBCI, sp);
      }

      i0 = inputImg->size[1];
      if (!((yPixel + 1 >= 1) && (yPixel + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(yPixel + 1, 1, i0, &b_emlrtBCI, sp);
      }

      if (inputImg->data[xPixel + inputImg->size[0] * yPixel] > 0.0) {
        i0 = inputImg->size[0];
        if (!((xPixel + 1 >= 1) && (xPixel + 1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(xPixel + 1, 1, i0, &c_emlrtBCI, sp);
        }

        i0 = inputImg->size[1];
        if (!((yPixel + 1 >= 1) && (yPixel + 1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(yPixel + 1, 1, i0, &d_emlrtBCI, sp);
        }

        if (inputImg->data[xPixel + inputImg->size[0] * yPixel] >= 0.7 * mtmp) {
          /* Pick only SURE edges */
          rad = 0;
          while (rad <= range - 1) {
            /* Loop through radius range */
            radius = minRadius + rad;
            tetha = 0;
            while (tetha < 360) {
              /* Every possible angle */
              a = muDoubleScalarCeil((1.0 + (real_T)xPixel) - (real_T)radius *
                dv0[tetha]);
              b = muDoubleScalarCeil((1.0 + (real_T)yPixel) - (real_T)radius *
                dv1[tetha]);
              if ((a > 0.0) && (b > 0.0) && ((uint32_T)a <= (uint32_T)xDim) &&
                  ((uint32_T)b <= (uint32_T)yDim)) {
                i0 = Accumulator->size[0];
                inputImg_idx_0 = (int32_T)a;
                if (!((inputImg_idx_0 >= 1) && (inputImg_idx_0 <= i0))) {
                  emlrtDynamicBoundsCheckR2012b(inputImg_idx_0, 1, i0,
                    &e_emlrtBCI, sp);
                }

                i0 = Accumulator->size[1];
                ixstart = (int32_T)b;
                if (!((ixstart >= 1) && (ixstart <= i0))) {
                  emlrtDynamicBoundsCheckR2012b(ixstart, 1, i0, &f_emlrtBCI, sp);
                }

                i0 = Accumulator->size[2];
                if (!(rad + 1 <= i0)) {
                  emlrtDynamicBoundsCheckR2012b(rad + 1, 1, i0, &g_emlrtBCI, sp);
                }

                i0 = Accumulator->size[0];
                ix = (int32_T)a;
                if (!((ix >= 1) && (ix <= i0))) {
                  emlrtDynamicBoundsCheckR2012b(ix, 1, i0, &h_emlrtBCI, sp);
                }

                i0 = Accumulator->size[1];
                i1 = (int32_T)b;
                if (!((i1 >= 1) && (i1 <= i0))) {
                  emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &i_emlrtBCI, sp);
                }

                i0 = Accumulator->size[2];
                if (!(rad + 1 <= i0)) {
                  emlrtDynamicBoundsCheckR2012b(rad + 1, 1, i0, &j_emlrtBCI, sp);
                }

                Accumulator->data[((ix + Accumulator->size[0] * (i1 - 1)) +
                                   Accumulator->size[0] * Accumulator->size[1] *
                                   rad) - 1] = Accumulator->data
                  [((inputImg_idx_0 + Accumulator->size[0] * (ixstart - 1)) +
                    Accumulator->size[0] * Accumulator->size[1] * rad) - 1] +
                  1.0;
              }

              tetha++;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }

            /* end of theta loop */
            rad++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(sp);
            }
          }

          /* end of radius loop */
        }
      }

      /* end if */
      yPixel++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    /* end of yPixel */
    xPixel++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /* end of xPixel */
  /* -------------------------------------------------------------------------- */
  /* Make decision */
  st.site = &b_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  c_st.site = &j_emlrtRSI;
  inputImg_idx_0 = Accumulator->size[0] * Accumulator->size[1] *
    Accumulator->size[2];
  guard1 = false;
  if (inputImg_idx_0 == 1) {
    guard1 = true;
  } else {
    inputImg_idx_0 = Accumulator->size[0] * Accumulator->size[1] *
      Accumulator->size[2];
    if (inputImg_idx_0 != 1) {
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
    emlrtErrorWithMessageIdR2012b(&c_st, &e_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  inputImg_idx_0 = Accumulator->size[0] * Accumulator->size[1] *
    Accumulator->size[2];
  if (inputImg_idx_0 > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &d_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &e_emlrtRSI;
  inputImg_idx_0 = Accumulator->size[0] * Accumulator->size[1] *
    Accumulator->size[2];
  mtmp = Accumulator->data[0];
  ix = Accumulator->size[0] * Accumulator->size[1] * Accumulator->size[2];
  if (ix > 1) {
    ix = Accumulator->size[0] * Accumulator->size[1] * Accumulator->size[2];
    if (1 < ix) {
      e_st.site = &f_emlrtRSI;
      ix = Accumulator->size[0] * Accumulator->size[1] * Accumulator->size[2];
      if (2 > ix) {
        overflow = false;
      } else {
        ix = Accumulator->size[0] * Accumulator->size[1] * Accumulator->size[2];
        overflow = (ix > 2147483646);
      }

      if (overflow) {
        f_st.site = &h_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      for (ix = 1; ix + 1 <= inputImg_idx_0; ix++) {
        if (Accumulator->data[ix] > mtmp) {
          mtmp = Accumulator->data[ix];
        }
      }
    }
  }

  emxFree_real_T(&Accumulator);
  *circleAvailable = (mtmp > 100.0);

  /* { */
  /* FIND CENTRE & %DRAW THE DETECTED CIRCLE; */
  /* -------------------------------------------------------------------------- */
  /* currentMax =0; */
  /* maxDetails = [0 0 0 0]; */
  /* for radius=1:range */
  /*    %Scan through each slice of the accumulator array */
  /*    temp=Accumulator(:,:,radius); */
  /*    [maxValue,index]=max(temp(:)); %Get maximum value per slice */
  /*    if maxValue>=currentMax %is maxVal> current maximum value? */
  /*    [i,j]=ind2sub([xDim yDim],index); */
  /*    maxDetails=[maxValue i j (minRadius+radius-1)]; %Save it as current maximum */
  /*    currentMax=maxValue; */
  /*    end %end of if */
  /* end */
  /*  */
  /*  */
  /*  */
  /* radii = maxDetails(1,4); */
  /* [edgedRegion] = drawDetectedCircle( img, xDim, yDim, centers, radii); */
  /*  a = maxDetails(1,2); */
  /*  b = maxDetails(1,3); */
  /*  radiusSquared = radii*radii;  */
  /*  %draw test circle - Bhrams theorem = (x – xo)^2 + (y – yo)^2 <= r2 */
  /*  for xCnt = 1:xDim */
  /*      for yCnt = 1:yDim */
  /*         lft = (xCnt - a)*(xCnt - a); */
  /*         rht = (yCnt - b)*(yCnt - b); */
  /*             if (lft+rht)<=radiusSquared */
  /*             edgedRegion(xCnt, yCnt) = 100;  */
  /*             end %end of if statement */
  /*      end %end of yCnt */
  /*  end %end of xCnt */
  /* imshow(edgedRegion); */
  /*   */
  /* SHOW CENTRE AND LABEL CIRCLE */
  /* -------------------------------------------------------------------------- */
  /* edgedRegion(a, b) = 255; */
  /* labeledImg = insertText(edgedRegion,[b (a-radii+7)],... */
  /*     'CIRCLE DETECTED HERE','TextColor',... */
  /*     'white','BoxOpacity',1,'Font','LucidaBrightRegular'); */
  /* imshow(labeledImg); */
  /* -------------------------------------------------------------------------- */
  /* } */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (myDetectCircle.c) */
