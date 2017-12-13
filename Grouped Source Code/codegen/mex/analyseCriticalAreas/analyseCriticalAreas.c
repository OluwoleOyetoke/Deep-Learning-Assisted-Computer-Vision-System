/*
 * analyseCriticalAreas.c
 *
 * Code generation for function 'analyseCriticalAreas'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "analyseCriticalAreas.h"
#include "analyseCriticalAreas_emxutil.h"
#include "detectCorner.h"
#include "analyseCriticalAreas_data.h"
#include "blas.h"
#include "libmwordfilt2.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 75, "analyseCriticalAreas",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\analyseCriticalAreas.m"
};

static emlrtRSInfo b_emlrtRSI = { 77, "analyseCriticalAreas",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\analyseCriticalAreas.m"
};

static emlrtRSInfo c_emlrtRSI = { 41, "imcrop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imcrop.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 31, "analyseCriticalAreas",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\analyseCriticalAreas.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 41, 1, "imcrop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imcrop.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 37, 20, "edgeXs", "analyseCriticalAreas",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\analyseCriticalAreas.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 38, 20, "edgeYs",
  "analyseCriticalAreas",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\analyseCriticalAreas.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 130, 11, "x", "analyseCriticalAreas",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\analyseCriticalAreas.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 131, 11, "y", "analyseCriticalAreas",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\analyseCriticalAreas.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 243, 28, "", "imcrop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imcrop.m", 0
};

static emlrtBCInfo f_emlrtBCI = { -1, -1, 243, 11, "", "imcrop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imcrop.m", 0
};

/* Function Definitions */
void analyseCriticalAreas(const emlrtStack *sp, const emxArray_real_T *img,
  const emxArray_real_T *edgeXs, const emxArray_real_T *edgeYs, real_T chances[3],
  real_T shrinks[4])
{
  real_T highestX;
  real_T highestY;
  real_T lowestX;
  real_T lowestY;
  int32_T xLoop;
  int32_T i0;
  int32_T i1;
  real_T width;
  real_T height;
  uint32_T xdata_idx_1;
  uint32_T ydata_idx_1;
  int32_T xmax;
  int32_T xmin;
  int32_T ymax;
  int32_T ymin;
  real_T pixelsPerVerticalUnit;
  real_T pixelsPerHorizontalUnit;
  real_T r1;
  real_T x;
  real_T b_x;
  int32_T rowIdx2;
  real_T c1;
  emxArray_real_T *J;
  emxArray_real_T *c_x;
  emxArray_real_T *y;
  real_T topLeftPortion;
  real_T topMiddlePortion;
  int32_T img_idx_0;
  real_T topRightPortion;
  real_T downLeftPortion;
  real_T downMiddlePortion;
  real_T downRightPortion;
  int32_T regionSizeX;
  int32_T regionSizeY;
  real_T tmsY;
  int32_T trsY;
  int32_T blsX;
  int32_T bmsX;
  real_T bmsY;
  int32_T brsX;
  int32_T brsY;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* { */
  /* --------------------------------------------------------------------------- */
  /* analyseCriticalAreas: Function used to check the 8 critical edses of the ROI so */
  /* as to decipher the kind of shape under question. Shapes such as such as */
  /* triangles, squares, octagons and diamonds */
  /*  */
  /*  */
  /*  Created on: 20th June, 2017 */
  /*    Author: Oluwole Oyetoke Jnr */
  /*    Using MATLAB 2016 */
  /*  */
  /* STEPS */
  /* 1. Iterate through image and identify border elements */
  /* 2. Crop image based on active border pixels */
  /* 3. Perform edge detection on the croped image */
  /* 4. Check top/bottom-left, middle & right corner for the presence of edges */
  /* This will help in the detetion of triangls and rectangles */
  /* --------------------------------------------------------------------------- */
  /* } */
  /* Input Validation */
  /* Allowance given when croping in the ROI at the end */
  /* Check if image is coloured */
  /* Begin shrink process */
  highestX = -1.0;
  highestY = -1.0;
  lowestX = (real_T)img->size[0] + 1.0;
  lowestY = (real_T)img->size[1] + 1.0;
  xLoop = 0;
  while (xLoop <= edgeXs->size[0] - 1) {
    i0 = edgeXs->size[0];
    i1 = xLoop + 1;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &emlrtBCI, sp);
    }

    i0 = edgeYs->size[0];
    i1 = xLoop + 1;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &b_emlrtBCI, sp);
    }

    if (edgeXs->data[xLoop] > highestX) {
      highestX = edgeXs->data[xLoop];
    }

    if (edgeXs->data[xLoop] < lowestX) {
      lowestX = edgeXs->data[xLoop];
    }

    if (edgeYs->data[xLoop] > highestY) {
      highestY = edgeYs->data[xLoop];
    }

    if (edgeYs->data[xLoop] < lowestY) {
      lowestY = edgeYs->data[xLoop];
    }

    xLoop++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /* Give a little allowance */
  if (lowestX - 3.0 >= 1.0) {
    lowestX -= 3.0;
  }

  if (lowestY - 3.0 >= 1.0) {
    lowestY -= 3.0;
  }

  if (highestX + 3.0 <= img->size[0]) {
    highestX += 3.0;
  }

  if (highestY + 3.0 <= img->size[1]) {
    highestY += 3.0;
  }

  width = (highestY - lowestY) + 1.0;
  height = (highestX - lowestX) + 1.0;
  shrinks[0] = lowestY;
  shrinks[1] = lowestX;
  shrinks[2] = (real_T)img->size[1] - width;
  shrinks[3] = (real_T)img->size[0] - height;
  st.site = &emlrtRSI;
  xdata_idx_1 = (uint32_T)img->size[1];
  ydata_idx_1 = (uint32_T)img->size[0];
  b_st.site = &c_emlrtRSI;
  xmax = 1;
  xmin = 1;
  if ((int32_T)xdata_idx_1 > 1) {
    xmax = (int32_T)xdata_idx_1;
  }

  if ((int32_T)xdata_idx_1 < 1) {
    xmin = 0;
  }

  ymax = 1;
  ymin = 1;
  if ((int32_T)ydata_idx_1 > 1) {
    ymax = (int32_T)ydata_idx_1;
  }

  if ((int32_T)ydata_idx_1 < 1) {
    ymin = 0;
  }

  if (img->size[0] == 1) {
    pixelsPerVerticalUnit = 1.0;
  } else {
    pixelsPerVerticalUnit = ((real_T)img->size[0] - 1.0) / (real_T)(ymax - ymin);
  }

  if (img->size[1] == 1) {
    pixelsPerHorizontalUnit = 1.0;
  } else {
    pixelsPerHorizontalUnit = ((real_T)img->size[1] - 1.0) / (real_T)(xmax -
      xmin);
  }

  r1 = (lowestX - (real_T)ymin) * pixelsPerVerticalUnit + 1.0;
  x = r1 + height * pixelsPerVerticalUnit;
  b_x = muDoubleScalarRound(x);
  rowIdx2 = (int32_T)muDoubleScalarRound(x);
  x = muDoubleScalarRound(r1);
  xmax = (int32_T)muDoubleScalarRound(r1);
  c1 = (lowestY - (real_T)xmin) * pixelsPerHorizontalUnit + 1.0;
  pixelsPerVerticalUnit = c1 + width * pixelsPerHorizontalUnit;
  r1 = muDoubleScalarRound(pixelsPerVerticalUnit);
  ymin = (int32_T)muDoubleScalarRound(pixelsPerVerticalUnit);
  pixelsPerVerticalUnit = muDoubleScalarRound(c1);
  ymax = (int32_T)muDoubleScalarRound(c1);
  emxInit_real_T1(&b_st, &J, 2, &b_emlrtRTEI, true);
  if (((int32_T)x > img->size[0]) || ((int32_T)b_x < 1) || ((int32_T)
       pixelsPerVerticalUnit > img->size[1]) || ((int32_T)r1 < 1)) {
    i0 = J->size[0] * J->size[1];
    J->size[0] = 0;
    J->size[1] = 0;
    emxEnsureCapacity(&b_st, (emxArray__common *)J, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
  } else {
    if ((int32_T)x < 1) {
      xmax = 1;
    }

    if ((int32_T)b_x > img->size[0]) {
      rowIdx2 = img->size[0];
    }

    if ((int32_T)pixelsPerVerticalUnit < 1) {
      ymax = 1;
    }

    if ((int32_T)r1 > img->size[1]) {
      ymin = img->size[1];
    }

    if (xmax > rowIdx2) {
      i0 = 0;
      rowIdx2 = 0;
    } else {
      i0 = img->size[0];
      if (!((xmax >= 1) && (xmax <= i0))) {
        emlrtDynamicBoundsCheckR2012b(xmax, 1, i0, &f_emlrtBCI, &b_st);
      }

      i0 = xmax - 1;
      i1 = img->size[0];
      if (!((rowIdx2 >= 1) && (rowIdx2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(rowIdx2, 1, i1, &f_emlrtBCI, &b_st);
      }
    }

    if (ymax > ymin) {
      i1 = 0;
      ymin = 0;
    } else {
      i1 = img->size[1];
      if (!((ymax >= 1) && (ymax <= i1))) {
        emlrtDynamicBoundsCheckR2012b(ymax, 1, i1, &e_emlrtBCI, &b_st);
      }

      i1 = ymax - 1;
      xmin = img->size[1];
      if (!((ymin >= 1) && (ymin <= xmin))) {
        emlrtDynamicBoundsCheckR2012b(ymin, 1, xmin, &e_emlrtBCI, &b_st);
      }
    }

    img_idx_0 = img->size[0];
    xmin = J->size[0] * J->size[1];
    J->size[0] = rowIdx2 - i0;
    J->size[1] = ymin - i1;
    emxEnsureCapacity(&b_st, (emxArray__common *)J, xmin, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    xmax = ymin - i1;
    for (xmin = 0; xmin < xmax; xmin++) {
      ymax = rowIdx2 - i0;
      for (ymin = 0; ymin < ymax; ymin++) {
        J->data[ymin + J->size[0] * xmin] = img->data[(i0 + ymin) + img_idx_0 *
          (i1 + xmin)];
      }
    }
  }

  emxInit_real_T(&b_st, &c_x, 1, &emlrtRTEI, true);
  emxInit_real_T(&b_st, &y, 1, &emlrtRTEI, true);

  /* grayShrinkedImage  = getGrayScale( shrinkedImage );  */
  st.site = &b_emlrtRSI;
  detectCorner(&st, J, c_x, y);

  /* Detect corner in shrinked image */
  /* imshow(shrinkedImage) */
  /* Check critical areas for presence of edges */
  topLeftPortion = 0.0;
  topMiddlePortion = 0.0;
  topRightPortion = 0.0;
  downLeftPortion = 0.0;
  downMiddlePortion = 0.0;
  downRightPortion = 0.0;
  regionSizeX = (int32_T)muDoubleScalarCeil(0.33333333333333331 * (real_T)
    J->size[0]);
  regionSizeY = (int32_T)muDoubleScalarCeil(0.33333333333333331 * (real_T)
    J->size[1]);

  /* top-left start X */
  /* top-left start Y */
  /* bottom-middle start X */
  tmsY = (real_T)J->size[1] / 2.0 - muDoubleScalarCeil(0.33333333333333331 *
    (real_T)J->size[1]) / 2.0;

  /* bottom-middle start Y */
  /* top-right start X */
  trsY = J->size[1] - (int32_T)muDoubleScalarCeil(0.33333333333333331 * (real_T)
    J->size[1]);

  /* bottom-right start Y */
  /* middle-left start X */
  /* middle-left start Y */
  /* middle-right start X */
  /* middle-right start Y */
  blsX = J->size[0] - (int32_T)muDoubleScalarCeil(0.33333333333333331 * (real_T)
    J->size[0]);

  /* bottom-left start X */
  /* bottom-left start Y */
  bmsX = J->size[0] - (int32_T)muDoubleScalarCeil(0.33333333333333331 * (real_T)
    J->size[0]);

  /* bottom-middle start X */
  bmsY = (real_T)J->size[1] / 2.0 - muDoubleScalarCeil(0.33333333333333331 *
    (real_T)J->size[1]) / 2.0;

  /* bottom-middle start Y */
  brsX = J->size[0] - (int32_T)muDoubleScalarCeil(0.33333333333333331 * (real_T)
    J->size[0]);

  /* bottom-right start X */
  brsY = J->size[1] - (int32_T)muDoubleScalarCeil(0.33333333333333331 * (real_T)
    J->size[1]);

  /* bottom-right start Y  */
  /* { */
  /* To detect Triangle and Square, pick 8 key areas in the image and test for corners */
  /* SQUARE, UPWARD FACING TRIANGLE, DOWNWARD FACING TRIANGLE AND OCTAGON */
  /* } */
  xLoop = 0;
  emxFree_real_T(&J);
  while (xLoop <= c_x->size[0] - 1) {
    i0 = c_x->size[0];
    i1 = xLoop + 1;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &c_emlrtBCI, sp);
    }

    i0 = y->size[0];
    i1 = xLoop + 1;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &d_emlrtBCI, sp);
    }

    /* TOP ROW */
    /* Check top-left Area */
    if ((c_x->data[xLoop] >= 1.0) && (c_x->data[xLoop] <= 1.0 + (real_T)
         regionSizeX) && (y->data[xLoop] >= 1.0) && (y->data[xLoop] <= 1.0 +
         (real_T)regionSizeY) && (topLeftPortion < 0.25)) {
      topLeftPortion += 0.25;
    }

    /* Check Top-Middle Area */
    if ((c_x->data[xLoop] >= 1.0) && (c_x->data[xLoop] <= 1.0 + (real_T)
         regionSizeX) && (y->data[xLoop] >= tmsY) && (y->data[xLoop] <= tmsY +
         (real_T)regionSizeY) && (topMiddlePortion < 0.34)) {
      topMiddlePortion += 0.34;
    }

    /* Check Top-Right Area */
    if ((c_x->data[xLoop] >= 1.0) && (c_x->data[xLoop] <= 1.0 + (real_T)
         regionSizeX) && (y->data[xLoop] >= trsY) && (y->data[xLoop] <= (real_T)
         trsY + (real_T)regionSizeY) && (topRightPortion < 0.25)) {
      topRightPortion += 0.25;
    }

    /* MIDDLE ROW */
    /* Check middle-left area */
    /* Check middle-right area */
    /* BOTTOM ROW */
    /* Check bottom-left Area */
    if ((c_x->data[xLoop] >= blsX) && (c_x->data[xLoop] <= (real_T)blsX +
         (real_T)regionSizeX) && (y->data[xLoop] >= 1.0) && (y->data[xLoop] <=
         1.0 + (real_T)regionSizeY) && (downLeftPortion < 0.25)) {
      downLeftPortion += 0.25;
    }

    /* Check bottom-Middle Area */
    if ((c_x->data[xLoop] >= bmsX) && (c_x->data[xLoop] <= (real_T)bmsX +
         (real_T)regionSizeX) && (y->data[xLoop] >= bmsY) && (y->data[xLoop] <=
         bmsY + (real_T)regionSizeY) && (downMiddlePortion < 0.34)) {
      downMiddlePortion += 0.34;
    }

    /* Check bottom-Right Area */
    if ((c_x->data[xLoop] >= brsX) && (c_x->data[xLoop] <= (real_T)brsX +
         (real_T)regionSizeX) && (y->data[xLoop] >= brsY) && (y->data[xLoop] <=
         (real_T)brsY + (real_T)regionSizeY) && (downRightPortion < 0.25)) {
      downRightPortion += 0.25;
    }

    xLoop++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&y);
  emxFree_real_T(&c_x);

  /* end of xLoop */
  /* {  */
  /* Analysis based on recommendations from this paper>>  */
  /* AUTOMATIC DETECTION AND CLASSIFICATION OF TRAFFIC SIGNS */
  /* By Carlos Filipe Paulo, Paulo Lobato Correia  */
  /*                            */
  /* sqp = tl + tr + bl + br (5) - Square */
  /* tup = 1.32 ×(bl + br) + tc ?1.1×(tl + tr) (6) - Upward pointing rectangle */
  /* tdp = 1.32 ×(tl + tr) + bc ?1.1× (bl + br) (7) - downward pointing rectangle */
  /*  %} */
  chances[0] = ((topRightPortion + topLeftPortion) + downLeftPortion) +
    downRightPortion;
  chances[1] = 1.32 * (downLeftPortion + downRightPortion) + (topMiddlePortion -
    1.1 * (topLeftPortion + topRightPortion));
  chances[2] = 1.32 * (topLeftPortion + topRightPortion) + (downMiddlePortion -
    1.1 * (downLeftPortion + downRightPortion));

  /* fprintf('Shape Analysis For Traingles and Rectangles Done\n'); */
  /* sprintf('Rectangle Presence Chance: %f%%\n', rectangleChance); */
  /* sprintf('Triangle (Up) Presence Chance: %f%%\n', triangleUpChance); */
  /* sprintf('Triangle (Down) Presence Chance: %f%%\n', triangleDownChance); */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (analyseCriticalAreas.c) */
