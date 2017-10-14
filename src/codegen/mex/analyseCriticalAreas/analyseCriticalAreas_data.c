/*
 * analyseCriticalAreas_data.c
 *
 * Code generation for function 'analyseCriticalAreas_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "analyseCriticalAreas.h"
#include "analyseCriticalAreas_data.h"
#include "blas.h"
#include "libmwordfilt2.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
omp_lock_t emlrtLockGlobal;
omp_nest_lock_t emlrtNestLockGlobal;
emlrtContext emlrtContextGlobal = { true, false, 131434U, NULL,
  "analyseCriticalAreas", NULL, false, { 1858410525U, 2505464270U, 328108647U,
    1256672073U }, NULL };

emlrtRSInfo m_emlrtRSI = { 15, "conv2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"
};

emlrtRSInfo n_emlrtRSI = { 116, "conv2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"
};

emlrtRSInfo o_emlrtRSI = { 128, "conv2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"
};

emlrtRSInfo p_emlrtRSI = { 19, "convn_kernel",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\convn_kernel.m"
};

emlrtRSInfo q_emlrtRSI = { 101, "convn_kernel",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\convn_kernel.m"
};

emlrtRSInfo r_emlrtRSI = { 112, "convn_kernel",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\convn_kernel.m"
};

emlrtRSInfo s_emlrtRSI = { 122, "convn_kernel",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\convn_kernel.m"
};

emlrtRSInfo t_emlrtRSI = { 138, "convn_kernel",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\convn_kernel.m"
};

emlrtRSInfo u_emlrtRSI = { 144, "convn_kernel",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\convn_kernel.m"
};

emlrtRSInfo v_emlrtRSI = { 20, "eml_int_forloop_overflow_check",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

emlrtRSInfo w_emlrtRSI = { 54, "xaxpy",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xaxpy.m"
};

emlrtRSInfo gb_emlrtRSI = { 40, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

emlrtRSInfo hb_emlrtRSI = { 188, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

emlrtRSInfo ib_emlrtRSI = { 187, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

emlrtRSInfo jb_emlrtRSI = { 186, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

emlrtRSInfo lb_emlrtRSI = { 16, "abs",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m" };

emlrtRSInfo mb_emlrtRSI = { 67, "applyScalarFunction",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"
};

emlrtRSInfo pb_emlrtRSI = { 140, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

emlrtRSInfo qb_emlrtRSI = { 375, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

/* End of code generation (analyseCriticalAreas_data.c) */
