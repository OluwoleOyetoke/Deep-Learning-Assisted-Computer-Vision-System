/*
 * power.cpp
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCorner.h"
#include "power.h"
#include "detectCorner_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "scalexpAlloc.h"
#include "detectCorner_data.h"
#include "blas.h"
#include "libmwordfilt2.h"

/* Variable Definitions */
static emlrtRSInfo u_emlrtRSI = { 49, "power",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" };

static emlrtRSInfo v_emlrtRSI = { 58, "power",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" };

static emlrtRSInfo w_emlrtRSI = { 73, "applyScalarFunction",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"
};

static emlrtRSInfo x_emlrtRSI = { 132, "applyScalarFunction",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 1, 14, "power",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" };

static emlrtRTEInfo m_emlrtRTEI = { 16, 9, "scalexpAlloc",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"
};

static emlrtRTEInfo u_emlrtRTEI = { 17, 19, "scalexpAlloc",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"
};

/* Function Definitions */
void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  emxArray_real_T *x;
  int32_T n;
  int32_T loop_ub;
  uint32_T uv0[2];
  int32_T k;
  int32_T b_k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &x, 2, &l_emlrtRTEI, true);
  st.site = &u_emlrtRSI;
  b_st.site = &v_emlrtRSI;
  n = x->size[0] * x->size[1];
  x->size[0] = a->size[0];
  x->size[1] = a->size[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)x, n, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  loop_ub = a->size[0] * a->size[1];
  for (n = 0; n < loop_ub; n++) {
    x->data[n] = a->data[n];
  }

  c_st.site = &w_emlrtRSI;
  for (n = 0; n < 2; n++) {
    uv0[n] = (uint32_T)a->size[n];
  }

  n = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv0[0];
  y->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)y, n, (int32_T)sizeof(real_T),
                    &m_emlrtRTEI);
  if (dimagree(y, a)) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &u_emlrtRTEI, "MATLAB:dimagree", 0);
  }

  n = a->size[0] * a->size[1];
  c_st.site = &x_emlrtRSI;
  if ((!(1 > n)) && (n > 2147483646)) {
    d_st.site = &s_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  emlrtEnterParallelRegion(&b_st, omp_in_parallel());

#pragma omp parallel for \
 num_threads(emlrtAllocRegionTLSs(b_st.tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(b_k)

  for (k = 1; k <= n; k++) {
    b_k = k;
    y->data[b_k - 1] = x->data[b_k - 1] * x->data[b_k - 1];
  }

  emlrtExitParallelRegion(&b_st, omp_in_parallel());
  emxFree_real_T(&x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (power.cpp) */
