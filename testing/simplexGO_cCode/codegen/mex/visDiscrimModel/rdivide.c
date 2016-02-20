/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "rdivide.h"
#include "visDiscrimModel_emxutil.h"

/* Function Definitions */
void b_rdivide(const emxArray_real_T *x, const emxArray_real_T *y,
               emxArray_real_T *z)
{
  int32_T i6;
  int32_T loop_ub;
  i6 = z->size[0] * z->size[1];
  z->size[0] = x->size[0];
  z->size[1] = x->size[1];
  emxEnsureCapacity((emxArray__common *)z, i6, (int32_T)sizeof(real_T));
  loop_ub = x->size[0] * x->size[1];
  for (i6 = 0; i6 < loop_ub; i6++) {
    z->data[i6] = x->data[i6] / y->data[i6];
  }
}

void c_rdivide(const emxArray_real_T *y, emxArray_real_T *z)
{
  int32_T i7;
  int32_T loop_ub;
  i7 = z->size[0] * z->size[1];
  z->size[0] = y->size[0];
  z->size[1] = y->size[1];
  emxEnsureCapacity((emxArray__common *)z, i7, (int32_T)sizeof(real_T));
  loop_ub = y->size[0] * y->size[1];
  for (i7 = 0; i7 < loop_ub; i7++) {
    z->data[i7] = 1.0 / y->data[i7];
  }
}

void rdivide(const emxArray_real_T *x, real_T y, emxArray_real_T *z)
{
  int32_T i3;
  int32_T loop_ub;
  i3 = z->size[0] * z->size[1];
  z->size[0] = x->size[0];
  z->size[1] = x->size[1];
  emxEnsureCapacity((emxArray__common *)z, i3, (int32_T)sizeof(real_T));
  loop_ub = x->size[0] * x->size[1];
  for (i3 = 0; i3 < loop_ub; i3++) {
    z->data[i3] = x->data[i3] / y;
  }
}

/* End of code generation (rdivide.c) */
