/*
 * _coder_sumTest_api.c
 *
 * Code generation for function '_coder_sumTest_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sumTest.h"
#include "_coder_sumTest_api.h"
#include "sumTest_emxutil.h"
#include "sumTest_data.h"

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 1, 1, "_coder_sumTest_api", "" };

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *regionShed,
  const char_T *identifier, emxArray_real_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *xDim, const
  char_T *identifier);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *regionShed,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(regionShed), &thisId, y);
  emlrtDestroyArray(&regionShed);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *xDim, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(xDim), &thisId);
  emlrtDestroyArray(&xDim);
  return y;
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m0, (void *)u->data);
  emlrtSetDimensions((mxArray *)m0, u->size, 2);
  emlrtAssign(&y, m0);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  boolean_T bv0[2] = { true, true };

  int32_T iv1[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv1);
  ret->size[0] = iv1[0];
  ret->size[1] = iv1[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void sumTest_api(const mxArray * const prhs[7], const mxArray *plhs[1])
{
  emxArray_real_T *regionShed;
  emxArray_real_T *regionSumArray;
  real_T xDim;
  real_T yDim;
  real_T zDim;
  real_T stepSize;
  real_T beacon;
  real_T windowSize;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &regionShed, 2, &b_emlrtRTEI, true);
  emxInit_real_T(&st, &regionSumArray, 2, &b_emlrtRTEI, true);

  /* Marshall function inputs */
  xDim = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "xDim");
  yDim = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "yDim");
  zDim = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "zDim");
  stepSize = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "stepSize");
  beacon = emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "beacon");
  windowSize = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "windowSize");
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "regionShed", regionShed);

  /* Invoke the target function */
  sumTest(&st, xDim, yDim, zDim, stepSize, beacon, windowSize, regionShed,
          regionSumArray);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(regionSumArray);
  regionSumArray->canFreeData = false;
  emxFree_real_T(&regionSumArray);
  regionShed->canFreeData = false;
  emxFree_real_T(&regionShed);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_sumTest_api.c) */
