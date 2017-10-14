/*
 * sort1.c
 *
 * Code generation for function 'sort1'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "sort1.h"
#include "detectCircle_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "sortIdx.h"
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
static emlrtRSInfo jd_emlrtRSI = { 82, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo kd_emlrtRSI = { 80, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo ld_emlrtRSI = { 77, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo md_emlrtRSI = { 74, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo nd_emlrtRSI = { 72, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo od_emlrtRSI = { 69, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo pd_emlrtRSI = { 48, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo ij_emlrtRSI = { 66, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo kj_emlrtRSI = { 65, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo lj_emlrtRSI = { 361, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo mj_emlrtRSI = { 375, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo nj_emlrtRSI = { 384, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRTEInfo lb_emlrtRTEI = { 1, 20, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRTEInfo sc_emlrtRTEI = { 50, 1, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

/* Function Definitions */
void b_sort(const emlrtStack *sp, emxArray_real_T *x, emxArray_int32_T *idx)
{
  int32_T iv39[2];
  int32_T k;
  int32_T loop_ub;
  emxArray_real_T *xwork;
  emxArray_int32_T *iwork;
  emxArray_real_T *b_xwork;
  emxArray_int32_T *b_iwork;
  emxArray_int32_T *b_idx;
  emxArray_real_T *b_x;
  int32_T preSortLevel;
  int32_T offset;
  real_T x4[4];
  int32_T idx4[4];
  int32_T m;
  int32_T nNaNs;
  int32_T ib;
  boolean_T overflow;
  int32_T b_k;
  int32_T wOffset;
  int8_T perm[4];
  int32_T i4;
  int32_T nNonNaN;
  int32_T nBlocks;
  int32_T c_iwork[256];
  real_T c_xwork[256];
  int32_T b;
  int32_T bLen;
  int32_T bLen2;
  int32_T nPairs;
  int32_T exitg1;
  jmp_buf * volatile emlrtJBStack;
  emlrtStack st;
  emlrtStack b_st;
  jmp_buf b_emlrtJBEnviron;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  boolean_T emlrtHadParallelError = false;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &ij_emlrtRSI;
  for (k = 0; k < 2; k++) {
    iv39[k] = x->size[k];
  }

  k = idx->size[0] * idx->size[1];
  idx->size[0] = iv39[0];
  idx->size[1] = 1;
  emxEnsureCapacity(&st, (emxArray__common *)idx, k, (int32_T)sizeof(int32_T),
                    &lb_emlrtRTEI);
  loop_ub = iv39[0];
  for (k = 0; k < loop_ub; k++) {
    idx->data[k] = 0;
  }

  emlrtEnterParallelRegion(&st, omp_in_parallel());
  emlrtPushJmpBuf(&st, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(st.tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(xwork,iwork,b_xwork,b_iwork,b_idx,b_x,preSortLevel,offset,m,nNaNs,ib,overflow,b_k,wOffset,i4,nNonNaN,nBlocks,b,bLen,bLen2,nPairs,exitg1,b_emlrtJBEnviron) \
 firstprivate(b_st,st,c_st,d_st,e_st,f_st,x4,idx4,perm,emlrtHadParallelError,c_iwork,c_xwork)

  {
    if (setjmp(b_emlrtJBEnviron) == 0) {
      b_st.prev = &st;
      b_st.tls = emlrtAllocTLS(&st, omp_get_thread_num());
      b_st.site = NULL;
      emlrtSetJmpBuf(&b_st, &b_emlrtJBEnviron);
      c_st.prev = &b_st;
      c_st.tls = b_st.tls;
      d_st.prev = &c_st;
      d_st.tls = c_st.tls;
      e_st.prev = &d_st;
      e_st.tls = d_st.tls;
      f_st.prev = &e_st;
      f_st.tls = e_st.tls;
      emxInit_real_T1(&b_st, &xwork, 1, &wc_emlrtRTEI, true);
      emxInit_int32_T(&b_st, &iwork, 1, &vc_emlrtRTEI, true);
      emxInit_real_T1(&b_st, &b_xwork, 1, &lb_emlrtRTEI, true);
      emxInit_int32_T(&b_st, &b_iwork, 1, &lb_emlrtRTEI, true);
      emxInit_int32_T(&b_st, &b_idx, 1, &lb_emlrtRTEI, true);
      emxInit_real_T1(&b_st, &b_x, 1, &lb_emlrtRTEI, true);
    } else {
      emlrtHadParallelError = true;
    }

#pragma omp for nowait

    for (k = 1; k < 2; k++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(b_emlrtJBEnviron) == 0) {
        c_st.site = &kj_emlrtRSI;
        d_st.site = &sd_emlrtRSI;
        preSortLevel = x->size[0];
        offset = b_x->size[0];
        b_x->size[0] = preSortLevel;
        emxEnsureCapacity(&d_st, (emxArray__common *)b_x, offset, (int32_T)
                          sizeof(real_T), &lb_emlrtRTEI);
        for (offset = 0; offset < preSortLevel; offset++) {
          b_x->data[offset] = x->data[offset];
        }

        preSortLevel = idx->size[0];
        offset = b_idx->size[0];
        b_idx->size[0] = preSortLevel;
        emxEnsureCapacity(&d_st, (emxArray__common *)b_idx, offset, (int32_T)
                          sizeof(int32_T), &lb_emlrtRTEI);
        for (offset = 0; offset < preSortLevel; offset++) {
          b_idx->data[offset] = idx->data[offset];
        }

        offset = x->size[0];
        for (preSortLevel = 0; preSortLevel < 4; preSortLevel++) {
          x4[preSortLevel] = 0.0;
          idx4[preSortLevel] = 0;
        }

        m = idx->size[0];
        preSortLevel = b_iwork->size[0];
        b_iwork->size[0] = m;
        emxEnsureCapacity(&d_st, (emxArray__common *)b_iwork, preSortLevel,
                          (int32_T)sizeof(int32_T), &tc_emlrtRTEI);
        preSortLevel = b_iwork->size[0];
        m = b_iwork->size[0];
        b_iwork->size[0] = preSortLevel;
        emxEnsureCapacity(&d_st, (emxArray__common *)b_iwork, m, (int32_T)sizeof
                          (int32_T), &lb_emlrtRTEI);
        for (m = 0; m < preSortLevel; m++) {
          b_iwork->data[m] = 0;
        }

        m = x->size[0];
        preSortLevel = b_xwork->size[0];
        b_xwork->size[0] = m;
        emxEnsureCapacity(&d_st, (emxArray__common *)b_xwork, preSortLevel,
                          (int32_T)sizeof(real_T), &uc_emlrtRTEI);
        preSortLevel = b_xwork->size[0];
        m = b_xwork->size[0];
        b_xwork->size[0] = preSortLevel;
        emxEnsureCapacity(&d_st, (emxArray__common *)b_xwork, m, (int32_T)sizeof
                          (real_T), &lb_emlrtRTEI);
        for (m = 0; m < preSortLevel; m++) {
          b_xwork->data[m] = 0.0;
        }

        nNaNs = 0;
        ib = 0;
        e_st.site = &xd_emlrtRSI;
        m = x->size[0];
        if (1 > m) {
          overflow = false;
        } else {
          m = x->size[0];
          overflow = (m > 2147483646);
        }

        if (overflow) {
          f_st.site = &eb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        for (b_k = 0; b_k + 1 <= offset; b_k++) {
          if (muDoubleScalarIsNaN(b_x->data[b_k])) {
            b_idx->data[(offset - nNaNs) - 1] = b_k + 1;
            b_xwork->data[(offset - nNaNs) - 1] = b_x->data[b_k];
            nNaNs++;
          } else {
            ib++;
            idx4[ib - 1] = b_k + 1;
            x4[ib - 1] = b_x->data[b_k];
            if (ib == 4) {
              preSortLevel = b_k - nNaNs;
              if (x4[0] >= x4[1]) {
                m = 1;
                ib = 2;
              } else {
                m = 2;
                ib = 1;
              }

              if (x4[2] >= x4[3]) {
                wOffset = 3;
                i4 = 4;
              } else {
                wOffset = 4;
                i4 = 3;
              }

              if (x4[m - 1] >= x4[wOffset - 1]) {
                if (x4[ib - 1] >= x4[wOffset - 1]) {
                  perm[0] = (int8_T)m;
                  perm[1] = (int8_T)ib;
                  perm[2] = (int8_T)wOffset;
                  perm[3] = (int8_T)i4;
                } else if (x4[ib - 1] >= x4[i4 - 1]) {
                  perm[0] = (int8_T)m;
                  perm[1] = (int8_T)wOffset;
                  perm[2] = (int8_T)ib;
                  perm[3] = (int8_T)i4;
                } else {
                  perm[0] = (int8_T)m;
                  perm[1] = (int8_T)wOffset;
                  perm[2] = (int8_T)i4;
                  perm[3] = (int8_T)ib;
                }
              } else if (x4[m - 1] >= x4[i4 - 1]) {
                if (x4[ib - 1] >= x4[i4 - 1]) {
                  perm[0] = (int8_T)wOffset;
                  perm[1] = (int8_T)m;
                  perm[2] = (int8_T)ib;
                  perm[3] = (int8_T)i4;
                } else {
                  perm[0] = (int8_T)wOffset;
                  perm[1] = (int8_T)m;
                  perm[2] = (int8_T)i4;
                  perm[3] = (int8_T)ib;
                }
              } else {
                perm[0] = (int8_T)wOffset;
                perm[1] = (int8_T)i4;
                perm[2] = (int8_T)m;
                perm[3] = (int8_T)ib;
              }

              b_idx->data[preSortLevel - 3] = idx4[perm[0] - 1];
              b_idx->data[preSortLevel - 2] = idx4[perm[1] - 1];
              b_idx->data[preSortLevel - 1] = idx4[perm[2] - 1];
              b_idx->data[preSortLevel] = idx4[perm[3] - 1];
              b_x->data[preSortLevel - 3] = x4[perm[0] - 1];
              b_x->data[preSortLevel - 2] = x4[perm[1] - 1];
              b_x->data[preSortLevel - 1] = x4[perm[2] - 1];
              b_x->data[preSortLevel] = x4[perm[3] - 1];
              ib = 0;
            }
          }
        }

        m = x->size[0] - 1;
        wOffset = m - nNaNs;
        if (ib > 0) {
          for (preSortLevel = 0; preSortLevel < 4; preSortLevel++) {
            perm[preSortLevel] = 0;
          }

          if (ib == 1) {
            perm[0] = 1;
          } else if (ib == 2) {
            if (x4[0] >= x4[1]) {
              perm[0] = 1;
              perm[1] = 2;
            } else {
              perm[0] = 2;
              perm[1] = 1;
            }
          } else if (x4[0] >= x4[1]) {
            if (x4[1] >= x4[2]) {
              perm[0] = 1;
              perm[1] = 2;
              perm[2] = 3;
            } else if (x4[0] >= x4[2]) {
              perm[0] = 1;
              perm[1] = 3;
              perm[2] = 2;
            } else {
              perm[0] = 3;
              perm[1] = 1;
              perm[2] = 2;
            }
          } else if (x4[0] >= x4[2]) {
            perm[0] = 2;
            perm[1] = 1;
            perm[2] = 3;
          } else if (x4[1] >= x4[2]) {
            perm[0] = 2;
            perm[1] = 3;
            perm[2] = 1;
          } else {
            perm[0] = 3;
            perm[1] = 2;
            perm[2] = 1;
          }

          e_st.site = &yd_emlrtRSI;
          if (ib > 2147483646) {
            f_st.site = &eb_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }

          for (b_k = 1; b_k <= ib; b_k++) {
            b_idx->data[(wOffset - ib) + b_k] = idx4[perm[b_k - 1] - 1];
            b_x->data[(wOffset - ib) + b_k] = x4[perm[b_k - 1] - 1];
          }
        }

        m = (nNaNs >> 1) + 1;
        e_st.site = &ae_emlrtRSI;
        for (b_k = 1; b_k < m; b_k++) {
          preSortLevel = b_idx->data[wOffset + b_k];
          b_idx->data[wOffset + b_k] = b_idx->data[offset - b_k];
          b_idx->data[offset - b_k] = preSortLevel;
          b_x->data[wOffset + b_k] = b_xwork->data[offset - b_k];
          b_x->data[offset - b_k] = b_xwork->data[wOffset + b_k];
        }

        if ((nNaNs & 1) != 0) {
          b_x->data[wOffset + m] = b_xwork->data[wOffset + m];
        }

        offset = iwork->size[0];
        iwork->size[0] = b_iwork->size[0];
        emxEnsureCapacity(&c_st, (emxArray__common *)iwork, offset, (int32_T)
                          sizeof(int32_T), &lb_emlrtRTEI);
        preSortLevel = b_iwork->size[0];
        for (offset = 0; offset < preSortLevel; offset++) {
          iwork->data[offset] = b_iwork->data[offset];
        }

        offset = xwork->size[0];
        xwork->size[0] = b_xwork->size[0];
        emxEnsureCapacity(&c_st, (emxArray__common *)xwork, offset, (int32_T)
                          sizeof(real_T), &lb_emlrtRTEI);
        preSortLevel = b_xwork->size[0];
        for (offset = 0; offset < preSortLevel; offset++) {
          xwork->data[offset] = b_xwork->data[offset];
        }

        offset = x->size[0];
        nNonNaN = offset - nNaNs;
        preSortLevel = 2;
        if (nNonNaN > 1) {
          offset = x->size[0];
          if (offset >= 256) {
            nBlocks = nNonNaN >> 8;
            if (nBlocks > 0) {
              d_st.site = &td_emlrtRSI;
              for (i4 = 1; i4 <= nBlocks; i4++) {
                d_st.site = &ud_emlrtRSI;
                offset = (i4 - 1) << 8;
                for (b = 0; b < 6; b++) {
                  bLen = 1 << (b + 2);
                  bLen2 = bLen << 1;
                  nPairs = 256 >> (b + 3);
                  e_st.site = &be_emlrtRSI;
                  for (b_k = 1; b_k <= nPairs; b_k++) {
                    m = offset + (b_k - 1) * bLen2;
                    e_st.site = &ce_emlrtRSI;
                    for (preSortLevel = 0; preSortLevel + 1 <= bLen2;
                         preSortLevel++) {
                      c_iwork[preSortLevel] = b_idx->data[m + preSortLevel];
                      c_xwork[preSortLevel] = b_x->data[m + preSortLevel];
                    }

                    wOffset = 0;
                    ib = bLen;
                    preSortLevel = m - 1;
                    do {
                      exitg1 = 0;
                      preSortLevel++;
                      if (c_xwork[wOffset] >= c_xwork[ib]) {
                        b_idx->data[preSortLevel] = c_iwork[wOffset];
                        b_x->data[preSortLevel] = c_xwork[wOffset];
                        if (wOffset + 1 < bLen) {
                          wOffset++;
                        } else {
                          exitg1 = 1;
                        }
                      } else {
                        b_idx->data[preSortLevel] = c_iwork[ib];
                        b_x->data[preSortLevel] = c_xwork[ib];
                        if (ib + 1 < bLen2) {
                          ib++;
                        } else {
                          preSortLevel = (preSortLevel - wOffset) + 1;
                          e_st.site = &de_emlrtRSI;
                          while (wOffset + 1 <= bLen) {
                            b_idx->data[preSortLevel + wOffset] =
                              c_iwork[wOffset];
                            b_x->data[preSortLevel + wOffset] = c_xwork[wOffset];
                            wOffset++;
                          }

                          exitg1 = 1;
                        }
                      }
                    } while (exitg1 == 0);
                  }
                }
              }

              preSortLevel = nBlocks << 8;
              m = nNonNaN - preSortLevel;
              if (m > 0) {
                d_st.site = &vd_emlrtRSI;
                b_merge_block(&d_st, b_idx, b_x, preSortLevel, m, 2, iwork,
                              xwork);
              }

              preSortLevel = 8;
            }
          }

          d_st.site = &wd_emlrtRSI;
          b_merge_block(&d_st, b_idx, b_x, 0, nNonNaN, preSortLevel, iwork,
                        xwork);
        }

        if ((nNaNs > 0) && (nNonNaN > 0)) {
          d_st.site = &lj_emlrtRSI;
          e_st.site = &mj_emlrtRSI;
          if (nNaNs > 2147483646) {
            f_st.site = &eb_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }

          for (b_k = 0; b_k + 1 <= nNaNs; b_k++) {
            xwork->data[b_k] = b_x->data[nNonNaN + b_k];
            iwork->data[b_k] = b_idx->data[nNonNaN + b_k];
          }

          for (b_k = nNonNaN - 1; b_k + 1 > 0; b_k--) {
            b_x->data[nNaNs + b_k] = b_x->data[b_k];
            b_idx->data[nNaNs + b_k] = b_idx->data[b_k];
          }

          e_st.site = &nj_emlrtRSI;
          for (b_k = 0; b_k + 1 <= nNaNs; b_k++) {
            b_x->data[b_k] = xwork->data[b_k];
            b_idx->data[b_k] = iwork->data[b_k];
          }
        }

        preSortLevel = b_idx->size[0];
        for (offset = 0; offset < preSortLevel; offset++) {
          idx->data[offset] = b_idx->data[offset];
        }

        preSortLevel = b_x->size[0];
        for (offset = 0; offset < preSortLevel; offset++) {
          x->data[offset] = b_x->data[offset];
        }
      } else {
        emlrtHadParallelError = true;
      }
    }

    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&b_st, 6);
      emxFree_real_T(&b_x);
      emxFree_int32_T(&b_idx);
      emxFree_int32_T(&b_iwork);
      emxFree_real_T(&b_xwork);
      emxFree_int32_T(&iwork);
      emxFree_real_T(&xwork);
    }
  }

  emlrtPopJmpBuf(&st, &emlrtJBStack);
  emlrtExitParallelRegion(&st, omp_in_parallel());
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void sort(const emlrtStack *sp, emxArray_real_T *x)
{
  int32_T dim;
  emxArray_real_T *vwork;
  int32_T i30;
  int32_T pagesize;
  int32_T i;
  int32_T vstride;
  int32_T k;
  int32_T npages;
  emxArray_int32_T *mk_emlrtRSI;
  int32_T j;
  int32_T idx0;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  dim = 1;
  if (x->size[0] != 1) {
    dim = 0;
  }

  emxInit_real_T1(sp, &vwork, 1, &sc_emlrtRTEI, true);
  st.site = &pd_emlrtRSI;
  i30 = x->size[dim];
  pagesize = x->size[dim];
  i = vwork->size[0];
  vwork->size[0] = pagesize;
  emxEnsureCapacity(sp, (emxArray__common *)vwork, i, (int32_T)sizeof(real_T),
                    &lb_emlrtRTEI);
  st.site = &od_emlrtRSI;
  vstride = 1;
  k = 1;
  while (k <= dim) {
    vstride *= x->size[0];
    k = 2;
  }

  npages = 1;
  k = dim + 2;
  while (k < 3) {
    npages *= x->size[1];
    k = 3;
  }

  pagesize = x->size[dim] * vstride;
  st.site = &nd_emlrtRSI;
  if ((!(1 > npages)) && (npages > 2147483646)) {
    b_st.site = &eb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  i = 1;
  emxInit_int32_T(sp, &mk_emlrtRSI, 1, &lb_emlrtRTEI, true);
  while (i <= npages) {
    dim = (i - 1) * pagesize;
    st.site = &md_emlrtRSI;
    if ((!(1 > vstride)) && (vstride > 2147483646)) {
      b_st.site = &eb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (j = 0; j + 1 <= vstride; j++) {
      idx0 = dim + j;
      st.site = &ld_emlrtRSI;
      if ((!(1 > i30)) && (i30 > 2147483646)) {
        b_st.site = &eb_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = 0; k + 1 <= i30; k++) {
        vwork->data[k] = x->data[idx0 + k * vstride];
      }

      st.site = &kd_emlrtRSI;
      sortIdx(&st, vwork, mk_emlrtRSI);
      st.site = &jd_emlrtRSI;
      for (k = 0; k + 1 <= i30; k++) {
        x->data[idx0 + k * vstride] = vwork->data[k];
      }
    }

    i++;
  }

  emxFree_int32_T(&mk_emlrtRSI);
  emxFree_real_T(&vwork);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (sort1.c) */
