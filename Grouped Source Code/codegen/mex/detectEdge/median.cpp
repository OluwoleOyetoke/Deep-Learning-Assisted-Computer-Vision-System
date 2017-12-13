/*
 * median.cpp
 *
 * Code generation for function 'median'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectEdge.h"
#include "median.h"
#include "detectEdge_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo c_emlrtRTEI = { 1, 14, "median",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\median.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 234, 9, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 140, 1, "median",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\median.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 234, 1, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRTEInfo n_emlrtRTEI = { 20, 19, "median",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\median.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 17, 19, "median",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\median.m"
};

/* Function Definitions */
real_T b_median(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T p;
  boolean_T b_p;
  int32_T midm1;
  int32_T exitg1;
  emxArray_int32_T *idx;
  int32_T i;
  emxArray_int32_T *iwork;
  int32_T n;
  int32_T i2;
  int32_T j;
  int32_T pEnd;
  int32_T c_p;
  int32_T q;
  int32_T qEnd;
  int32_T kEnd;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  p = false;
  b_p = false;
  midm1 = 0;
  do {
    exitg1 = 0;
    if (midm1 < 2) {
      if (x->size[midm1] != 0) {
        exitg1 = 1;
      } else {
        midm1++;
      }
    } else {
      b_p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (!b_p) {
  } else {
    p = true;
  }

  if (!p) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &o_emlrtRTEI,
      "Coder:toolbox:median_specialEmpty", 0);
  }

  if ((x->size[1] == 1) || (x->size[1] != 1)) {
    p = true;
  } else {
    p = false;
  }

  if (p) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &n_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (x->size[1] == 0) {
    y = rtNaN;
  } else {
    emxInit_int32_T1(sp, &idx, 2, &e_emlrtRTEI, true);
    i = idx->size[0] * idx->size[1];
    idx->size[0] = 1;
    idx->size[1] = x->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)idx, i, (int32_T)sizeof(int32_T),
                      &c_emlrtRTEI);
    midm1 = x->size[1];
    for (i = 0; i < midm1; i++) {
      idx->data[i] = 0;
    }

    emxInit_int32_T(sp, &iwork, 1, &f_emlrtRTEI, true);
    n = x->size[1] + 1;
    midm1 = x->size[1];
    i = iwork->size[0];
    iwork->size[0] = midm1;
    emxEnsureCapacity(sp, (emxArray__common *)iwork, i, (int32_T)sizeof(int32_T),
                      &d_emlrtRTEI);
    for (midm1 = 1; midm1 <= n - 2; midm1 += 2) {
      if ((x->data[midm1 - 1] <= x->data[midm1]) || muDoubleScalarIsNaN(x->
           data[midm1])) {
        p = true;
      } else {
        p = false;
      }

      if (p) {
        idx->data[midm1 - 1] = midm1;
        idx->data[midm1] = midm1 + 1;
      } else {
        idx->data[midm1 - 1] = midm1 + 1;
        idx->data[midm1] = midm1;
      }
    }

    if ((x->size[1] & 1) != 0) {
      idx->data[x->size[1] - 1] = x->size[1];
    }

    i = 2;
    while (i < n - 1) {
      i2 = i << 1;
      j = 1;
      for (pEnd = 1 + i; pEnd < n; pEnd = qEnd + i) {
        c_p = j;
        q = pEnd - 1;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }

        midm1 = 0;
        kEnd = qEnd - j;
        while (midm1 + 1 <= kEnd) {
          if ((x->data[idx->data[c_p - 1] - 1] <= x->data[idx->data[q] - 1]) ||
              muDoubleScalarIsNaN(x->data[idx->data[q] - 1])) {
            p = true;
          } else {
            p = false;
          }

          if (p) {
            iwork->data[midm1] = idx->data[c_p - 1];
            c_p++;
            if (c_p == pEnd) {
              while (q + 1 < qEnd) {
                midm1++;
                iwork->data[midm1] = idx->data[q];
                q++;
              }
            }
          } else {
            iwork->data[midm1] = idx->data[q];
            q++;
            if (q + 1 == qEnd) {
              while (c_p < pEnd) {
                midm1++;
                iwork->data[midm1] = idx->data[c_p - 1];
                c_p++;
              }
            }
          }

          midm1++;
        }

        for (midm1 = 0; midm1 + 1 <= kEnd; midm1++) {
          idx->data[(j + midm1) - 1] = iwork->data[midm1];
        }

        j = qEnd;
      }

      i = i2;
    }

    emxFree_int32_T(&iwork);
    midm1 = x->size[1] >> 1;
    if (muDoubleScalarIsNaN(x->data[idx->data[x->size[1] - 1] - 1])) {
      y = rtNaN;
    } else if ((x->size[1] & 1) == 0) {
      if (((x->data[idx->data[midm1 - 1] - 1] < 0.0) && (x->data[idx->data[midm1]
            - 1] >= 0.0)) || muDoubleScalarIsInf(x->data[idx->data[midm1 - 1] -
           1]) || muDoubleScalarIsInf(x->data[idx->data[midm1] - 1])) {
        y = (x->data[idx->data[midm1 - 1] - 1] + x->data[idx->data[midm1] - 1]) /
          2.0;
      } else {
        y = x->data[idx->data[midm1 - 1] - 1] + (x->data[idx->data[midm1] - 1] -
          x->data[idx->data[midm1 - 1] - 1]) / 2.0;
      }
    } else {
      y = x->data[idx->data[midm1] - 1];
    }

    emxFree_int32_T(&idx);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

void median(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  int32_T exitg1;
  int32_T i;
  emxArray_int32_T *iwork;
  int32_T loop_ub;
  emxArray_int32_T *idx;
  int32_T b_i;
  int32_T midm1;
  int32_T i2;
  int32_T c_i;
  real_T m;
  boolean_T c_p;
  int32_T b_i2;
  int32_T j;
  int32_T pEnd;
  int32_T d_p;
  int32_T q;
  int32_T qEnd;
  int32_T kEnd;
  emlrtStack st;
  boolean_T emlrtHadParallelError = false;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  p = false;
  b_p = false;
  k = 0;
  do {
    exitg1 = 0;
    if (k < 2) {
      if (x->size[k] != 0) {
        exitg1 = 1;
      } else {
        k++;
      }
    } else {
      b_p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (!b_p) {
  } else {
    p = true;
  }

  if (!p) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &o_emlrtRTEI,
      "Coder:toolbox:median_specialEmpty", 0);
  }

  if (((x->size[0] == 1) && (x->size[1] == 1)) || (x->size[0] != 1)) {
    p = true;
  } else {
    p = false;
  }

  if (p) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &n_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  k = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = x->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                      &c_emlrtRTEI);
    loop_ub = y->size[1];
    for (k = 0; k < loop_ub; k++) {
      y->data[y->size[0] * k] = rtNaN;
    }
  } else {
    k = x->size[1];
    emlrtEnterParallelRegion(sp, omp_in_parallel());

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(iwork,idx,b_i,midm1,i2,c_i,m,c_p,b_i2,j,pEnd,d_p,q,qEnd,kEnd) \
 firstprivate(st,emlrtHadParallelError)

    {
      try {
        st.prev = sp;
        st.tls = emlrtAllocTLS((emlrtStack *)sp, omp_get_thread_num());
        st.site = NULL;
        emxInit_int32_T(&st, &iwork, 1, &f_emlrtRTEI, true);
        emxInit_int32_T(&st, &idx, 1, &e_emlrtRTEI, true);
      } catch (...) {
        emlrtHadParallelError = true;
      }

#pragma omp for nowait

      for (i = 1; i <= k; i++) {
        if (emlrtHadParallelError)
          continue;
        try {
          b_i = i;
          midm1 = x->size[0];
          i2 = idx->size[0];
          idx->size[0] = midm1;
          emxEnsureCapacity(&st, (emxArray__common *)idx, i2, (int32_T)sizeof
                            (int32_T), &c_emlrtRTEI);
          for (i2 = 0; i2 < midm1; i2++) {
            idx->data[i2] = 0;
          }

          i2 = x->size[0] + 1;
          c_i = iwork->size[0];
          iwork->size[0] = midm1;
          emxEnsureCapacity(&st, (emxArray__common *)iwork, c_i, (int32_T)sizeof
                            (int32_T), &d_emlrtRTEI);
          for (midm1 = 1; midm1 <= i2 - 2; midm1 += 2) {
            m = x->data[midm1 + x->size[0] * (b_i - 1)];
            if ((x->data[(midm1 + x->size[0] * (b_i - 1)) - 1] <= m) ||
                muDoubleScalarIsNaN(m)) {
              c_p = true;
            } else {
              c_p = false;
            }

            if (c_p) {
              idx->data[midm1 - 1] = midm1;
              idx->data[midm1] = midm1 + 1;
            } else {
              idx->data[midm1 - 1] = midm1 + 1;
              idx->data[midm1] = midm1;
            }
          }

          c_i = x->size[0];
          if ((c_i & 1) != 0) {
            c_i = x->size[0] - 1;
            midm1 = x->size[0];
            idx->data[c_i] = midm1;
          }

          c_i = 2;
          while (c_i < i2 - 1) {
            b_i2 = c_i << 1;
            j = 1;
            for (pEnd = 1 + c_i; pEnd < i2; pEnd = qEnd + c_i) {
              d_p = j;
              q = pEnd;
              qEnd = j + b_i2;
              if (qEnd > i2) {
                qEnd = i2;
              }

              midm1 = 0;
              kEnd = qEnd - j;
              while (midm1 + 1 <= kEnd) {
                m = x->data[(idx->data[q - 1] + x->size[0] * (b_i - 1)) - 1];
                if ((x->data[(idx->data[d_p - 1] + x->size[0] * (b_i - 1)) - 1] <=
                     m) || muDoubleScalarIsNaN(m)) {
                  c_p = true;
                } else {
                  c_p = false;
                }

                if (c_p) {
                  iwork->data[midm1] = idx->data[d_p - 1];
                  d_p++;
                  if (d_p == pEnd) {
                    while (q < qEnd) {
                      midm1++;
                      iwork->data[midm1] = idx->data[q - 1];
                      q++;
                    }
                  }
                } else {
                  iwork->data[midm1] = idx->data[q - 1];
                  q++;
                  if (q == qEnd) {
                    while (d_p < pEnd) {
                      midm1++;
                      iwork->data[midm1] = idx->data[d_p - 1];
                      d_p++;
                    }
                  }
                }

                midm1++;
              }

              for (midm1 = 0; midm1 + 1 <= kEnd; midm1++) {
                idx->data[(j + midm1) - 1] = iwork->data[midm1];
              }

              j = qEnd;
            }

            c_i = b_i2;
          }

          i2 = x->size[0];
          midm1 = i2 >> 1;
          i2 = x->size[0];
          if (muDoubleScalarIsNaN(x->data[(idx->data[i2 - 1] + x->size[0] * (b_i
                 - 1)) - 1])) {
            m = rtNaN;
          } else {
            i2 = x->size[0];
            if ((i2 & 1) == 0) {
              if (((x->data[(idx->data[midm1 - 1] + x->size[0] * (b_i - 1)) - 1]
                    < 0.0) && (x->data[(idx->data[midm1] + x->size[0] * (b_i - 1))
                               - 1] >= 0.0)) || muDoubleScalarIsInf(x->data
                   [(idx->data[midm1 - 1] + x->size[0] * (b_i - 1)) - 1]) ||
                  muDoubleScalarIsInf(x->data[(idx->data[midm1] + x->size[0] *
                    (b_i - 1)) - 1])) {
                m = (x->data[(idx->data[midm1 - 1] + x->size[0] * (b_i - 1)) - 1]
                     + x->data[(idx->data[midm1] + x->size[0] * (b_i - 1)) - 1])
                  / 2.0;
              } else {
                m = x->data[(idx->data[midm1 - 1] + x->size[0] * (b_i - 1)) - 1]
                  + (x->data[(idx->data[midm1] + x->size[0] * (b_i - 1)) - 1] -
                     x->data[(idx->data[midm1 - 1] + x->size[0] * (b_i - 1)) - 1])
                  / 2.0;
              }
            } else {
              m = x->data[(idx->data[midm1] + x->size[0] * (b_i - 1)) - 1];
            }
          }

          y->data[b_i - 1] = m;
        } catch (...) {
          emlrtHadParallelError = true;
        }
      }

      if (!emlrtHadParallelError) {
        emlrtHeapReferenceStackLeaveScope(&st, 2);
        emxFree_int32_T(&idx);
        emxFree_int32_T(&iwork);
      }
    }

    emlrtExitParallelRegion(sp, omp_in_parallel());
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (median.cpp) */
