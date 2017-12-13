/*
 * shapeAnalyser.cpp
 *
 * Code generation for function 'shapeAnalyser'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "shapeAnalyser.h"
#include "sqrt.h"
#include "cosd.h"
#include "sind.h"
#include "shapeAnalyser_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "sum.h"
#include "shapeAnalyser_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 49, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtRSInfo b_emlrtRSI = { 57, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtRSInfo c_emlrtRSI = { 59, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtRSInfo d_emlrtRSI = { 108, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtRSInfo e_emlrtRSI = { 109, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtRSInfo f_emlrtRSI = { 115, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtRSInfo g_emlrtRSI = { 116, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtRSInfo h_emlrtRSI = { 15, "max",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"
};

static emlrtRSInfo i_emlrtRSI = { 16, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo j_emlrtRSI = { 140, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo k_emlrtRSI = { 375, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo l_emlrtRSI = { 347, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo n_emlrtRSI = { 79, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo o_emlrtRSI = { 283, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo p_emlrtRSI = { 19, "ind2sub",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"
};

static emlrtRSInfo t_emlrtRSI = { 40, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo u_emlrtRSI = { 186, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo v_emlrtRSI = { 187, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo w_emlrtRSI = { 188, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 43, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 186, 13, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 187, 13, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 59, 1, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 62, 1, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 106, 1, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 107, 1, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 131, 5, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtRTEInfo j_emlrtRTEI = { 132, 5, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtRTEInfo k_emlrtRTEI = { 133, 5, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 134, 5, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtRTEInfo m_emlrtRTEI = { 50, 15, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo r_emlrtRTEI = { 135, 5, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 137, 24, "lineRhos", "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 138, 30, "lineTethas", "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtRTEInfo s_emlrtRTEI = { 186, 2, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtBCInfo c_emlrtBCI = { -1, -1, 188, 26, "yStartArray",
  "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 189, 23, "yEndArray", "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 190, 25, "xStartArray",
  "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 191, 23, "xEndArray", "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtRTEInfo t_emlrtRTEI = { 192, 6, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtBCInfo g_emlrtBCI = { -1, -1, 196, 29, "yStartArray",
  "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 197, 28, "yEndArray", "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 198, 29, "xStartArray",
  "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 199, 28, "xEndArray", "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtRTEInfo u_emlrtRTEI = { 225, 1, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

static emlrtBCInfo k_emlrtBCI = { -1, -1, 202, 29, "anglesDetected",
  "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 226, 33, "anglesDetected",
  "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtRTEInfo v_emlrtRTEI = { 39, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo w_emlrtRTEI = { 121, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo x_emlrtRTEI = { 404, 15, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRTEInfo y_emlrtRTEI = { 38, 15, "ind2sub",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"
};

static emlrtRTEInfo ab_emlrtRTEI = { 126, 19, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo bb_emlrtRTEI = { 172, 9, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtDCInfo emlrtDCI = { 178, 25, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  4 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 117, 20, "Rhos", "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo n_emlrtBCI = { 1, 180, 118, 24, "Tethas", "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 205, 31, "anglesDetected",
  "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 148, 23, "yStartArray",
  "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 151, 21, "yEndArray", "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 153, 23, "xStartArray",
  "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 154, 21, "xEndArray", "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 140, 23, "xStartArray",
  "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 141, 21, "xEndArray", "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 142, 23, "yStartArray",
  "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 143, 21, "yEndArray", "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 74, 24, "edgedRegion", "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 74, 26, "edgedRegion", "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 80, 65, "parameterSpace",
  "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 80, 32, "parameterSpace",
  "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m",
  0 };

static emlrtRSInfo y_emlrtRSI = { 65, "shapeAnalyser",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\shapeAnalyser.m"
};

/* Function Declarations */
static void createSineCosLUT(const emlrtStack *sp, const real_T Tethas[180],
  real_T sineTable[180], real_T cosTable[180]);

/* Function Definitions */
static void createSineCosLUT(const emlrtStack *sp, const real_T Tethas[180],
  real_T sineTable[180], real_T cosTable[180])
{
  int32_T count;

  /* end of main function */
  /* CREATE SINE AND COSINE LOOKUP TABLE (IMPROVES SPEED OF COMPUTATION) */
  /* -------------------------------------------------------------------------- */
  count = 0;
  while (count < 180) {
    sineTable[count] = Tethas[count];
    sind(&sineTable[count]);
    cosTable[count] = Tethas[count];
    cosd(&cosTable[count]);
    count++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /* end of LUT generation function */
  /* -------------------------------------------------------------------------- */
}

void shapeAnalyser(const emlrtStack *sp, const emxArray_real_T *edgedRegion,
                   real_T availableShapes[3])
{
  int32_T yDim;
  int32_T xDim;
  int32_T jj;
  boolean_T guard2 = false;
  boolean_T overflow;
  int32_T ixstart;
  real_T mtmp;
  int32_T nm1d2;
  real_T maxRadius;
  boolean_T exitg2;
  real_T anew;
  real_T ndbl;
  real_T apnd;
  real_T cdiff;
  real_T absa;
  real_T absb;
  emxArray_real_T *Rhos;
  int32_T i0;
  emxArray_real_T *parameterSpace;
  real_T dv0[180];
  real_T sineTable[180];
  real_T cosTable[180];
  int32_T x;
  emxArray_real_T *lineRhos;
  emxArray_real_T *lineTethas;
  int32_T y;
  int32_T tetha;
  real_T rho;
  real_T rhoIndex;
  boolean_T guard1 = false;
  uint32_T Rhos_idx_0;
  real_T THRESHOLD;
  real_T numDetected;
  emxArray_boolean_T *b_parameterSpace;
  emxArray_real_T *xStartArray;
  emxArray_real_T *xEndArray;
  emxArray_real_T *yStartArray;
  emxArray_boolean_T *b_x;
  emxArray_real_T *yEndArray;
  int32_T idx;
  emxArray_int32_T *ii;
  emxArray_int32_T *b_jj;
  emxArray_boolean_T *v;
  int32_T i;
  boolean_T exitg1;
  boolean_T b_guard1 = false;
  int32_T iv3[2];
  real_T noOfAngles;
  int32_T iv4[2];
  int32_T iv5[2];
  real_T sixtyCounter;
  real_T one35Counter;
  real_T ninetyCounter;
  int32_T pos;
  int32_T triangleAvailable;
  int32_T squareAvailable;
  int32_T octagonAvailable;
  int32_T j;
  real_T ang;
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
  /* detectTriangle: Uses Hough Transform to detect the presence of triangles, */
  /* octagons, diamonds, rectangles and square shapes in an image. */
  /*  */
  /* STEPS */
  /* 1. Get Image and convert to grayscale */
  /* 2. Perform edge detection on image */
  /* 3. Create hough parameter space, a 2D array (?,?) with maximum ? length  */
  /*    spanning the diagonal length of the image and maximum ? spaning 180.  */
  /* 4. Initialize hough parameter space to zero */
  /* 5. Loop through entire image and for every active pixel on co-ordinate x,y, */
  /*    calculate as many (?,?) values associated with it by varying ? between -90 and 89. */
  /* 6. For every pixel which has a line lying on (?,?), increment the value stored in (?,?) by 1 */
  /* 7. After looping through all the relevant pixels of the image and  */
  /*    incrementing (?,?) appropriately in the hough parameter space,  */
  /*    search through the hough parameter space for the peak values.  */
  /*    The (?,?)  accomoating this peak values can be used to draw the detected lines. */
  /* 8. Find angles between detected lines.  */
  /*         a.	If three or more lines have angles of 60 degrees with each  */
  /*             other, then a triangle is most likely present */
  /*         b.	If eight or more lines that have angles 135 degrees exist,  */
  /*             then an octagon is most likely present */
  /*         c.	If four or more lines exist that have angles 90 degrees,   */
  /*             then a square, rectangle or diamond is most likely present */
  /*  */
  /*  */
  /*    Created on: 1st July, 2017 */
  /*    Author: Oluwole Oyetoke Jnr */
  /*    Using MATLAB 2016 */
  /*  */
  /* } */
  /* INPUT VALIDATION AND IMAGE TRANSFORMATION */
  /* -------------------------------------------------------------------------- */
  /* if nargin ~= 1 */
  /*     error('shapeAnalyser:Input_Argument_Error','This function works with 1 input argument -inputImg- ') */
  /* end  */
  /* EDGE DETECTION */
  /* -------------------------------------------------------------------------- */
  /* [edgedRegion] = detectEdge(img); */
  yDim = edgedRegion->size[1];
  xDim = edgedRegion->size[0];
  st.site = &emlrtRSI;
  b_st.site = &h_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  jj = edgedRegion->size[0] * edgedRegion->size[1];
  guard2 = false;
  if (jj == 1) {
    guard2 = true;
  } else {
    jj = edgedRegion->size[0] * edgedRegion->size[1];
    if (jj != 1) {
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
    emlrtErrorWithMessageIdR2012b(&c_st, &v_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  jj = edgedRegion->size[0] * edgedRegion->size[1];
  if (jj > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &w_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &j_emlrtRSI;
  ixstart = 1;
  jj = edgedRegion->size[0] * edgedRegion->size[1];
  mtmp = edgedRegion->data[0];
  nm1d2 = edgedRegion->size[0] * edgedRegion->size[1];
  if (nm1d2 > 1) {
    if (muDoubleScalarIsNaN(edgedRegion->data[0])) {
      e_st.site = &l_emlrtRSI;
      nm1d2 = edgedRegion->size[0] * edgedRegion->size[1];
      if (2 > nm1d2) {
        overflow = false;
      } else {
        nm1d2 = edgedRegion->size[0] * edgedRegion->size[1];
        overflow = (nm1d2 > 2147483646);
      }

      if (overflow) {
        f_st.site = &m_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      nm1d2 = 2;
      exitg2 = false;
      while ((!exitg2) && (nm1d2 <= jj)) {
        ixstart = nm1d2;
        if (!muDoubleScalarIsNaN(edgedRegion->data[nm1d2 - 1])) {
          mtmp = edgedRegion->data[nm1d2 - 1];
          exitg2 = true;
        } else {
          nm1d2++;
        }
      }
    }

    nm1d2 = edgedRegion->size[0] * edgedRegion->size[1];
    if (ixstart < nm1d2) {
      e_st.site = &k_emlrtRSI;
      nm1d2 = edgedRegion->size[0] * edgedRegion->size[1];
      if (ixstart + 1 > nm1d2) {
        overflow = false;
      } else {
        nm1d2 = edgedRegion->size[0] * edgedRegion->size[1];
        overflow = (nm1d2 > 2147483646);
      }

      if (overflow) {
        f_st.site = &m_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (ixstart + 1 <= jj) {
        if (edgedRegion->data[ixstart] > mtmp) {
          mtmp = edgedRegion->data[ixstart];
        }

        ixstart++;
      }
    }
  }

  /* -------------------------------------------------------------------------- */
  /* CREATE ACCUMULATOR AND VARIABLES */
  /* -------------------------------------------------------------------------- */
  maxRadius = (real_T)edgedRegion->size[0] * (real_T)edgedRegion->size[0] +
    (real_T)edgedRegion->size[1] * (real_T)edgedRegion->size[1];
  st.site = &b_emlrtRSI;
  b_sqrt(&maxRadius);
  maxRadius = muDoubleScalarCeil(maxRadius);
  st.site = &c_emlrtRSI;
  b_st.site = &n_emlrtRSI;
  if (muDoubleScalarIsNaN(-maxRadius) || muDoubleScalarIsNaN(maxRadius - 1.0)) {
    ixstart = 1;
    anew = rtNaN;
    apnd = maxRadius - 1.0;
    overflow = false;
  } else if (maxRadius - 1.0 < -maxRadius) {
    ixstart = 0;
    anew = -maxRadius;
    apnd = maxRadius - 1.0;
    overflow = false;
  } else {
    anew = -maxRadius;
    ndbl = muDoubleScalarFloor(((maxRadius - 1.0) - (-maxRadius)) + 0.5);
    apnd = -maxRadius + ndbl;
    cdiff = apnd - (maxRadius - 1.0);
    absa = muDoubleScalarAbs(-maxRadius);
    absb = muDoubleScalarAbs(maxRadius - 1.0);
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
        (absa, absb)) {
      ndbl++;
      apnd = maxRadius - 1.0;
    } else if (cdiff > 0.0) {
      apnd = -maxRadius + (ndbl - 1.0);
    } else {
      ndbl++;
    }

    overflow = (2.147483647E+9 < ndbl);
    if (ndbl >= 0.0) {
      ixstart = (int32_T)ndbl;
    } else {
      ixstart = 0;
    }
  }

  c_st.site = &o_emlrtRSI;
  if (!overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &x_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      0);
  }

  emxInit_real_T(&c_st, &Rhos, 2, &e_emlrtRTEI, true);
  i0 = Rhos->size[0] * Rhos->size[1];
  Rhos->size[0] = 1;
  Rhos->size[1] = ixstart;
  emxEnsureCapacity(&b_st, (emxArray__common *)Rhos, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (ixstart > 0) {
    Rhos->data[0] = anew;
    if (ixstart > 1) {
      Rhos->data[ixstart - 1] = apnd;
      nm1d2 = (ixstart - 1) / 2;
      for (jj = 1; jj < nm1d2; jj++) {
        Rhos->data[jj] = anew + (real_T)jj;
        Rhos->data[(ixstart - jj) - 1] = apnd - (real_T)jj;
      }

      if (nm1d2 << 1 == ixstart - 1) {
        Rhos->data[nm1d2] = (anew + apnd) / 2.0;
      } else {
        Rhos->data[nm1d2] = anew + (real_T)nm1d2;
        Rhos->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
      }
    }
  }

  emxInit_real_T(&b_st, &parameterSpace, 2, &f_emlrtRTEI, true);
  i0 = parameterSpace->size[0] * parameterSpace->size[1];
  parameterSpace->size[0] = Rhos->size[1];
  parameterSpace->size[1] = 180;
  emxEnsureCapacity(sp, (emxArray__common *)parameterSpace, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  nm1d2 = Rhos->size[1] * 180;
  for (i0 = 0; i0 < nm1d2; i0++) {
    parameterSpace->data[i0] = 0.0;
  }

  /* Create sine and cos look up table */
  for (i0 = 0; i0 < 180; i0++) {
    dv0[i0] = -90.0 + (real_T)i0;
  }

  st.site = &y_emlrtRSI;
  createSineCosLUT(&st, dv0, sineTable, cosTable);

  /* -------------------------------------------------------------------------- */
  /* GET RHO AND THETAs */
  /* -------------------------------------------------------------------------- */
  x = 0;
  while (x <= xDim - 1) {
    /* Loop through x pixels */
    y = 0;
    while (y <= yDim - 1) {
      /* Loop through y pixels */
      i0 = edgedRegion->size[0];
      if (!((x + 1 >= 1) && (x + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(x + 1, 1, i0, (emlrtBCInfo *)&x_emlrtBCI,
          sp);
      }

      i0 = edgedRegion->size[1];
      if (!((y + 1 >= 1) && (y + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(y + 1, 1, i0, (emlrtBCInfo *)&y_emlrtBCI,
          sp);
      }

      if (edgedRegion->data[x + edgedRegion->size[0] * y] >= 0.3 * mtmp) {
        tetha = 0;
        while (tetha < 180) {
          /* x and y switch positions due to MATLAb x,y matrix/image co-ordinate system */
          rho = muDoubleScalarCeil((1.0 + (real_T)y) * cosTable[tetha] + (1.0 +
            (real_T)x) * sineTable[tetha]);
          if ((rho >= -maxRadius) && (rho <= maxRadius - 1.0)) {
            rhoIndex = muDoubleScalarRound(((real_T)Rhos->size[1] / 2.0 + rho) +
              1.0);
            i0 = parameterSpace->size[0];
            jj = (int32_T)rhoIndex;
            if (!((jj >= 1) && (jj <= i0))) {
              emlrtDynamicBoundsCheckR2012b(jj, 1, i0, (emlrtBCInfo *)
                &ab_emlrtBCI, sp);
            }

            i0 = parameterSpace->size[0];
            nm1d2 = (int32_T)rhoIndex;
            if (!((nm1d2 >= 1) && (nm1d2 <= i0))) {
              emlrtDynamicBoundsCheckR2012b(nm1d2, 1, i0, (emlrtBCInfo *)
                &bb_emlrtBCI, sp);
            }

            parameterSpace->data[(nm1d2 + parameterSpace->size[0] * tetha) - 1] =
              parameterSpace->data[(jj + parameterSpace->size[0] * tetha) - 1] +
              1.0;
          }

          tetha++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }
      }

      y++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    x++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxInit_real_T(sp, &lineRhos, 2, &g_emlrtRTEI, true);
  emxInit_real_T(sp, &lineTethas, 2, &h_emlrtRTEI, true);

  /* -------------------------------------------------------------------------- */
  /* FIND PEAKS IN HOUGH SPACE AND PLOT */
  /* -------------------------------------------------------------------------- */
  /* Locate 10 most prominent peaks */
  /* P = houghpeaks(parameterSpace,10,... */
  /*    'threshold',ceil(HOUGHTHRESHFACTOR*max(parameterSpace(:))));  */
  /* imshow(parameterSpace,[],'XData',Tethas,'YData',Rhos,'InitialMagnification','fit'); */
  /* xlabel('\theta'), ylabel('\rho'); */
  /* axis on, axis normal, hold on; */
  /* plot(Tethas(P(:,2)),Rhos(P(:,1)),'s','color','white'); */
  /* title('Hough Matrix'); */
  /* -------------------------------------------------------------------------- */
  /* FIND DOMINANT LINES */
  /* -------------------------------------------------------------------------- */
  i0 = lineRhos->size[0] * lineRhos->size[1];
  lineRhos->size[0] = 1;
  lineRhos->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)lineRhos, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  lineRhos->data[0] = 0.0;
  i0 = lineTethas->size[0] * lineTethas->size[1];
  lineTethas->size[0] = 1;
  lineTethas->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)lineTethas, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  lineTethas->data[0] = 0.0;
  st.site = &d_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  jj = parameterSpace->size[0] * 180;
  guard1 = false;
  if (jj == 1) {
    guard1 = true;
  } else {
    jj = parameterSpace->size[0] * 180;
    if (jj != 1) {
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
    emlrtErrorWithMessageIdR2012b(&c_st, &v_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  jj = parameterSpace->size[0] * 180;
  if (jj > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &w_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &j_emlrtRSI;
  jj = parameterSpace->size[0] * 180;
  mtmp = parameterSpace->data[0];
  ixstart = 1;
  nm1d2 = parameterSpace->size[0] * 180;
  if (nm1d2 > 1) {
    nm1d2 = parameterSpace->size[0] * 180;
    if (1 < nm1d2) {
      e_st.site = &k_emlrtRSI;
      nm1d2 = parameterSpace->size[0] * 180;
      if (2 > nm1d2) {
        overflow = false;
      } else {
        nm1d2 = parameterSpace->size[0] * 180;
        overflow = (nm1d2 > 2147483646);
      }

      if (overflow) {
        f_st.site = &m_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      for (nm1d2 = 2; nm1d2 <= jj; nm1d2++) {
        if (parameterSpace->data[nm1d2 - 1] > mtmp) {
          mtmp = parameterSpace->data[nm1d2 - 1];
          ixstart = nm1d2;
        }
      }
    }
  }

  st.site = &e_emlrtRSI;
  b_st.site = &p_emlrtRSI;
  Rhos_idx_0 = (uint32_T)Rhos->size[1];
  if (!!(ixstart <= (int32_T)Rhos_idx_0 * 180)) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &y_emlrtRTEI,
      "Coder:MATLAB:ind2sub_IndexOutOfRange", 0);
  }

  THRESHOLD = muDoubleScalarCeil(0.7 * mtmp);
  numDetected = 0.0;
  if (mtmp >= 20.0) {
    emxInit_boolean_T(sp, &b_parameterSpace, 2, &emlrtRTEI, true);

    /* At least a line as long as 20 pixels has to be present */
    i0 = b_parameterSpace->size[0] * b_parameterSpace->size[1];
    b_parameterSpace->size[0] = parameterSpace->size[0];
    b_parameterSpace->size[1] = 180;
    emxEnsureCapacity(sp, (emxArray__common *)b_parameterSpace, i0, (int32_T)
                      sizeof(boolean_T), &emlrtRTEI);
    nm1d2 = parameterSpace->size[0] * parameterSpace->size[1];
    for (i0 = 0; i0 < nm1d2; i0++) {
      b_parameterSpace->data[i0] = (parameterSpace->data[i0] >= THRESHOLD);
    }

    emxInit_boolean_T(sp, &b_x, 2, &emlrtRTEI, true);
    st.site = &f_emlrtRSI;
    sum(&st, b_parameterSpace, sineTable);
    numDetected = b_sum(sineTable);
    st.site = &g_emlrtRSI;
    i0 = b_x->size[0] * b_x->size[1];
    b_x->size[0] = parameterSpace->size[0];
    b_x->size[1] = 180;
    emxEnsureCapacity(&st, (emxArray__common *)b_x, i0, (int32_T)sizeof
                      (boolean_T), &emlrtRTEI);
    nm1d2 = parameterSpace->size[0] * parameterSpace->size[1];
    emxFree_boolean_T(&b_parameterSpace);
    for (i0 = 0; i0 < nm1d2; i0++) {
      b_x->data[i0] = (parameterSpace->data[i0] >= THRESHOLD);
    }

    b_st.site = &t_emlrtRSI;
    ixstart = b_x->size[0] * 180;
    idx = 0;
    overflow = !(b_x->size[0] == 1);
    if (overflow) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &ab_emlrtRTEI,
        "Coder:toolbox:find_incompatibleShape", 0);
    }

    emxInit_int32_T(&b_st, &ii, 1, &emlrtRTEI, true);
    emxInit_int32_T(&b_st, &b_jj, 1, &emlrtRTEI, true);
    emxInit_boolean_T1(&b_st, &v, 1, &m_emlrtRTEI, true);
    i0 = ii->size[0];
    ii->size[0] = ixstart;
    emxEnsureCapacity(&b_st, (emxArray__common *)ii, i0, (int32_T)sizeof(int32_T),
                      &emlrtRTEI);
    i0 = b_jj->size[0];
    b_jj->size[0] = ixstart;
    emxEnsureCapacity(&b_st, (emxArray__common *)b_jj, i0, (int32_T)sizeof
                      (int32_T), &emlrtRTEI);
    i0 = v->size[0];
    v->size[0] = ixstart;
    emxEnsureCapacity(&b_st, (emxArray__common *)v, i0, (int32_T)sizeof
                      (boolean_T), &emlrtRTEI);
    if (ixstart == 0) {
      i0 = ii->size[0];
      ii->size[0] = 0;
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i0, (int32_T)sizeof
                        (int32_T), &emlrtRTEI);
      i0 = b_jj->size[0];
      b_jj->size[0] = 0;
      emxEnsureCapacity(&b_st, (emxArray__common *)b_jj, i0, (int32_T)sizeof
                        (int32_T), &emlrtRTEI);
    } else {
      nm1d2 = 1;
      jj = 1;
      exitg1 = false;
      while ((!exitg1) && (jj <= 180)) {
        b_guard1 = false;
        if (b_x->data[(nm1d2 + b_x->size[0] * (jj - 1)) - 1]) {
          idx++;
          ii->data[idx - 1] = nm1d2;
          b_jj->data[idx - 1] = jj;
          v->data[idx - 1] = b_x->data[(nm1d2 + b_x->size[0] * (jj - 1)) - 1];
          if (idx >= ixstart) {
            exitg1 = true;
          } else {
            b_guard1 = true;
          }
        } else {
          b_guard1 = true;
        }

        if (b_guard1) {
          nm1d2++;
          if (nm1d2 > b_x->size[0]) {
            nm1d2 = 1;
            jj++;
          }
        }
      }

      if (idx <= ixstart) {
      } else {
        emlrtErrorWithMessageIdR2012b(&b_st, &bb_emlrtRTEI,
          "Coder:builtins:AssertionFailed", 0);
      }

      if (ixstart == 1) {
        if (idx == 0) {
          i0 = ii->size[0];
          ii->size[0] = 0;
          emxEnsureCapacity(&b_st, (emxArray__common *)ii, i0, (int32_T)sizeof
                            (int32_T), &emlrtRTEI);
          i0 = b_jj->size[0];
          b_jj->size[0] = 0;
          emxEnsureCapacity(&b_st, (emxArray__common *)b_jj, i0, (int32_T)sizeof
                            (int32_T), &emlrtRTEI);
        }
      } else {
        if (1 > idx) {
          i0 = 0;
        } else {
          i0 = idx;
        }

        iv3[0] = 1;
        iv3[1] = i0;
        c_st.site = &u_emlrtRSI;
        indexShapeCheck(&c_st, ii->size[0], iv3);
        jj = ii->size[0];
        ii->size[0] = i0;
        emxEnsureCapacity(&b_st, (emxArray__common *)ii, jj, (int32_T)sizeof
                          (int32_T), &c_emlrtRTEI);
        if (1 > idx) {
          i0 = 0;
        } else {
          i0 = idx;
        }

        iv4[0] = 1;
        iv4[1] = i0;
        c_st.site = &v_emlrtRSI;
        indexShapeCheck(&c_st, b_jj->size[0], iv4);
        jj = b_jj->size[0];
        b_jj->size[0] = i0;
        emxEnsureCapacity(&b_st, (emxArray__common *)b_jj, jj, (int32_T)sizeof
                          (int32_T), &d_emlrtRTEI);
        iv5[0] = 1;
        if (1 > idx) {
          iv5[1] = 0;
        } else {
          iv5[1] = idx;
        }

        c_st.site = &w_emlrtRSI;
        indexShapeCheck(&c_st, v->size[0], iv5);
      }
    }

    emxFree_boolean_T(&v);
    emxFree_boolean_T(&b_x);
    ixstart = Rhos->size[1];
    i0 = lineRhos->size[0] * lineRhos->size[1];
    lineRhos->size[0] = 1;
    lineRhos->size[1] = ii->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)lineRhos, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    nm1d2 = ii->size[0];
    for (i0 = 0; i0 < nm1d2; i0++) {
      jj = ii->data[i0];
      if (!((jj >= 1) && (jj <= ixstart))) {
        emlrtDynamicBoundsCheckR2012b(jj, 1, ixstart, (emlrtBCInfo *)&m_emlrtBCI,
          sp);
      }

      lineRhos->data[lineRhos->size[0] * i0] = Rhos->data[Rhos->size[0] * (jj -
        1)];
    }

    emxFree_int32_T(&ii);
    i0 = lineTethas->size[0] * lineTethas->size[1];
    lineTethas->size[0] = 1;
    lineTethas->size[1] = b_jj->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)lineTethas, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    nm1d2 = b_jj->size[0];
    for (i0 = 0; i0 < nm1d2; i0++) {
      jj = b_jj->data[i0];
      if (!((jj >= 1) && (jj <= 180))) {
        emlrtDynamicBoundsCheckR2012b(jj, 1, 180, (emlrtBCInfo *)&n_emlrtBCI, sp);
      }

      lineTethas->data[lineTethas->size[0] * i0] = -90.0 + (real_T)(jj - 1);
    }

    emxFree_int32_T(&b_jj);
  }

  emxFree_real_T(&parameterSpace);

  /* End of if */
  /* -------------------------------------------------------------------------- */
  /* PLOT DISCOVERED LINES (MANUAL) */
  /* -------------------------------------------------------------------------- */
  /* figure, imshow(uint8(inputImg)), hold on */
  /* If more a line is detected */
  emxInit_real_T(sp, &xStartArray, 2, &i_emlrtRTEI, true);
  emxInit_real_T(sp, &xEndArray, 2, &j_emlrtRTEI, true);
  emxInit_real_T(sp, &yStartArray, 2, &k_emlrtRTEI, true);
  emxInit_real_T(sp, &yEndArray, 2, &l_emlrtRTEI, true);
  if (numDetected >= 1.0) {
    i0 = xStartArray->size[0] * xStartArray->size[1];
    xStartArray->size[0] = 1;
    xStartArray->size[1] = (int32_T)numDetected;
    emxEnsureCapacity(sp, (emxArray__common *)xStartArray, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    nm1d2 = (int32_T)numDetected;
    for (i0 = 0; i0 < nm1d2; i0++) {
      xStartArray->data[i0] = 0.0;
    }

    i0 = xEndArray->size[0] * xEndArray->size[1];
    xEndArray->size[0] = 1;
    xEndArray->size[1] = (int32_T)numDetected;
    emxEnsureCapacity(sp, (emxArray__common *)xEndArray, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    nm1d2 = (int32_T)numDetected;
    for (i0 = 0; i0 < nm1d2; i0++) {
      xEndArray->data[i0] = 0.0;
    }

    i0 = yStartArray->size[0] * yStartArray->size[1];
    yStartArray->size[0] = 1;
    yStartArray->size[1] = (int32_T)numDetected;
    emxEnsureCapacity(sp, (emxArray__common *)yStartArray, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    nm1d2 = (int32_T)numDetected;
    for (i0 = 0; i0 < nm1d2; i0++) {
      yStartArray->data[i0] = 0.0;
    }

    i0 = yEndArray->size[0] * yEndArray->size[1];
    yEndArray->size[0] = 1;
    yEndArray->size[1] = (int32_T)numDetected;
    emxEnsureCapacity(sp, (emxArray__common *)yEndArray, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    nm1d2 = (int32_T)numDetected;
    for (i0 = 0; i0 < nm1d2; i0++) {
      yEndArray->data[i0] = 0.0;
    }

    emlrtForLoopVectorCheckR2012b(1.0, 1.0, numDetected, mxDOUBLE_CLASS,
      (int32_T)numDetected, (emlrtRTEInfo *)&r_emlrtRTEI, sp);
    i = 0;
    while (i <= (int32_T)numDetected - 1) {
      i0 = lineRhos->size[1];
      jj = i + 1;
      if (!((jj >= 1) && (jj <= i0))) {
        emlrtDynamicBoundsCheckR2012b(jj, 1, i0, (emlrtBCInfo *)&emlrtBCI, sp);
      }

      i0 = lineTethas->size[1];
      jj = i + 1;
      if (!((jj >= 1) && (jj <= i0))) {
        emlrtDynamicBoundsCheckR2012b(jj, 1, i0, (emlrtBCInfo *)&b_emlrtBCI, sp);
      }

      if (lineTethas->data[lineTethas->size[0] * i] == 0.0) {
        i0 = xStartArray->size[1];
        if (!((i + 1 >= 1) && (i + 1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i0, (emlrtBCInfo *)&t_emlrtBCI,
            sp);
        }

        xStartArray->data[xStartArray->size[0] * i] = lineRhos->data
          [lineRhos->size[0] * i];
        i0 = xEndArray->size[1];
        if (!((i + 1 >= 1) && (i + 1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i0, (emlrtBCInfo *)&u_emlrtBCI,
            sp);
        }

        xEndArray->data[xEndArray->size[0] * i] = lineRhos->data[lineRhos->size
          [0] * i];
        i0 = yStartArray->size[1];
        if (!((i + 1 >= 1) && (i + 1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i0, (emlrtBCInfo *)&v_emlrtBCI,
            sp);
        }

        yStartArray->data[yStartArray->size[0] * i] = 1.0;
        i0 = yEndArray->size[1];
        if (!((i + 1 >= 1) && (i + 1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i0, (emlrtBCInfo *)&w_emlrtBCI,
            sp);
        }

        yEndArray->data[yEndArray->size[0] * i] = xDim;

        /* plot([r r], [1 xDim],'LineWidth',2, 'Color', 'green'); */
      } else {
        /* Compute starting y coordinate */
        anew = lineTethas->data[lineTethas->size[0] * i];
        cosd(&anew);
        ndbl = lineTethas->data[lineTethas->size[0] * i];
        sind(&ndbl);
        apnd = lineTethas->data[lineTethas->size[0] * i];
        sind(&apnd);
        i0 = yStartArray->size[1];
        if (!((i + 1 >= 1) && (i + 1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i0, (emlrtBCInfo *)&p_emlrtBCI,
            sp);
        }

        yStartArray->data[yStartArray->size[0] * i] = muDoubleScalarCeil(-anew /
          ndbl + lineRhos->data[lineRhos->size[0] * i] / apnd);

        /* Compute ending y coordinate */
        anew = lineTethas->data[lineTethas->size[0] * i];
        cosd(&anew);
        ndbl = lineTethas->data[lineTethas->size[0] * i];
        sind(&ndbl);
        apnd = lineTethas->data[lineTethas->size[0] * i];
        sind(&apnd);
        i0 = yEndArray->size[1];
        if (!((i + 1 >= 1) && (i + 1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i0, (emlrtBCInfo *)&q_emlrtBCI,
            sp);
        }

        yEndArray->data[yEndArray->size[0] * i] = muDoubleScalarCeil(-anew /
          ndbl * (real_T)yDim + lineRhos->data[lineRhos->size[0] * i] / apnd);
        i0 = xStartArray->size[1];
        if (!((i + 1 >= 1) && (i + 1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i0, (emlrtBCInfo *)&r_emlrtBCI,
            sp);
        }

        xStartArray->data[xStartArray->size[0] * i] = 1.0;
        i0 = xEndArray->size[1];
        if (!((i + 1 >= 1) && (i + 1 <= i0))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i0, (emlrtBCInfo *)&s_emlrtBCI,
            sp);
        }

        xEndArray->data[xEndArray->size[0] * i] = yDim;

        /* plot([xStart xEnd], [yStart yEnd], 'LineWidth',2,'Color','blue'); */
      }

      /* drawnow */
      i++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    /*  end of for loop */
  } else {
    /* Not necessary, but c coder needed it */
    i0 = xStartArray->size[0] * xStartArray->size[1];
    xStartArray->size[0] = 1;
    xStartArray->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)xStartArray, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    xStartArray->data[0] = 0.0;
    i0 = xEndArray->size[0] * xEndArray->size[1];
    xEndArray->size[0] = 1;
    xEndArray->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)xEndArray, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    xEndArray->data[0] = 0.0;
    i0 = yStartArray->size[0] * yStartArray->size[1];
    yStartArray->size[0] = 1;
    yStartArray->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)yStartArray, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    yStartArray->data[0] = 0.0;
    i0 = yEndArray->size[0] * yEndArray->size[1];
    yEndArray->size[0] = 1;
    yEndArray->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)yEndArray, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    yEndArray->data[0] = 0.0;
  }

  emxFree_real_T(&lineTethas);
  emxFree_real_T(&lineRhos);

  /* end of if statement */
  /* -------------------------------------------------------------------------- */
  /* FIND ANGLE BETWEEN LINES */
  /* -------------------------------------------------------------------------- */
  /*  The angle between two lines is the angle between their direction vectors.  */
  /*  The direction vectors of two lines can always be found by subtracting the  */
  /*  position vectors of two points on the line */
  i0 = Rhos->size[0] * Rhos->size[1];
  Rhos->size[0] = 1;
  anew = numDetected * numDetected - numDetected;
  if (!(anew >= 0.0)) {
    emlrtNonNegativeCheckR2012b(anew, (emlrtDCInfo *)&emlrtDCI, sp);
  }

  Rhos->size[1] = (int32_T)anew;
  emxEnsureCapacity(sp, (emxArray__common *)Rhos, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  anew = numDetected * numDetected - numDetected;
  if (!(anew >= 0.0)) {
    emlrtNonNegativeCheckR2012b(anew, (emlrtDCInfo *)&emlrtDCI, sp);
  }

  nm1d2 = (int32_T)anew;
  for (i0 = 0; i0 < nm1d2; i0++) {
    Rhos->data[i0] = 0.0;
  }

  noOfAngles = 1.0;
  if (numDetected > 2.0) {
    /* If more than two line is detected */
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, numDetected, mxDOUBLE_CLASS,
      (int32_T)numDetected, (emlrtRTEInfo *)&s_emlrtRTEI, sp);
    i = 0;
    while (i <= (int32_T)numDetected - 1) {
      i0 = yStartArray->size[1];
      jj = i + 1;
      if (!((jj >= 1) && (jj <= i0))) {
        emlrtDynamicBoundsCheckR2012b(jj, 1, i0, (emlrtBCInfo *)&c_emlrtBCI, sp);
      }

      i0 = yEndArray->size[1];
      jj = i + 1;
      if (!((jj >= 1) && (jj <= i0))) {
        emlrtDynamicBoundsCheckR2012b(jj, 1, i0, (emlrtBCInfo *)&d_emlrtBCI, sp);
      }

      i0 = xStartArray->size[1];
      jj = i + 1;
      if (!((jj >= 1) && (jj <= i0))) {
        emlrtDynamicBoundsCheckR2012b(jj, 1, i0, (emlrtBCInfo *)&e_emlrtBCI, sp);
      }

      i0 = xEndArray->size[1];
      jj = i + 1;
      if (!((jj >= 1) && (jj <= i0))) {
        emlrtDynamicBoundsCheckR2012b(jj, 1, i0, (emlrtBCInfo *)&f_emlrtBCI, sp);
      }

      emlrtForLoopVectorCheckR2012b(1.0, 1.0, numDetected, mxDOUBLE_CLASS,
        (int32_T)numDetected, (emlrtRTEInfo *)&t_emlrtRTEI, sp);
      j = 0;
      while (j <= (int32_T)numDetected - 1) {
        if (1.0 + (real_T)j <= 1.0 + (real_T)i) {
          /* itself */
        } else {
          i0 = yStartArray->size[1];
          jj = j + 1;
          if (!((jj >= 1) && (jj <= i0))) {
            emlrtDynamicBoundsCheckR2012b(jj, 1, i0, (emlrtBCInfo *)&g_emlrtBCI,
              sp);
          }

          i0 = yEndArray->size[1];
          jj = j + 1;
          if (!((jj >= 1) && (jj <= i0))) {
            emlrtDynamicBoundsCheckR2012b(jj, 1, i0, (emlrtBCInfo *)&h_emlrtBCI,
              sp);
          }

          i0 = xStartArray->size[1];
          jj = j + 1;
          if (!((jj >= 1) && (jj <= i0))) {
            emlrtDynamicBoundsCheckR2012b(jj, 1, i0, (emlrtBCInfo *)&i_emlrtBCI,
              sp);
          }

          i0 = xEndArray->size[1];
          jj = j + 1;
          if (!((jj >= 1) && (jj <= i0))) {
            emlrtDynamicBoundsCheckR2012b(jj, 1, i0, (emlrtBCInfo *)&j_emlrtBCI,
              sp);
          }

          ang = muDoubleScalarAbs(57.295779513082323 * muDoubleScalarAtan
            ((yEndArray->data[yEndArray->size[0] * i] - yStartArray->
              data[yStartArray->size[0] * i]) / (xEndArray->data[xEndArray->
            size[0] * i] - xStartArray->data[xStartArray->size[0] * i])) -
            57.295779513082323 * muDoubleScalarAtan((yEndArray->data
            [yEndArray->size[0] * j] - yStartArray->data[yStartArray->size[0] *
            j]) / (xEndArray->data[xEndArray->size[0] * j] - xStartArray->
                   data[xStartArray->size[0] * j])));
          if (1.0 + (real_T)i == 1.0) {
            i0 = Rhos->size[1];
            if (!(1 <= i0)) {
              emlrtDynamicBoundsCheckR2012b(1, 1, i0, (emlrtBCInfo *)&k_emlrtBCI,
                sp);
            }

            Rhos->data[0] = ang;
            noOfAngles++;
          } else {
            i0 = Rhos->size[1];
            jj = (int32_T)noOfAngles;
            if (!((jj >= 1) && (jj <= i0))) {
              emlrtDynamicBoundsCheckR2012b(jj, 1, i0, (emlrtBCInfo *)
                &o_emlrtBCI, sp);
            }

            Rhos->data[Rhos->size[0] * (jj - 1)] = ang;
            noOfAngles++;
          }
        }

        j++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      /* end of inner for loop */
      i++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    /* end of for loop */
  }

  emxFree_real_T(&yEndArray);
  emxFree_real_T(&yStartArray);
  emxFree_real_T(&xEndArray);
  emxFree_real_T(&xStartArray);

  /* end of if numDetected */
  /* -------------------------------------------------------------------------- */
  /* MAKE SHAPE DECSION */
  /* -------------------------------------------------------------------------- */
  /* if angles are detected */
  /* noOfAngles = length(anglesDetected); */
  sixtyCounter = 0.0;
  one35Counter = 0.0;
  ninetyCounter = 0.0;
  if (noOfAngles >= 3.0) {
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, noOfAngles, mxDOUBLE_CLASS, (int32_T)
      noOfAngles, (emlrtRTEInfo *)&u_emlrtRTEI, sp);
    pos = 0;
    while (pos <= (int32_T)noOfAngles - 1) {
      i0 = Rhos->size[1];
      jj = pos + 1;
      if (!((jj >= 1) && (jj <= i0))) {
        emlrtDynamicBoundsCheckR2012b(jj, 1, i0, (emlrtBCInfo *)&l_emlrtBCI, sp);
      }

      /* If 3 or more lines have angles of 60 degrees then a triangle is present */
      if ((Rhos->data[Rhos->size[0] * pos] >= 59.0) && (Rhos->data[Rhos->size[0]
           * pos] <= 61.0)) {
        sixtyCounter++;

        /* If 8 or more lines that have angles 135 degrees exist, then octagon is */
        /* present */
      } else if ((Rhos->data[Rhos->size[0] * pos] >= 134.0) && (Rhos->data
                  [Rhos->size[0] * pos] <= 136.0)) {
        one35Counter++;

        /* If four or more lines exist that have angles 90 degrees, then square, */
        /* rectangle or diamond exists */
      } else {
        if ((Rhos->data[Rhos->size[0] * pos] >= 89.0) && (Rhos->data[Rhos->size
             [0] * pos] <= 91.0)) {
          ninetyCounter++;
        }
      }

      pos++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    /* End of for loop */
  }

  emxFree_real_T(&Rhos);

  /* end of if length(anglesDetected)>=2 */
  triangleAvailable = 0;
  squareAvailable = 0;
  octagonAvailable = 0;
  if (sixtyCounter >= 3.0) {
    triangleAvailable = 1;
  }

  if (ninetyCounter >= 4.0) {
    squareAvailable = 1;
  }

  if (one35Counter >= 8.0) {
    octagonAvailable = 1;
  }

  availableShapes[0] = triangleAvailable;
  availableShapes[1] = squareAvailable;
  availableShapes[2] = octagonAvailable;

  /* -------------------------------------------------------------------------- */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (shapeAnalyser.cpp) */
