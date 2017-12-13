/*
 * regionprops.c
 *
 * Code generation for function 'regionprops'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "regionprops.h"
#include "detectCircle_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "sum.h"
#include "indexShapeCheck.h"
#include "assertValidSizeArg.h"
#include "bwconncomp.h"
#include "detectCircle_data.h"
#include "libmwgetnumcores.h"
#include "libmwgrayto8.h"
#include "libmwimfilter.h"
#include "libmwimregionalmax.h"
#include "libmwippfilter.h"
#include "libmwippreconstruct.h"
#include "libmwordfilt2.h"
#include "libmwtbbhist.h"

/* Type Definitions */
#ifndef typedef_struct_T
#define typedef_struct_T

typedef struct {
  boolean_T Area;
  boolean_T Centroid;
  boolean_T BoundingBox;
  boolean_T MajorAxisLength;
  boolean_T MinorAxisLength;
  boolean_T Eccentricity;
  boolean_T Orientation;
  boolean_T Image;
  boolean_T FilledImage;
  boolean_T FilledArea;
  boolean_T EulerNumber;
  boolean_T Extrema;
  boolean_T EquivDiameter;
  boolean_T Extent;
  boolean_T PixelIdxList;
  boolean_T PixelList;
  boolean_T Perimeter;
  boolean_T PixelValues;
  boolean_T WeightedCentroid;
  boolean_T MeanIntensity;
  boolean_T MinIntensity;
  boolean_T MaxIntensity;
  boolean_T SubarrayIdx;
} struct_T;

#endif                                 /*typedef_struct_T*/

/* Variable Definitions */
static emlrtRSInfo lh_emlrtRSI = { 32, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRSInfo mh_emlrtRSI = { 69, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRSInfo nh_emlrtRSI = { 71, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRSInfo oh_emlrtRSI = { 74, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRSInfo ph_emlrtRSI = { 164, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRSInfo qh_emlrtRSI = { 189, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRSInfo ni_emlrtRSI = { 1173, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRSInfo oi_emlrtRSI = { 1338, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRSInfo pi_emlrtRSI = { 1693, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRSInfo qi_emlrtRSI = { 242, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRSInfo ri_emlrtRSI = { 1043, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRSInfo si_emlrtRSI = { 1034, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRSInfo ti_emlrtRSI = { 1033, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRSInfo ui_emlrtRSI = { 1029, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRSInfo vi_emlrtRSI = { 676, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRSInfo wi_emlrtRSI = { 674, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRSInfo xi_emlrtRSI = { 19, "ind2sub",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"
};

static emlrtRSInfo yi_emlrtRSI = { 21, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

static emlrtRTEInfo ec_emlrtRTEI = { 1, 23, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRTEInfo fc_emlrtRTEI = { 226, 9, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRTEInfo gc_emlrtRTEI = { 1033, 9, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRTEInfo hc_emlrtRTEI = { 30, 1, "ind2sub",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"
};

static emlrtRTEInfo nc_emlrtRTEI = { 1570, 42, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRTEInfo oc_emlrtRTEI = { 1581, 5, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtRTEInfo he_emlrtRTEI = { 1161, 5, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtBCInfo be_emlrtBCI = { -1, -1, 244, 47, "", "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m",
  0 };

static emlrtBCInfo ce_emlrtBCI = { -1, -1, 244, 61, "", "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m",
  0 };

static emlrtECInfo f_emlrtECI = { -1, 1043, 21, "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m"
};

static emlrtBCInfo de_emlrtBCI = { -1, -1, 1043, 21, "", "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m",
  0 };

static emlrtBCInfo ee_emlrtBCI = { -1, -1, 1035, 24, "", "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m",
  0 };

static emlrtBCInfo fe_emlrtBCI = { -1, -1, 1033, 23, "", "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m",
  0 };

static emlrtBCInfo ge_emlrtBCI = { -1, -1, 674, 41, "", "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m",
  0 };

static emlrtBCInfo he_emlrtBCI = { -1, -1, 673, 21, "", "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m",
  0 };

static emlrtRTEInfo ie_emlrtRTEI = { 38, 15, "ind2sub",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"
};

static emlrtBCInfo ie_emlrtBCI = { -1, -1, 1749, 50, "", "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m",
  0 };

static emlrtBCInfo je_emlrtBCI = { -1, -1, 1749, 9, "", "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m",
  0 };

static emlrtBCInfo ke_emlrtBCI = { -1, -1, 1750, 28, "", "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m",
  0 };

static emlrtBCInfo le_emlrtBCI = { -1, -1, 1751, 45, "", "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m",
  0 };

static emlrtBCInfo me_emlrtBCI = { -1, -1, 1751, 13, "", "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m",
  0 };

static emlrtBCInfo ne_emlrtBCI = { -1, -1, 1033, 21, "", "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m",
  0 };

static emlrtBCInfo oe_emlrtBCI = { -1, -1, 1047, 9, "", "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m",
  0 };

static emlrtBCInfo pe_emlrtBCI = { -1, -1, 678, 13, "", "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m",
  0 };

static emlrtBCInfo qe_emlrtBCI = { -1, -1, 676, 13, "", "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m",
  0 };

static emlrtBCInfo re_emlrtBCI = { -1, -1, 244, 9, "", "regionprops",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\regionprops.m",
  0 };

static emlrtRSInfo jk_emlrtRSI = { 18, "indexDivide",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\indexDivide.m"
};

/* Function Declarations */
static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);
static void initializeStatsStruct(const emlrtStack *sp, real_T numObjs,
  emxArray_b_struct_T *stats, struct_T *statsAlreadyComputed);

/* Function Definitions */
static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroErrorR2012b(NULL, sp);
  } else {
    if (numerator < 0) {
      absNumerator = ~(uint32_T)numerator + 1U;
    } else {
      absNumerator = (uint32_T)numerator;
    }

    if (denominator < 0) {
      absDenominator = ~(uint32_T)denominator + 1U;
    } else {
      absDenominator = (uint32_T)denominator;
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    absNumerator /= absDenominator;
    if (quotientNeedsNegation) {
      quotient = -(int32_T)absNumerator;
    } else {
      quotient = (int32_T)absNumerator;
    }
  }

  return quotient;
}

static void initializeStatsStruct(const emlrtStack *sp, real_T numObjs,
  emxArray_b_struct_T *stats, struct_T *statsAlreadyComputed)
{
  c_struct_T statsOneObj;
  int32_T i27;
  int32_T loop_ub;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInitStruct_struct_T(sp, &statsOneObj, &oc_emlrtRTEI, true);
  statsAlreadyComputed->Area = false;
  statsOneObj.Area = 0.0;
  statsAlreadyComputed->Centroid = false;
  for (i27 = 0; i27 < 2; i27++) {
    statsOneObj.Centroid[i27] = 0.0;
  }

  statsAlreadyComputed->BoundingBox = false;
  for (i27 = 0; i27 < 4; i27++) {
    statsOneObj.BoundingBox[i27] = 0.0;
  }

  statsAlreadyComputed->MajorAxisLength = false;
  statsOneObj.MajorAxisLength = 0.0;
  statsAlreadyComputed->MinorAxisLength = false;
  statsOneObj.MinorAxisLength = 0.0;
  statsAlreadyComputed->Eccentricity = false;
  statsOneObj.Eccentricity = 0.0;
  statsAlreadyComputed->Orientation = false;
  statsOneObj.Orientation = 0.0;
  statsAlreadyComputed->Image = false;
  statsOneObj.Image.size[0] = 0;
  statsOneObj.Image.size[1] = 0;
  statsAlreadyComputed->FilledImage = false;
  statsOneObj.FilledImage.size[0] = 0;
  statsOneObj.FilledImage.size[1] = 0;
  statsAlreadyComputed->FilledArea = false;
  statsOneObj.FilledArea = 0.0;
  statsAlreadyComputed->EulerNumber = false;
  statsOneObj.EulerNumber = 0.0;
  statsAlreadyComputed->Extrema = false;
  memset(&statsOneObj.Extrema[0], 0, sizeof(real_T) << 4);
  statsAlreadyComputed->EquivDiameter = false;
  statsOneObj.EquivDiameter = 0.0;
  statsAlreadyComputed->Extent = false;
  statsOneObj.Extent = 0.0;
  statsAlreadyComputed->PixelIdxList = false;
  i27 = statsOneObj.PixelIdxList->size[0];
  statsOneObj.PixelIdxList->size[0] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)statsOneObj.PixelIdxList, i27,
                    (int32_T)sizeof(real_T), &nc_emlrtRTEI);
  statsAlreadyComputed->PixelList = false;
  i27 = statsOneObj.PixelList->size[0] * statsOneObj.PixelList->size[1];
  statsOneObj.PixelList->size[0] = 0;
  statsOneObj.PixelList->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)statsOneObj.PixelList, i27, (int32_T)
                    sizeof(real_T), &nc_emlrtRTEI);
  statsAlreadyComputed->Perimeter = false;
  statsOneObj.Perimeter = 0.0;
  statsAlreadyComputed->PixelValues = false;
  statsOneObj.PixelValues.size[0] = 0;
  statsAlreadyComputed->WeightedCentroid = false;
  for (i27 = 0; i27 < 2; i27++) {
    statsOneObj.WeightedCentroid[i27] = 0.0;
  }

  statsAlreadyComputed->MeanIntensity = false;
  statsOneObj.MeanIntensity = 0.0;
  statsAlreadyComputed->MinIntensity = false;
  statsOneObj.MinIntensity = 0.0;
  statsAlreadyComputed->MaxIntensity = false;
  statsOneObj.MaxIntensity = 0.0;
  statsAlreadyComputed->SubarrayIdx = false;
  statsOneObj.SubarrayIdx.size[0] = 1;
  statsOneObj.SubarrayIdx.size[1] = 0;
  for (i27 = 0; i27 < 2; i27++) {
    statsOneObj.SubarrayIdxLengths[i27] = 0.0;
  }

  st.site = &pi_emlrtRSI;
  b_st.site = &ob_emlrtRSI;
  assertValidSizeArg(&b_st, numObjs);
  i27 = stats->size[0];
  stats->size[0] = (int32_T)numObjs;
  emxEnsureCapacity_struct_T(&st, stats, i27, &nc_emlrtRTEI);
  loop_ub = (int32_T)numObjs;
  for (i27 = 0; i27 < loop_ub; i27++) {
    emxCopyStruct_struct_T(&st, &stats->data[i27], &statsOneObj, &nc_emlrtRTEI);
  }

  emxFreeStruct_struct_T(&statsOneObj);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void regionprops(const emlrtStack *sp, const emxArray_boolean_T *varargin_1,
                 const emxArray_real_T *varargin_2, emxArray_struct_T *outstats)
{
  emxArray_real_T *CC_RegionIndices;
  emxArray_int32_T *CC_RegionLengths;
  real_T sumIntensity;
  real_T CC_ImageSize[2];
  real_T CC_NumObjects;
  real_T wc[2];
  int32_T i23;
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg2;
  b_struct_T statsOneObj;
  emxArray_b_struct_T *stats;
  emxArray_b_struct_T *b_stats;
  struct_T statsAlreadyComputed;
  int32_T loop_ub;
  emxArray_int32_T *idxCount;
  emxArray_int32_T *idx;
  int32_T maxndx;
  emxArray_real_T *Intensity;
  emxArray_real_T *j;
  int32_T vstride;
  int32_T i24;
  emxArray_real_T *c_stats;
  int32_T exitg1;
  real_T A;
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
  emxInit_real_T1(sp, &CC_RegionIndices, 1, &ec_emlrtRTEI, true);
  emxInit_int32_T(sp, &CC_RegionLengths, 1, &ec_emlrtRTEI, true);
  st.site = &lh_emlrtRSI;
  bwconncomp(&st, varargin_1, &sumIntensity, CC_ImageSize, &CC_NumObjects,
             CC_RegionIndices, CC_RegionLengths);
  st.site = &mh_emlrtRSI;
  for (i23 = 0; i23 < 2; i23++) {
    wc[i23] = varargin_2->size[i23];
  }

  p = false;
  b_p = true;
  k = 0;
  exitg2 = false;
  while ((!exitg2) && (k < 2)) {
    if (!(CC_ImageSize[k] == (uint32_T)wc[k])) {
      b_p = false;
      exitg2 = true;
    } else {
      k++;
    }
  }

  if (!b_p) {
  } else {
    p = true;
  }

  if (!!p) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &he_emlrtRTEI,
      "images:regionprops:sizeMismatch", 0);
  }

  b_st.site = &ni_emlrtRSI;
  for (i23 = 0; i23 < 2; i23++) {
    statsOneObj.WeightedCentroid[i23] = 0.0;
  }

  c_st.site = &oi_emlrtRSI;
  d_st.site = &ob_emlrtRSI;
  assertValidSizeArg(&d_st, CC_NumObjects);
  emxInit_struct_T1(&c_st, &stats, 1, &ec_emlrtRTEI, true);
  emxInit_struct_T1(&c_st, &b_stats, 1, &ec_emlrtRTEI, true);
  st.site = &nh_emlrtRSI;
  initializeStatsStruct(&st, CC_NumObjects, b_stats, &statsAlreadyComputed);
  st.site = &oh_emlrtRSI;
  i23 = stats->size[0];
  stats->size[0] = b_stats->size[0];
  emxEnsureCapacity_struct_T(&st, stats, i23, &ec_emlrtRTEI);
  loop_ub = b_stats->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    emxCopyStruct_struct_T(&st, &stats->data[i23], &b_stats->data[i23],
      &ec_emlrtRTEI);
  }

  emxInit_int32_T(&st, &idxCount, 1, &fc_emlrtRTEI, true);
  emxInit_int32_T(&st, &idx, 1, &hc_emlrtRTEI, true);
  if (CC_NumObjects != 0.0) {
    b_st.site = &qi_emlrtRSI;
    c_st.site = &ii_emlrtRSI;
    maxndx = 2;
    if (CC_RegionLengths->size[0] != 1) {
      maxndx = 1;
    }

    d_st.site = &ji_emlrtRSI;
    i23 = idx->size[0];
    idx->size[0] = CC_RegionLengths->size[0];
    emxEnsureCapacity(&d_st, (emxArray__common *)idx, i23, (int32_T)sizeof
                      (int32_T), &ec_emlrtRTEI);
    loop_ub = CC_RegionLengths->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      idx->data[i23] = CC_RegionLengths->data[i23];
    }

    if (maxndx <= 1) {
      i23 = CC_RegionLengths->size[0];
    } else {
      i23 = 1;
    }

    if ((!(CC_RegionLengths->size[0] == 0)) && (i23 > 1)) {
      e_st.site = &mi_emlrtRSI;
      vstride = 1;
      k = 1;
      while (k <= maxndx - 1) {
        vstride *= CC_RegionLengths->size[0];
        k = 2;
      }

      e_st.site = &li_emlrtRSI;
      if ((!(1 > vstride)) && (vstride > 2147483646)) {
        f_st.site = &eb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      for (maxndx = 0; maxndx + 1 <= vstride; maxndx++) {
        e_st.site = &ki_emlrtRSI;
        for (k = 1; k < i23; k++) {
          idx->data[maxndx + k * vstride] += idx->data[maxndx + (k - 1) *
            vstride];
        }
      }
    }

    i23 = idxCount->size[0];
    idxCount->size[0] = 1 + idx->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)idxCount, i23, (int32_T)sizeof
                      (int32_T), &ec_emlrtRTEI);
    idxCount->data[0] = 0;
    loop_ub = idx->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      idxCount->data[i23 + 1] = idx->data[i23];
    }

    for (k = 0; k < b_stats->size[0]; k++) {
      i23 = idxCount->size[0];
      i24 = k + 1;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &be_emlrtBCI, &st);
      }

      i23 = idxCount->size[0];
      i24 = (int32_T)((1.0 + (real_T)k) + 1.0);
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &ce_emlrtBCI, &st);
      }

      if (idxCount->data[k] + 1 > idxCount->data[(int32_T)((1.0 + (real_T)k) +
           1.0) - 1]) {
        i23 = 0;
        vstride = 0;
      } else {
        i23 = CC_RegionIndices->size[0];
        i24 = idxCount->data[k] + 1;
        if (!((i24 >= 1) && (i24 <= i23))) {
          emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &be_emlrtBCI, &st);
        }

        i23 = i24 - 1;
        i24 = CC_RegionIndices->size[0];
        vstride = idxCount->data[(int32_T)((1.0 + (real_T)k) + 1.0) - 1];
        if (!((vstride >= 1) && (vstride <= i24))) {
          emlrtDynamicBoundsCheckR2012b(vstride, 1, i24, &be_emlrtBCI, &st);
        }
      }

      maxndx = stats->size[0];
      i24 = 1 + k;
      if (!((i24 >= 1) && (i24 <= maxndx))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, maxndx, &re_emlrtBCI, &st);
      }

      i24 = stats->data[k].PixelIdxList->size[0];
      stats->data[k].PixelIdxList->size[0] = vstride - i23;
      emxEnsureCapacity(&st, (emxArray__common *)stats->data[k].PixelIdxList,
                        i24, (int32_T)sizeof(real_T), &ec_emlrtRTEI);
      loop_ub = vstride - i23;
      for (i24 = 0; i24 < loop_ub; i24++) {
        vstride = 1 + k;
        if (!((vstride >= 1) && (vstride <= maxndx))) {
          emlrtDynamicBoundsCheckR2012b(vstride, 1, maxndx, &re_emlrtBCI, &st);
        }

        stats->data[vstride - 1].PixelIdxList->data[i24] =
          CC_RegionIndices->data[i23 + i24];
      }
    }
  }

  emxFree_int32_T(&CC_RegionLengths);
  emxFree_real_T(&CC_RegionIndices);
  st.site = &ph_emlrtRSI;
  b_st.site = &ui_emlrtRSI;
  i23 = b_stats->size[0];
  b_stats->size[0] = stats->size[0];
  emxEnsureCapacity_struct_T(&b_st, b_stats, i23, &ec_emlrtRTEI);
  loop_ub = stats->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    emxCopyStruct_struct_T(&b_st, &b_stats->data[i23], &stats->data[i23],
      &ec_emlrtRTEI);
  }

  k = 1;
  emxInit_real_T1(&b_st, &Intensity, 1, &gc_emlrtRTEI, true);
  emxInit_real_T1(&b_st, &j, 1, &ec_emlrtRTEI, true);
  while (k - 1 <= stats->size[0] - 1) {
    i23 = b_stats->size[0];
    i24 = (k - 1) + 1;
    if (!((i24 >= 1) && (i24 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &he_emlrtBCI, &b_st);
    }

    if (!(b_stats->data[k - 1].PixelIdxList->size[0] == 0)) {
      c_st.site = &wi_emlrtRSI;
      i23 = b_stats->size[0];
      i24 = (k - 1) + 1;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &ge_emlrtBCI, &c_st);
      }

      d_st.site = &xi_emlrtRSI;
      i23 = idx->size[0];
      idx->size[0] = b_stats->data[k - 1].PixelIdxList->size[0];
      emxEnsureCapacity(&d_st, (emxArray__common *)idx, i23, (int32_T)sizeof
                        (int32_T), &ec_emlrtRTEI);
      loop_ub = b_stats->data[k - 1].PixelIdxList->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        idx->data[i23] = (int32_T)b_stats->data[k - 1].PixelIdxList->data[i23];
      }

      maxndx = (int32_T)CC_ImageSize[0] * (int32_T)CC_ImageSize[1];
      vstride = 0;
      do {
        exitg1 = 0;
        if (vstride <= idx->size[0] - 1) {
          if ((idx->data[vstride] >= 1) && (idx->data[vstride] <= maxndx)) {
            p = true;
          } else {
            p = false;
          }

          if (!p) {
            p = false;
            exitg1 = 1;
          } else {
            vstride++;
          }
        } else {
          p = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);

      if (p) {
      } else {
        emlrtErrorWithMessageIdR2012b(&d_st, &ie_emlrtRTEI,
          "Coder:MATLAB:ind2sub_IndexOutOfRange", 0);
      }

      i23 = idx->size[0];
      emxEnsureCapacity(&d_st, (emxArray__common *)idx, i23, (int32_T)sizeof
                        (int32_T), &ec_emlrtRTEI);
      loop_ub = idx->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        idx->data[i23]--;
      }

      i23 = idxCount->size[0];
      idxCount->size[0] = idx->size[0];
      emxEnsureCapacity(&d_st, (emxArray__common *)idxCount, i23, (int32_T)
                        sizeof(int32_T), &ec_emlrtRTEI);
      loop_ub = idx->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        e_st.site = &jk_emlrtRSI;
        idxCount->data[i23] = div_s32(&e_st, idx->data[i23], (int32_T)
          CC_ImageSize[0]);
      }

      i23 = idx->size[0];
      emxEnsureCapacity(&d_st, (emxArray__common *)idx, i23, (int32_T)sizeof
                        (int32_T), &ec_emlrtRTEI);
      loop_ub = idx->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        idx->data[i23] -= idxCount->data[i23] * (int32_T)CC_ImageSize[0];
      }

      i23 = Intensity->size[0];
      Intensity->size[0] = idx->size[0];
      emxEnsureCapacity(&c_st, (emxArray__common *)Intensity, i23, (int32_T)
                        sizeof(real_T), &ec_emlrtRTEI);
      loop_ub = idx->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        Intensity->data[i23] = idx->data[i23] + 1;
      }

      i23 = j->size[0];
      j->size[0] = idxCount->size[0];
      emxEnsureCapacity(&c_st, (emxArray__common *)j, i23, (int32_T)sizeof
                        (real_T), &ec_emlrtRTEI);
      loop_ub = idxCount->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        j->data[i23] = idxCount->data[i23] + 1;
      }

      c_st.site = &vi_emlrtRSI;
      d_st.site = &yi_emlrtRSI;
      e_st.site = &ed_emlrtRSI;
      p = true;
      if (j->size[0] == Intensity->size[0]) {
      } else {
        p = false;
      }

      if (p) {
      } else {
        emlrtErrorWithMessageIdR2012b(&e_st, &wd_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      maxndx = b_stats->size[0];
      if (!((k >= 1) && (k <= maxndx))) {
        emlrtDynamicBoundsCheckR2012b(k, 1, maxndx, &qe_emlrtBCI, &d_st);
      }

      i23 = b_stats->data[k - 1].PixelList->size[0] * b_stats->data[k - 1].
        PixelList->size[1];
      b_stats->data[k - 1].PixelList->size[0] = j->size[0];
      if (!((k >= 1) && (k <= maxndx))) {
        emlrtDynamicBoundsCheckR2012b(k, 1, maxndx, &qe_emlrtBCI, &d_st);
      }

      b_stats->data[k - 1].PixelList->size[1] = 2;
      emxEnsureCapacity(&d_st, (emxArray__common *)b_stats->data[k - 1].
                        PixelList, i23, (int32_T)sizeof(real_T), &ec_emlrtRTEI);
      loop_ub = j->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        if (!((k >= 1) && (k <= maxndx))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, maxndx, &qe_emlrtBCI, &d_st);
        }

        if (!((k >= 1) && (k <= maxndx))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, maxndx, &qe_emlrtBCI, &d_st);
        }

        b_stats->data[k - 1].PixelList->data[i23] = j->data[i23];
      }

      loop_ub = Intensity->size[0];
      for (i23 = 0; i23 < loop_ub; i23++) {
        if (!((k >= 1) && (k <= maxndx))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, maxndx, &qe_emlrtBCI, &d_st);
        }

        if (!((k >= 1) && (k <= maxndx))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, maxndx, &qe_emlrtBCI, &d_st);
        }

        b_stats->data[k - 1].PixelList->data[i23 + b_stats->data[k - 1].
          PixelList->size[0]] = Intensity->data[i23];
      }
    } else {
      i23 = b_stats->size[0];
      if (!((k >= 1) && (k <= i23))) {
        emlrtDynamicBoundsCheckR2012b(k, 1, i23, &pe_emlrtBCI, &b_st);
      }

      i23 = k - 1;
      i24 = b_stats->data[i23].PixelList->size[0] * b_stats->data[i23].
        PixelList->size[1];
      b_stats->data[i23].PixelList->size[0] = 0;
      i23 = b_stats->size[0];
      if (!((k >= 1) && (k <= i23))) {
        emlrtDynamicBoundsCheckR2012b(k, 1, i23, &pe_emlrtBCI, &b_st);
      }

      i23 = k - 1;
      b_stats->data[i23].PixelList->size[1] = 2;
      emxEnsureCapacity(&b_st, (emxArray__common *)b_stats->data[i23].PixelList,
                        i24, (int32_T)sizeof(real_T), &ec_emlrtRTEI);
      maxndx = b_stats->size[0];
      if (!((k >= 1) && (k <= maxndx))) {
        emlrtDynamicBoundsCheckR2012b(k, 1, maxndx, &pe_emlrtBCI, &b_st);
      }

      maxndx = b_stats->size[0];
      if (!((k >= 1) && (k <= maxndx))) {
        emlrtDynamicBoundsCheckR2012b(k, 1, maxndx, &pe_emlrtBCI, &b_st);
      }
    }

    k++;
  }

  emxFree_int32_T(&idx);
  emxFree_real_T(&j);
  emxFree_int32_T(&idxCount);
  i23 = stats->size[0];
  stats->size[0] = b_stats->size[0];
  emxEnsureCapacity_struct_T(&st, stats, i23, &ec_emlrtRTEI);
  loop_ub = b_stats->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    emxCopyStruct_struct_T(&st, &stats->data[i23], &b_stats->data[i23],
      &ec_emlrtRTEI);
  }

  k = 0;
  emxInit_real_T1(&st, &c_stats, 1, &ec_emlrtRTEI, true);
  while (k <= b_stats->size[0] - 1) {
    i23 = stats->size[0];
    i24 = k + 1;
    if (!((i24 >= 1) && (i24 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &fe_emlrtBCI, &st);
    }

    b_st.site = &ti_emlrtRSI;
    b_indexShapeCheck(&b_st, *(int32_T (*)[2])varargin_2->size, stats->data[k].
                      PixelIdxList->size[0]);
    maxndx = varargin_2->size[0] * varargin_2->size[1];
    i23 = Intensity->size[0];
    Intensity->size[0] = stats->data[k].PixelIdxList->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)Intensity, i23, (int32_T)sizeof
                      (real_T), &ec_emlrtRTEI);
    loop_ub = stats->data[k].PixelIdxList->size[0];
    for (i23 = 0; i23 < loop_ub; i23++) {
      i24 = (int32_T)stats->data[k].PixelIdxList->data[i23];
      if (!((i24 >= 1) && (i24 <= maxndx))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, maxndx, &ne_emlrtBCI, &st);
      }

      Intensity->data[i23] = varargin_2->data[i24 - 1];
    }

    b_st.site = &si_emlrtRSI;
    sumIntensity = sum(&b_st, Intensity);
    i23 = stats->size[0];
    i24 = k + 1;
    if (!((i24 >= 1) && (i24 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &ee_emlrtBCI, &st);
    }

    for (vstride = 0; vstride < 2; vstride++) {
      i23 = stats->size[0];
      i24 = k + 1;
      if (!((i24 >= 1) && (i24 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &de_emlrtBCI, &st);
      }

      i23 = stats->data[k].PixelList->size[0];
      maxndx = stats->data[k].PixelIdxList->size[0];
      if (i23 != maxndx) {
        emlrtSizeEqCheck1DR2012b(i23, maxndx, &f_emlrtECI, &st);
      }

      loop_ub = stats->data[k].PixelList->size[0];
      i23 = c_stats->size[0];
      c_stats->size[0] = loop_ub;
      emxEnsureCapacity(&st, (emxArray__common *)c_stats, i23, (int32_T)sizeof
                        (real_T), &ec_emlrtRTEI);
      for (i23 = 0; i23 < loop_ub; i23++) {
        c_stats->data[i23] = stats->data[k].PixelList->data[i23 + stats->data[k]
          .PixelList->size[0] * vstride] * Intensity->data[i23];
      }

      b_st.site = &ri_emlrtRSI;
      A = sum(&b_st, c_stats);
      wc[vstride] = A / sumIntensity;
    }

    maxndx = stats->size[0];
    for (i23 = 0; i23 < 2; i23++) {
      i24 = 1 + k;
      if (!((i24 >= 1) && (i24 <= maxndx))) {
        emlrtDynamicBoundsCheckR2012b(i24, 1, maxndx, &oe_emlrtBCI, &st);
      }

      stats->data[i24 - 1].WeightedCentroid[i23] = wc[i23];
    }

    k++;
  }

  emxFree_real_T(&c_stats);
  emxFree_real_T(&Intensity);
  emxFree_struct_T1(&b_stats);
  st.site = &qh_emlrtRSI;
  i23 = outstats->size[0];
  outstats->size[0] = (int32_T)CC_NumObjects;
  emxEnsureCapacity(&st, (emxArray__common *)outstats, i23, (int32_T)sizeof
                    (b_struct_T), &ec_emlrtRTEI);
  loop_ub = (int32_T)CC_NumObjects;
  for (i23 = 0; i23 < loop_ub; i23++) {
    outstats->data[i23] = statsOneObj;
  }

  for (k = 0; k < stats->size[0]; k++) {
    i23 = stats->size[0];
    i24 = k + 1;
    if (!((i24 >= 1) && (i24 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &ie_emlrtBCI, &st);
    }

    i23 = outstats->size[0];
    if (!((k + 1 >= 1) && (k + 1 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, i23, &je_emlrtBCI, &st);
    }

    i23 = outstats->size[0];
    i24 = k + 1;
    if (!((i24 >= 1) && (i24 <= i23))) {
      emlrtDynamicBoundsCheckR2012b(i24, 1, i23, &ke_emlrtBCI, &st);
    }

    for (maxndx = 0; maxndx < 2; maxndx++) {
      i23 = stats->size[0];
      if (!((k + 1 >= 1) && (k + 1 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i23, &le_emlrtBCI, &st);
      }

      i23 = outstats->size[0];
      if (!((k + 1 >= 1) && (k + 1 <= i23))) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i23, &me_emlrtBCI, &st);
      }

      outstats->data[k].WeightedCentroid[maxndx] = stats->data[k].
        WeightedCentroid[maxndx];
    }
  }

  emxFree_struct_T1(&stats);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (regionprops.c) */
