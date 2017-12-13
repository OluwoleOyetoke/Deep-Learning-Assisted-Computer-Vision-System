/*
 * detectCircle_data.c
 *
 * Code generation for function 'detectCircle_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
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
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
omp_lock_t emlrtLockGlobal;
omp_nest_lock_t emlrtNestLockGlobal;
emlrtContext emlrtContextGlobal = { true, false, 131434U, NULL, "detectCircle",
  NULL, false, { 1858410525U, 2505464270U, 328108647U, 1256672073U }, NULL };

emlrtRSInfo db_emlrtRSI = { 124, "allOrAny",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"
};

emlrtRSInfo eb_emlrtRSI = { 20, "eml_int_forloop_overflow_check",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

emlrtRSInfo lb_emlrtRSI = { 20, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

emlrtRSInfo mb_emlrtRSI = { 67, "padarray",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\padarray.m"
};

emlrtRSInfo ob_emlrtRSI = { 18, "repmat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

emlrtRSInfo rb_emlrtRSI = { 21, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

emlrtRSInfo sb_emlrtRSI = { 79, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

emlrtRSInfo tb_emlrtRSI = { 283, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

emlrtRSInfo gc_emlrtRSI = { 13, "max",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"
};

emlrtRSInfo hc_emlrtRSI = { 19, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

emlrtRSInfo ic_emlrtRSI = { 140, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

emlrtRSInfo jc_emlrtRSI = { 375, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

emlrtRSInfo kc_emlrtRSI = { 347, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

emlrtRSInfo ed_emlrtRSI = { 101, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

emlrtRSInfo fd_emlrtRSI = { 16, "abs",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m" };

emlrtRSInfo gd_emlrtRSI = { 67, "applyScalarFunction",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"
};

emlrtRSInfo hd_emlrtRSI = { 12, "any",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\any.m" };

emlrtRSInfo qd_emlrtRSI = { 49, "prodsize",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\prodsize.m"
};

emlrtRSInfo sd_emlrtRSI = { 331, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRSInfo td_emlrtRSI = { 339, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRSInfo ud_emlrtRSI = { 340, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRSInfo vd_emlrtRSI = { 348, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRSInfo wd_emlrtRSI = { 356, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRSInfo xd_emlrtRSI = { 413, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRSInfo yd_emlrtRSI = { 441, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRSInfo ae_emlrtRSI = { 448, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRSInfo be_emlrtRSI = { 608, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRSInfo ce_emlrtRSI = { 610, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRSInfo de_emlrtRSI = { 638, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRSInfo fe_emlrtRSI = { 527, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRSInfo wf_emlrtRSI = { 40, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

emlrtRSInfo xf_emlrtRSI = { 186, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

emlrtRSInfo yf_emlrtRSI = { 187, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

emlrtRSInfo ag_emlrtRSI = { 188, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

emlrtRSInfo bg_emlrtRSI = { 16, "sub2ind",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"
};

emlrtRSInfo cg_emlrtRSI = { 39, "sub2ind",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"
};

emlrtRSInfo gg_emlrtRSI = { 24, "applyScalarFunctionInPlace",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"
};

emlrtRSInfo hg_emlrtRSI = { 9, "exp",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\exp.m" };

emlrtRSInfo fi_emlrtRSI = { 9, "sum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

emlrtRSInfo gi_emlrtRSI = { 58, "sumprod",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"
};

emlrtRSInfo hi_emlrtRSI = { 69, "combine_vector_elements",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combine_vector_elements.m"
};

emlrtRSInfo ii_emlrtRSI = { 13, "cumsum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m"
};

emlrtRSInfo ji_emlrtRSI = { 11, "cumop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"
};

emlrtRSInfo ki_emlrtRSI = { 94, "cumop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"
};

emlrtRSInfo li_emlrtRSI = { 84, "cumop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"
};

emlrtRSInfo mi_emlrtRSI = { 74, "cumop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"
};

emlrtRSInfo jj_emlrtRSI = { 64, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRTEInfo tc_emlrtRTEI = { 406, 9, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRTEInfo uc_emlrtRTEI = { 408, 9, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRTEInfo vc_emlrtRTEI = { 331, 14, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRTEInfo wc_emlrtRTEI = { 331, 20, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

emlrtRTEInfo ad_emlrtRTEI = { 42, 19, "allOrAny",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"
};

emlrtRTEInfo bd_emlrtRTEI = { 39, 19, "allOrAny",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"
};

emlrtRTEInfo cd_emlrtRTEI = { 162, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

emlrtRTEInfo dd_emlrtRTEI = { 152, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

emlrtRTEInfo ed_emlrtRTEI = { 171, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

emlrtRTEInfo fd_emlrtRTEI = { 138, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

emlrtRTEInfo gd_emlrtRTEI = { 122, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

emlrtRTEInfo jd_emlrtRTEI = { 404, 15, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

emlrtRTEInfo ld_emlrtRTEI = { 41, 19, "sub2ind",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"
};

emlrtRTEInfo md_emlrtRTEI = { 31, 23, "sub2ind",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"
};

emlrtRTEInfo pd_emlrtRTEI = { 121, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

emlrtRTEInfo qd_emlrtRTEI = { 39, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

emlrtRTEInfo vd_emlrtRTEI = { 59, 15, "assertValidSizeArg",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"
};

emlrtRTEInfo wd_emlrtRTEI = { 245, 27, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

/* End of code generation (detectCircle_data.c) */
