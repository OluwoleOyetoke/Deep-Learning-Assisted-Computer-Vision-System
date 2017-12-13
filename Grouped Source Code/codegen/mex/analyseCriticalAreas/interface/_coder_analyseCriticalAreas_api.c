/*
 * _coder_analyseCriticalAreas_api.c
 *
 * Code generation for function '_coder_analyseCriticalAreas_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "analyseCriticalAreas.h"
#include "_coder_analyseCriticalAreas_api.h"
#include "analyseCriticalAreas_emxutil.h"
#include "analyseCriticalAreas_data.h"
#include "blas.h"
#include "libmwordfilt2.h"

/* Variable Definitions */
static emlrtRTEInfo r_emlrtRTEI = { 1, 1, "_coder_analyseCriticalAreas_api", ""
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *b_emlrt_marshallOut(const real_T u[4]);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *edgeXs,
  const char_T *identifier, emxArray_real_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *img, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const real_T u[3]);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const real_T u[4])
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv8[2] = { 0, 0 };

  static const int32_T iv9[2] = { 1, 4 };

  y = NULL;
  m1 = emlrtCreateNumericArray(2, iv8, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m1, (void *)u);
  emlrtSetDimensions((mxArray *)m1, iv9, 2);
  emlrtAssign(&y, m1);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *edgeXs,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(edgeXs), &thisId, y);
  emlrtDestroyArray(&edgeXs);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  boolean_T bv0[2] = { true, true };

  int32_T iv10[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv10);
  ret->size[0] = iv10[0];
  ret->size[1] = iv10[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *img, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(img), &thisId, y);
  emlrtDestroyArray(&img);
}

static const mxArray *emlrt_marshallOut(const real_T u[3])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv6[2] = { 0, 0 };

  static const int32_T iv7[2] = { 1, 3 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv6, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m0, (void *)u);
  emlrtSetDimensions((mxArray *)m0, iv7, 2);
  emlrtAssign(&y, m0);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  boolean_T bv1[1] = { true };

  int32_T iv11[1];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv1[0],
    iv11);
  ret->size[0] = iv11[0];
  ret->allocatedSize = ret->size[0];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void analyseCriticalAreas_api(const mxArray * const prhs[3], const mxArray *
  plhs[2])
{
  real_T (*chances)[3];
  real_T (*shrinks)[4];
  emxArray_real_T *img;
  emxArray_real_T *edgeXs;
  emxArray_real_T *edgeYs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  chances = (real_T (*)[3])mxMalloc(sizeof(real_T [3]));
  shrinks = (real_T (*)[4])mxMalloc(sizeof(real_T [4]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T1(&st, &img, 2, &r_emlrtRTEI, true);
  emxInit_real_T(&st, &edgeXs, 1, &r_emlrtRTEI, true);
  emxInit_real_T(&st, &edgeYs, 1, &r_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "img", img);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "edgeXs", edgeXs);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "edgeYs", edgeYs);

  /* Invoke the target function */
  analyseCriticalAreas(&st, img, edgeXs, edgeYs, *chances, *shrinks);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*chances);
  plhs[1] = b_emlrt_marshallOut(*shrinks);
  edgeYs->canFreeData = false;
  emxFree_real_T(&edgeYs);
  edgeXs->canFreeData = false;
  emxFree_real_T(&edgeXs);
  img->canFreeData = false;
  emxFree_real_T(&img);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_analyseCriticalAreas_api.c) */
