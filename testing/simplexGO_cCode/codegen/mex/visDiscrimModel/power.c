/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "power.h"
#include "visDiscrimModel_emxutil.h"

/* Function Definitions */
void power(const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T uv1[2];
  int32_T i5;
  int32_T k;
  for (i5 = 0; i5 < 2; i5++) {
    uv1[i5] = (uint32_T)a->size[i5];
  }

  i5 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv1[0];
  y->size[1] = (int32_T)uv1[1];
  emxEnsureCapacity((emxArray__common *)y, i5, (int32_T)sizeof(real_T));
  i5 = (int32_T)uv1[0] * (int32_T)uv1[1];
  for (k = 0; k < i5; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
