/*
 * _coder_shapeAnalyser_api.cpp
 *
 * Code generation for function '_coder_shapeAnalyser_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "shapeAnalyser.h"
#include "_coder_shapeAnalyser_api.h"
#include "shapeAnalyser_emxutil.h"
#include "shapeAnalyser_data.h"

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 1, 1, "_coder_shapeAnalyser_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void b_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *edgedRegion,
  const char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const real_T u[3]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void b_emlrt_marshallOut(const emxArray_real_T *u, const mxArray *y)
{
  mxSetData((mxArray *)y, (void *)u->data);
  emlrtSetDimensions((mxArray *)y, u->size, 2);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  boolean_T bv0[2] = { true, true };

  int32_T iv2[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv2);
  ret->size[0] = iv2[0];
  ret->size[1] = iv2[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *edgedRegion,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(edgedRegion), &thisId, y);
  emlrtDestroyArray(&edgedRegion);
}

static const mxArray *emlrt_marshallOut(const real_T u[3])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 1, 3 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m0, (void *)u);
  emlrtSetDimensions((mxArray *)m0, *(int32_T (*)[2])&iv1[0], 2);
  emlrtAssign(&y, m0);
  return y;
}

void shapeAnalyser_api(const mxArray *prhs[1], const mxArray *plhs[2])
{
  real_T (*availableShapes)[3];
  emxArray_real_T *edgedRegion;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  availableShapes = (real_T (*)[3])mxMalloc(sizeof(real_T [3]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &edgedRegion, 2, &b_emlrtRTEI, true);
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, true, -1);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "edgedRegion", edgedRegion);

  /* Invoke the target function */
  shapeAnalyser(&st, edgedRegion, *availableShapes);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*availableShapes);
  b_emlrt_marshallOut(edgedRegion, prhs[0]);
  plhs[1] = prhs[0];
  edgedRegion->canFreeData = false;
  emxFree_real_T(&edgedRegion);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_shapeAnalyser_api.cpp) */
