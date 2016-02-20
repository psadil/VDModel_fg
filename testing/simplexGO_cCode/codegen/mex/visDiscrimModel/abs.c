/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "abs.h"
#include "visDiscrimModel_emxutil.h"

/* Function Definitions */
void b_abs(const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T uv0[2];
  int32_T i4;
  int32_T k;
  for (i4 = 0; i4 < 2; i4++) {
    uv0[i4] = (uint32_T)x->size[i4];
  }

  i4 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv0[0];
  y->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity((emxArray__common *)y, i4, (int32_T)sizeof(real_T));
  i4 = x->size[0] * x->size[1];
  for (k = 0; k < i4; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

void c_abs(const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T uv2[2];
  int32_T k;
  for (k = 0; k < 2; k++) {
    uv2[k] = (uint32_T)x->size[k];
  }

  k = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int32_T)uv2[1];
  emxEnsureCapacity((emxArray__common *)y, k, (int32_T)sizeof(real_T));
  for (k = 0; k < x->size[1]; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

/* End of code generation (abs.c) */
