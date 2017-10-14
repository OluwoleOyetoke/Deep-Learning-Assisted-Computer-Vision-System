/*
 * bwconncomp.c
 *
 * Code generation for function 'bwconncomp'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "bwconncomp.h"
#include "detectCircle_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
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
static emlrtRSInfo rh_emlrtRSI = { 9, "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m"
};

static emlrtRSInfo sh_emlrtRSI = { 30, "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m"
};

static emlrtRSInfo th_emlrtRSI = { 43, "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m"
};

static emlrtRSInfo uh_emlrtRSI = { 55, "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m"
};

static emlrtRSInfo vh_emlrtRSI = { 56, "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m"
};

static emlrtRSInfo wh_emlrtRSI = { 57, "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m"
};

static emlrtRSInfo xh_emlrtRSI = { 65, "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m"
};

static emlrtRSInfo yh_emlrtRSI = { 33, "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"
};

static emlrtRSInfo ai_emlrtRSI = { 51, "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"
};

static emlrtRSInfo bi_emlrtRSI = { 114, "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"
};

static emlrtRSInfo ci_emlrtRSI = { 149, "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"
};

static emlrtRSInfo di_emlrtRSI = { 150, "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"
};

static emlrtRSInfo ei_emlrtRSI = { 152, "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"
};

static emlrtRTEInfo ic_emlrtRTEI = { 1, 15, "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m"
};

static emlrtRTEInfo jc_emlrtRTEI = { 25, 1, "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m"
};

static emlrtRTEInfo kc_emlrtRTEI = { 41, 1, "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m"
};

static emlrtRTEInfo lc_emlrtRTEI = { 55, 1, "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m"
};

static emlrtRTEInfo mc_emlrtRTEI = { 56, 1, "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m"
};

static emlrtRTEInfo je_emlrtRTEI = { 205, 9, "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"
};

static emlrtBCInfo se_emlrtBCI = { -1, -1, 66, 54, "", "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m",
  0 };

static emlrtBCInfo te_emlrtBCI = { -1, -1, 65, 34, "", "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m",
  0 };

static emlrtBCInfo ue_emlrtBCI = { -1, -1, 65, 22, "", "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m",
  0 };

static emlrtBCInfo ve_emlrtBCI = { -1, -1, 59, 73, "", "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m",
  0 };

static emlrtDCInfo emlrtDCI = { 55, 37, "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m",
  4 };

static emlrtBCInfo we_emlrtBCI = { -1, -1, 45, 35, "", "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m",
  0 };

static emlrtDCInfo b_emlrtDCI = { 48, 33, "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  4 };

static emlrtBCInfo xe_emlrtBCI = { -1, -1, 75, 9, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo ye_emlrtBCI = { -1, -1, 81, 13, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo af_emlrtBCI = { -1, -1, 86, 25, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo bf_emlrtBCI = { -1, -1, 80, 25, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo cf_emlrtBCI = { -1, -1, 130, 9, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo df_emlrtBCI = { -1, -1, 134, 9, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo ef_emlrtBCI = { -1, -1, 95, 18, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo ff_emlrtBCI = { -1, -1, 95, 32, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo gf_emlrtBCI = { -1, -1, 95, 57, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo hf_emlrtBCI = { -1, -1, 95, 73, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo if_emlrtBCI = { -1, -1, 99, 21, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo jf_emlrtBCI = { -1, -1, 108, 25, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo kf_emlrtBCI = { -1, -1, 108, 47, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo lf_emlrtBCI = { -1, -1, 179, 10, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo mf_emlrtBCI = { -1, -1, 180, 17, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo nf_emlrtBCI = { -1, -1, 180, 24, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo of_emlrtBCI = { -1, -1, 180, 5, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo pf_emlrtBCI = { -1, -1, 181, 16, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo qf_emlrtBCI = { -1, -1, 168, 5, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo rf_emlrtBCI = { -1, -1, 169, 5, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo sf_emlrtBCI = { -1, -1, 165, 5, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo tf_emlrtBCI = { -1, -1, 166, 5, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo uf_emlrtBCI = { -1, -1, 103, 42, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo vf_emlrtBCI = { -1, -1, 103, 21, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo wf_emlrtBCI = { -1, -1, 231, 31, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo xf_emlrtBCI = { -1, -1, 235, 28, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo yf_emlrtBCI = { -1, -1, 236, 13, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo ag_emlrtBCI = { -1, -1, 237, 13, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo bg_emlrtBCI = { -1, -1, 238, 35, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo cg_emlrtBCI = { -1, -1, 241, 13, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo dg_emlrtBCI = { -1, -1, 62, 35, "", "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m",
  0 };

static emlrtBCInfo eg_emlrtBCI = { -1, -1, 66, 13, "", "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m",
  0 };

static emlrtBCInfo fg_emlrtBCI = { -1, -1, 67, 26, "", "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m",
  0 };

static emlrtBCInfo gg_emlrtBCI = { -1, -1, 48, 46, "", "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m",
  0 };

static emlrtBCInfo hg_emlrtBCI = { -1, -1, 48, 55, "", "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m",
  0 };

static emlrtBCInfo ig_emlrtBCI = { -1, -1, 48, 67, "", "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m",
  0 };

static emlrtBCInfo jg_emlrtBCI = { -1, -1, 48, 23, "", "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m",
  0 };

static emlrtBCInfo kg_emlrtBCI = { -1, -1, 32, 9, "", "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m",
  0 };

static emlrtBCInfo lg_emlrtBCI = { -1, -1, 34, 9, "", "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m",
  0 };

static emlrtBCInfo mg_emlrtBCI = { -1, -1, 38, 27, "", "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m",
  0 };

static emlrtBCInfo ng_emlrtBCI = { -1, -1, 38, 44, "", "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m",
  0 };

static emlrtBCInfo og_emlrtBCI = { -1, -1, 38, 5, "", "bwconncomp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\bwconncomp.m",
  0 };

static emlrtBCInfo pg_emlrtBCI = { -1, -1, 200, 13, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo qg_emlrtBCI = { -1, -1, 206, 18, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

static emlrtBCInfo rg_emlrtBCI = { -1, -1, 206, 34, "", "intermediateLabelRuns",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",
  0 };

/* Function Definitions */
void bwconncomp(const emlrtStack *sp, const emxArray_boolean_T *varargin_1,
                real_T *CC_Connectivity, real_T CC_ImageSize[2], real_T
                *CC_NumObjects, emxArray_real_T *CC_RegionIndices,
                emxArray_int32_T *CC_RegionLengths)
{
  int32_T numRuns;
  int32_T firstRunOnPreviousColumn;
  int32_T lastRunOnPreviousColumn;
  emxArray_int32_T *regionLengths;
  emxArray_int32_T *startRow;
  real_T offset;
  emxArray_int32_T *endRow;
  int32_T i25;
  emxArray_int32_T *startCol;
  int32_T i26;
  real_T numComponents;
  int32_T k;
  int32_T runCounter;
  emxArray_int32_T *labelsRenumbered;
  int32_T currentColumn;
  int32_T nextLabel;
  boolean_T exitg2;
  int32_T firstRunOnThisColumn;
  boolean_T exitg1;
  boolean_T overflow;
  emxArray_real_T *pixelIdxList;
  int32_T p;
  emxArray_int32_T *x;
  emxArray_int32_T *idxCount;
  int32_T parent_k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &rh_emlrtRSI;
  b_st.site = &yh_emlrtRSI;
  numRuns = 0;
  firstRunOnPreviousColumn = varargin_1->size[0];
  if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
    for (lastRunOnPreviousColumn = 0; lastRunOnPreviousColumn < varargin_1->
         size[1]; lastRunOnPreviousColumn++) {
      offset = ((1.0 + (real_T)lastRunOnPreviousColumn) - 1.0) * (real_T)
        firstRunOnPreviousColumn;
      i25 = varargin_1->size[0] * varargin_1->size[1];
      i26 = (int32_T)(1.0 + offset);
      if (!((i26 >= 1) && (i26 <= i25))) {
        emlrtDynamicBoundsCheckR2012b(i26, 1, i25, &pg_emlrtBCI, &b_st);
      }

      if (varargin_1->data[i26 - 1]) {
        numRuns++;
      }

      numComponents = (real_T)firstRunOnPreviousColumn + offset;
      i25 = (int32_T)(numComponents + (1.0 - (2.0 + offset)));
      emlrtForLoopVectorCheckR2012b(2.0 + offset, 1.0, numComponents,
        mxDOUBLE_CLASS, i25, &je_emlrtRTEI, &b_st);
      for (k = 0; k < i25; k++) {
        numComponents = (2.0 + offset) + (real_T)k;
        i26 = varargin_1->size[0] * varargin_1->size[1];
        runCounter = (int32_T)numComponents;
        if (!((runCounter >= 1) && (runCounter <= i26))) {
          emlrtDynamicBoundsCheckR2012b(runCounter, 1, i26, &qg_emlrtBCI, &b_st);
        }

        if (varargin_1->data[runCounter - 1]) {
          i26 = varargin_1->size[0] * varargin_1->size[1];
          runCounter = (int32_T)numComponents - 1;
          if (!((runCounter >= 1) && (runCounter <= i26))) {
            emlrtDynamicBoundsCheckR2012b(runCounter, 1, i26, &rg_emlrtBCI,
              &b_st);
          }

          if (!varargin_1->data[runCounter - 1]) {
            numRuns++;
          }
        }
      }
    }
  }

  emxInit_int32_T(&st, &regionLengths, 1, &kc_emlrtRTEI, true);
  emxInit_int32_T(&st, &startRow, 1, &ic_emlrtRTEI, true);
  emxInit_int32_T(&st, &endRow, 1, &ic_emlrtRTEI, true);
  emxInit_int32_T(&st, &startCol, 1, &ic_emlrtRTEI, true);
  if (numRuns == 0) {
    i25 = startRow->size[0];
    startRow->size[0] = 0;
    emxEnsureCapacity(&st, (emxArray__common *)startRow, i25, (int32_T)sizeof
                      (int32_T), &ic_emlrtRTEI);
    i25 = endRow->size[0];
    endRow->size[0] = 0;
    emxEnsureCapacity(&st, (emxArray__common *)endRow, i25, (int32_T)sizeof
                      (int32_T), &ic_emlrtRTEI);
    i25 = startCol->size[0];
    startCol->size[0] = 0;
    emxEnsureCapacity(&st, (emxArray__common *)startCol, i25, (int32_T)sizeof
                      (int32_T), &ic_emlrtRTEI);
    i25 = regionLengths->size[0];
    regionLengths->size[0] = 0;
    emxEnsureCapacity(&st, (emxArray__common *)regionLengths, i25, (int32_T)
                      sizeof(int32_T), &ic_emlrtRTEI);
  } else {
    i25 = startRow->size[0];
    if (!(numRuns >= 0)) {
      emlrtNonNegativeCheckR2012b(numRuns, &b_emlrtDCI, &st);
    }

    startRow->size[0] = numRuns;
    emxEnsureCapacity(&st, (emxArray__common *)startRow, i25, (int32_T)sizeof
                      (int32_T), &ic_emlrtRTEI);
    i25 = endRow->size[0];
    endRow->size[0] = numRuns;
    emxEnsureCapacity(&st, (emxArray__common *)endRow, i25, (int32_T)sizeof
                      (int32_T), &ic_emlrtRTEI);
    i25 = startCol->size[0];
    startCol->size[0] = numRuns;
    emxEnsureCapacity(&st, (emxArray__common *)startCol, i25, (int32_T)sizeof
                      (int32_T), &ic_emlrtRTEI);
    b_st.site = &ai_emlrtRSI;
    firstRunOnPreviousColumn = varargin_1->size[0];
    runCounter = 1;
    for (lastRunOnPreviousColumn = 0; lastRunOnPreviousColumn < varargin_1->
         size[1]; lastRunOnPreviousColumn++) {
      currentColumn = (int32_T)(((1.0 + (real_T)lastRunOnPreviousColumn) - 1.0) *
        (real_T)firstRunOnPreviousColumn);
      nextLabel = 1;
      while (nextLabel <= firstRunOnPreviousColumn) {
        exitg2 = false;
        while ((!exitg2) && (nextLabel <= firstRunOnPreviousColumn)) {
          i25 = varargin_1->size[0] * varargin_1->size[1];
          i26 = nextLabel + currentColumn;
          if (!((i26 >= 1) && (i26 <= i25))) {
            emlrtDynamicBoundsCheckR2012b(i26, 1, i25, &wf_emlrtBCI, &b_st);
          }

          if (!varargin_1->data[i26 - 1]) {
            nextLabel++;
          } else {
            exitg2 = true;
          }
        }

        if (nextLabel <= firstRunOnPreviousColumn) {
          i25 = varargin_1->size[0] * varargin_1->size[1];
          i26 = nextLabel + currentColumn;
          if (!((i26 >= 1) && (i26 <= i25))) {
            emlrtDynamicBoundsCheckR2012b(i26, 1, i25, &xf_emlrtBCI, &b_st);
          }

          if (varargin_1->data[i26 - 1]) {
            i25 = startCol->size[0];
            if (!((runCounter >= 1) && (runCounter <= i25))) {
              emlrtDynamicBoundsCheckR2012b(runCounter, 1, i25, &yf_emlrtBCI,
                &b_st);
            }

            startCol->data[runCounter - 1] = lastRunOnPreviousColumn + 1;
            i25 = startRow->size[0];
            if (!((runCounter >= 1) && (runCounter <= i25))) {
              emlrtDynamicBoundsCheckR2012b(runCounter, 1, i25, &ag_emlrtBCI,
                &b_st);
            }

            startRow->data[runCounter - 1] = nextLabel;
            exitg1 = false;
            while ((!exitg1) && (nextLabel <= firstRunOnPreviousColumn)) {
              i25 = varargin_1->size[0] * varargin_1->size[1];
              i26 = nextLabel + currentColumn;
              if (!((i26 >= 1) && (i26 <= i25))) {
                emlrtDynamicBoundsCheckR2012b(i26, 1, i25, &bg_emlrtBCI, &b_st);
              }

              if (varargin_1->data[i26 - 1]) {
                nextLabel++;
              } else {
                exitg1 = true;
              }
            }

            i25 = endRow->size[0];
            if (!((runCounter >= 1) && (runCounter <= i25))) {
              emlrtDynamicBoundsCheckR2012b(runCounter, 1, i25, &cg_emlrtBCI,
                &b_st);
            }

            endRow->data[runCounter - 1] = nextLabel - 1;
            runCounter++;
          }
        }
      }
    }

    i25 = regionLengths->size[0];
    regionLengths->size[0] = numRuns;
    emxEnsureCapacity(&st, (emxArray__common *)regionLengths, i25, (int32_T)
                      sizeof(int32_T), &ic_emlrtRTEI);
    for (i25 = 0; i25 < numRuns; i25++) {
      regionLengths->data[i25] = 0;
    }

    k = 1;
    currentColumn = 1;
    nextLabel = 1;
    firstRunOnPreviousColumn = -1;
    lastRunOnPreviousColumn = -1;
    firstRunOnThisColumn = 1;
    while (k <= numRuns) {
      i25 = startCol->size[0];
      if (!((k >= 1) && (k <= i25))) {
        emlrtDynamicBoundsCheckR2012b(k, 1, i25, &xe_emlrtBCI, &st);
      }

      if (startCol->data[k - 1] == currentColumn + 1) {
        firstRunOnPreviousColumn = firstRunOnThisColumn;
        firstRunOnThisColumn = k;
        lastRunOnPreviousColumn = k - 1;
        i25 = startCol->size[0];
        if (!((k >= 1) && (k <= i25))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i25, &bf_emlrtBCI, &st);
        }

        currentColumn = startCol->data[k - 1];
      } else {
        i25 = startCol->size[0];
        if (!((k >= 1) && (k <= i25))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i25, &ye_emlrtBCI, &st);
        }

        if (startCol->data[k - 1] > currentColumn + 1) {
          firstRunOnPreviousColumn = -1;
          lastRunOnPreviousColumn = -1;
          firstRunOnThisColumn = k;
          i25 = startCol->size[0];
          if (!((k >= 1) && (k <= i25))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i25, &af_emlrtBCI, &st);
          }

          currentColumn = startCol->data[k - 1];
        }
      }

      if (firstRunOnPreviousColumn >= 0) {
        for (p = firstRunOnPreviousColumn; p <= lastRunOnPreviousColumn; p++) {
          i25 = endRow->size[0];
          if (!((k >= 1) && (k <= i25))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i25, &ef_emlrtBCI, &st);
          }

          i25 = startRow->size[0];
          if (!((p >= 1) && (p <= i25))) {
            emlrtDynamicBoundsCheckR2012b(p, 1, i25, &ff_emlrtBCI, &st);
          }

          if (endRow->data[k - 1] >= startRow->data[p - 1] - 1) {
            i25 = startRow->size[0];
            if (!((k >= 1) && (k <= i25))) {
              emlrtDynamicBoundsCheckR2012b(k, 1, i25, &gf_emlrtBCI, &st);
            }

            i25 = endRow->size[0];
            if (!((p >= 1) && (p <= i25))) {
              emlrtDynamicBoundsCheckR2012b(p, 1, i25, &hf_emlrtBCI, &st);
            }

            if (startRow->data[k - 1] <= endRow->data[p - 1] + 1) {
              i25 = regionLengths->size[0];
              if (!((k >= 1) && (k <= i25))) {
                emlrtDynamicBoundsCheckR2012b(k, 1, i25, &if_emlrtBCI, &st);
              }

              if (regionLengths->data[k - 1] == 0) {
                i25 = regionLengths->size[0];
                if (!((p >= 1) && (p <= i25))) {
                  emlrtDynamicBoundsCheckR2012b(p, 1, i25, &uf_emlrtBCI, &st);
                }

                i25 = regionLengths->size[0];
                if (!((k >= 1) && (k <= i25))) {
                  emlrtDynamicBoundsCheckR2012b(k, 1, i25, &vf_emlrtBCI, &st);
                }

                regionLengths->data[k - 1] = regionLengths->data[p - 1];
                nextLabel++;
              } else {
                i25 = regionLengths->size[0];
                if (!((k >= 1) && (k <= i25))) {
                  emlrtDynamicBoundsCheckR2012b(k, 1, i25, &jf_emlrtBCI, &st);
                }

                i25 = regionLengths->size[0];
                if (!((p >= 1) && (p <= i25))) {
                  emlrtDynamicBoundsCheckR2012b(p, 1, i25, &kf_emlrtBCI, &st);
                }

                if (regionLengths->data[k - 1] != regionLengths->data[p - 1]) {
                  b_st.site = &bi_emlrtRSI;
                  c_st.site = &ci_emlrtRSI;
                  i25 = regionLengths->size[0];
                  if (!((k >= 1) && (k <= i25))) {
                    emlrtDynamicBoundsCheckR2012b(k, 1, i25, &lf_emlrtBCI, &c_st);
                  }

                  if (k != regionLengths->data[k - 1]) {
                    i25 = regionLengths->size[0];
                    i26 = regionLengths->size[0];
                    if (!((k >= 1) && (k <= i26))) {
                      emlrtDynamicBoundsCheckR2012b(k, 1, i26, &nf_emlrtBCI,
                        &c_st);
                    }

                    i26 = regionLengths->data[k - 1];
                    if (!((i26 >= 1) && (i26 <= i25))) {
                      emlrtDynamicBoundsCheckR2012b(i26, 1, i25, &mf_emlrtBCI,
                        &c_st);
                    }

                    i25 = regionLengths->size[0];
                    if (!((k >= 1) && (k <= i25))) {
                      emlrtDynamicBoundsCheckR2012b(k, 1, i25, &of_emlrtBCI,
                        &c_st);
                    }

                    regionLengths->data[k - 1] = regionLengths->data[i26 - 1];
                    i25 = regionLengths->size[0];
                    if (!((k >= 1) && (k <= i25))) {
                      emlrtDynamicBoundsCheckR2012b(k, 1, i25, &pf_emlrtBCI,
                        &c_st);
                    }

                    parent_k = regionLengths->data[k - 1];
                  } else {
                    parent_k = k;
                  }

                  c_st.site = &di_emlrtRSI;
                  i25 = regionLengths->size[0];
                  if (!((p >= 1) && (p <= i25))) {
                    emlrtDynamicBoundsCheckR2012b(p, 1, i25, &lf_emlrtBCI, &c_st);
                  }

                  if (p != regionLengths->data[p - 1]) {
                    i25 = regionLengths->size[0];
                    i26 = regionLengths->size[0];
                    if (!((p >= 1) && (p <= i26))) {
                      emlrtDynamicBoundsCheckR2012b(p, 1, i26, &nf_emlrtBCI,
                        &c_st);
                    }

                    i26 = regionLengths->data[p - 1];
                    if (!((i26 >= 1) && (i26 <= i25))) {
                      emlrtDynamicBoundsCheckR2012b(i26, 1, i25, &mf_emlrtBCI,
                        &c_st);
                    }

                    i25 = regionLengths->size[0];
                    if (!((p >= 1) && (p <= i25))) {
                      emlrtDynamicBoundsCheckR2012b(p, 1, i25, &of_emlrtBCI,
                        &c_st);
                    }

                    regionLengths->data[p - 1] = regionLengths->data[i26 - 1];
                    i25 = regionLengths->size[0];
                    if (!((p >= 1) && (p <= i25))) {
                      emlrtDynamicBoundsCheckR2012b(p, 1, i25, &pf_emlrtBCI,
                        &c_st);
                    }

                    runCounter = regionLengths->data[p - 1];
                  } else {
                    runCounter = p;
                  }

                  if (parent_k != runCounter) {
                    c_st.site = &ei_emlrtRSI;
                    if (runCounter < parent_k) {
                      i25 = regionLengths->size[0];
                      if (!((parent_k >= 1) && (parent_k <= i25))) {
                        emlrtDynamicBoundsCheckR2012b(parent_k, 1, i25,
                          &sf_emlrtBCI, &c_st);
                      }

                      regionLengths->data[parent_k - 1] = runCounter;
                      i25 = regionLengths->size[0];
                      if (!((k >= 1) && (k <= i25))) {
                        emlrtDynamicBoundsCheckR2012b(k, 1, i25, &tf_emlrtBCI,
                          &c_st);
                      }

                      regionLengths->data[k - 1] = runCounter;
                    } else {
                      i25 = regionLengths->size[0];
                      if (!((runCounter >= 1) && (runCounter <= i25))) {
                        emlrtDynamicBoundsCheckR2012b(runCounter, 1, i25,
                          &qf_emlrtBCI, &c_st);
                      }

                      regionLengths->data[runCounter - 1] = parent_k;
                      i25 = regionLengths->size[0];
                      if (!((p >= 1) && (p <= i25))) {
                        emlrtDynamicBoundsCheckR2012b(p, 1, i25, &rf_emlrtBCI,
                          &c_st);
                      }

                      regionLengths->data[p - 1] = parent_k;
                    }
                  }
                }
              }
            }
          }
        }
      }

      i25 = regionLengths->size[0];
      if (!((k >= 1) && (k <= i25))) {
        emlrtDynamicBoundsCheckR2012b(k, 1, i25, &cf_emlrtBCI, &st);
      }

      if (regionLengths->data[k - 1] == 0) {
        i25 = regionLengths->size[0];
        if (!((k >= 1) && (k <= i25))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i25, &df_emlrtBCI, &st);
        }

        regionLengths->data[k - 1] = nextLabel;
        nextLabel++;
      }

      k++;
    }
  }

  if (numRuns == 0) {
    *CC_Connectivity = 8.0;
    for (i25 = 0; i25 < 2; i25++) {
      CC_ImageSize[i25] = varargin_1->size[i25];
    }

    *CC_NumObjects = 0.0;
    i25 = CC_RegionIndices->size[0];
    CC_RegionIndices->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)CC_RegionIndices, i25, (int32_T)
                      sizeof(real_T), &ic_emlrtRTEI);
    i25 = CC_RegionLengths->size[0];
    CC_RegionLengths->size[0] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)CC_RegionLengths, i25, (int32_T)
                      sizeof(int32_T), &ic_emlrtRTEI);
    CC_RegionLengths->data[0] = 0;
  } else {
    emxInit_int32_T(sp, &labelsRenumbered, 1, &jc_emlrtRTEI, true);
    i25 = labelsRenumbered->size[0];
    labelsRenumbered->size[0] = regionLengths->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)labelsRenumbered, i25, (int32_T)
                      sizeof(int32_T), &ic_emlrtRTEI);
    numComponents = 0.0;
    st.site = &sh_emlrtRSI;
    for (k = 1; k <= numRuns; k++) {
      i25 = regionLengths->size[0];
      if (!(k <= i25)) {
        emlrtDynamicBoundsCheckR2012b(k, 1, i25, &kg_emlrtBCI, sp);
      }

      if (regionLengths->data[k - 1] == k) {
        numComponents++;
        i25 = labelsRenumbered->size[0];
        if (!(k <= i25)) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i25, &lg_emlrtBCI, sp);
        }

        labelsRenumbered->data[k - 1] = (int32_T)numComponents;
      }

      i25 = labelsRenumbered->size[0];
      i26 = regionLengths->size[0];
      if (!(k <= i26)) {
        emlrtDynamicBoundsCheckR2012b(k, 1, i26, &ng_emlrtBCI, sp);
      }

      i26 = regionLengths->data[k - 1];
      if (!((i26 >= 1) && (i26 <= i25))) {
        emlrtDynamicBoundsCheckR2012b(i26, 1, i25, &mg_emlrtBCI, sp);
      }

      i25 = labelsRenumbered->size[0];
      if (!(k <= i25)) {
        emlrtDynamicBoundsCheckR2012b(k, 1, i25, &og_emlrtBCI, sp);
      }

      labelsRenumbered->data[k - 1] = labelsRenumbered->data[i26 - 1];
    }

    i25 = regionLengths->size[0];
    regionLengths->size[0] = (int32_T)numComponents;
    emxEnsureCapacity(sp, (emxArray__common *)regionLengths, i25, (int32_T)
                      sizeof(int32_T), &ic_emlrtRTEI);
    currentColumn = (int32_T)numComponents;
    for (i25 = 0; i25 < currentColumn; i25++) {
      regionLengths->data[i25] = 0;
    }

    st.site = &th_emlrtRSI;
    for (k = 1; k <= numRuns; k++) {
      i25 = labelsRenumbered->size[0];
      if (!(k <= i25)) {
        emlrtDynamicBoundsCheckR2012b(k, 1, i25, &we_emlrtBCI, sp);
      }

      if (labelsRenumbered->data[k - 1] > 0) {
        i25 = regionLengths->size[0];
        i26 = labelsRenumbered->data[k - 1];
        if (!((i26 >= 1) && (i26 <= i25))) {
          emlrtDynamicBoundsCheckR2012b(i26, 1, i25, &gg_emlrtBCI, sp);
        }

        i25 = endRow->size[0];
        if (!(k <= i25)) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i25, &hg_emlrtBCI, sp);
        }

        i25 = startRow->size[0];
        if (!(k <= i25)) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i25, &ig_emlrtBCI, sp);
        }

        i25 = regionLengths->size[0];
        runCounter = labelsRenumbered->data[k - 1];
        if (!((runCounter >= 1) && (runCounter <= i25))) {
          emlrtDynamicBoundsCheckR2012b(runCounter, 1, i25, &jg_emlrtBCI, sp);
        }

        regionLengths->data[runCounter - 1] = ((regionLengths->data[i26 - 1] +
          endRow->data[k - 1]) - startRow->data[k - 1]) + 1;
      }
    }

    st.site = &uh_emlrtRSI;
    b_st.site = &fi_emlrtRSI;
    c_st.site = &gi_emlrtRSI;
    if (regionLengths->size[0] == 0) {
      offset = 0.0;
    } else {
      offset = regionLengths->data[0];
      d_st.site = &hi_emlrtRSI;
      overflow = ((!(2 > regionLengths->size[0])) && (regionLengths->size[0] >
        2147483646));
      if (overflow) {
        e_st.site = &eb_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      for (k = 2; k <= regionLengths->size[0]; k++) {
        offset += (real_T)regionLengths->data[k - 1];
      }
    }

    emxInit_real_T1(&c_st, &pixelIdxList, 1, &lc_emlrtRTEI, true);
    if (!(offset >= 0.0)) {
      emlrtNonNegativeCheckR2012b(offset, &emlrtDCI, sp);
    }

    i25 = pixelIdxList->size[0];
    pixelIdxList->size[0] = (int32_T)offset;
    emxEnsureCapacity(sp, (emxArray__common *)pixelIdxList, i25, (int32_T)sizeof
                      (real_T), &ic_emlrtRTEI);
    st.site = &vh_emlrtRSI;
    b_st.site = &ii_emlrtRSI;
    nextLabel = 2;
    if (regionLengths->size[0] != 1) {
      nextLabel = 1;
    }

    emxInit_int32_T(&b_st, &x, 1, &ic_emlrtRTEI, true);
    c_st.site = &ji_emlrtRSI;
    i25 = x->size[0];
    x->size[0] = regionLengths->size[0];
    emxEnsureCapacity(&c_st, (emxArray__common *)x, i25, (int32_T)sizeof(int32_T),
                      &ic_emlrtRTEI);
    currentColumn = regionLengths->size[0];
    for (i25 = 0; i25 < currentColumn; i25++) {
      x->data[i25] = regionLengths->data[i25];
    }

    if (nextLabel <= 1) {
      i25 = regionLengths->size[0];
    } else {
      i25 = 1;
    }

    if ((!(regionLengths->size[0] == 0)) && (i25 > 1)) {
      d_st.site = &mi_emlrtRSI;
      runCounter = 1;
      k = 1;
      while (k <= nextLabel - 1) {
        runCounter *= regionLengths->size[0];
        k = 2;
      }

      d_st.site = &li_emlrtRSI;
      if ((!(1 > runCounter)) && (runCounter > 2147483646)) {
        e_st.site = &eb_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      for (currentColumn = 0; currentColumn + 1 <= runCounter; currentColumn++)
      {
        d_st.site = &ki_emlrtRSI;
        for (k = 1; k < i25; k++) {
          x->data[currentColumn + k * runCounter] += x->data[currentColumn + (k
            - 1) * runCounter];
        }
      }
    }

    emxInit_int32_T(&c_st, &idxCount, 1, &mc_emlrtRTEI, true);
    i25 = idxCount->size[0];
    idxCount->size[0] = 1 + x->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)idxCount, i25, (int32_T)sizeof
                      (int32_T), &ic_emlrtRTEI);
    idxCount->data[0] = 0;
    currentColumn = x->size[0];
    for (i25 = 0; i25 < currentColumn; i25++) {
      idxCount->data[i25 + 1] = x->data[i25];
    }

    emxFree_int32_T(&x);
    st.site = &wh_emlrtRSI;
    for (k = 0; k + 1 <= numRuns; k++) {
      i25 = startCol->size[0];
      if (!((k + 1 >= 1) && (k + 1 <= i25))) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i25, &ve_emlrtBCI, sp);
      }

      currentColumn = (startCol->data[k] - 1) * varargin_1->size[0];
      i25 = labelsRenumbered->size[0];
      if (!((k + 1 >= 1) && (k + 1 <= i25))) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, i25, &dg_emlrtBCI, sp);
      }

      nextLabel = labelsRenumbered->data[k];
      if (labelsRenumbered->data[k] > 0) {
        i25 = startRow->size[0];
        if (!((k + 1 >= 1) && (k + 1 <= i25))) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, i25, &ue_emlrtBCI, sp);
        }

        i25 = endRow->size[0];
        if (!((k + 1 >= 1) && (k + 1 <= i25))) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, i25, &te_emlrtBCI, sp);
        }

        st.site = &xh_emlrtRSI;
        overflow = ((!(startRow->data[k] > endRow->data[k])) && (endRow->data[k]
          > 2147483646));
        if (overflow) {
          b_st.site = &eb_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }

        for (runCounter = startRow->data[k]; runCounter <= endRow->data[k];
             runCounter++) {
          i25 = idxCount->size[0];
          if (!((nextLabel >= 1) && (nextLabel <= i25))) {
            emlrtDynamicBoundsCheckR2012b(nextLabel, 1, i25, &se_emlrtBCI, sp);
          }

          i25 = idxCount->size[0];
          if (!((nextLabel >= 1) && (nextLabel <= i25))) {
            emlrtDynamicBoundsCheckR2012b(nextLabel, 1, i25, &eg_emlrtBCI, sp);
          }

          idxCount->data[nextLabel - 1]++;
          i25 = pixelIdxList->size[0];
          i26 = idxCount->size[0];
          if (!((nextLabel >= 1) && (nextLabel <= i26))) {
            emlrtDynamicBoundsCheckR2012b(nextLabel, 1, i26, &fg_emlrtBCI, sp);
          }

          i26 = idxCount->data[nextLabel - 1];
          if (!((i26 >= 1) && (i26 <= i25))) {
            emlrtDynamicBoundsCheckR2012b(i26, 1, i25, &fg_emlrtBCI, sp);
          }

          pixelIdxList->data[i26 - 1] = runCounter + currentColumn;
        }
      }
    }

    emxFree_int32_T(&idxCount);
    emxFree_int32_T(&labelsRenumbered);
    *CC_Connectivity = 8.0;
    for (i25 = 0; i25 < 2; i25++) {
      CC_ImageSize[i25] = varargin_1->size[i25];
    }

    *CC_NumObjects = numComponents;
    i25 = CC_RegionIndices->size[0];
    CC_RegionIndices->size[0] = pixelIdxList->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)CC_RegionIndices, i25, (int32_T)
                      sizeof(real_T), &ic_emlrtRTEI);
    currentColumn = pixelIdxList->size[0];
    for (i25 = 0; i25 < currentColumn; i25++) {
      CC_RegionIndices->data[i25] = pixelIdxList->data[i25];
    }

    emxFree_real_T(&pixelIdxList);
    i25 = CC_RegionLengths->size[0];
    CC_RegionLengths->size[0] = regionLengths->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)CC_RegionLengths, i25, (int32_T)
                      sizeof(int32_T), &ic_emlrtRTEI);
    currentColumn = regionLengths->size[0];
    for (i25 = 0; i25 < currentColumn; i25++) {
      CC_RegionLengths->data[i25] = regionLengths->data[i25];
    }
  }

  emxFree_int32_T(&startCol);
  emxFree_int32_T(&endRow);
  emxFree_int32_T(&startRow);
  emxFree_int32_T(&regionLengths);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (bwconncomp.c) */
