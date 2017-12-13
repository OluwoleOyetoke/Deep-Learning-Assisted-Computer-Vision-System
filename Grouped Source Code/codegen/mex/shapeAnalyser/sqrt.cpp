/*
 * sqrt.cpp
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "shapeAnalyser.h"
#include "sqrt.h"

/* Function Definitions */
void b_sqrt(real_T *x)
{
  *x = muDoubleScalarSqrt(*x);
}

/* End of code generation (sqrt.cpp) */
