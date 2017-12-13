/*
 * chaccum.c
 *
 * Code generation for function 'chaccum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "chaccum.h"
#include "multithresh.h"
#include "detectCircle_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "exp.h"
#include "log.h"
#include "sub2ind.h"
#include "indexShapeCheck.h"
#include "warning.h"
#include "scalexpAlloc.h"
#include "imfilter.h"
#include "all.h"
#include "validateattributes.h"
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
static emlrtRSInfo n_emlrtRSI = { 6, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo o_emlrtRSI = { 12, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo p_emlrtRSI = { 28, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo q_emlrtRSI = { 31, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo r_emlrtRSI = { 32, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo s_emlrtRSI = { 36, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo t_emlrtRSI = { 56, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo u_emlrtRSI = { 62, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo v_emlrtRSI = { 63, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo w_emlrtRSI = { 76, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo x_emlrtRSI = { 136, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo y_emlrtRSI = { 242, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo ab_emlrtRSI = { 252, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo bb_emlrtRSI = { 255, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo fb_emlrtRSI = { 174, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo gb_emlrtRSI = { 175, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo hb_emlrtRSI = { 178, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo ib_emlrtRSI = { 138, "imfilter",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfilter.m"
};

static emlrtRSInfo jb_emlrtRSI = { 142, "imfilter",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfilter.m"
};

static emlrtRSInfo ub_emlrtRSI = { 291, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo vb_emlrtRSI = { 595, "imfilter",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfilter.m"
};

static emlrtRSInfo wb_emlrtRSI = { 656, "imfilter",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfilter.m"
};

static emlrtRSInfo xb_emlrtRSI = { 858, "imfilter",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfilter.m"
};

static emlrtRSInfo yb_emlrtRSI = { 868, "imfilter",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\imfilter.m"
};

static emlrtRSInfo ac_emlrtRSI = { 12, "hypot",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\hypot.m"
};

static emlrtRSInfo bc_emlrtRSI = { 73, "applyScalarFunction",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"
};

static emlrtRSInfo cc_emlrtRSI = { 179, "applyScalarFunction",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"
};

static emlrtRSInfo dc_emlrtRSI = { 187, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo ec_emlrtRSI = { 190, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo fc_emlrtRSI = { 195, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRSInfo lc_emlrtRSI = { 14, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo mc_emlrtRSI = { 15, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo nc_emlrtRSI = { 24, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo oc_emlrtRSI = { 28, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo pc_emlrtRSI = { 44, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo qc_emlrtRSI = { 73, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo rc_emlrtRSI = { 75, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo sc_emlrtRSI = { 77, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo tc_emlrtRSI = { 79, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo uc_emlrtRSI = { 121, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo vc_emlrtRSI = { 123, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo wc_emlrtRSI = { 124, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo xc_emlrtRSI = { 127, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo af_emlrtRSI = { 49, "power",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" };

static emlrtRSInfo bf_emlrtRSI = { 297, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRSInfo dg_emlrtRSI = { 71, "sub2ind",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"
};

static emlrtRSInfo ig_emlrtRSI = { 161, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRTEInfo j_emlrtRTEI = { 1, 39, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRTEInfo k_emlrtRTEI = { 16, 9, "scalexpAlloc",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 186, 13, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo m_emlrtRTEI = { 187, 13, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo n_emlrtRTEI = { 32, 1, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 56, 13, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRTEInfo p_emlrtRTEI = { 61, 9, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRTEInfo q_emlrtRTEI = { 77, 5, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRTEInfo r_emlrtRTEI = { 78, 5, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 79, 5, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 91, 5, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRTEInfo u_emlrtRTEI = { 94, 5, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRTEInfo v_emlrtRTEI = { 95, 5, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRTEInfo w_emlrtRTEI = { 120, 5, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRTEInfo x_emlrtRTEI = { 121, 5, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRTEInfo y_emlrtRTEI = { 122, 5, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtRTEInfo ab_emlrtRTEI = { 15, 5, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRTEInfo bb_emlrtRTEI = { 66, 17, "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m"
};

static emlrtRTEInfo cb_emlrtRTEI = { 50, 15, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo kd_emlrtRTEI = { 13, 15, "rdivide",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtRTEInfo nd_emlrtRTEI = { 172, 9, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo od_emlrtRTEI = { 126, 19, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtBCInfo m_emlrtBCI = { -1, -1, 139, 17, "", "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m",
  0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 18, 21, "", "multithresh",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\multithresh.m",
  0 };

static emlrtRTEInfo rd_emlrtRTEI = { 17, 19, "scalexpAlloc",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"
};

static emlrtECInfo emlrtECI = { 2, 136, 19, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtBCInfo o_emlrtBCI = { -1, -1, 105, 112, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 105, 107, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 105, 89, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 105, 84, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 105, 66, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 105, 61, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 105, 43, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 105, 38, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 103, 95, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 103, 74, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 102, 95, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 102, 74, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtRTEInfo sd_emlrtRTEI = { 75, 1, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtECInfo b_emlrtECI = { -1, 62, 9, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 57, 47, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 57, 27, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 12, 20, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 57, 36, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 162, 32, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 162, 40, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 162, 51, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 162, 9, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 162, 17, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 127, 16, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 127, 45, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 127, 50, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 129, 64, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 129, 69, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 129, 24, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 130, 64, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 130, 69, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 130, 24, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 131, 38, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 131, 43, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 131, 23, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 102, 77, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 102, 107, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 102, 43, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 102, 62, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 102, 16, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 102, 21, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 103, 77, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 103, 107, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 103, 43, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo gc_emlrtBCI = { -1, -1, 103, 62, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo hc_emlrtBCI = { -1, -1, 103, 16, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 103, 21, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 104, 34, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 104, 15, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 104, 20, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 105, 20, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 105, 26, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 108, 23, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 108, 29, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 109, 17, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 83, 25, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo sc_emlrtBCI = { -1, -1, 83, 9, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo tc_emlrtBCI = { -1, -1, 84, 25, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo uc_emlrtBCI = { -1, -1, 84, 9, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo vc_emlrtBCI = { -1, -1, 85, 27, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo wc_emlrtBCI = { -1, -1, 85, 9, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtBCInfo ug_emlrtBCI = { -1, -1, 266, 29, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtRTEInfo re_emlrtRTEI = { 261, 1, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

static emlrtBCInfo vg_emlrtBCI = { -1, -1, 261, 76, "", "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m",
  0 };

static emlrtRTEInfo se_emlrtRTEI = { 245, 1, "chaccum",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\images\\images\\eml\\private\\chaccum.m"
};

/* Function Declarations */
static void parseInputs(const emlrtStack *sp, const emxArray_real_T *varargin_1,
  real_T varargin_2_data[], int32_T varargin_2_size[2]);

/* Function Definitions */
static void parseInputs(const emlrtStack *sp, const emxArray_real_T *varargin_1,
  real_T varargin_2_data[], int32_T varargin_2_size[2])
{
  boolean_T p;
  int32_T k;
  boolean_T exitg4;
  boolean_T exitg2;
  boolean_T exitg3;
  boolean_T exitg1;
  boolean_T guard1 = false;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &y_emlrtRSI;
  if (!((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0))) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&st, &gd_emlrtRTEI,
      "MATLAB:chaccum:expectedNonempty", 43,
      "Expected input number 1, A, to be nonempty.");
  }

  p = ((varargin_1->size[0] == 1) || (varargin_1->size[1] == 1));
  if (!p) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &se_emlrtRTEI,
      "images:imfindcircles:invalidInputImage", 0);
  }

  if (varargin_2_size[1] == 1) {
    st.site = &ab_emlrtRSI;
    p = true;
    k = 0;
    exitg4 = false;
    while ((!exitg4) && (k <= varargin_2_size[1] - 1)) {
      if (!muDoubleScalarIsNaN(varargin_2_data[k])) {
        k++;
      } else {
        p = false;
        exitg4 = true;
      }
    }

    if (p) {
    } else {
      emlrtErrMsgIdAndExplicitTxt(&st, &ed_emlrtRTEI,
        "MATLAB:chaccum:expectedNonNaN", 53,
        "Expected input number 2, RADIUS_RANGE, to be non-NaN.");
    }

    p = true;
    k = 0;
    exitg3 = false;
    while ((!exitg3) && (k <= varargin_2_size[1] - 1)) {
      if (!(varargin_2_data[k] <= 0.0)) {
        k++;
      } else {
        p = false;
        exitg3 = true;
      }
    }

    if (p) {
    } else {
      emlrtErrMsgIdAndExplicitTxt(&st, &dd_emlrtRTEI,
        "MATLAB:chaccum:expectedPositive", 54,
        "Expected input number 2, RADIUS_RANGE, to be positive.");
    }

    p = b_all(varargin_2_data, varargin_2_size);
    if (p) {
    } else {
      emlrtErrMsgIdAndExplicitTxt(&st, &cd_emlrtRTEI,
        "MATLAB:chaccum:expectedFinite", 52,
        "Expected input number 2, RADIUS_RANGE, to be finite.");
    }
  } else {
    st.site = &bb_emlrtRSI;
    p = c_all(varargin_2_data, varargin_2_size);
    if (p) {
    } else {
      emlrtErrMsgIdAndExplicitTxt(&st, &fd_emlrtRTEI,
        "MATLAB:chaccum:expectedInteger", 60,
        "Expected input number 2, RADIUS_RANGE, to be integer-valued.");
    }

    p = true;
    k = 0;
    exitg2 = false;
    while ((!exitg2) && (k <= varargin_2_size[1] - 1)) {
      if (!muDoubleScalarIsNaN(varargin_2_data[k])) {
        k++;
      } else {
        p = false;
        exitg2 = true;
      }
    }

    if (p) {
    } else {
      emlrtErrMsgIdAndExplicitTxt(&st, &ed_emlrtRTEI,
        "MATLAB:chaccum:expectedNonNaN", 53,
        "Expected input number 2, RADIUS_RANGE, to be non-NaN.");
    }

    p = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= varargin_2_size[1] - 1)) {
      if (!(varargin_2_data[k] <= 0.0)) {
        k++;
      } else {
        p = false;
        exitg1 = true;
      }
    }

    if (p) {
    } else {
      emlrtErrMsgIdAndExplicitTxt(&st, &dd_emlrtRTEI,
        "MATLAB:chaccum:expectedPositive", 54,
        "Expected input number 2, RADIUS_RANGE, to be positive.");
    }

    p = b_all(varargin_2_data, varargin_2_size);
    if (p) {
    } else {
      emlrtErrMsgIdAndExplicitTxt(&st, &cd_emlrtRTEI,
        "MATLAB:chaccum:expectedFinite", 52,
        "Expected input number 2, RADIUS_RANGE, to be finite.");
    }
  }

  guard1 = false;
  if (varargin_2_size[1] == 2) {
    k = varargin_2_size[1];
    if (!(2 <= k)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, k, &vg_emlrtBCI, sp);
    }

    if (varargin_2_data[0] > varargin_2_data[1]) {
      p = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    p = false;
  }

  if (!p) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &re_emlrtRTEI,
      "images:imfindcircles:invalidRadiusRange", 0);
  }

  if (varargin_2_size[1] == 2) {
    k = varargin_2_size[1];
    if (!(2 <= k)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, k, &ug_emlrtBCI, sp);
    }

    if (varargin_2_data[0] == varargin_2_data[1]) {
      varargin_2_size[0] = 1;
      varargin_2_size[1] = 1;
    }
  } else {
    varargin_2_size[0] = 1;
    varargin_2_size[1] = 1;
  }
}

void chaccum(const emlrtStack *sp, const emxArray_real_T *varargin_1, const
             real_T varargin_2_data[], const int32_T varargin_2_size[2],
             emxArray_creal_T *accumMatrix, emxArray_real_T *gradientImg)
{
  emxArray_real_T *A;
  int32_T i5;
  int32_T ixstart;
  int32_T radiusRangeIn_size[2];
  emxArray_boolean_T *b_A;
  real_T radiusRangeIn_data[2];
  real_T t;
  boolean_T flat;
  real_T finalSize[2];
  real_T pad[2];
  emxArray_real_T *xc;
  emxArray_real_T *Gx;
  int32_T i;
  real_T b_finalSize[2];
  real_T b_pad[2];
  real_T padSize[2];
  emxArray_real_T *Gy;
  real_T connDims[2];
  static const real_T nonZeroKernel[6] = { -1.0, -2.0, -1.0, 1.0, 2.0, 1.0 };

  static const boolean_T conn[9] = { true, true, true, false, false, false, true,
    true, true };

  static const real_T kernel[9] = { -1.0, -2.0, -1.0, -0.0, -0.0, -0.0, 1.0, 2.0,
    1.0 };

  int32_T n;
  int32_T ii;
  static const real_T b_nonZeroKernel[6] = { -1.0, 1.0, -2.0, 2.0, -1.0, 1.0 };

  static const boolean_T b_conn[9] = { true, false, true, true, false, true,
    true, false, true };

  static const real_T b_kernel[9] = { -1.0, -0.0, 1.0, -2.0, -0.0, 2.0, -1.0,
    -0.0, 1.0 };

  boolean_T guard1 = false;
  real_T absb;
  boolean_T exitg5;
  emxArray_real_T *lnR;
  emxArray_real_T *threshRaw;
  emxArray_real_T *threshout;
  emxArray_real_T *b_xc;
  real_T edgeThresh;
  emxArray_boolean_T *inside;
  real_T sigma_b_squared[256];
  real_T maxA;
  real_T x[256];
  real_T b_x[256];
  int32_T idx;
  emxArray_int32_T *xckeep;
  emxArray_int32_T *yckeep;
  emxArray_boolean_T *v;
  boolean_T exitg4;
  boolean_T isDegenerate;
  real_T idxSum;
  boolean_T exitg3;
  real_T idxNum;
  boolean_T b_guard1 = false;
  emxArray_real_T *Ey;
  emxArray_real_T *b_threshout;
  int32_T csz[2];
  int32_T i6;
  emxArray_real_T *Ex;
  int32_T iv15[2];
  int32_T iv16[2];
  boolean_T exitg2;
  emxArray_real_T *idxE;
  real_T anew;
  real_T apnd;
  emxArray_creal_T *Opca;
  emxArray_creal_T *r0;
  int32_T iv17[2];
  boolean_T exitg1;
  real_T xcStep;
  int32_T N;
  int32_T M;
  emxArray_real_T *Ex_chunk;
  emxArray_real_T *Ey_chunk;
  emxArray_real_T *idxE_chunk;
  emxArray_creal_T *w;
  emxArray_creal_T *wkeep;
  int32_T i7;
  int32_T idxkeep;
  int32_T b_accumMatrix[2];
  int32_T b_w[2];
  int32_T i8;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &A, 2, &j_emlrtRTEI, true);
  i5 = A->size[0] * A->size[1];
  A->size[0] = varargin_1->size[0];
  A->size[1] = varargin_1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)A, i5, (int32_T)sizeof(real_T),
                    &j_emlrtRTEI);
  ixstart = varargin_1->size[0] * varargin_1->size[1];
  for (i5 = 0; i5 < ixstart; i5++) {
    A->data[i5] = varargin_1->data[i5];
  }

  radiusRangeIn_size[0] = 1;
  radiusRangeIn_size[1] = varargin_2_size[1];
  ixstart = varargin_2_size[0] * varargin_2_size[1];
  for (i5 = 0; i5 < ixstart; i5++) {
    radiusRangeIn_data[i5] = varargin_2_data[i5];
  }

  emxInit_boolean_T1(sp, &b_A, 1, &j_emlrtRTEI, true);
  st.site = &n_emlrtRSI;
  parseInputs(&st, A, radiusRangeIn_data, radiusRangeIn_size);
  i5 = A->size[0] * A->size[1];
  if (!(1 <= i5)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i5, &db_emlrtBCI, sp);
  }

  t = A->data[0];
  i5 = b_A->size[0];
  b_A->size[0] = A->size[0] * A->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_A, i5, (int32_T)sizeof(boolean_T),
                    &j_emlrtRTEI);
  ixstart = A->size[0] * A->size[1];
  for (i5 = 0; i5 < ixstart; i5++) {
    b_A->data[i5] = (A->data[i5] == t);
  }

  st.site = &o_emlrtRSI;
  flat = d_all(&st, b_A);
  emxFree_boolean_T(&b_A);
  if (flat) {
    i5 = accumMatrix->size[0] * accumMatrix->size[1];
    accumMatrix->size[0] = A->size[0];
    accumMatrix->size[1] = A->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)accumMatrix, i5, (int32_T)sizeof
                      (creal_T), &j_emlrtRTEI);
    ixstart = A->size[0] * A->size[1];
    for (i5 = 0; i5 < ixstart; i5++) {
      accumMatrix->data[i5].re = 0.0;
      accumMatrix->data[i5].im = 0.0;
    }

    i5 = gradientImg->size[0] * gradientImg->size[1];
    gradientImg->size[0] = A->size[0];
    gradientImg->size[1] = A->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)gradientImg, i5, (int32_T)sizeof
                      (real_T), &j_emlrtRTEI);
    ixstart = A->size[0] * A->size[1];
    for (i5 = 0; i5 < ixstart; i5++) {
      gradientImg->data[i5] = 0.0;
    }
  } else {
    st.site = &p_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    finalSize[0] = A->size[0];
    pad[0] = 1.0;
    finalSize[1] = A->size[1];
    pad[1] = 1.0;
    emxInit_real_T(&b_st, &xc, 2, &t_emlrtRTEI, true);
    emxInit_real_T(&b_st, &Gx, 2, &j_emlrtRTEI, true);
    if ((A->size[0] == 0) || (A->size[1] == 0)) {
      i5 = Gx->size[0] * Gx->size[1];
      Gx->size[0] = A->size[0];
      Gx->size[1] = A->size[1];
      emxEnsureCapacity(&b_st, (emxArray__common *)Gx, i5, (int32_T)sizeof
                        (real_T), &j_emlrtRTEI);
      ixstart = A->size[0] * A->size[1];
      for (i5 = 0; i5 < ixstart; i5++) {
        Gx->data[i5] = A->data[i5];
      }
    } else {
      c_st.site = &ib_emlrtRSI;
      padImage(&c_st, A, pad, xc);
      c_st.site = &jb_emlrtRSI;
      d_st.site = &vb_emlrtRSI;
      flat = true;
      for (i = 0; i < 2; i++) {
        if (flat && (finalSize[i] > 65500.0)) {
          flat = true;
        } else {
          flat = false;
        }
      }

      e_st.site = &wb_emlrtRSI;
      i5 = Gx->size[0] * Gx->size[1];
      Gx->size[0] = (int32_T)finalSize[0];
      Gx->size[1] = (int32_T)finalSize[1];
      emxEnsureCapacity(&e_st, (emxArray__common *)Gx, i5, (int32_T)sizeof
                        (real_T), &j_emlrtRTEI);
      if (!flat) {
        f_st.site = &xb_emlrtRSI;
        for (i5 = 0; i5 < 2; i5++) {
          padSize[i5] = xc->size[i5];
        }

        for (i5 = 0; i5 < 2; i5++) {
          connDims[i5] = 3.0;
        }

        ippfilter_real64(&xc->data[0], &Gx->data[0], finalSize, 2.0, padSize,
                         kernel, connDims, true);
      } else {
        f_st.site = &yb_emlrtRSI;
        for (i5 = 0; i5 < 2; i5++) {
          padSize[i5] = xc->size[i5];
        }

        for (i5 = 0; i5 < 2; i5++) {
          connDims[i5] = 3.0;
        }

        imfilter_real64(&xc->data[0], &Gx->data[0], 2.0, finalSize, 2.0, padSize,
                        nonZeroKernel, 6.0, conn, 2.0, connDims, pad, 2.0, true,
                        true);
      }
    }

    b_st.site = &gb_emlrtRSI;
    b_finalSize[0] = A->size[0];
    b_pad[0] = 1.0;
    b_finalSize[1] = A->size[1];
    b_pad[1] = 1.0;
    emxInit_real_T(&b_st, &Gy, 2, &j_emlrtRTEI, true);
    if ((A->size[0] == 0) || (A->size[1] == 0)) {
      i5 = Gy->size[0] * Gy->size[1];
      Gy->size[0] = A->size[0];
      Gy->size[1] = A->size[1];
      emxEnsureCapacity(&b_st, (emxArray__common *)Gy, i5, (int32_T)sizeof
                        (real_T), &j_emlrtRTEI);
      ixstart = A->size[0] * A->size[1];
      for (i5 = 0; i5 < ixstart; i5++) {
        Gy->data[i5] = A->data[i5];
      }
    } else {
      c_st.site = &ib_emlrtRSI;
      padImage(&c_st, A, b_pad, xc);
      c_st.site = &jb_emlrtRSI;
      d_st.site = &vb_emlrtRSI;
      flat = true;
      for (i = 0; i < 2; i++) {
        if (flat && ((uint32_T)b_finalSize[i] > 65500U)) {
          flat = true;
        } else {
          flat = false;
        }
      }

      e_st.site = &wb_emlrtRSI;
      i5 = Gy->size[0] * Gy->size[1];
      Gy->size[0] = (int32_T)b_finalSize[0];
      Gy->size[1] = (int32_T)b_finalSize[1];
      emxEnsureCapacity(&e_st, (emxArray__common *)Gy, i5, (int32_T)sizeof
                        (real_T), &j_emlrtRTEI);
      if (!flat) {
        f_st.site = &xb_emlrtRSI;
        for (i5 = 0; i5 < 2; i5++) {
          padSize[i5] = xc->size[i5];
        }

        for (i5 = 0; i5 < 2; i5++) {
          connDims[i5] = 3.0;
        }

        ippfilter_real64(&xc->data[0], &Gy->data[0], b_finalSize, 2.0, padSize,
                         b_kernel, connDims, true);
      } else {
        f_st.site = &yb_emlrtRSI;
        for (i5 = 0; i5 < 2; i5++) {
          padSize[i5] = xc->size[i5];
        }

        for (i5 = 0; i5 < 2; i5++) {
          connDims[i5] = 3.0;
        }

        imfilter_real64(&xc->data[0], &Gy->data[0], 2.0, b_finalSize, 2.0,
                        padSize, b_nonZeroKernel, 6.0, b_conn, 2.0, connDims,
                        b_pad, 2.0, true, true);
      }
    }

    b_st.site = &hb_emlrtRSI;
    c_st.site = &ac_emlrtRSI;
    d_st.site = &bc_emlrtRSI;
    if (Gx->size[0] <= Gy->size[0]) {
      n = Gx->size[0];
    } else {
      n = Gy->size[0];
    }

    if (Gx->size[1] <= Gy->size[1]) {
      ii = Gx->size[1];
    } else {
      ii = Gy->size[1];
    }

    i5 = gradientImg->size[0] * gradientImg->size[1];
    gradientImg->size[0] = n;
    gradientImg->size[1] = ii;
    emxEnsureCapacity(&d_st, (emxArray__common *)gradientImg, i5, (int32_T)
                      sizeof(real_T), &k_emlrtRTEI);
    if (dimagree(gradientImg, Gx, Gy)) {
    } else {
      emlrtErrorWithMessageIdR2012b(&d_st, &rd_emlrtRTEI, "MATLAB:dimagree", 0);
    }

    n = Gx->size[0] * Gx->size[1];
    d_st.site = &cc_emlrtRSI;
    if ((!(1 > n)) && (n > 2147483646)) {
      e_st.site = &eb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (ixstart = 0; ixstart + 1 <= n; ixstart++) {
      gradientImg->data[ixstart] = muDoubleScalarHypot(Gx->data[ixstart],
        Gy->data[ixstart]);
    }

    st.site = &q_emlrtRSI;
    b_st.site = &dc_emlrtRSI;
    c_st.site = &gc_emlrtRSI;
    d_st.site = &hc_emlrtRSI;
    ii = gradientImg->size[0] * gradientImg->size[1];
    guard1 = false;
    if (ii == 1) {
      guard1 = true;
    } else {
      ii = gradientImg->size[0] * gradientImg->size[1];
      if (ii != 1) {
        guard1 = true;
      } else {
        flat = false;
      }
    }

    if (guard1) {
      flat = true;
    }

    if (flat) {
    } else {
      emlrtErrorWithMessageIdR2012b(&d_st, &qd_emlrtRTEI,
        "Coder:toolbox:autoDimIncompatibility", 0);
    }

    ii = gradientImg->size[0] * gradientImg->size[1];
    if (ii > 0) {
    } else {
      emlrtErrorWithMessageIdR2012b(&d_st, &pd_emlrtRTEI,
        "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }

    e_st.site = &ic_emlrtRSI;
    ixstart = 1;
    ii = gradientImg->size[0] * gradientImg->size[1];
    absb = gradientImg->data[0];
    n = gradientImg->size[0] * gradientImg->size[1];
    if (n > 1) {
      if (muDoubleScalarIsNaN(gradientImg->data[0])) {
        f_st.site = &kc_emlrtRSI;
        n = gradientImg->size[0] * gradientImg->size[1];
        if (2 > n) {
          flat = false;
        } else {
          n = gradientImg->size[0] * gradientImg->size[1];
          flat = (n > 2147483646);
        }

        if (flat) {
          g_st.site = &eb_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        n = 2;
        exitg5 = false;
        while ((!exitg5) && (n <= ii)) {
          ixstart = n;
          if (!muDoubleScalarIsNaN(gradientImg->data[n - 1])) {
            absb = gradientImg->data[n - 1];
            exitg5 = true;
          } else {
            n++;
          }
        }
      }

      n = gradientImg->size[0] * gradientImg->size[1];
      if (ixstart < n) {
        f_st.site = &jc_emlrtRSI;
        n = gradientImg->size[0] * gradientImg->size[1];
        if (ixstart + 1 > n) {
          flat = false;
        } else {
          n = gradientImg->size[0] * gradientImg->size[1];
          flat = (n > 2147483646);
        }

        if (flat) {
          g_st.site = &eb_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        while (ixstart + 1 <= ii) {
          if (gradientImg->data[ixstart] > absb) {
            absb = gradientImg->data[ixstart];
          }

          ixstart++;
        }
      }
    }

    i5 = xc->size[0] * xc->size[1];
    xc->size[0] = gradientImg->size[0];
    xc->size[1] = gradientImg->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)xc, i5, (int32_T)sizeof(real_T),
                      &j_emlrtRTEI);
    ixstart = gradientImg->size[0] * gradientImg->size[1];
    for (i5 = 0; i5 < ixstart; i5++) {
      xc->data[i5] = gradientImg->data[i5] / absb;
    }

    b_st.site = &ec_emlrtRSI;
    emxInit_real_T(&b_st, &lnR, 2, &o_emlrtRTEI, true);
    emxInit_real_T(&b_st, &threshRaw, 2, &bb_emlrtRTEI, true);
    emxInit_real_T(&b_st, &threshout, 2, &ab_emlrtRTEI, true);
    if ((xc->size[0] == 0) || (xc->size[1] == 0)) {
      c_st.site = &lc_emlrtRSI;
      c_warning(&c_st);
      c_st.site = &mc_emlrtRSI;
      getDegenerateThresholds(&c_st, xc, threshout);
      i5 = threshout->size[0] * threshout->size[1];
      if (!(1 <= i5)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i5, &n_emlrtBCI, &b_st);
      }

      edgeThresh = threshout->data[0];
    } else {
      emxInit_real_T(&b_st, &b_xc, 2, &j_emlrtRTEI, true);
      i5 = b_xc->size[0] * b_xc->size[1];
      b_xc->size[0] = xc->size[0];
      b_xc->size[1] = xc->size[1];
      emxEnsureCapacity(&b_st, (emxArray__common *)b_xc, i5, (int32_T)sizeof
                        (real_T), &j_emlrtRTEI);
      ixstart = xc->size[0] * xc->size[1];
      for (i5 = 0; i5 < ixstart; i5++) {
        b_xc->data[i5] = xc->data[i5];
      }

      c_st.site = &nc_emlrtRSI;
      getpdf(&c_st, b_xc, sigma_b_squared, &edgeThresh, &maxA, &flat);
      emxFree_real_T(&b_xc);
      if (flat) {
        c_st.site = &oc_emlrtRSI;
        c_warning(&c_st);
        if (muDoubleScalarIsNaN(edgeThresh)) {
          edgeThresh = 1.0;
        }
      } else {
        memcpy(&x[0], &sigma_b_squared[0], sizeof(real_T) << 8);
        for (ixstart = 0; ixstart < 255; ixstart++) {
          x[ixstart + 1] += x[ixstart];
        }

        for (i5 = 0; i5 < 256; i5++) {
          b_x[i5] = sigma_b_squared[i5] * (1.0 + (real_T)i5);
        }

        for (ixstart = 0; ixstart < 255; ixstart++) {
          b_x[ixstart + 1] += b_x[ixstart];
        }

        c_st.site = &pc_emlrtRSI;
        d_st.site = &bf_emlrtRSI;
        t = b_x[255];
        for (i5 = 0; i5 < 256; i5++) {
          b_x[i5] = t * x[i5] - b_x[i5];
        }

        e_st.site = &af_emlrtRSI;
        for (ixstart = 0; ixstart < 256; ixstart++) {
          sigma_b_squared[ixstart] = b_x[ixstart] * b_x[ixstart];
        }

        for (i5 = 0; i5 < 256; i5++) {
          sigma_b_squared[i5] /= x[i5] * (1.0 - x[i5]);
        }

        ixstart = 1;
        t = sigma_b_squared[0];
        if (muDoubleScalarIsNaN(sigma_b_squared[0])) {
          n = 2;
          exitg4 = false;
          while ((!exitg4) && (n < 257)) {
            ixstart = n;
            if (!muDoubleScalarIsNaN(sigma_b_squared[n - 1])) {
              t = sigma_b_squared[n - 1];
              exitg4 = true;
            } else {
              n++;
            }
          }
        }

        if (ixstart < 256) {
          while (ixstart + 1 < 257) {
            if (sigma_b_squared[ixstart] > t) {
              t = sigma_b_squared[ixstart];
            }

            ixstart++;
          }
        }

        flat = ((!muDoubleScalarIsInf(t)) && (!muDoubleScalarIsNaN(t)));
        if (flat) {
          idxSum = 0.0;
          idxNum = 0.0;
          for (n = 0; n < 256; n++) {
            if (sigma_b_squared[n] == t) {
              idxSum += 1.0 + (real_T)n;
              idxNum++;
            }
          }

          i5 = threshRaw->size[0] * threshRaw->size[1];
          threshRaw->size[0] = 1;
          threshRaw->size[1] = 1;
          emxEnsureCapacity(&b_st, (emxArray__common *)threshRaw, i5, (int32_T)
                            sizeof(real_T), &j_emlrtRTEI);
          threshRaw->data[0] = idxSum / idxNum - 1.0;
        } else {
          c_st.site = &qc_emlrtRSI;
          checkForDegenerateInput(&c_st, xc, &isDegenerate, lnR);
          if (isDegenerate) {
            c_st.site = &rc_emlrtRSI;
            c_warning(&c_st);
          } else {
            c_st.site = &sc_emlrtRSI;
            f_warning(&c_st);
          }

          c_st.site = &tc_emlrtRSI;
          b_getDegenerateThresholds(&c_st, lnR, threshRaw);
        }

        emxInit_real_T(&b_st, &b_threshout, 2, &ab_emlrtRTEI, true);
        if (flat) {
          map2OriginalScale(&b_st, threshRaw, edgeThresh, maxA, b_threshout);
        } else {
          c_st.site = &uc_emlrtRSI;
          checkForDegenerateInput(&c_st, xc, &isDegenerate, lnR);
          if (isDegenerate) {
            c_st.site = &vc_emlrtRSI;
            c_warning(&c_st);
            c_st.site = &wc_emlrtRSI;
            b_getDegenerateThresholds(&c_st, lnR, b_threshout);
          } else {
            c_st.site = &xc_emlrtRSI;
            f_warning(&c_st);
            map2OriginalScale(&b_st, threshRaw, edgeThresh, maxA, b_threshout);
          }
        }

        i5 = b_threshout->size[1];
        if (!(1 <= i5)) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i5, &m_emlrtBCI, &b_st);
        }

        edgeThresh = b_threshout->data[0];
        emxFree_real_T(&b_threshout);
      }
    }

    emxInit_boolean_T(&b_st, &inside, 2, &v_emlrtRTEI, true);
    t = absb * edgeThresh;
    b_st.site = &fc_emlrtRSI;
    i5 = inside->size[0] * inside->size[1];
    inside->size[0] = gradientImg->size[0];
    inside->size[1] = gradientImg->size[1];
    emxEnsureCapacity(&b_st, (emxArray__common *)inside, i5, (int32_T)sizeof
                      (boolean_T), &j_emlrtRTEI);
    ixstart = gradientImg->size[0] * gradientImg->size[1];
    for (i5 = 0; i5 < ixstart; i5++) {
      inside->data[i5] = (gradientImg->data[i5] > t);
    }

    c_st.site = &wf_emlrtRSI;
    ixstart = inside->size[0] * inside->size[1];
    idx = 0;
    if ((!((inside->size[0] == 1) || (inside->size[1] == 1))) || (inside->size[0]
         != 1) || (inside->size[1] <= 1)) {
      flat = true;
    } else {
      flat = false;
    }

    if (flat) {
    } else {
      emlrtErrorWithMessageIdR2012b(&c_st, &od_emlrtRTEI,
        "Coder:toolbox:find_incompatibleShape", 0);
    }

    emxInit_int32_T(&c_st, &xckeep, 1, &w_emlrtRTEI, true);
    emxInit_int32_T(&c_st, &yckeep, 1, &x_emlrtRTEI, true);
    emxInit_boolean_T1(&c_st, &v, 1, &cb_emlrtRTEI, true);
    i5 = xckeep->size[0];
    xckeep->size[0] = ixstart;
    emxEnsureCapacity(&c_st, (emxArray__common *)xckeep, i5, (int32_T)sizeof
                      (int32_T), &j_emlrtRTEI);
    i5 = yckeep->size[0];
    yckeep->size[0] = ixstart;
    emxEnsureCapacity(&c_st, (emxArray__common *)yckeep, i5, (int32_T)sizeof
                      (int32_T), &j_emlrtRTEI);
    i5 = v->size[0];
    v->size[0] = ixstart;
    emxEnsureCapacity(&c_st, (emxArray__common *)v, i5, (int32_T)sizeof
                      (boolean_T), &j_emlrtRTEI);
    if (ixstart == 0) {
      i5 = xckeep->size[0];
      xckeep->size[0] = 0;
      emxEnsureCapacity(&c_st, (emxArray__common *)xckeep, i5, (int32_T)sizeof
                        (int32_T), &j_emlrtRTEI);
      i5 = yckeep->size[0];
      yckeep->size[0] = 0;
      emxEnsureCapacity(&c_st, (emxArray__common *)yckeep, i5, (int32_T)sizeof
                        (int32_T), &j_emlrtRTEI);
    } else {
      ii = 1;
      n = 1;
      exitg3 = false;
      while ((!exitg3) && (n <= inside->size[1])) {
        b_guard1 = false;
        if (inside->data[(ii + inside->size[0] * (n - 1)) - 1]) {
          idx++;
          xckeep->data[idx - 1] = ii;
          yckeep->data[idx - 1] = n;
          v->data[idx - 1] = inside->data[(ii + inside->size[0] * (n - 1)) - 1];
          if (idx >= ixstart) {
            exitg3 = true;
          } else {
            b_guard1 = true;
          }
        } else {
          b_guard1 = true;
        }

        if (b_guard1) {
          ii++;
          if (ii > inside->size[0]) {
            ii = 1;
            n++;
          }
        }
      }

      if (idx <= ixstart) {
      } else {
        emlrtErrorWithMessageIdR2012b(&c_st, &nd_emlrtRTEI,
          "Coder:builtins:AssertionFailed", 0);
      }

      if (ixstart == 1) {
        if (idx == 0) {
          i5 = xckeep->size[0];
          xckeep->size[0] = 0;
          emxEnsureCapacity(&c_st, (emxArray__common *)xckeep, i5, (int32_T)
                            sizeof(int32_T), &j_emlrtRTEI);
          i5 = yckeep->size[0];
          yckeep->size[0] = 0;
          emxEnsureCapacity(&c_st, (emxArray__common *)yckeep, i5, (int32_T)
                            sizeof(int32_T), &j_emlrtRTEI);
        }
      } else {
        if (1 > idx) {
          i5 = 0;
        } else {
          i5 = idx;
        }

        csz[0] = 1;
        csz[1] = i5;
        d_st.site = &xf_emlrtRSI;
        indexShapeCheck(&d_st, xckeep->size[0], csz);
        i6 = xckeep->size[0];
        xckeep->size[0] = i5;
        emxEnsureCapacity(&c_st, (emxArray__common *)xckeep, i6, (int32_T)sizeof
                          (int32_T), &l_emlrtRTEI);
        if (1 > idx) {
          i5 = 0;
        } else {
          i5 = idx;
        }

        iv15[0] = 1;
        iv15[1] = i5;
        d_st.site = &yf_emlrtRSI;
        indexShapeCheck(&d_st, yckeep->size[0], iv15);
        i6 = yckeep->size[0];
        yckeep->size[0] = i5;
        emxEnsureCapacity(&c_st, (emxArray__common *)yckeep, i6, (int32_T)sizeof
                          (int32_T), &m_emlrtRTEI);
        iv16[0] = 1;
        if (1 > idx) {
          iv16[1] = 0;
        } else {
          iv16[1] = idx;
        }

        d_st.site = &ag_emlrtRSI;
        indexShapeCheck(&d_st, v->size[0], iv16);
      }
    }

    emxInit_real_T1(&c_st, &Ey, 1, &j_emlrtRTEI, true);
    i5 = Ey->size[0];
    Ey->size[0] = xckeep->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)Ey, i5, (int32_T)sizeof(real_T),
                      &j_emlrtRTEI);
    ixstart = xckeep->size[0];
    for (i5 = 0; i5 < ixstart; i5++) {
      Ey->data[i5] = xckeep->data[i5];
    }

    emxInit_real_T1(&b_st, &Ex, 1, &j_emlrtRTEI, true);
    i5 = Ex->size[0];
    Ex->size[0] = yckeep->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)Ex, i5, (int32_T)sizeof(real_T),
                      &j_emlrtRTEI);
    ixstart = yckeep->size[0];
    for (i5 = 0; i5 < ixstart; i5++) {
      Ex->data[i5] = yckeep->data[i5];
    }

    st.site = &r_emlrtRSI;
    b_st.site = &bg_emlrtRSI;
    for (i5 = 0; i5 < 2; i5++) {
      csz[i5] = gradientImg->size[i5];
    }

    if (allinrange(Ey, csz[0])) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &ld_emlrtRTEI,
        "MATLAB:sub2ind:IndexOutOfRange", 0);
    }

    connDims[0] = Ey->size[0];
    connDims[1] = 1.0;
    pad[0] = Ex->size[0];
    pad[1] = 1.0;
    flat = false;
    isDegenerate = true;
    ixstart = 0;
    exitg2 = false;
    while ((!exitg2) && (ixstart < 2)) {
      if (!(connDims[ixstart] == pad[ixstart])) {
        isDegenerate = false;
        exitg2 = true;
      } else {
        ixstart++;
      }
    }

    if (!isDegenerate) {
    } else {
      flat = true;
    }

    if (flat) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &md_emlrtRTEI,
        "MATLAB:sub2ind:SubscriptVectorSize", 0);
    }

    c_st.site = &cg_emlrtRSI;
    d_st.site = &dg_emlrtRSI;
    if (allinrange(Ex, csz[1])) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &ld_emlrtRTEI,
        "MATLAB:sub2ind:IndexOutOfRange", 0);
    }

    emxInit_real_T1(&b_st, &idxE, 1, &n_emlrtRTEI, true);
    i5 = idxE->size[0];
    idxE->size[0] = Ey->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)idxE, i5, (int32_T)sizeof(real_T),
                      &j_emlrtRTEI);
    ixstart = Ey->size[0];
    for (i5 = 0; i5 < ixstart; i5++) {
      idxE->data[i5] = (int32_T)Ey->data[i5] + csz[0] * ((int32_T)Ex->data[i5] -
        1);
    }

    if (radiusRangeIn_size[1] > 1) {
      st.site = &s_emlrtRSI;
      b_st.site = &sb_emlrtRSI;
      if (muDoubleScalarIsNaN(radiusRangeIn_data[0]) || muDoubleScalarIsNaN
          (radiusRangeIn_data[1])) {
        n = 1;
        anew = rtNaN;
        apnd = radiusRangeIn_data[1];
        flat = false;
      } else if (radiusRangeIn_data[1] < radiusRangeIn_data[0]) {
        n = 0;
        anew = radiusRangeIn_data[0];
        apnd = radiusRangeIn_data[1];
        flat = false;
      } else if (muDoubleScalarIsInf(radiusRangeIn_data[0]) ||
                 muDoubleScalarIsInf(radiusRangeIn_data[1])) {
        n = 1;
        anew = rtNaN;
        apnd = radiusRangeIn_data[1];
        flat = !(radiusRangeIn_data[0] == radiusRangeIn_data[1]);
      } else {
        anew = radiusRangeIn_data[0];
        t = muDoubleScalarFloor((radiusRangeIn_data[1] - radiusRangeIn_data[0]) /
          0.5 + 0.5);
        apnd = radiusRangeIn_data[0] + t * 0.5;
        idxSum = apnd - radiusRangeIn_data[1];
        idxNum = muDoubleScalarAbs(radiusRangeIn_data[0]);
        absb = muDoubleScalarAbs(radiusRangeIn_data[1]);
        if (muDoubleScalarAbs(idxSum) < 4.4408920985006262E-16 *
            muDoubleScalarMax(idxNum, absb)) {
          t++;
          apnd = radiusRangeIn_data[1];
        } else if (idxSum > 0.0) {
          apnd = radiusRangeIn_data[0] + (t - 1.0) * 0.5;
        } else {
          t++;
        }

        flat = (2.147483647E+9 < t);
        if (t >= 0.0) {
          n = (int32_T)t;
        } else {
          n = 0;
        }
      }

      c_st.site = &tb_emlrtRSI;
      if (!flat) {
      } else {
        emlrtErrorWithMessageIdR2012b(&c_st, &jd_emlrtRTEI,
          "Coder:MATLAB:pmaxsize", 0);
      }

      i5 = threshRaw->size[0] * threshRaw->size[1];
      threshRaw->size[0] = 1;
      threshRaw->size[1] = n;
      emxEnsureCapacity(&b_st, (emxArray__common *)threshRaw, i5, (int32_T)
                        sizeof(real_T), &j_emlrtRTEI);
      if (n > 0) {
        threshRaw->data[0] = anew;
        if (n > 1) {
          threshRaw->data[n - 1] = apnd;
          ii = (n - 1) / 2;
          c_st.site = &ub_emlrtRSI;
          for (ixstart = 1; ixstart < ii; ixstart++) {
            t = (real_T)ixstart * 0.5;
            threshRaw->data[ixstart] = anew + t;
            threshRaw->data[(n - ixstart) - 1] = apnd - t;
          }

          if (ii << 1 == n - 1) {
            threshRaw->data[ii] = (anew + apnd) / 2.0;
          } else {
            t = (real_T)ii * 0.5;
            threshRaw->data[ii] = anew + t;
            threshRaw->data[ii + 1] = apnd - t;
          }
        }
      }
    } else {
      i5 = threshRaw->size[0] * threshRaw->size[1];
      threshRaw->size[0] = 1;
      threshRaw->size[1] = 1;
      emxEnsureCapacity(sp, (emxArray__common *)threshRaw, i5, (int32_T)sizeof
                        (real_T), &j_emlrtRTEI);
      threshRaw->data[0] = radiusRangeIn_data[0];
    }

    if (threshRaw->size[1] > 1) {
      i5 = lnR->size[0] * lnR->size[1];
      lnR->size[0] = 1;
      lnR->size[1] = threshRaw->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)lnR, i5, (int32_T)sizeof(real_T),
                        &j_emlrtRTEI);
      ixstart = threshRaw->size[0] * threshRaw->size[1];
      for (i5 = 0; i5 < ixstart; i5++) {
        lnR->data[i5] = threshRaw->data[i5];
      }

      st.site = &t_emlrtRSI;
      b_log(&st, lnR);
      i5 = lnR->size[1];
      if (!(1 <= i5)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i5, &cb_emlrtBCI, sp);
      }

      i5 = lnR->size[1];
      if (!(1 <= i5)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i5, &bb_emlrtBCI, sp);
      }

      i5 = lnR->size[1];
      i6 = lnR->size[1];
      if (!((i6 >= 1) && (i6 <= i5))) {
        emlrtDynamicBoundsCheckR2012b(i6, 1, i5, &eb_emlrtBCI, sp);
      }

      t = lnR->data[i6 - 1] - lnR->data[0];
      idxSum = lnR->data[0];
      i5 = lnR->size[0] * lnR->size[1];
      lnR->size[0] = 1;
      emxEnsureCapacity(sp, (emxArray__common *)lnR, i5, (int32_T)sizeof(real_T),
                        &j_emlrtRTEI);
      ixstart = lnR->size[1];
      for (i5 = 0; i5 < ixstart; i5++) {
        lnR->data[lnR->size[0] * i5] = (lnR->data[lnR->size[0] * i5] - idxSum) /
          t * 2.0 * 3.1415926535897931 - 3.1415926535897931;
      }
    } else {
      i5 = lnR->size[0] * lnR->size[1];
      lnR->size[0] = 1;
      lnR->size[1] = 1;
      emxEnsureCapacity(sp, (emxArray__common *)lnR, i5, (int32_T)sizeof(real_T),
                        &j_emlrtRTEI);
      lnR->data[0] = 0.0;
    }

    for (i5 = 0; i5 < 2; i5++) {
      connDims[i5] = lnR->size[i5];
    }

    emxInit_creal_T(sp, &Opca, 2, &p_emlrtRTEI, true);
    i5 = Opca->size[0] * Opca->size[1];
    Opca->size[0] = 1;
    Opca->size[1] = (int32_T)connDims[1];
    emxEnsureCapacity(sp, (emxArray__common *)Opca, i5, (int32_T)sizeof(creal_T),
                      &j_emlrtRTEI);
    ixstart = Opca->size[1];
    i5 = xckeep->size[0];
    xckeep->size[0] = ixstart;
    emxEnsureCapacity(sp, (emxArray__common *)xckeep, i5, (int32_T)sizeof
                      (int32_T), &j_emlrtRTEI);
    for (i5 = 0; i5 < ixstart; i5++) {
      xckeep->data[i5] = i5;
    }

    emxInit_creal_T(sp, &r0, 2, &j_emlrtRTEI, true);
    i5 = r0->size[0] * r0->size[1];
    r0->size[0] = 1;
    r0->size[1] = lnR->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)r0, i5, (int32_T)sizeof(creal_T),
                      &j_emlrtRTEI);
    ixstart = lnR->size[0] * lnR->size[1];
    for (i5 = 0; i5 < ixstart; i5++) {
      r0->data[i5].re = lnR->data[i5] * 0.0;
      r0->data[i5].im = lnR->data[i5];
    }

    st.site = &u_emlrtRSI;
    b_exp(&st, r0);
    iv17[0] = 1;
    iv17[1] = xckeep->size[0];
    emlrtSubAssignSizeCheckR2012b(iv17, 2, *(int32_T (*)[2])r0->size, 2,
      &b_emlrtECI, sp);
    ixstart = r0->size[1];
    for (i5 = 0; i5 < ixstart; i5++) {
      Opca->data[Opca->size[0] * xckeep->data[i5]] = r0->data[r0->size[0] * i5];
    }

    emxFree_creal_T(&r0);
    i5 = lnR->size[0] * lnR->size[1];
    lnR->size[0] = 1;
    lnR->size[1] = threshRaw->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)lnR, i5, (int32_T)sizeof(real_T),
                      &j_emlrtRTEI);
    ixstart = threshRaw->size[0] * threshRaw->size[1];
    for (i5 = 0; i5 < ixstart; i5++) {
      lnR->data[i5] = 6.2831853071795862 * threshRaw->data[i5];
    }

    st.site = &v_emlrtRSI;
    for (i5 = 0; i5 < 2; i5++) {
      connDims[i5] = Opca->size[i5];
    }

    for (i5 = 0; i5 < 2; i5++) {
      pad[i5] = lnR->size[i5];
    }

    flat = false;
    isDegenerate = true;
    ixstart = 0;
    exitg1 = false;
    while ((!exitg1) && (ixstart < 2)) {
      if (!((uint32_T)connDims[ixstart] == (uint32_T)pad[ixstart])) {
        isDegenerate = false;
        exitg1 = true;
      } else {
        ixstart++;
      }
    }

    if (!isDegenerate) {
    } else {
      flat = true;
    }

    if (flat) {
    } else {
      emlrtErrorWithMessageIdR2012b(&st, &kd_emlrtRTEI, "MATLAB:dimagree", 0);
    }

    i5 = Opca->size[0] * Opca->size[1];
    Opca->size[0] = 1;
    emxEnsureCapacity(&st, (emxArray__common *)Opca, i5, (int32_T)sizeof(creal_T),
                      &j_emlrtRTEI);
    n = Opca->size[0];
    ii = Opca->size[1];
    ixstart = n * ii;
    for (i5 = 0; i5 < ixstart; i5++) {
      t = Opca->data[i5].re;
      idxSum = Opca->data[i5].im;
      idxNum = lnR->data[i5];
      if (idxSum == 0.0) {
        Opca->data[i5].re = t / idxNum;
        Opca->data[i5].im = 0.0;
      } else if (t == 0.0) {
        Opca->data[i5].re = 0.0;
        Opca->data[i5].im = idxSum / idxNum;
      } else {
        Opca->data[i5].re = t / idxNum;
        Opca->data[i5].im = idxSum / idxNum;
      }
    }

    xcStep = muDoubleScalarFloor(1.0E+6 / (real_T)threshRaw->size[1]);
    N = A->size[1];
    M = A->size[0];
    i5 = accumMatrix->size[0] * accumMatrix->size[1];
    accumMatrix->size[0] = A->size[0];
    accumMatrix->size[1] = A->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)accumMatrix, i5, (int32_T)sizeof
                      (creal_T), &j_emlrtRTEI);
    ixstart = A->size[0] * A->size[1];
    for (i5 = 0; i5 < ixstart; i5++) {
      accumMatrix->data[i5].re = 0.0;
      accumMatrix->data[i5].im = 0.0;
    }

    i5 = (int32_T)(((real_T)Ex->size[0] + (xcStep - 1.0)) / xcStep);
    emlrtForLoopVectorCheckR2012b(1.0, xcStep, Ex->size[0], mxDOUBLE_CLASS, i5,
      &sd_emlrtRTEI, sp);
    i = 0;
    emxInit_real_T1(sp, &Ex_chunk, 1, &q_emlrtRTEI, true);
    emxInit_real_T1(sp, &Ey_chunk, 1, &r_emlrtRTEI, true);
    emxInit_real_T1(sp, &idxE_chunk, 1, &s_emlrtRTEI, true);
    emxInit_creal_T(sp, &w, 2, &u_emlrtRTEI, true);
    emxInit_creal_T1(sp, &wkeep, 1, &y_emlrtRTEI, true);
    while (i <= i5 - 1) {
      maxA = 1.0 + (real_T)i * xcStep;
      edgeThresh = muDoubleScalarMin((maxA + xcStep) - 1.0, Ex->size[0]);
      st.site = &w_emlrtRSI;
      b_st.site = &rb_emlrtRSI;
      c_st.site = &sb_emlrtRSI;
      if (muDoubleScalarIsNaN(maxA) || muDoubleScalarIsNaN(edgeThresh)) {
        n = 1;
        anew = rtNaN;
        apnd = edgeThresh;
        flat = false;
      } else if (edgeThresh < maxA) {
        n = 0;
        anew = maxA;
        apnd = edgeThresh;
        flat = false;
      } else if (muDoubleScalarIsInf(maxA) || muDoubleScalarIsInf(edgeThresh)) {
        n = 1;
        anew = rtNaN;
        apnd = edgeThresh;
        flat = !(maxA == edgeThresh);
      } else {
        anew = maxA;
        t = muDoubleScalarFloor((edgeThresh - maxA) + 0.5);
        apnd = maxA + t;
        idxSum = apnd - edgeThresh;
        idxNum = muDoubleScalarAbs(maxA);
        absb = muDoubleScalarAbs(edgeThresh);
        if (muDoubleScalarAbs(idxSum) < 4.4408920985006262E-16 *
            muDoubleScalarMax(idxNum, absb)) {
          t++;
          apnd = edgeThresh;
        } else if (idxSum > 0.0) {
          apnd = maxA + (t - 1.0);
        } else {
          t++;
        }

        flat = (2.147483647E+9 < t);
        if (t >= 0.0) {
          n = (int32_T)t;
        } else {
          n = 0;
        }
      }

      d_st.site = &tb_emlrtRSI;
      if (!flat) {
      } else {
        emlrtErrorWithMessageIdR2012b(&d_st, &jd_emlrtRTEI,
          "Coder:MATLAB:pmaxsize", 0);
      }

      i6 = lnR->size[0] * lnR->size[1];
      lnR->size[0] = 1;
      lnR->size[1] = n;
      emxEnsureCapacity(&c_st, (emxArray__common *)lnR, i6, (int32_T)sizeof
                        (real_T), &j_emlrtRTEI);
      if (n > 0) {
        lnR->data[0] = anew;
        if (n > 1) {
          lnR->data[n - 1] = apnd;
          ii = (n - 1) / 2;
          d_st.site = &ub_emlrtRSI;
          for (ixstart = 1; ixstart < ii; ixstart++) {
            lnR->data[ixstart] = anew + (real_T)ixstart;
            lnR->data[(n - ixstart) - 1] = apnd - (real_T)ixstart;
          }

          if (ii << 1 == n - 1) {
            lnR->data[ii] = (anew + apnd) / 2.0;
          } else {
            lnR->data[ii] = anew + (real_T)ii;
            lnR->data[ii + 1] = apnd - (real_T)ii;
          }
        }
      }

      i6 = Ex_chunk->size[0];
      Ex_chunk->size[0] = lnR->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)Ex_chunk, i6, (int32_T)sizeof
                        (real_T), &j_emlrtRTEI);
      i6 = Ey_chunk->size[0];
      Ey_chunk->size[0] = lnR->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)Ey_chunk, i6, (int32_T)sizeof
                        (real_T), &j_emlrtRTEI);
      i6 = idxE_chunk->size[0];
      idxE_chunk->size[0] = lnR->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)idxE_chunk, i6, (int32_T)sizeof
                        (real_T), &j_emlrtRTEI);
      ixstart = (int32_T)maxA;
      for (idx = 1; idx - 1 < lnR->size[1]; idx++) {
        i6 = Ex->size[0];
        if (!((ixstart >= 1) && (ixstart <= i6))) {
          emlrtDynamicBoundsCheckR2012b(ixstart, 1, i6, &rc_emlrtBCI, sp);
        }

        i6 = Ex_chunk->size[0];
        if (!((idx >= 1) && (idx <= i6))) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, i6, &sc_emlrtBCI, sp);
        }

        Ex_chunk->data[idx - 1] = Ex->data[ixstart - 1];
        i6 = Ey->size[0];
        if (!((ixstart >= 1) && (ixstart <= i6))) {
          emlrtDynamicBoundsCheckR2012b(ixstart, 1, i6, &tc_emlrtBCI, sp);
        }

        i6 = Ey_chunk->size[0];
        if (!((idx >= 1) && (idx <= i6))) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, i6, &uc_emlrtBCI, sp);
        }

        Ey_chunk->data[idx - 1] = Ey->data[ixstart - 1];
        i6 = idxE->size[0];
        if (!((ixstart >= 1) && (ixstart <= i6))) {
          emlrtDynamicBoundsCheckR2012b(ixstart, 1, i6, &vc_emlrtBCI, sp);
        }

        i6 = idxE_chunk->size[0];
        if (!((idx >= 1) && (idx <= i6))) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, i6, &wc_emlrtBCI, sp);
        }

        idxE_chunk->data[idx - 1] = idxE->data[ixstart - 1];
        ixstart++;
      }

      i6 = xc->size[0] * xc->size[1];
      xc->size[0] = idxE_chunk->size[0];
      xc->size[1] = threshRaw->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)xc, i6, (int32_T)sizeof(real_T),
                        &j_emlrtRTEI);
      i6 = threshout->size[0] * threshout->size[1];
      threshout->size[0] = idxE_chunk->size[0];
      threshout->size[1] = threshRaw->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)threshout, i6, (int32_T)sizeof
                        (real_T), &j_emlrtRTEI);
      i6 = w->size[0] * w->size[1];
      w->size[0] = idxE_chunk->size[0];
      w->size[1] = threshRaw->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)w, i6, (int32_T)sizeof(creal_T),
                        &j_emlrtRTEI);
      i6 = inside->size[0] * inside->size[1];
      inside->size[0] = idxE_chunk->size[0];
      inside->size[1] = threshRaw->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)inside, i6, (int32_T)sizeof
                        (boolean_T), &j_emlrtRTEI);
      i6 = v->size[0];
      v->size[0] = idxE_chunk->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)v, i6, (int32_T)sizeof(boolean_T),
                        &j_emlrtRTEI);
      ixstart = idxE_chunk->size[0];
      for (i6 = 0; i6 < ixstart; i6++) {
        v->data[i6] = false;
      }

      for (ixstart = 0; ixstart < threshRaw->size[1]; ixstart++) {
        for (ii = 0; ii < idxE_chunk->size[0]; ii++) {
          i6 = Gx->size[0] * Gx->size[1];
          n = idxE_chunk->size[0];
          i7 = 1 + ii;
          if (!((i7 >= 1) && (i7 <= n))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, n, &wb_emlrtBCI, sp);
          }

          n = (int32_T)idxE_chunk->data[i7 - 1];
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &ab_emlrtBCI, sp);
          }

          i6 = gradientImg->size[0] * gradientImg->size[1];
          n = idxE_chunk->size[0];
          i7 = 1 + ii;
          if (!((i7 >= 1) && (i7 <= n))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, n, &xb_emlrtBCI, sp);
          }

          n = (int32_T)idxE_chunk->data[i7 - 1];
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &y_emlrtBCI, sp);
          }

          i6 = Ex_chunk->size[0];
          n = 1 + ii;
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &yb_emlrtBCI, sp);
          }

          i6 = threshRaw->size[1];
          i7 = 1 + ixstart;
          if (!((i7 >= 1) && (i7 <= i6))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &ac_emlrtBCI, sp);
          }

          t = Ex_chunk->data[n - 1] + -threshRaw->data[i7 - 1] * (Gx->data
            [(int32_T)idxE_chunk->data[ii] - 1] / gradientImg->data[(int32_T)
            idxE_chunk->data[ii] - 1]);
          i6 = xc->size[0];
          n = 1 + ii;
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &bc_emlrtBCI, sp);
          }

          i6 = xc->size[1];
          i7 = 1 + ixstart;
          if (!((i7 >= 1) && (i7 <= i6))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &cc_emlrtBCI, sp);
          }

          if (t > 0.0) {
            xc->data[(n + xc->size[0] * (i7 - 1)) - 1] = t + 0.5;
          } else if (t < 0.0) {
            xc->data[(n + xc->size[0] * (i7 - 1)) - 1] = t - 0.5;
          } else {
            xc->data[(n + xc->size[0] * (i7 - 1)) - 1] = 0.0;
          }

          i6 = Gy->size[0] * Gy->size[1];
          n = idxE_chunk->size[0];
          i7 = 1 + ii;
          if (!((i7 >= 1) && (i7 <= n))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, n, &dc_emlrtBCI, sp);
          }

          n = (int32_T)idxE_chunk->data[i7 - 1];
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &x_emlrtBCI, sp);
          }

          i6 = gradientImg->size[0] * gradientImg->size[1];
          n = idxE_chunk->size[0];
          i7 = 1 + ii;
          if (!((i7 >= 1) && (i7 <= n))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, n, &ec_emlrtBCI, sp);
          }

          n = (int32_T)idxE_chunk->data[i7 - 1];
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &w_emlrtBCI, sp);
          }

          i6 = Ey_chunk->size[0];
          n = 1 + ii;
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &fc_emlrtBCI, sp);
          }

          i6 = threshRaw->size[1];
          i7 = 1 + ixstart;
          if (!((i7 >= 1) && (i7 <= i6))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &gc_emlrtBCI, sp);
          }

          t = Ey_chunk->data[n - 1] + -threshRaw->data[i7 - 1] * (Gy->data
            [(int32_T)idxE_chunk->data[ii] - 1] / gradientImg->data[(int32_T)
            idxE_chunk->data[ii] - 1]);
          i6 = threshout->size[0];
          n = 1 + ii;
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &hc_emlrtBCI, sp);
          }

          i6 = threshout->size[1];
          i7 = 1 + ixstart;
          if (!((i7 >= 1) && (i7 <= i6))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &ic_emlrtBCI, sp);
          }

          if (t > 0.0) {
            threshout->data[(n + threshout->size[0] * (i7 - 1)) - 1] = t + 0.5;
          } else if (t < 0.0) {
            threshout->data[(n + threshout->size[0] * (i7 - 1)) - 1] = t - 0.5;
          } else {
            threshout->data[(n + threshout->size[0] * (i7 - 1)) - 1] = 0.0;
          }

          i6 = w->size[0];
          n = 1 + ii;
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &kc_emlrtBCI, sp);
          }

          i6 = w->size[1];
          i7 = 1 + ixstart;
          if (!((i7 >= 1) && (i7 <= i6))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &lc_emlrtBCI, sp);
          }

          i6 = Opca->size[1];
          i8 = 1 + ixstart;
          if (!((i8 >= 1) && (i8 <= i6))) {
            emlrtDynamicBoundsCheckR2012b(i8, 1, i6, &jc_emlrtBCI, sp);
          }

          w->data[(n + w->size[0] * (i7 - 1)) - 1].re = Opca->data[Opca->size[0]
            * (i8 - 1)].re;
          i6 = Opca->size[1];
          n = 1 + ixstart;
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &jc_emlrtBCI, sp);
          }

          i6 = w->size[0];
          i7 = 1 + ii;
          if (!((i7 >= 1) && (i7 <= i6))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &kc_emlrtBCI, sp);
          }

          i6 = w->size[1];
          i8 = 1 + ixstart;
          if (!((i8 >= 1) && (i8 <= i6))) {
            emlrtDynamicBoundsCheckR2012b(i8, 1, i6, &lc_emlrtBCI, sp);
          }

          w->data[(i7 + w->size[0] * (i8 - 1)) - 1].im = Opca->data[Opca->size[0]
            * (n - 1)].im;
          i6 = xc->size[0];
          n = ii + 1;
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &v_emlrtBCI, sp);
          }

          i6 = xc->size[1];
          n = ixstart + 1;
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &u_emlrtBCI, sp);
          }

          i6 = xc->size[0];
          n = ii + 1;
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &t_emlrtBCI, sp);
          }

          i6 = xc->size[1];
          n = ixstart + 1;
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &s_emlrtBCI, sp);
          }

          i6 = threshout->size[0];
          n = ii + 1;
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &r_emlrtBCI, sp);
          }

          i6 = threshout->size[1];
          n = ixstart + 1;
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &q_emlrtBCI, sp);
          }

          i6 = threshout->size[0];
          n = ii + 1;
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &p_emlrtBCI, sp);
          }

          i6 = threshout->size[1];
          n = ixstart + 1;
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &o_emlrtBCI, sp);
          }

          i6 = inside->size[0];
          n = 1 + ii;
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &mc_emlrtBCI, sp);
          }

          i6 = inside->size[1];
          i7 = 1 + ixstart;
          if (!((i7 >= 1) && (i7 <= i6))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &nc_emlrtBCI, sp);
          }

          inside->data[(n + inside->size[0] * (i7 - 1)) - 1] = ((xc->data[ii +
            xc->size[0] * ixstart] >= 1.0) && (xc->data[ii + xc->size[0] *
            ixstart] <= N) && (threshout->data[ii + threshout->size[0] * ixstart]
                               >= 1.0) && (threshout->data[ii + threshout->size
            [0] * ixstart] < M));
          i6 = inside->size[0];
          n = 1 + ii;
          if (!((n >= 1) && (n <= i6))) {
            emlrtDynamicBoundsCheckR2012b(n, 1, i6, &oc_emlrtBCI, sp);
          }

          i6 = inside->size[1];
          i7 = 1 + ixstart;
          if (!((i7 >= 1) && (i7 <= i6))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &pc_emlrtBCI, sp);
          }

          if (inside->data[(n + inside->size[0] * (i7 - 1)) - 1]) {
            i6 = v->size[0];
            n = 1 + ii;
            if (!((n >= 1) && (n <= i6))) {
              emlrtDynamicBoundsCheckR2012b(n, 1, i6, &qc_emlrtBCI, sp);
            }

            v->data[n - 1] = true;
          }
        }
      }

      i6 = xckeep->size[0];
      xckeep->size[0] = xc->size[0] * xc->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)xckeep, i6, (int32_T)sizeof
                        (int32_T), &j_emlrtRTEI);
      i6 = yckeep->size[0];
      yckeep->size[0] = threshout->size[0] * threshout->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)yckeep, i6, (int32_T)sizeof
                        (int32_T), &j_emlrtRTEI);
      i6 = wkeep->size[0];
      wkeep->size[0] = w->size[0] * w->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)wkeep, i6, (int32_T)sizeof
                        (creal_T), &j_emlrtRTEI);
      idxkeep = 0;
      for (ixstart = 1; ixstart - 1 < threshRaw->size[1]; ixstart++) {
        for (ii = 1; ii - 1 < idxE_chunk->size[0]; ii++) {
          i6 = v->size[0];
          if (!((ii >= 1) && (ii <= i6))) {
            emlrtDynamicBoundsCheckR2012b(ii, 1, i6, &kb_emlrtBCI, sp);
          }

          if (v->data[ii - 1]) {
            i6 = inside->size[0];
            if (!((ii >= 1) && (ii <= i6))) {
              emlrtDynamicBoundsCheckR2012b(ii, 1, i6, &lb_emlrtBCI, sp);
            }

            i6 = inside->size[1];
            if (!((ixstart >= 1) && (ixstart <= i6))) {
              emlrtDynamicBoundsCheckR2012b(ixstart, 1, i6, &mb_emlrtBCI, sp);
            }

            if (inside->data[(ii + inside->size[0] * (ixstart - 1)) - 1]) {
              idxkeep++;
              i6 = xc->size[0];
              if (!((ii >= 1) && (ii <= i6))) {
                emlrtDynamicBoundsCheckR2012b(ii, 1, i6, &nb_emlrtBCI, sp);
              }

              i6 = xc->size[1];
              if (!((ixstart >= 1) && (ixstart <= i6))) {
                emlrtDynamicBoundsCheckR2012b(ixstart, 1, i6, &ob_emlrtBCI, sp);
              }

              i6 = xckeep->size[0];
              if (!((idxkeep >= 1) && (idxkeep <= i6))) {
                emlrtDynamicBoundsCheckR2012b(idxkeep, 1, i6, &pb_emlrtBCI, sp);
              }

              xckeep->data[idxkeep - 1] = (int32_T)xc->data[(ii + xc->size[0] *
                (ixstart - 1)) - 1];
              i6 = threshout->size[0];
              if (!((ii >= 1) && (ii <= i6))) {
                emlrtDynamicBoundsCheckR2012b(ii, 1, i6, &qb_emlrtBCI, sp);
              }

              i6 = threshout->size[1];
              if (!((ixstart >= 1) && (ixstart <= i6))) {
                emlrtDynamicBoundsCheckR2012b(ixstart, 1, i6, &rb_emlrtBCI, sp);
              }

              i6 = yckeep->size[0];
              if (!((idxkeep >= 1) && (idxkeep <= i6))) {
                emlrtDynamicBoundsCheckR2012b(idxkeep, 1, i6, &sb_emlrtBCI, sp);
              }

              yckeep->data[idxkeep - 1] = (int32_T)threshout->data[(ii +
                threshout->size[0] * (ixstart - 1)) - 1];
              i6 = wkeep->size[0];
              if (!((idxkeep >= 1) && (idxkeep <= i6))) {
                emlrtDynamicBoundsCheckR2012b(idxkeep, 1, i6, &vb_emlrtBCI, sp);
              }

              i6 = w->size[0];
              if (!((ii >= 1) && (ii <= i6))) {
                emlrtDynamicBoundsCheckR2012b(ii, 1, i6, &tb_emlrtBCI, sp);
              }

              i6 = w->size[1];
              if (!((ixstart >= 1) && (ixstart <= i6))) {
                emlrtDynamicBoundsCheckR2012b(ixstart, 1, i6, &ub_emlrtBCI, sp);
              }

              wkeep->data[idxkeep - 1].re = w->data[(ii + w->size[0] * (ixstart
                - 1)) - 1].re;
              i6 = w->size[0];
              if (!((ii >= 1) && (ii <= i6))) {
                emlrtDynamicBoundsCheckR2012b(ii, 1, i6, &tb_emlrtBCI, sp);
              }

              i6 = w->size[1];
              if (!((ixstart >= 1) && (ixstart <= i6))) {
                emlrtDynamicBoundsCheckR2012b(ixstart, 1, i6, &ub_emlrtBCI, sp);
              }

              i6 = wkeep->size[0];
              if (!((idxkeep >= 1) && (idxkeep <= i6))) {
                emlrtDynamicBoundsCheckR2012b(idxkeep, 1, i6, &vb_emlrtBCI, sp);
              }

              wkeep->data[idxkeep - 1].im = w->data[(ii + w->size[0] * (ixstart
                - 1)) - 1].im;
            }
          }
        }
      }

      st.site = &x_emlrtRSI;
      i6 = w->size[0] * w->size[1];
      w->size[0] = M;
      emxEnsureCapacity(&st, (emxArray__common *)w, i6, (int32_T)sizeof(creal_T),
                        &j_emlrtRTEI);
      i6 = w->size[0] * w->size[1];
      w->size[1] = N;
      emxEnsureCapacity(&st, (emxArray__common *)w, i6, (int32_T)sizeof(creal_T),
                        &j_emlrtRTEI);
      ixstart = M * N;
      for (i6 = 0; i6 < ixstart; i6++) {
        w->data[i6].re = 0.0;
        w->data[i6].im = 0.0;
      }

      b_st.site = &ig_emlrtRSI;
      if ((!(1 > idxkeep)) && (idxkeep > 2147483646)) {
        c_st.site = &eb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (idx = 1; idx <= idxkeep; idx++) {
        i6 = w->size[0];
        n = yckeep->size[0];
        if (!((idx >= 1) && (idx <= n))) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, n, &ib_emlrtBCI, &st);
        }

        n = yckeep->data[idx - 1];
        if (!((n >= 1) && (n <= i6))) {
          emlrtDynamicBoundsCheckR2012b(n, 1, i6, &ib_emlrtBCI, &st);
        }

        i6 = w->size[1];
        i7 = xckeep->size[0];
        if (!((idx >= 1) && (idx <= i7))) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, i7, &jb_emlrtBCI, &st);
        }

        i7 = xckeep->data[idx - 1];
        if (!((i7 >= 1) && (i7 <= i6))) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &jb_emlrtBCI, &st);
        }

        i6 = w->size[0];
        i8 = yckeep->size[0];
        if (!((idx >= 1) && (idx <= i8))) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, i8, &fb_emlrtBCI, &st);
        }

        i8 = yckeep->data[idx - 1];
        if (!((i8 >= 1) && (i8 <= i6))) {
          emlrtDynamicBoundsCheckR2012b(i8, 1, i6, &fb_emlrtBCI, &st);
        }

        i6 = w->size[1];
        ixstart = xckeep->size[0];
        if (!((idx >= 1) && (idx <= ixstart))) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, ixstart, &gb_emlrtBCI, &st);
        }

        ixstart = xckeep->data[idx - 1];
        if (!((ixstart >= 1) && (ixstart <= i6))) {
          emlrtDynamicBoundsCheckR2012b(ixstart, 1, i6, &gb_emlrtBCI, &st);
        }

        i6 = wkeep->size[0];
        if (!((idx >= 1) && (idx <= i6))) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, i6, &hb_emlrtBCI, &st);
        }

        w->data[(n + w->size[0] * (i7 - 1)) - 1].re = w->data[(i8 + w->size[0] *
          (ixstart - 1)) - 1].re + wkeep->data[idx - 1].re;
        i6 = w->size[0];
        n = yckeep->size[0];
        if (!((idx >= 1) && (idx <= n))) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, n, &fb_emlrtBCI, &st);
        }

        n = yckeep->data[idx - 1];
        if (!((n >= 1) && (n <= i6))) {
          emlrtDynamicBoundsCheckR2012b(n, 1, i6, &fb_emlrtBCI, &st);
        }

        i6 = w->size[1];
        i7 = xckeep->size[0];
        if (!((idx >= 1) && (idx <= i7))) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, i7, &gb_emlrtBCI, &st);
        }

        i7 = xckeep->data[idx - 1];
        if (!((i7 >= 1) && (i7 <= i6))) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &gb_emlrtBCI, &st);
        }

        i6 = wkeep->size[0];
        if (!((idx >= 1) && (idx <= i6))) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, i6, &hb_emlrtBCI, &st);
        }

        i6 = w->size[0];
        i8 = yckeep->size[0];
        if (!((idx >= 1) && (idx <= i8))) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, i8, &ib_emlrtBCI, &st);
        }

        i8 = yckeep->data[idx - 1];
        if (!((i8 >= 1) && (i8 <= i6))) {
          emlrtDynamicBoundsCheckR2012b(i8, 1, i6, &ib_emlrtBCI, &st);
        }

        i6 = w->size[1];
        ixstart = xckeep->size[0];
        if (!((idx >= 1) && (idx <= ixstart))) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, ixstart, &jb_emlrtBCI, &st);
        }

        ixstart = xckeep->data[idx - 1];
        if (!((ixstart >= 1) && (ixstart <= i6))) {
          emlrtDynamicBoundsCheckR2012b(ixstart, 1, i6, &jb_emlrtBCI, &st);
        }

        w->data[(i8 + w->size[0] * (ixstart - 1)) - 1].im = w->data[(n + w->
          size[0] * (i7 - 1)) - 1].im + wkeep->data[idx - 1].im;
      }

      for (i6 = 0; i6 < 2; i6++) {
        b_accumMatrix[i6] = accumMatrix->size[i6];
      }

      for (i6 = 0; i6 < 2; i6++) {
        b_w[i6] = w->size[i6];
      }

      if ((b_accumMatrix[0] != b_w[0]) || (b_accumMatrix[1] != b_w[1])) {
        emlrtSizeEqCheckNDR2012b(&b_accumMatrix[0], &b_w[0], &emlrtECI, sp);
      }

      i6 = accumMatrix->size[0] * accumMatrix->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)accumMatrix, i6, (int32_T)sizeof
                        (creal_T), &j_emlrtRTEI);
      ixstart = accumMatrix->size[0];
      ii = accumMatrix->size[1];
      ixstart *= ii;
      for (i6 = 0; i6 < ixstart; i6++) {
        accumMatrix->data[i6].re += w->data[i6].re;
        accumMatrix->data[i6].im += w->data[i6].im;
      }

      i++;
    }

    emxFree_boolean_T(&v);
    emxFree_real_T(&threshout);
    emxFree_real_T(&threshRaw);
    emxFree_real_T(&Ex);
    emxFree_real_T(&Ey);
    emxFree_real_T(&Gy);
    emxFree_real_T(&Gx);
    emxFree_creal_T(&wkeep);
    emxFree_int32_T(&yckeep);
    emxFree_int32_T(&xckeep);
    emxFree_boolean_T(&inside);
    emxFree_creal_T(&w);
    emxFree_real_T(&xc);
    emxFree_real_T(&idxE_chunk);
    emxFree_real_T(&Ey_chunk);
    emxFree_real_T(&Ex_chunk);
    emxFree_creal_T(&Opca);
    emxFree_real_T(&lnR);
    emxFree_real_T(&idxE);
  }

  emxFree_real_T(&A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (chaccum.c) */
