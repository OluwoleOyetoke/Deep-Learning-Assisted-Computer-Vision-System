/*
 * _coder_detectCorner_api.cpp
 *
 * Code generation for function '_coder_detectCorner_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCorner.h"
#include "_coder_detectCorner_api.h"
#include "detectCorner_emxutil.h"
#include "detectCorner_data.h"
#include "blas.h"
#include "libmwordfilt2.h"

/* Variable Definitions */
static emlrtRTEInfo p_emlrtRTEI = { 1, 1, "_coder_detectCorner_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *img, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);

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

  int32_T iv7[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv7);
  ret->size[0] = iv7[0];
  ret->size[1] = iv7[1];
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

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv6[1] = { 0 };

  y = NULL;
  m0 = emlrtCreateNumericArray(1, iv6, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m0, (void *)u->data);
  emlrtSetDimensions((mxArray *)m0, u->size, 1);
  emlrtAssign(&y, m0);
  return y;
}

void detectCorner_api(const mxArray * const prhs[1], const mxArray *plhs[2])
{
  emxArray_real_T *img;
  emxArray_real_T *r;
  emxArray_real_T *c;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &img, 2, &p_emlrtRTEI, true);
  emxInit_real_T1(&st, &r, 1, &p_emlrtRTEI, true);
  emxInit_real_T1(&st, &c, 1, &p_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias((const mxArray *)prhs[0]), "img", img);

  /* Invoke the target function */
  detectCorner(&st, img, r, c);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(r);
  plhs[1] = emlrt_marshallOut(c);
  c->canFreeData = false;
  emxFree_real_T(&c);
  r->canFreeData = false;
  emxFree_real_T(&r);
  img->canFreeData = false;
  emxFree_real_T(&img);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_detectCorner_api.cpp) */
