/*
 * detectCircle.c
 *
 * Code generation for function 'detectCircle'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "detectCircle_emxutil.h"
#include "imfindcircles.h"
#include "libmwgetnumcores.h"
#include "libmwgrayto8.h"
#include "libmwimfilter.h"
#include "libmwimregionalmax.h"
#include "libmwippfilter.h"
#include "libmwippreconstruct.h"
#include "libmwordfilt2.h"
#include "libmwtbbhist.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 34, "detectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCircle.m"
};

static emlrtRSInfo b_emlrtRSI = { 35, "detectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCircle.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 39, "detectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCircle.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 34, 11, "detectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCircle.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 34, 18, "detectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCircle.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 35, 11, "detectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCircle.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 35, 18, "detectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCircle.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 48, 28, "metric1", "detectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCircle.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 48, 30, "metric1", "detectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCircle.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 51, 27, "metric2", "detectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCircle.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 51, 29, "metric2", "detectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCircle.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 54, 8, "metric1", "detectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCircle.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 54, 22, "metric2", "detectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCircle.m",
  0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 55, 78, "metric1", "detectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCircle.m",
  0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 55, 80, "metric1", "detectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCircle.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 57, 77, "metric2", "detectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCircle.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 57, 79, "metric2", "detectCircle",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\detectCircle.m",
  0 };

/* Function Definitions */
void detectCircle(const emlrtStack *sp, const emxArray_real_T *img, real_T
                  *circleAvailable, real_T *strength)
{
  int32_T lowerRadius;
  int32_T upperRadius;
  int32_T midPoint;
  emxArray_real_T *radii1;
  emxArray_real_T *metric1;
  emxArray_real_T *radii2;
  emxArray_real_T *metric2;
  emxArray_real_T *centers2;
  int32_T i0;
  real_T b_lowerRadius[2];
  real_T b_midPoint[2];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* detectCircle: Uses Circular Hough transform to detect the presence of a */
  /* circle in a  image. Input image should be grayscale */
  /* { */
  /* STEPS */
  /* 1. Check to make sure recieved image is Black and White */
  /* 2. Detect */
  /* 3. Assign detection strength */
  /*  */
  /*    Created on: 21st June, 2017 */
  /*    Author: Oluwole Oyetoke Jnr */
  /*    Using MATLAB 2016 */
  /* } */
  /* INPUT VALIDATION, INITIALIZATION AND IMAGE PREPARATION */
  /* -------------------------------------------------------------------------- */
  /* if nargin ~= 1 */
  /*     error('detectCircle:Input_Argument_Error','This function works with 1 input argument -img- ') */
  /* end */
  /* Check if image is coloured */
  lowerRadius = (int32_T)muDoubleScalarCeil((real_T)img->size[1] * 0.1);
  upperRadius = (int32_T)muDoubleScalarCeil((real_T)img->size[1] / 2.0);

  /* -------------------------------------------------------------------------- */
  /* In order to optimize performance, divide search for circle into 2 */
  midPoint = (int32_T)muDoubleScalarCeil((real_T)(lowerRadius + upperRadius) /
    2.0);
  emxInit_real_T(sp, &radii1, 2, &b_emlrtRTEI, true);
  emxInit_real_T(sp, &metric1, 2, &c_emlrtRTEI, true);
  emxInit_real_T(sp, &radii2, 2, &d_emlrtRTEI, true);
  emxInit_real_T(sp, &metric2, 2, &e_emlrtRTEI, true);
  if (midPoint > 1) {
    emxInit_real_T(sp, &centers2, 2, &emlrtRTEI, true);
    b_lowerRadius[0] = lowerRadius;
    b_lowerRadius[1] = midPoint;
    st.site = &emlrtRSI;
    imfindcircles(&st, img, b_lowerRadius, radii2, radii1, metric1);

    /* Find all the circles with radius r pixels in the range [x1, x2]. */
    b_midPoint[0] = (real_T)midPoint + 1.0;
    b_midPoint[1] = upperRadius;
    st.site = &b_emlrtRSI;
    imfindcircles(&st, img, b_midPoint, centers2, radii2, metric2);

    /* Find all the circles with radius r pixels in the range [x3, x4]. */
    emxFree_real_T(&centers2);
  } else {
    /* Not necessary, but code gen needs it */
    i0 = radii1->size[0] * radii1->size[1];
    radii1->size[0] = 1;
    radii1->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)radii1, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    radii1->data[0] = 0.0;
    i0 = metric1->size[0] * metric1->size[1];
    metric1->size[0] = 1;
    metric1->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)metric1, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    metric1->data[0] = 0.0;
    i0 = radii2->size[0] * radii2->size[1];
    radii2->size[0] = 1;
    radii2->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)radii2, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    radii2->data[0] = 0.0;
    i0 = metric2->size[0] * metric2->size[1];
    metric2->size[0] = 1;
    metric2->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)metric2, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    metric2->data[0] = 0.0;
  }

  if (((radii1->size[0] == 0) || (radii1->size[1] == 0)) && ((radii2->size[0] ==
        0) || (radii2->size[1] == 0))) {
    *circleAvailable = 0.0;
    *strength = 0.0;
  } else if ((!((radii1->size[0] == 0) || (radii1->size[1] == 0))) &&
             ((radii2->size[0] == 0) || (radii2->size[1] == 0))) {
    i0 = metric1->size[0];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &emlrtBCI, sp);
    }

    i0 = metric1->size[1];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &b_emlrtBCI, sp);
    }

    *strength = metric1->data[0];
    *circleAvailable = 1.0;
  } else if (((radii1->size[0] == 0) || (radii1->size[1] == 0)) &&
             (!((radii2->size[0] == 0) || (radii2->size[1] == 0)))) {
    i0 = metric2->size[0];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &c_emlrtBCI, sp);
    }

    i0 = metric2->size[1];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &d_emlrtBCI, sp);
    }

    *strength = metric2->data[0];
    *circleAvailable = 1.0;
  } else {
    /* Find the strongest circle */
    i0 = metric1->size[0] * metric1->size[1];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &e_emlrtBCI, sp);
    }

    i0 = metric2->size[0] * metric2->size[1];
    if (!(1 <= i0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i0, &f_emlrtBCI, sp);
    }

    if (metric1->data[0] >= metric2->data[0]) {
      i0 = metric1->size[0];
      if (!(1 <= i0)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i0, &g_emlrtBCI, sp);
      }

      i0 = metric1->size[1];
      if (!(1 <= i0)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i0, &h_emlrtBCI, sp);
      }

      *strength = metric1->data[0];
    } else {
      i0 = metric2->size[0];
      if (!(1 <= i0)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i0, &i_emlrtBCI, sp);
      }

      i0 = metric2->size[1];
      if (!(1 <= i0)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i0, &j_emlrtBCI, sp);
      }

      *strength = metric2->data[0];
    }

    *circleAvailable = 1.0;
  }

  emxFree_real_T(&metric2);
  emxFree_real_T(&radii2);
  emxFree_real_T(&metric1);
  emxFree_real_T(&radii1);

  /* end of loop around possible circle area */
  /*     centresRadiiAndMetric = [centers radii metric]; %unused for now */
  /* -------------------------------------------------------------------------- */
  /* SHAPE ANALYSIS - DRAW THE DETECTED CIRCLE */
  /* highlighted = drawDetectedCircle( img, xDim, yDim, centers, radii); */
  /* imshow(highlighted); */
  /* --------------------------------------------------------------------------- */
  /* sprintf('Circle Detection Done. Availability: %d', circleAvailable) */
  /* end of function */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (detectCircle.c) */
