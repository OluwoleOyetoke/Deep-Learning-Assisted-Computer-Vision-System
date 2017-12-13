/*
 * sumTest.c
 *
 * Code generation for function 'sumTest'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sumTest.h"
#include "sumTest_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "sumTest_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 21, "sumTest",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\sumTest.m"
};

static emlrtRSInfo b_emlrtRSI = { 9, "sum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo c_emlrtRSI = { 58, "sumprod",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

static emlrtRSInfo d_emlrtRSI = { 99, "combine_vector_elements",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combine_vector_elements.m"
};

static emlrtRSInfo e_emlrtRSI = { 113, "combine_vector_elements",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combine_vector_elements.m"
};

static emlrtRSInfo f_emlrtRSI = { 20, "eml_int_forloop_overflow_check",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo g_emlrtRSI = { 69, "combine_vector_elements",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combine_vector_elements.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 31, "sumTest",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\sumTest.m"
};

static emlrtDCInfo emlrtDCI = { 17, 24, "sumTest",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\sumTest.m",
  4 };

static emlrtDCInfo b_emlrtDCI = { 17, 24, "sumTest",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\sumTest.m",
  1 };

static emlrtRTEInfo c_emlrtRTEI = { 19, 4, "sumTest",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\sumTest.m"
};

static emlrtDCInfo c_emlrtDCI = { 21, 37, "sumTest",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\sumTest.m",
  1 };

static emlrtBCInfo emlrtBCI = { -1, -1, 21, 37, "regionShed", "sumTest",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\sumTest.m",
  0 };

static emlrtDCInfo d_emlrtDCI = { 21, 51, "sumTest",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\sumTest.m",
  1 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 21, 51, "regionShed", "sumTest",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\sumTest.m",
  0 };

static emlrtDCInfo e_emlrtDCI = { 22, 6, "sumTest",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\sumTest.m",
  1 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 22, 6, "regionSumArray", "sumTest",
  "C:\\Users\\Oluwole_Jnr\\Desktop\\University of Leeds\\Main Project\\Project_MATLab\\MatConvNet - Optimized\\sumTest.m",
  0 };

static emlrtRTEInfo d_emlrtRTEI = { 20, 15, "sumprod",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 48, 9, "sumprod",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

/* Function Definitions */
void sumTest(const emlrtStack *sp, real_T xDim, real_T yDim, real_T zDim, real_T
             stepSize, real_T beacon, real_T windowSize, const emxArray_real_T
             *regionShed, emxArray_real_T *regionSumArray)
{
  real_T startX;
  real_T startY;
  real_T stopX;
  real_T stopY;
  real_T y;
  real_T yCounter;
  real_T totalBlocks;
  int32_T i0;
  int32_T vlen;
  int32_T BlockLoop;
  emxArray_real_T *x;
  emxArray_real_T *b_regionShed;
  emxArray_real_T *c_regionShed;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  boolean_T overflow;
  int32_T npages;
  boolean_T p;
  int32_T k;
  int32_T exitg2;
  int32_T i;
  int32_T xoffset;
  real_T s;
  int32_T exitg1;
  real_T regionSum;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  (void)zDim;
  (void)beacon;
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
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0);

  /* UNTITLED9 Summary of this function goes here */
  /*    Detailed explanation goes here */
  /* Pixel Sum Pooling happens here  */
  /* Initialize aprameters and variables */
  startX = 1.0;
  startY = 1.0;
  stopX = windowSize;
  stopY = windowSize;
  y = (yDim - windowSize) / stepSize;
  yCounter = 1.0;

  /* Sum of the number of Pixels which are potentialy members of the ROI */
  totalBlocks = ((xDim - windowSize) / stepSize + 1.0) * (y + 1.0);
  if (!(totalBlocks >= 0.0)) {
    emlrtNonNegativeCheckR2012b(totalBlocks, &emlrtDCI, sp);
  }

  if (totalBlocks != (int32_T)muDoubleScalarFloor(totalBlocks)) {
    emlrtIntegerCheckR2012b(totalBlocks, &b_emlrtDCI, sp);
  }

  i0 = regionSumArray->size[0] * regionSumArray->size[1];
  regionSumArray->size[0] = (int32_T)totalBlocks;
  regionSumArray->size[1] = (int32_T)totalBlocks;
  emxEnsureCapacity(sp, (emxArray__common *)regionSumArray, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  vlen = (int32_T)totalBlocks * (int32_T)totalBlocks;
  for (i0 = 0; i0 < vlen; i0++) {
    regionSumArray->data[i0] = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, totalBlocks, mxDOUBLE_CLASS, (int32_T)
    totalBlocks, &c_emlrtRTEI, sp);
  BlockLoop = 0;
  emxInit_real_T(sp, &x, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &b_regionShed, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &c_regionShed, 2, &emlrtRTEI, true);
  while (BlockLoop <= (int32_T)totalBlocks - 1) {
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1);
    if (startX > stopX) {
      i1 = 1;
      i0 = 1;
    } else {
      if (startX != (int32_T)muDoubleScalarFloor(startX)) {
        emlrtIntegerCheckR2012b(startX, &c_emlrtDCI, sp);
      }

      i0 = regionShed->size[0];
      i1 = (int32_T)startX;
      if (!((i1 >= 1) && (i1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &emlrtBCI, sp);
      }

      if (stopX != (int32_T)muDoubleScalarFloor(stopX)) {
        emlrtIntegerCheckR2012b(stopX, &c_emlrtDCI, sp);
      }

      i0 = regionShed->size[0];
      i3 = (int32_T)stopX;
      if (!((i3 >= 1) && (i3 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, i0, &emlrtBCI, sp);
      }

      i0 = i3 + 1;
    }

    if (startY > stopY) {
      i2 = 1;
      i3 = 1;
    } else {
      if (startY != (int32_T)muDoubleScalarFloor(startY)) {
        emlrtIntegerCheckR2012b(startY, &d_emlrtDCI, sp);
      }

      i3 = regionShed->size[1];
      i2 = (int32_T)startY;
      if (!((i2 >= 1) && (i2 <= i3))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i3, &b_emlrtBCI, sp);
      }

      if (stopY != (int32_T)muDoubleScalarFloor(stopY)) {
        emlrtIntegerCheckR2012b(stopY, &d_emlrtDCI, sp);
      }

      i3 = regionShed->size[1];
      npages = (int32_T)stopY;
      if (!((npages >= 1) && (npages <= i3))) {
        emlrtDynamicBoundsCheckR2012b(npages, 1, i3, &b_emlrtBCI, sp);
      }

      i3 = npages + 1;
    }

    st.site = &emlrtRSI;
    b_st.site = &b_emlrtRSI;
    if (((i0 - i1 == 1) && (i3 - i2 == 1)) || (i0 - i1 != 1)) {
      overflow = true;
    } else {
      overflow = false;
    }

    if (overflow) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &d_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    overflow = false;
    p = false;
    k = 0;
    do {
      exitg2 = 0;
      if (k < 2) {
        npages = b_regionShed->size[0] * b_regionShed->size[1];
        b_regionShed->size[0] = i0 - i1;
        b_regionShed->size[1] = i3 - i2;
        emxEnsureCapacity(&b_st, (emxArray__common *)b_regionShed, npages,
                          (int32_T)sizeof(real_T), &emlrtRTEI);
        vlen = i3 - i2;
        for (npages = 0; npages < vlen; npages++) {
          i = i0 - i1;
          for (xoffset = 0; xoffset < i; xoffset++) {
            b_regionShed->data[xoffset + b_regionShed->size[0] * npages] =
              regionShed->data[((i1 + xoffset) + regionShed->size[0] * ((i2 +
              npages) - 1)) - 1];
          }
        }

        if (b_regionShed->size[k] != 0) {
          exitg2 = 1;
        } else {
          k++;
        }
      } else {
        p = true;
        exitg2 = 1;
      }
    } while (exitg2 == 0);

    if (!p) {
    } else {
      overflow = true;
    }

    if (!overflow) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &e_emlrtRTEI,
        "Coder:toolbox:UnsupportedSpecialEmpty", 0);
    }

    c_st.site = &c_emlrtRSI;
    npages = c_regionShed->size[0] * c_regionShed->size[1];
    c_regionShed->size[0] = i0 - i1;
    c_regionShed->size[1] = i3 - i2;
    emxEnsureCapacity(&c_st, (emxArray__common *)c_regionShed, npages, (int32_T)
                      sizeof(real_T), &emlrtRTEI);
    vlen = i3 - i2;
    for (npages = 0; npages < vlen; npages++) {
      i = i0 - i1;
      for (xoffset = 0; xoffset < i; xoffset++) {
        c_regionShed->data[xoffset + c_regionShed->size[0] * npages] =
          regionShed->data[((i1 + xoffset) + regionShed->size[0] * ((i2 + npages)
          - 1)) - 1];
      }
    }

    npages = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = c_regionShed->size[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)x, npages, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    if ((i0 - i1 == 0) || (i3 - i2 == 0)) {
      i0 = x->size[0] * x->size[1];
      x->size[0] = 1;
      emxEnsureCapacity(&c_st, (emxArray__common *)x, i0, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      vlen = x->size[1];
      for (i0 = 0; i0 < vlen; i0++) {
        x->data[x->size[0] * i0] = 0.0;
      }
    } else {
      vlen = i0 - i1;
      npages = i3 - i2;
      d_st.site = &d_emlrtRSI;
      if ((!(1 > i3 - i2)) && (i3 - i2 > 2147483646)) {
        e_st.site = &f_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      for (i = 0; i + 1 <= npages; i++) {
        xoffset = i * vlen;
        s = regionShed->data[((i1 + xoffset % (i0 - i1)) + regionShed->size[0] *
                              ((i2 + xoffset / (i0 - i1)) - 1)) - 1];
        d_st.site = &e_emlrtRSI;
        if ((!(2 > vlen)) && (vlen > 2147483646)) {
          e_st.site = &f_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        for (k = 2; k <= vlen; k++) {
          i3 = (xoffset + k) - 1;
          s += regionShed->data[((i1 + i3 % (i0 - i1)) + regionShed->size[0] *
            ((i2 + i3 / (i0 - i1)) - 1)) - 1];
        }

        x->data[i] = s;
      }
    }

    st.site = &emlrtRSI;
    b_st.site = &b_emlrtRSI;
    if ((x->size[1] == 1) || (x->size[1] != 1)) {
      overflow = true;
    } else {
      overflow = false;
    }

    if (overflow) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &d_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    overflow = false;
    p = false;
    k = 0;
    do {
      exitg1 = 0;
      if (k < 2) {
        if (x->size[k] != 0) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        p = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    if (!p) {
    } else {
      overflow = true;
    }

    if (!overflow) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &e_emlrtRTEI,
        "Coder:toolbox:UnsupportedSpecialEmpty", 0);
    }

    c_st.site = &c_emlrtRSI;
    if (x->size[1] == 0) {
      regionSum = 0.0;
    } else {
      regionSum = x->data[0];
      d_st.site = &g_emlrtRSI;
      overflow = ((!(2 > x->size[1])) && (x->size[1] > 2147483646));
      if (overflow) {
        e_st.site = &f_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      for (k = 2; k <= x->size[1]; k++) {
        regionSum += x->data[k - 1];
      }
    }

    if (regionSum != (int32_T)muDoubleScalarFloor(regionSum)) {
      emlrtIntegerCheckR2012b(regionSum, &e_emlrtDCI, sp);
    }

    i0 = (int32_T)totalBlocks * (int32_T)totalBlocks;
    i1 = (int32_T)regionSum;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &c_emlrtBCI, sp);
    }

    /* Loop management  */
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 0, yCounter == y + 1.0)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 2);

      /* reset xStart, xStop positions and xCounter  */
      startY = 1.0;
      stopY = windowSize;
      yCounter = 0.0;
      startX += stepSize;
      stopX = (startX + windowSize) - 1.0;
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 3);
      startY += stepSize;
      stopY = (startY + windowSize) - 1.0;
    }

    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 4);
    yCounter++;
    BlockLoop++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&c_regionShed);
  emxFree_real_T(&b_regionShed);
  emxFree_real_T(&x);
  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 0);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (sumTest.c) */
