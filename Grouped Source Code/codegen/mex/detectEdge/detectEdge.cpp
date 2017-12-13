/*
 * detectEdge.cpp
 *
 * Code generation for function 'detectEdge'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectEdge.h"
#include "detectEdge_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "error.h"
#include "median.h"
#include "detectEdge_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 81, "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m"
};

static emlrtRSInfo b_emlrtRSI = { 102, "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m"
};

static emlrtRSInfo c_emlrtRSI = { 103, "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m"
};

static emlrtRSInfo d_emlrtRSI = { 12, "sqrt",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"
};

static emlrtRSInfo e_emlrtRSI = { 13, "max",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"
};

static emlrtRSInfo f_emlrtRSI = { 19, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo g_emlrtRSI = { 214, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo h_emlrtRSI = { 375, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo i_emlrtRSI = { 347, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo j_emlrtRSI = { 20, "eml_int_forloop_overflow_check",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo k_emlrtRSI = { 140, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 26, "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 53, 1, "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 121, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 39, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo j_emlrtRTEI = { 67, 9, "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m"
};

static emlrtRTEInfo k_emlrtRTEI = { 66, 6, "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 58, 1, "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m"
};

static emlrtDCInfo emlrtDCI = { 53, 20, "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m",
  4 };

static emlrtDCInfo b_emlrtDCI = { 53, 28, "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m",
  4 };

static emlrtBCInfo emlrtBCI = { -1, -1, 108, 1, "filteredEdgeImage",
  "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 82, 17, "edgedImage", "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 82, 27, "edgedImage", "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 68, 30, "graySImg", "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 68, 38, "graySImg", "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { 1, 3, 68, 52, "Gx", "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m",
  0 };

static emlrtDCInfo c_emlrtDCI = { 68, 52, "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m",
  1 };

static emlrtBCInfo g_emlrtBCI = { 1, 3, 68, 70, "Gx", "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m",
  0 };

static emlrtDCInfo d_emlrtDCI = { 68, 70, "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m",
  1 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 69, 30, "graySImg", "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 69, 38, "graySImg", "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { 1, 3, 69, 52, "Gy", "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m",
  0 };

static emlrtBCInfo k_emlrtBCI = { 1, 3, 69, 70, "Gy", "detectEdge",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectEdge.m",
  0 };

/* Function Definitions */
void detectEdge(const emlrtStack *sp, const emxArray_real_T *graySImg,
                emxArray_real_T *edgedRegion)
{
  emxArray_real_T *edgedImage;
  real_T startX;
  real_T startY;
  real_T stopX;
  real_T stopY;
  int32_T xCounter;
  int32_T yCounter;
  real_T totalBlocks;
  int32_T i0;
  int32_T i1;
  int32_T n;
  int32_T loopCount;
  emxArray_real_T *b_edgedImage;
  real_T regionGxSum;
  real_T regionGySum;
  int32_T ixstart;
  int32_T innerX;
  real_T b_innerX;
  emxArray_real_T *varargin_1;
  int32_T innerY;
  real_T medianVal;
  real_T mtmp;
  real_T b_innerY;
  boolean_T guard1 = false;
  int32_T ix;
  boolean_T b0;
  emxArray_real_T *c_edgedImage;
  int32_T i;
  real_T GxVal;
  static const int8_T Gx[9] = { -1, -2, -1, 0, 0, 0, 1, 2, 1 };

  int32_T exitg2;
  real_T GyVal;
  static const int8_T Gy[9] = { 1, 0, -1, 2, 0, -2, 1, 0, -1 };

  boolean_T exitg3;
  boolean_T exitg1;
  emxArray_int32_T *r0;
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
  emxInit_real_T(sp, &edgedImage, 2, &b_emlrtRTEI, true);

  /* { */
  /* detectEdge: Edge detection using Sobel Filter */
  /*  */
  /*  */
  /* STEPS */
  /* 1. Check to know if image is coloured (Input should be an RGB image) */
  /* 2. If coloured, convert to GrayScale */
  /* 3. Convolve sobel filter with image */
  /* 4. Get gradiaent magnitude */
  /* 5. perform max and median filtering */
  /*  */
  /*  */
  /*    Created on: 19th June, 2017 */
  /*    Author: Oluwole Oyetoke Jnr */
  /*    Using MATLAB 2016 */
  /* } */
  /* Input Validation */
  /* if nargin ~= 1 */
  /*     error('detectEdge:Input_Argument_Error','This function works with 1 input argument -img- ') */
  /* end */
  /* Declare Filters */
  /* { */
  /* Check if image is coloured */
  /* [xDim, yDim, zDim] = size(img); */
  /* img = im2double(img); %Convert to class double */
  /* if (zDim>1) %Convert image to grey scale */
  /* graySImg = double(rgb2gray(img)); %Automatic way */
  /* graySImg = (1/3)* ((double(img(:,:,1))) + (double(img(:,:,2)))+ (double(img(:,:,3)))); %Manual */
  /* else */
  /*     graySImg = img; */
  /* end */
  /* } */
  /* Initialize aprameters and variables */
  startX = 1.0;
  startY = 1.0;
  stopX = 3.0;
  stopY = 3.0;
  xCounter = 1;
  yCounter = 1;
  totalBlocks = (((real_T)graySImg->size[0] - 3.0) + 1.0) * (((real_T)
    graySImg->size[1] - 3.0) + 1.0);
  i0 = edgedImage->size[0] * edgedImage->size[1];
  i1 = graySImg->size[0] - 2;
  if (!(i1 >= 0)) {
    emlrtNonNegativeCheckR2012b((real_T)i1, (emlrtDCInfo *)&emlrtDCI, sp);
  }

  edgedImage->size[0] = i1;
  i1 = graySImg->size[1] - 2;
  if (!(i1 >= 0)) {
    emlrtNonNegativeCheckR2012b((real_T)i1, (emlrtDCInfo *)&b_emlrtDCI, sp);
  }

  edgedImage->size[1] = i1;
  emxEnsureCapacity(sp, (emxArray__common *)edgedImage, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  i0 = graySImg->size[0] - 2;
  if (!(i0 >= 0)) {
    emlrtNonNegativeCheckR2012b((real_T)i0, (emlrtDCInfo *)&emlrtDCI, sp);
  }

  i1 = graySImg->size[1] - 2;
  if (!(i1 >= 0)) {
    emlrtNonNegativeCheckR2012b((real_T)i1, (emlrtDCInfo *)&b_emlrtDCI, sp);
  }

  n = i0 * i1;
  for (i0 = 0; i0 < n; i0++) {
    edgedImage->data[i0] = 0.0;
  }

  /* Convolve filter with image */
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, totalBlocks, mxDOUBLE_CLASS, (int32_T)
    totalBlocks, (emlrtRTEInfo *)&l_emlrtRTEI, sp);
  loopCount = 0;
  while (loopCount <= (int32_T)totalBlocks - 1) {
    /* Pixel Sum Pooling happens here */
    regionGxSum = 0.0;
    regionGySum = 0.0;

    /* Try to unroll this loop later (if speed needs arises) */
    i0 = (int32_T)(stopX + (1.0 - startX));
    emlrtForLoopVectorCheckR2012b(startX, 1.0, stopX, mxDOUBLE_CLASS, i0,
      (emlrtRTEInfo *)&k_emlrtRTEI, sp);
    innerX = 0;
    while (innerX <= i0 - 1) {
      b_innerX = startX + (real_T)innerX;
      i1 = (int32_T)(stopY + (1.0 - startY));
      emlrtForLoopVectorCheckR2012b(startY, 1.0, stopY, mxDOUBLE_CLASS, i1,
        (emlrtRTEInfo *)&j_emlrtRTEI, sp);
      innerY = 0;
      while (innerY <= i1 - 1) {
        b_innerY = startY + (real_T)innerY;
        ixstart = graySImg->size[0];
        n = (int32_T)b_innerX;
        if (!((n >= 1) && (n <= ixstart))) {
          emlrtDynamicBoundsCheckR2012b(n, 1, ixstart, (emlrtBCInfo *)
            &d_emlrtBCI, sp);
        }

        ixstart = graySImg->size[1];
        ix = (int32_T)b_innerY;
        if (!((ix >= 1) && (ix <= ixstart))) {
          emlrtDynamicBoundsCheckR2012b(ix, 1, ixstart, (emlrtBCInfo *)
            &e_emlrtBCI, sp);
        }

        mtmp = (b_innerX - startX) + 1.0;
        if (mtmp != (int32_T)mtmp) {
          emlrtIntegerCheckR2012b(mtmp, (emlrtDCInfo *)&c_emlrtDCI, sp);
        }

        ixstart = (int32_T)mtmp;
        if (!((ixstart >= 1) && (ixstart <= 3))) {
          emlrtDynamicBoundsCheckR2012b(ixstart, 1, 3, (emlrtBCInfo *)
            &f_emlrtBCI, sp);
        }

        mtmp = (b_innerY - startY) + 1.0;
        if (mtmp != (int32_T)mtmp) {
          emlrtIntegerCheckR2012b(mtmp, (emlrtDCInfo *)&d_emlrtDCI, sp);
        }

        i = (int32_T)mtmp;
        if (!((i >= 1) && (i <= 3))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, 3, (emlrtBCInfo *)&g_emlrtBCI, sp);
        }

        GxVal = graySImg->data[(n + graySImg->size[0] * (ix - 1)) - 1] * (real_T)
          Gx[(ixstart + 3 * (i - 1)) - 1];
        ixstart = graySImg->size[0];
        n = (int32_T)b_innerX;
        if (!((n >= 1) && (n <= ixstart))) {
          emlrtDynamicBoundsCheckR2012b(n, 1, ixstart, (emlrtBCInfo *)
            &h_emlrtBCI, sp);
        }

        ixstart = graySImg->size[1];
        ix = (int32_T)b_innerY;
        if (!((ix >= 1) && (ix <= ixstart))) {
          emlrtDynamicBoundsCheckR2012b(ix, 1, ixstart, (emlrtBCInfo *)
            &i_emlrtBCI, sp);
        }

        ixstart = (int32_T)((b_innerX - startX) + 1.0);
        if (!((ixstart >= 1) && (ixstart <= 3))) {
          emlrtDynamicBoundsCheckR2012b(ixstart, 1, 3, (emlrtBCInfo *)
            &j_emlrtBCI, sp);
        }

        i = (int32_T)((b_innerY - startY) + 1.0);
        if (!((i >= 1) && (i <= 3))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, 3, (emlrtBCInfo *)&k_emlrtBCI, sp);
        }

        GyVal = graySImg->data[(n + graySImg->size[0] * (ix - 1)) - 1] * (real_T)
          Gy[(ixstart + 3 * (i - 1)) - 1];
        regionGxSum += GxVal;
        regionGySum += GyVal;
        innerY++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      innerX++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    /* To view window as it slides over the image. Press space bar to release pause */
    /* hold on */
    /* rectangle('Position',[startX startY 3 3], 'EdgeColor', 'g') */
    /* pause */
    /* Get Gradiaent Magnitude    */
    st.site = &emlrtRSI;
    mtmp = regionGxSum * regionGxSum + regionGySum * regionGySum;
    if (mtmp < 0.0) {
      b_st.site = &d_emlrtRSI;
      error(&b_st);
    }

    i0 = edgedImage->size[0];
    if (!((xCounter >= 1) && (xCounter <= i0))) {
      emlrtDynamicBoundsCheckR2012b(xCounter, 1, i0, (emlrtBCInfo *)&b_emlrtBCI,
        sp);
    }

    i0 = edgedImage->size[1];
    if (!((yCounter >= 1) && (yCounter <= i0))) {
      emlrtDynamicBoundsCheckR2012b(yCounter, 1, i0, (emlrtBCInfo *)&c_emlrtBCI,
        sp);
    }

    edgedImage->data[(xCounter + edgedImage->size[0] * (yCounter - 1)) - 1] =
      muDoubleScalarSqrt(mtmp);

    /* Loop management  */
    if (yCounter == graySImg->size[1] - 2) {
      /* reset xStart, xStop positions and xCounter  */
      startY = 1.0;
      stopY = 3.0;
      yCounter = 0;
      xCounter++;
      startX++;
      stopX = (startX + 3.0) - 1.0;
    } else {
      startY++;
      stopY = (startY + 3.0) - 1.0;
    }

    yCounter++;
    loopCount++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxInit_real_T(sp, &b_edgedImage, 2, &emlrtRTEI, true);

  /* end of xLoopCount */
  /* Filter image using max and median filter to detect just mostly edges and wipe out negatives */
  n = edgedImage->size[0];
  ixstart = edgedImage->size[1];
  i0 = b_edgedImage->size[0] * b_edgedImage->size[1];
  b_edgedImage->size[0] = n;
  b_edgedImage->size[1] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)b_edgedImage, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i0 = 0; i0 < ixstart; i0++) {
    for (i1 = 0; i1 < n; i1++) {
      b_edgedImage->data[i1 + b_edgedImage->size[0] * i0] = edgedImage->data[i1
        + edgedImage->size[0] * i0];
    }
  }

  emxInit_real_T(sp, &varargin_1, 2, &emlrtRTEI, true);
  st.site = &b_emlrtRSI;
  median(&st, b_edgedImage, varargin_1);
  st.site = &b_emlrtRSI;
  medianVal = b_median(&st, varargin_1);
  st.site = &c_emlrtRSI;
  b_st.site = &e_emlrtRSI;
  c_st.site = &f_emlrtRSI;
  i0 = edgedImage->size[0];
  i1 = edgedImage->size[1];
  emxFree_real_T(&b_edgedImage);
  guard1 = false;
  if ((i0 == 1) && (i1 == 1)) {
    guard1 = true;
  } else {
    i0 = edgedImage->size[0];
    if (i0 != 1) {
      guard1 = true;
    } else {
      b0 = false;
    }
  }

  if (guard1) {
    b0 = true;
  }

  if (b0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &i_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  i0 = edgedImage->size[0];
  if (i0 > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &h_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  emxInit_real_T(&c_st, &c_edgedImage, 2, &emlrtRTEI, true);
  n = edgedImage->size[0];
  ixstart = edgedImage->size[1];
  i0 = c_edgedImage->size[0] * c_edgedImage->size[1];
  c_edgedImage->size[0] = n;
  c_edgedImage->size[1] = ixstart;
  emxEnsureCapacity(&c_st, (emxArray__common *)c_edgedImage, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i0 = 0; i0 < ixstart; i0++) {
    for (i1 = 0; i1 < n; i1++) {
      c_edgedImage->data[i1 + c_edgedImage->size[0] * i0] = edgedImage->data[i1
        + edgedImage->size[0] * i0];
    }
  }

  i0 = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = c_edgedImage->size[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)varargin_1, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  i0 = edgedImage->size[0];
  i = 0;
  emxFree_real_T(&c_edgedImage);
  do {
    exitg2 = 0;
    i1 = edgedImage->size[1];
    if (i + 1 <= i1) {
      ix = i * i0;
      d_st.site = &g_emlrtRSI;
      n = i * i0 + 1;
      ixstart = ix + i0;
      i1 = edgedImage->size[0];
      mtmp = edgedImage->data[ix % i1 + edgedImage->size[0] * (ix / i1)];
      if (i0 > 1) {
        if (muDoubleScalarIsNaN(mtmp)) {
          e_st.site = &i_emlrtRSI;
          if ((!(n + 1 > ixstart)) && (ixstart > 2147483646)) {
            f_st.site = &j_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }

          ix = n;
          exitg3 = false;
          while ((!exitg3) && (ix + 1 <= ixstart)) {
            n = ix + 1;
            i1 = edgedImage->size[0];
            if (!muDoubleScalarIsNaN(edgedImage->data[ix % i1 + edgedImage->
                 size[0] * (ix / i1)])) {
              i1 = edgedImage->size[0];
              mtmp = edgedImage->data[ix % i1 + edgedImage->size[0] * (ix / i1)];
              exitg3 = true;
            } else {
              ix++;
            }
          }
        }

        if (n < ixstart) {
          e_st.site = &h_emlrtRSI;
          if ((!(n + 1 > ixstart)) && (ixstart > 2147483646)) {
            f_st.site = &j_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }

          while (n + 1 <= ixstart) {
            i1 = edgedImage->size[0];
            if (edgedImage->data[n % i1 + edgedImage->size[0] * (n / i1)] > mtmp)
            {
              i1 = edgedImage->size[0];
              mtmp = edgedImage->data[n % i1 + edgedImage->size[0] * (n / i1)];
            }

            n++;
          }
        }
      }

      varargin_1->data[i] = mtmp;
      i++;
    } else {
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  st.site = &c_emlrtRSI;
  b_st.site = &e_emlrtRSI;
  c_st.site = &f_emlrtRSI;
  if ((varargin_1->size[1] == 1) || (varargin_1->size[1] != 1)) {
    b0 = true;
  } else {
    b0 = false;
  }

  if (b0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &i_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (varargin_1->size[1] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &h_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &k_emlrtRSI;
  ixstart = 1;
  n = varargin_1->size[1];
  mtmp = varargin_1->data[0];
  if (varargin_1->size[1] > 1) {
    if (muDoubleScalarIsNaN(varargin_1->data[0])) {
      e_st.site = &i_emlrtRSI;
      ix = 2;
      exitg1 = false;
      while ((!exitg1) && (ix <= n)) {
        ixstart = ix;
        if (!muDoubleScalarIsNaN(varargin_1->data[ix - 1])) {
          mtmp = varargin_1->data[ix - 1];
          exitg1 = true;
        } else {
          ix++;
        }
      }
    }

    if (ixstart < varargin_1->size[1]) {
      e_st.site = &h_emlrtRSI;
      while (ixstart + 1 <= n) {
        if (varargin_1->data[ixstart] > mtmp) {
          mtmp = varargin_1->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  emxFree_real_T(&varargin_1);
  i0 = edgedRegion->size[0] * edgedRegion->size[1];
  edgedRegion->size[0] = edgedImage->size[0];
  edgedRegion->size[1] = edgedImage->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)edgedRegion, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  n = edgedImage->size[0] * edgedImage->size[1];
  for (i0 = 0; i0 < n; i0++) {
    edgedRegion->data[i0] = edgedImage->data[i0] - medianVal;
  }

  emxInit_int32_T(sp, &r0, 1, &emlrtRTEI, true);

  /* Black out all place where edge image is <30% of the brightes pixel in the picture */
  n = edgedImage->size[0] * edgedImage->size[1] - 1;
  ixstart = 0;
  for (i = 0; i <= n; i++) {
    if (edgedImage->data[i] - medianVal < mtmp * 0.3) {
      ixstart++;
    }
  }

  i0 = r0->size[0];
  r0->size[0] = ixstart;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  ixstart = 0;
  for (i = 0; i <= n; i++) {
    if (edgedImage->data[i] - medianVal < mtmp * 0.3) {
      r0->data[ixstart] = i + 1;
      ixstart++;
    }
  }

  ixstart = edgedImage->size[0] * edgedImage->size[1];
  n = r0->size[0];
  emxFree_real_T(&edgedImage);
  for (i0 = 0; i0 < n; i0++) {
    i1 = r0->data[i0];
    if (!((i1 >= 1) && (i1 <= ixstart))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, ixstart, (emlrtBCInfo *)&emlrtBCI, sp);
    }

    edgedRegion->data[i1 - 1] = 0.0;
  }

  emxFree_int32_T(&r0);

  /* fprintf('Edge Detection Carried Out') */
  /* imshow(edgedRegion) */
  /* end of module */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (detectEdge.cpp) */
