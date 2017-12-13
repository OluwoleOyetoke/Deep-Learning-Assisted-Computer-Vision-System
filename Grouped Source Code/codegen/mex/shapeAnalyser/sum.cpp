/*
 * sum.cpp
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "shapeAnalyser.h"
#include "sum.h"
#include "eml_int_forloop_overflow_check.h"
#include "shapeAnalyser_data.h"

/* Variable Definitions */
static emlrtRSInfo q_emlrtRSI = { 9, "sum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo r_emlrtRSI = { 58, "sumprod",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

static emlrtRSInfo s_emlrtRSI = { 113, "combine_vector_elements",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combine_vector_elements.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 20, 15, "sumprod",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

static emlrtRTEInfo p_emlrtRTEI = { 48, 9, "sumprod",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

/* Function Definitions */
real_T b_sum(const real_T x[180])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 179; k++) {
    y += x[k + 1];
  }

  return y;
}

void sum(const emlrtStack *sp, const emxArray_boolean_T *x, real_T y[180])
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  int32_T exitg1;
  int32_T vlen;
  int32_T i;
  int32_T xoffset;
  real_T s;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &q_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  p = (x->size[0] != 1);
  if (p) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &o_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  p = false;
  b_p = false;
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
      b_p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (!b_p) {
  } else {
    p = true;
  }

  if (!p) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &p_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  b_st.site = &r_emlrtRSI;
  if (x->size[0] == 0) {
    memset(&y[0], 0, 180U * sizeof(real_T));
  } else {
    vlen = x->size[0];
    for (i = 0; i < 180; i++) {
      xoffset = i * vlen;
      s = x->data[xoffset];
      c_st.site = &s_emlrtRSI;
      if ((!(2 > vlen)) && (vlen > 2147483646)) {
        d_st.site = &m_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (k = 2; k <= vlen; k++) {
        s += (real_T)x->data[(xoffset + k) - 1];
      }

      y[i] = s;
    }
  }
}

/* End of code generation (sum.cpp) */
