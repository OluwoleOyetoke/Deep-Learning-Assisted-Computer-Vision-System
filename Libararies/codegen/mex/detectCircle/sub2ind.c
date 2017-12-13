/*
 * sub2ind.c
 *
 * Code generation for function 'sub2ind'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "detectCircle.h"
#include "sub2ind.h"
#include "libmwgetnumcores.h"
#include "libmwgrayto8.h"
#include "libmwimfilter.h"
#include "libmwimregionalmax.h"
#include "libmwippfilter.h"
#include "libmwippreconstruct.h"
#include "libmwordfilt2.h"
#include "libmwtbbhist.h"

/* Function Definitions */
boolean_T allinrange(const emxArray_real_T *x, int32_T hi)
{
  boolean_T p;
  int32_T k;
  int32_T exitg1;
  boolean_T b0;
  k = 0;
  do {
    exitg1 = 0;
    if (k <= x->size[0] - 1) {
      if ((x->data[k] >= 1.0) && (hi >= x->data[k])) {
        b0 = true;
      } else {
        b0 = false;
      }

      if (!b0) {
        p = false;
        exitg1 = 1;
      } else {
        k++;
      }
    } else {
      p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return p;
}

/* End of code generation (sub2ind.c) */
