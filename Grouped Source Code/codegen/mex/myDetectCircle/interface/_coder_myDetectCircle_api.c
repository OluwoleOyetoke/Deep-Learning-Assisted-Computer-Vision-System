/*
 * _coder_myDetectCircle_api.c
 *
 * Code generation for function '_coder_myDetectCircle_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "myDetectCircle.h"
#include "_coder_myDetectCircle_api.h"
#include "myDetectCircle_emxutil.h"
#include "myDetectCircle_data.h"

/* Variable Definitions */
static emlrtRTEInfo c_emlrtRTEI = { 1, 1, "_coder_myDetectCircle_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *inputImg,
  const char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const real_T u);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  boolean_T bv0[2] = { true, true };

  int32_T iv0[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv0);
  ret->size[0] = iv0[0];
  ret->size[1] = iv0[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *inputImg,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(inputImg), &thisId, y);
  emlrtDestroyArray(&inputImg);
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m0);
  return y;
}

void myDetectCircle_api(const mxArray * const prhs[1], const mxArray *plhs[2])
{
  emxArray_real_T *inputImg;
  real_T circleAvailable;
  real_T dummyVar;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T1(&st, &inputImg, 2, &c_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "inputImg", inputImg);

  /* Invoke the target function */
  myDetectCircle(&st, inputImg, &circleAvailable, &dummyVar);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(circleAvailable);
  plhs[1] = emlrt_marshallOut(dummyVar);
  inputImg->canFreeData = false;
  emxFree_real_T(&inputImg);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_myDetectCircle_api.c) */
