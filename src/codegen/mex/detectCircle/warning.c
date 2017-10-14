/*
 * warning.c
 *
 * Code generation for function 'warning'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "warning.h"
#include "detectCircle_mexutil.h"
#include "libmwgetnumcores.h"
#include "libmwgrayto8.h"
#include "libmwimfilter.h"
#include "libmwimregionalmax.h"
#include "libmwippfilter.h"
#include "libmwippreconstruct.h"
#include "libmwordfilt2.h"
#include "libmwtbbhist.h"

/* Variable Definitions */
static emlrtMCInfo b_emlrtMCI = { 14, 25, "warning",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"
};

static emlrtMCInfo c_emlrtMCI = { 14, 9, "warning",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"
};

static emlrtRSInfo kk_emlrtRSI = { 14, "warning",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"
};

/* Function Declarations */
static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static const mxArray *d_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, const
  mxArray *g, const mxArray *h, const mxArray *i, emlrtMCInfo *location);

/* Function Definitions */
static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "feval", true, location);
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m11;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m11, 3, pArrays, "feval", true, location);
}

static const mxArray *d_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m12;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m12, 2, pArrays, "feval", true, location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, const
  mxArray *g, const mxArray *h, const mxArray *i, emlrtMCInfo *location)
{
  const mxArray *pArrays[8];
  const mxArray *m10;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  pArrays[5] = g;
  pArrays[6] = h;
  pArrays[7] = i;
  return emlrtCallMATLABR2012b(sp, 1, &m10, 8, pArrays, "feval", true, location);
}

void b_warning(const emlrtStack *sp)
{
  int32_T i4;
  const mxArray *y;
  char_T u[7];
  static const char_T cv4[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m3;
  static const int32_T iv11[2] = { 1, 7 };

  const mxArray *b_y;
  char_T b_u[7];
  static const char_T cv5[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  static const int32_T iv12[2] = { 1, 7 };

  const mxArray *c_y;
  char_T c_u[39];
  static const char_T msgID[39] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'f', 'i', 'n', 'd', 'c', 'i', 'r', 'c', 'l', 'e', 's', ':', 'w', 'a', 'r',
    'n', 'F', 'o', 'r', 'S', 'm', 'a', 'l', 'l', 'R', 'a', 'd', 'i', 'u', 's' };

  static const int32_T iv13[2] = { 1, 39 };

  const mxArray *d_y;
  char_T d_u[13];
  static const char_T varargin_1[13] = { 'I', 'M', 'F', 'I', 'N', 'D', 'C', 'I',
    'R', 'C', 'L', 'E', 'S' };

  static const int32_T iv14[2] = { 1, 13 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i4 = 0; i4 < 7; i4++) {
    u[i4] = cv4[i4];
  }

  y = NULL;
  m3 = emlrtCreateCharArray(2, iv11);
  emlrtInitCharArrayR2013a(sp, 7, m3, &u[0]);
  emlrtAssign(&y, m3);
  for (i4 = 0; i4 < 7; i4++) {
    b_u[i4] = cv5[i4];
  }

  b_y = NULL;
  m3 = emlrtCreateCharArray(2, iv12);
  emlrtInitCharArrayR2013a(sp, 7, m3, &b_u[0]);
  emlrtAssign(&b_y, m3);
  for (i4 = 0; i4 < 39; i4++) {
    c_u[i4] = msgID[i4];
  }

  c_y = NULL;
  m3 = emlrtCreateCharArray(2, iv13);
  emlrtInitCharArrayR2013a(sp, 39, m3, &c_u[0]);
  emlrtAssign(&c_y, m3);
  for (i4 = 0; i4 < 13; i4++) {
    d_u[i4] = varargin_1[i4];
  }

  d_y = NULL;
  m3 = emlrtCreateCharArray(2, iv14);
  emlrtInitCharArrayR2013a(sp, 13, m3, &d_u[0]);
  emlrtAssign(&d_y, m3);
  st.site = &kk_emlrtRSI;
  b_feval(&st, y, c_feval(&st, b_y, c_y, d_y, &b_emlrtMCI), &c_emlrtMCI);
}

void c_warning(const emlrtStack *sp)
{
  int32_T i13;
  const mxArray *y;
  char_T u[7];
  static const char_T cv6[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m4;
  static const int32_T iv20[2] = { 1, 7 };

  const mxArray *b_y;
  char_T b_u[7];
  static const char_T cv7[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  static const int32_T iv21[2] = { 1, 7 };

  const mxArray *c_y;
  char_T c_u[34];
  static const char_T msgID[34] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'm', 'u',
    'l', 't', 'i', 't', 'h', 'r', 'e', 's', 'h', ':', 'd', 'e', 'g', 'e', 'n',
    'e', 'r', 'a', 't', 'e', 'I', 'n', 'p', 'u', 't' };

  static const int32_T iv22[2] = { 1, 34 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i13 = 0; i13 < 7; i13++) {
    u[i13] = cv6[i13];
  }

  y = NULL;
  m4 = emlrtCreateCharArray(2, iv20);
  emlrtInitCharArrayR2013a(sp, 7, m4, &u[0]);
  emlrtAssign(&y, m4);
  for (i13 = 0; i13 < 7; i13++) {
    b_u[i13] = cv7[i13];
  }

  b_y = NULL;
  m4 = emlrtCreateCharArray(2, iv21);
  emlrtInitCharArrayR2013a(sp, 7, m4, &b_u[0]);
  emlrtAssign(&b_y, m4);
  for (i13 = 0; i13 < 34; i13++) {
    c_u[i13] = msgID[i13];
  }

  c_y = NULL;
  m4 = emlrtCreateCharArray(2, iv22);
  emlrtInitCharArrayR2013a(sp, 34, m4, &c_u[0]);
  emlrtAssign(&c_y, m4);
  st.site = &kk_emlrtRSI;
  b_feval(&st, y, c_feval(&st, b_y, c_y, emlrt_marshallOut(1.0), &b_emlrtMCI),
          &c_emlrtMCI);
}

void d_warning(const emlrtStack *sp)
{
  int32_T i16;
  const mxArray *y;
  char_T u[7];
  static const char_T cv8[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m5;
  static const int32_T iv23[2] = { 1, 7 };

  const mxArray *b_y;
  char_T b_u[7];
  static const char_T cv9[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  static const int32_T iv24[2] = { 1, 7 };

  const mxArray *c_y;
  char_T c_u[25];
  static const char_T msgID[25] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'h', 'i', 's', 't', 'c', ':', 'o', 'u', 't', 'O', 'f', 'R', 'a', 'n', 'g',
    'e' };

  static const int32_T iv25[2] = { 1, 25 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i16 = 0; i16 < 7; i16++) {
    u[i16] = cv8[i16];
  }

  y = NULL;
  m5 = emlrtCreateCharArray(2, iv23);
  emlrtInitCharArrayR2013a(sp, 7, m5, &u[0]);
  emlrtAssign(&y, m5);
  for (i16 = 0; i16 < 7; i16++) {
    b_u[i16] = cv9[i16];
  }

  b_y = NULL;
  m5 = emlrtCreateCharArray(2, iv24);
  emlrtInitCharArrayR2013a(sp, 7, m5, &b_u[0]);
  emlrtAssign(&b_y, m5);
  for (i16 = 0; i16 < 25; i16++) {
    c_u[i16] = msgID[i16];
  }

  c_y = NULL;
  m5 = emlrtCreateCharArray(2, iv25);
  emlrtInitCharArrayR2013a(sp, 25, m5, &c_u[0]);
  emlrtAssign(&c_y, m5);
  st.site = &kk_emlrtRSI;
  b_feval(&st, y, d_feval(&st, b_y, c_y, &b_emlrtMCI), &c_emlrtMCI);
}

void e_warning(const emlrtStack *sp)
{
  int32_T i17;
  const mxArray *y;
  char_T u[7];
  static const char_T cv10[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m6;
  static const int32_T iv26[2] = { 1, 7 };

  const mxArray *b_y;
  char_T b_u[7];
  static const char_T cv11[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  static const int32_T iv27[2] = { 1, 7 };

  const mxArray *c_y;
  char_T c_u[27];
  static const char_T msgID[27] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'h', 'i', 's', 't', 'c', ':', 'i', 'n', 'p', 'u', 't', 'H', 'a', 's', 'N',
    'a', 'N', 's' };

  static const int32_T iv28[2] = { 1, 27 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i17 = 0; i17 < 7; i17++) {
    u[i17] = cv10[i17];
  }

  y = NULL;
  m6 = emlrtCreateCharArray(2, iv26);
  emlrtInitCharArrayR2013a(sp, 7, m6, &u[0]);
  emlrtAssign(&y, m6);
  for (i17 = 0; i17 < 7; i17++) {
    b_u[i17] = cv11[i17];
  }

  b_y = NULL;
  m6 = emlrtCreateCharArray(2, iv27);
  emlrtInitCharArrayR2013a(sp, 7, m6, &b_u[0]);
  emlrtAssign(&b_y, m6);
  for (i17 = 0; i17 < 27; i17++) {
    c_u[i17] = msgID[i17];
  }

  c_y = NULL;
  m6 = emlrtCreateCharArray(2, iv28);
  emlrtInitCharArrayR2013a(sp, 27, m6, &c_u[0]);
  emlrtAssign(&c_y, m6);
  st.site = &kk_emlrtRSI;
  b_feval(&st, y, d_feval(&st, b_y, c_y, &b_emlrtMCI), &c_emlrtMCI);
}

void f_warning(const emlrtStack *sp)
{
  int32_T i18;
  const mxArray *y;
  char_T u[7];
  static const char_T cv12[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m7;
  static const int32_T iv31[2] = { 1, 7 };

  const mxArray *b_y;
  char_T b_u[7];
  static const char_T cv13[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  static const int32_T iv32[2] = { 1, 7 };

  const mxArray *c_y;
  char_T c_u[32];
  static const char_T msgID[32] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'm', 'u',
    'l', 't', 'i', 't', 'h', 'r', 'e', 's', 'h', ':', 'n', 'o', 'C', 'o', 'n',
    'v', 'e', 'r', 'g', 'e', 'n', 'c', 'e' };

  static const int32_T iv33[2] = { 1, 32 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i18 = 0; i18 < 7; i18++) {
    u[i18] = cv12[i18];
  }

  y = NULL;
  m7 = emlrtCreateCharArray(2, iv31);
  emlrtInitCharArrayR2013a(sp, 7, m7, &u[0]);
  emlrtAssign(&y, m7);
  for (i18 = 0; i18 < 7; i18++) {
    b_u[i18] = cv13[i18];
  }

  b_y = NULL;
  m7 = emlrtCreateCharArray(2, iv32);
  emlrtInitCharArrayR2013a(sp, 7, m7, &b_u[0]);
  emlrtAssign(&b_y, m7);
  for (i18 = 0; i18 < 32; i18++) {
    c_u[i18] = msgID[i18];
  }

  c_y = NULL;
  m7 = emlrtCreateCharArray(2, iv33);
  emlrtInitCharArrayR2013a(sp, 32, m7, &c_u[0]);
  emlrtAssign(&c_y, m7);
  st.site = &kk_emlrtRSI;
  b_feval(&st, y, d_feval(&st, b_y, c_y, &b_emlrtMCI), &c_emlrtMCI);
}

void warning(const emlrtStack *sp, const mxArray *varargin_6)
{
  int32_T i3;
  const mxArray *y;
  char_T u[7];
  static const char_T cv2[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m2;
  static const int32_T iv3[2] = { 1, 7 };

  const mxArray *b_y;
  char_T b_u[7];
  static const char_T cv3[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  static const int32_T iv4[2] = { 1, 7 };

  const mxArray *c_y;
  char_T c_u[44];
  static const char_T msgID[44] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'f', 'i', 'n', 'd', 'c', 'i', 'r', 'c', 'l', 'e', 's', ':', 'w', 'a', 'r',
    'n', 'F', 'o', 'r', 'L', 'a', 'r', 'g', 'e', 'R', 'a', 'd', 'i', 'u', 's',
    'R', 'a', 'n', 'g', 'e' };

  static const int32_T iv5[2] = { 1, 44 };

  const mxArray *d_y;
  char_T d_u[13];
  static const char_T varargin_1[13] = { 'I', 'M', 'F', 'I', 'N', 'D', 'C', 'I',
    'R', 'C', 'L', 'E', 'S' };

  static const int32_T iv6[2] = { 1, 13 };

  const mxArray *e_y;
  char_T e_u[13];
  static const char_T varargin_2[13] = { 'R', 'm', 'a', 'x', ' ', '<', ' ', '3',
    '*', 'R', 'm', 'i', 'n' };

  static const int32_T iv7[2] = { 1, 13 };

  const mxArray *f_y;
  char_T f_u[19];
  static const char_T varargin_3[19] = { '(', 'R', 'm', 'a', 'x', ' ', '-', ' ',
    'R', 'm', 'i', 'n', ')', ' ', '<', ' ', '1', '0', '0' };

  static const int32_T iv8[2] = { 1, 19 };

  const mxArray *g_y;
  char_T g_u[8];
  static const char_T varargin_4[8] = { '[', '2', '0', ' ', '1', '0', '0', ']' };

  static const int32_T iv9[2] = { 1, 8 };

  const mxArray *h_y;
  char_T h_u[13];
  static const int32_T iv10[2] = { 1, 13 };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i3 = 0; i3 < 7; i3++) {
    u[i3] = cv2[i3];
  }

  y = NULL;
  m2 = emlrtCreateCharArray(2, iv3);
  emlrtInitCharArrayR2013a(sp, 7, m2, &u[0]);
  emlrtAssign(&y, m2);
  for (i3 = 0; i3 < 7; i3++) {
    b_u[i3] = cv3[i3];
  }

  b_y = NULL;
  m2 = emlrtCreateCharArray(2, iv4);
  emlrtInitCharArrayR2013a(sp, 7, m2, &b_u[0]);
  emlrtAssign(&b_y, m2);
  for (i3 = 0; i3 < 44; i3++) {
    c_u[i3] = msgID[i3];
  }

  c_y = NULL;
  m2 = emlrtCreateCharArray(2, iv5);
  emlrtInitCharArrayR2013a(sp, 44, m2, &c_u[0]);
  emlrtAssign(&c_y, m2);
  for (i3 = 0; i3 < 13; i3++) {
    d_u[i3] = varargin_1[i3];
  }

  d_y = NULL;
  m2 = emlrtCreateCharArray(2, iv6);
  emlrtInitCharArrayR2013a(sp, 13, m2, &d_u[0]);
  emlrtAssign(&d_y, m2);
  for (i3 = 0; i3 < 13; i3++) {
    e_u[i3] = varargin_2[i3];
  }

  e_y = NULL;
  m2 = emlrtCreateCharArray(2, iv7);
  emlrtInitCharArrayR2013a(sp, 13, m2, &e_u[0]);
  emlrtAssign(&e_y, m2);
  for (i3 = 0; i3 < 19; i3++) {
    f_u[i3] = varargin_3[i3];
  }

  f_y = NULL;
  m2 = emlrtCreateCharArray(2, iv8);
  emlrtInitCharArrayR2013a(sp, 19, m2, &f_u[0]);
  emlrtAssign(&f_y, m2);
  for (i3 = 0; i3 < 8; i3++) {
    g_u[i3] = varargin_4[i3];
  }

  g_y = NULL;
  m2 = emlrtCreateCharArray(2, iv9);
  emlrtInitCharArrayR2013a(sp, 8, m2, &g_u[0]);
  emlrtAssign(&g_y, m2);
  for (i3 = 0; i3 < 13; i3++) {
    h_u[i3] = varargin_1[i3];
  }

  h_y = NULL;
  m2 = emlrtCreateCharArray(2, iv10);
  emlrtInitCharArrayR2013a(sp, 13, m2, &h_u[0]);
  emlrtAssign(&h_y, m2);
  st.site = &kk_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, d_y, e_y, f_y, g_y, h_y, emlrtAlias
                        (varargin_6), &b_emlrtMCI), &c_emlrtMCI);
  emlrtDestroyArray(&varargin_6);
}

/* End of code generation (warning.c) */
