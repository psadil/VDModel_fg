/*
 * cat.c
 *
 * Code generation for function 'cat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "cat.h"
#include "visDiscrimModel_emxutil.h"

/* Function Definitions */
void cat(const emxArray_real_T *varargin_1, const emxArray_real_T *varargin_2,
         emxArray_real_T *y)
{
  uint32_T sz1[2];
  uint32_T ysize[2];
  int32_T iy;
  int32_T i;
  int32_T ix;
  int32_T l;
  sz1[0] = (uint32_T)varargin_1->size[0];
  sz1[1] = 1U;
  for (iy = 0; iy < 2; iy++) {
    ysize[iy] = sz1[iy];
  }

  ysize[0] += varargin_2->size[0];
  iy = y->size[0] * y->size[1];
  y->size[0] = (int32_T)ysize[0];
  y->size[1] = (int32_T)ysize[1];
  emxEnsureCapacity((emxArray__common *)y, iy, (int32_T)sizeof(real_T));
  iy = 0;
  for (i = 0; i < (int32_T)ysize[1]; i++) {
    ix = i * varargin_1->size[0];
    for (l = 1; l <= varargin_1->size[0]; l++) {
      y->data[iy] = varargin_1->data[ix];
      ix++;
      iy++;
    }

    ix = i * varargin_2->size[0];
    for (l = 1; l <= varargin_2->size[0]; l++) {
      y->data[iy] = varargin_2->data[ix];
      ix++;
      iy++;
    }
  }
}

/* End of code generation (cat.c) */
