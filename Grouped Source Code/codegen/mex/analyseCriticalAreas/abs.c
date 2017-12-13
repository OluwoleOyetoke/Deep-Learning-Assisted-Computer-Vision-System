/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "analyseCriticalAreas.h"
#include "abs.h"
#include "blas.h"
#include "libmwordfilt2.h"

/* Function Definitions */
void b_abs(const real_T x_data[], const int32_T x_size[1], real_T y_data[],
           int32_T y_size[1])
{
  int32_T k;
  y_size[0] = (int16_T)x_size[0];
  for (k = 0; k + 1 <= x_size[0]; k++) {
    y_data[k] = muDoubleScalarAbs(x_data[k]);
  }
}

/* End of code generation (abs.c) */
