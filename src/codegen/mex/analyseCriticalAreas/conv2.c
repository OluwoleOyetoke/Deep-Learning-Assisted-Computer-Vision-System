/*
 * conv2.c
 *
 * Code generation for function 'conv2'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "analyseCriticalAreas.h"
#include "conv2.h"
#include "xaxpy.h"
#include "analyseCriticalAreas_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "analyseCriticalAreas_data.h"
#include "blas.h"
#include "libmwordfilt2.h"

/* Variable Definitions */
static emlrtRTEInfo m_emlrtRTEI = { 1, 14, "conv2",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"
};

/* Function Definitions */
void b_conv2(const emlrtStack *sp, const emxArray_real_T *arg1, emxArray_real_T *
             c)
{
  int32_T unnamed_idx_0;
  int32_T unnamed_idx_1;
  int32_T firstRowA;
  int32_T aidx;
  boolean_T b2;
  int32_T ma;
  int32_T na;
  int32_T firstColB;
  int32_T lastColB;
  int32_T firstRowB;
  int32_T lastRowB;
  int32_T firstColA;
  int32_T lastColA;
  int32_T b_firstColB;
  int32_T iC;
  int32_T b_c;
  int32_T iB;
  int32_T i;
  int32_T b_i;
  int32_T a_length;
  static const real_T dv0[144] = { 2.0774260271982292E-5, 7.2509293036792714E-5,
    0.00019710069365632562, 0.00041726217174481103, 0.00068794901801419992,
    0.00088334402451560568, 0.00088334402451560568, 0.00068794901801419992,
    0.00041726217174481103, 0.00019710069365632562, 7.2509293036792714E-5,
    2.0774260271982292E-5, 7.2509293036792714E-5, 0.00025308230030150633,
    0.00068794901801419992, 0.0014563880825647344, 0.0024011780101186523,
    0.0030831735949840441, 0.0030831735949840441, 0.0024011780101186523,
    0.0014563880825647344, 0.00068794901801419992, 0.00025308230030150633,
    7.2509293036792714E-5, 0.00019710069365632562, 0.00068794901801419992,
    0.001870039314574244, 0.0039588732600200289, 0.006527078551800982,
    0.0083809347572298756, 0.0083809347572298756, 0.006527078551800982,
    0.0039588732600200289, 0.001870039314574244, 0.00068794901801419992,
    0.00019710069365632562, 0.00041726217174481103, 0.0014563880825647344,
    0.0039588732600200289, 0.0083809347572298756, 0.013817825402594911,
    0.01774243902028539, 0.01774243902028539, 0.013817825402594911,
    0.0083809347572298756, 0.0039588732600200289, 0.0014563880825647344,
    0.00041726217174481103, 0.00068794901801419992, 0.0024011780101186523,
    0.006527078551800982, 0.013817825402594911, 0.022781742656078789,
    0.029252336606844464, 0.029252336606844464, 0.022781742656078789,
    0.013817825402594911, 0.006527078551800982, 0.0024011780101186523,
    0.00068794901801419992, 0.00088334402451560568, 0.0030831735949840441,
    0.0083809347572298756, 0.01774243902028539, 0.029252336606844464,
    0.037560743700693539, 0.037560743700693539, 0.029252336606844464,
    0.01774243902028539, 0.0083809347572298756, 0.0030831735949840441,
    0.00088334402451560568, 0.00088334402451560568, 0.0030831735949840441,
    0.0083809347572298756, 0.01774243902028539, 0.029252336606844464,
    0.037560743700693539, 0.037560743700693539, 0.029252336606844464,
    0.01774243902028539, 0.0083809347572298756, 0.0030831735949840441,
    0.00088334402451560568, 0.00068794901801419992, 0.0024011780101186523,
    0.006527078551800982, 0.013817825402594911, 0.022781742656078789,
    0.029252336606844464, 0.029252336606844464, 0.022781742656078789,
    0.013817825402594911, 0.006527078551800982, 0.0024011780101186523,
    0.00068794901801419992, 0.00041726217174481103, 0.0014563880825647344,
    0.0039588732600200289, 0.0083809347572298756, 0.013817825402594911,
    0.01774243902028539, 0.01774243902028539, 0.013817825402594911,
    0.0083809347572298756, 0.0039588732600200289, 0.0014563880825647344,
    0.00041726217174481103, 0.00019710069365632562, 0.00068794901801419992,
    0.001870039314574244, 0.0039588732600200289, 0.006527078551800982,
    0.0083809347572298756, 0.0083809347572298756, 0.006527078551800982,
    0.0039588732600200289, 0.001870039314574244, 0.00068794901801419992,
    0.00019710069365632562, 7.2509293036792714E-5, 0.00025308230030150633,
    0.00068794901801419992, 0.0014563880825647344, 0.0024011780101186523,
    0.0030831735949840441, 0.0030831735949840441, 0.0024011780101186523,
    0.0014563880825647344, 0.00068794901801419992, 0.00025308230030150633,
    7.2509293036792714E-5, 2.0774260271982292E-5, 7.2509293036792714E-5,
    0.00019710069365632562, 0.00041726217174481103, 0.00068794901801419992,
    0.00088334402451560568, 0.00088334402451560568, 0.00068794901801419992,
    0.00041726217174481103, 0.00019710069365632562, 7.2509293036792714E-5,
    2.0774260271982292E-5 };

  int32_T r;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &m_emlrtRSI;
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
  b_st.site = &n_emlrtRSI;
  unnamed_idx_0 = arg1->size[0];
  unnamed_idx_1 = arg1->size[1];
  c_st.site = &o_emlrtRSI;
  firstRowA = c->size[0] * c->size[1];
  c->size[0] = unnamed_idx_0;
  c->size[1] = unnamed_idx_1;
  emxEnsureCapacity(&c_st, (emxArray__common *)c, firstRowA, (int32_T)sizeof
                    (real_T), &m_emlrtRTEI);
  aidx = unnamed_idx_0 * unnamed_idx_1;
  for (firstRowA = 0; firstRowA < aidx; firstRowA++) {
    c->data[firstRowA] = 0.0;
  }

  if ((arg1->size[0] == 0) || (arg1->size[1] == 0) || ((unnamed_idx_0 == 0) ||
       (unnamed_idx_1 == 0))) {
    b2 = true;
  } else {
    b2 = false;
  }

  if (!b2) {
    d_st.site = &p_emlrtRSI;
    ma = arg1->size[0];
    na = arg1->size[1] - 1;
    if (arg1->size[1] < 6) {
      firstColB = 7 - arg1->size[1];
    } else {
      firstColB = 0;
    }

    if (12 <= unnamed_idx_1 + 5) {
      lastColB = 11;
    } else {
      lastColB = unnamed_idx_1 + 5;
    }

    if (arg1->size[0] < 6) {
      firstRowB = 7 - arg1->size[0];
    } else {
      firstRowB = 0;
    }

    if (12 <= unnamed_idx_0 + 5) {
      lastRowB = 11;
    } else {
      lastRowB = unnamed_idx_0 + 5;
    }

    e_st.site = &q_emlrtRSI;
    if ((!(firstColB > lastColB)) && (lastColB > 2147483646)) {
      f_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }

    while (firstColB <= lastColB) {
      if (firstColB < 6) {
        firstColA = 6 - firstColB;
      } else {
        firstColA = 0;
      }

      if (firstColB + na < unnamed_idx_1 + 5) {
        lastColA = na;
      } else {
        lastColA = (unnamed_idx_1 - firstColB) + 5;
      }

      e_st.site = &r_emlrtRSI;
      if ((!(firstColA > lastColA)) && (lastColA > 2147483646)) {
        f_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (firstColA <= lastColA) {
        if (firstColB + firstColA > 6) {
          b_firstColB = (firstColB + firstColA) - 6;
        } else {
          b_firstColB = 0;
        }

        iC = b_firstColB * unnamed_idx_0;
        b_c = firstColA * ma;
        iB = firstRowB + firstColB * 12;
        e_st.site = &s_emlrtRSI;
        if ((!(firstRowB > lastRowB)) && (lastRowB > 2147483646)) {
          f_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        for (i = firstRowB; i <= lastRowB; i++) {
          if (i < 6) {
            firstRowA = 6 - i;
          } else {
            firstRowA = 0;
          }

          if (i + ma <= unnamed_idx_0 + 5) {
            b_i = ma;
          } else {
            b_i = (unnamed_idx_0 - i) + 6;
          }

          a_length = b_i - firstRowA;
          if (ma > 128) {
            e_st.site = &t_emlrtRSI;
            xaxpy(a_length, dv0[iB], arg1, (b_c + firstRowA) + 1, c, iC + 1);
          } else {
            aidx = b_c + firstRowA;
            firstRowA = iC;
            e_st.site = &u_emlrtRSI;
            if ((!(1 > a_length)) && (a_length > 2147483646)) {
              f_st.site = &v_emlrtRSI;
              check_forloop_overflow_error(&f_st);
            }

            for (r = 1; r <= a_length; r++) {
              c->data[firstRowA] += dv0[iB] * arg1->data[aidx];
              aidx++;
              firstRowA++;
            }
          }

          iB++;
          if (i >= 6) {
            iC++;
          }
        }

        firstColA++;
      }

      firstColB++;
    }
  }
}

void conv2(const emlrtStack *sp, const emxArray_real_T *arg1, emxArray_real_T *c)
{
  int32_T unnamed_idx_0;
  int32_T unnamed_idx_1;
  int32_T firstRowA;
  int32_T aidx;
  boolean_T b1;
  int32_T ma;
  int32_T na;
  int32_T firstColB;
  int32_T lastColB;
  int32_T firstRowB;
  int32_T lastRowB;
  int32_T firstColA;
  int32_T lastColA;
  int32_T b_firstColB;
  int32_T iC;
  int32_T b_c;
  int32_T iB;
  int32_T i;
  int32_T b_i;
  int32_T a_length;
  static const int8_T iv5[9] = { -1, -1, -1, 0, 0, 0, 1, 1, 1 };

  int32_T r;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &m_emlrtRSI;
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
  b_st.site = &n_emlrtRSI;
  unnamed_idx_0 = arg1->size[0];
  unnamed_idx_1 = arg1->size[1];
  c_st.site = &o_emlrtRSI;
  firstRowA = c->size[0] * c->size[1];
  c->size[0] = unnamed_idx_0;
  c->size[1] = unnamed_idx_1;
  emxEnsureCapacity(&c_st, (emxArray__common *)c, firstRowA, (int32_T)sizeof
                    (real_T), &m_emlrtRTEI);
  aidx = unnamed_idx_0 * unnamed_idx_1;
  for (firstRowA = 0; firstRowA < aidx; firstRowA++) {
    c->data[firstRowA] = 0.0;
  }

  if ((arg1->size[0] == 0) || (arg1->size[1] == 0) || ((unnamed_idx_0 == 0) ||
       (unnamed_idx_1 == 0))) {
    b1 = true;
  } else {
    b1 = false;
  }

  if (!b1) {
    d_st.site = &p_emlrtRSI;
    ma = arg1->size[0];
    na = arg1->size[1] - 1;
    if (arg1->size[1] < 1) {
      firstColB = 2;
    } else {
      firstColB = 0;
    }

    if (3 <= unnamed_idx_1) {
      lastColB = 2;
    } else {
      lastColB = unnamed_idx_1;
    }

    if (arg1->size[0] < 1) {
      firstRowB = 2;
    } else {
      firstRowB = 0;
    }

    if (3 <= unnamed_idx_0) {
      lastRowB = 2;
    } else {
      lastRowB = unnamed_idx_0;
    }

    e_st.site = &q_emlrtRSI;
    while (firstColB <= lastColB) {
      firstColA = (firstColB < 1);
      if (firstColB + na < unnamed_idx_1) {
        lastColA = na;
      } else {
        lastColA = unnamed_idx_1 - firstColB;
      }

      e_st.site = &r_emlrtRSI;
      if ((!(firstColA > lastColA)) && (lastColA > 2147483646)) {
        f_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (firstColA <= lastColA) {
        if (firstColB + firstColA > 1) {
          b_firstColB = (firstColB + firstColA) - 1;
        } else {
          b_firstColB = 0;
        }

        iC = b_firstColB * unnamed_idx_0;
        b_c = firstColA * ma;
        iB = firstRowB + firstColB * 3;
        e_st.site = &s_emlrtRSI;
        for (i = firstRowB; i <= lastRowB; i++) {
          firstRowA = (i < 1);
          if (i + ma <= unnamed_idx_0) {
            b_i = ma;
          } else {
            b_i = (unnamed_idx_0 - i) + 1;
          }

          a_length = b_i - firstRowA;
          if (ma > 128) {
            e_st.site = &t_emlrtRSI;
            xaxpy(a_length, iv5[iB], arg1, (b_c + firstRowA) + 1, c, iC + 1);
          } else {
            aidx = b_c + firstRowA;
            firstRowA = iC;
            e_st.site = &u_emlrtRSI;
            if ((!(1 > a_length)) && (a_length > 2147483646)) {
              f_st.site = &v_emlrtRSI;
              check_forloop_overflow_error(&f_st);
            }

            for (r = 1; r <= a_length; r++) {
              c->data[firstRowA] += (real_T)iv5[iB] * arg1->data[aidx];
              aidx++;
              firstRowA++;
            }
          }

          iB++;
          if (i >= 1) {
            iC++;
          }
        }

        firstColA++;
      }

      firstColB++;
    }
  }
}

/* End of code generation (conv2.c) */
