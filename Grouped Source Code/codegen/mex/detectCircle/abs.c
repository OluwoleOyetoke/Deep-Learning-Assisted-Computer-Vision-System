/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "abs.h"
#include "eml_int_forloop_overflow_check.h"
#include "detectCircle_emxutil.h"
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
static emlrtRTEInfo kb_emlrtRTEI = { 1, 14, "abs",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m" };

/* Function Definitions */
void b_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T x_idx_0;
  int32_T k;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  x_idx_0 = (uint32_T)x->size[0];
  k = y->size[0];
  y->size[0] = (int32_T)x_idx_0;
  emxEnsureCapacity(&st, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  b_st.site = &gd_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    c_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k + 1 <= x->size[0]; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

/* End of code generation (abs.c) */
