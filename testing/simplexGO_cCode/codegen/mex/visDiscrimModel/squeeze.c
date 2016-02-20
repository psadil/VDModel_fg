/*
 * squeeze.c
 *
 * Code generation for function 'squeeze'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "squeeze.h"
#include "visDiscrimModel_emxutil.h"

/* Function Definitions */
void b_squeeze(const emxArray_real_T *a, emxArray_real_T *b)
{
  int32_T k;
  int32_T i2;
  int32_T sqsz[4];
  k = 4;
  while ((k > 2) && (a->size[k - 1] == 1)) {
    k--;
  }

  if (k <= 2) {
    k = a->size[1];
    i2 = b->size[0] * b->size[1] * b->size[2];
    b->size[0] = 1;
    b->size[1] = k;
    b->size[2] = 1;
    emxEnsureCapacity((emxArray__common *)b, i2, (int32_T)sizeof(real_T));
    i2 = a->size[1] * a->size[2] * a->size[3];
    for (k = 0; k + 1 <= i2; k++) {
      b->data[k] = a->data[k];
    }
  } else {
    for (i2 = 0; i2 < 4; i2++) {
      sqsz[i2] = 1;
    }

    k = 0;
    if (a->size[1] != 1) {
      sqsz[0] = a->size[1];
      k = 1;
    }

    if (a->size[2] != 1) {
      sqsz[k] = a->size[2];
      k++;
    }

    if (a->size[3] != 1) {
      sqsz[k] = a->size[3];
    }

    i2 = b->size[0] * b->size[1] * b->size[2];
    b->size[0] = sqsz[0];
    b->size[1] = sqsz[1];
    b->size[2] = sqsz[2];
    emxEnsureCapacity((emxArray__common *)b, i2, (int32_T)sizeof(real_T));
    i2 = a->size[1] * a->size[2] * a->size[3];
    for (k = 0; k + 1 <= i2; k++) {
      b->data[k] = a->data[k];
    }
  }
}

void squeeze(const emxArray_real_T *a, emxArray_real_T *b)
{
  int32_T k;
  int32_T i1;
  int32_T sqsz[3];
  k = 3;
  while ((k > 2) && (a->size[2] == 1)) {
    k = 2;
  }

  if (k <= 2) {
    i1 = b->size[0] * b->size[1];
    b->size[0] = 1;
    b->size[1] = a->size[1];
    emxEnsureCapacity((emxArray__common *)b, i1, (int32_T)sizeof(real_T));
    i1 = a->size[1] * a->size[2];
    for (k = 0; k + 1 <= i1; k++) {
      b->data[k] = a->data[k];
    }
  } else {
    for (i1 = 0; i1 < 3; i1++) {
      sqsz[i1] = 1;
    }

    k = 0;
    if (a->size[1] != 1) {
      sqsz[0] = a->size[1];
      k = 1;
    }

    if (a->size[2] != 1) {
      sqsz[k] = a->size[2];
    }

    i1 = b->size[0] * b->size[1];
    b->size[0] = sqsz[0];
    b->size[1] = sqsz[1];
    emxEnsureCapacity((emxArray__common *)b, i1, (int32_T)sizeof(real_T));
    i1 = a->size[1] * a->size[2];
    for (k = 0; k + 1 <= i1; k++) {
      b->data[k] = a->data[k];
    }
  }
}

/* End of code generation (squeeze.c) */
