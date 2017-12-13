/*
 * log.c
 *
 * Code generation for function 'log'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "log.h"
#include "error.h"
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
static emlrtRSInfo eg_emlrtRSI = { 13, "log",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\log.m" };

static emlrtRSInfo fg_emlrtRSI = { 16, "log",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\log.m" };

/* Function Definitions */
void b_log(const emlrtStack *sp, emxArray_real_T *x)
{
  boolean_T overflow;
  int32_T k;
  int32_T nx;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  overflow = false;
  for (k = 0; k < x->size[1]; k++) {
    if (overflow || (x->data[k] < 0.0)) {
      overflow = true;
    } else {
      overflow = false;
    }
  }

  if (overflow) {
    st.site = &eg_emlrtRSI;
    error(&st);
  }

  st.site = &fg_emlrtRSI;
  nx = x->size[1];
  b_st.site = &gg_emlrtRSI;
  overflow = ((!(1 > x->size[1])) && (x->size[1] > 2147483646));
  if (overflow) {
    c_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k + 1 <= nx; k++) {
    x->data[k] = muDoubleScalarLog(x->data[k]);
  }
}

/* End of code generation (log.c) */
