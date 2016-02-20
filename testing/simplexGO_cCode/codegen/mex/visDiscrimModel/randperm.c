/*
 * randperm.c
 *
 * Code generation for function 'randperm'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "randperm.h"
#include "visDiscrimModel_emxutil.h"
#include "rand.h"
#include "visDiscrimModel_data.h"

/* Function Definitions */
void randperm(real_T n, emxArray_real_T *p)
{
  emxArray_int32_T *idx;
  int32_T i;
  int32_T k;
  emxArray_int32_T *iwork;
  int32_T b_n;
  boolean_T b_p;
  int32_T i2;
  int32_T j;
  int32_T pEnd;
  int32_T c_p;
  int32_T q;
  int32_T qEnd;
  int32_T kEnd;
  emxArray_real_T *b_idx;
  int32_T d_p[2];
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_int32_T(&idx, 2, true);
  b_rand(n, p);
  i = idx->size[0] * idx->size[1];
  idx->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)idx, i, (int32_T)sizeof(int32_T));
  k = p->size[1];
  i = idx->size[0] * idx->size[1];
  idx->size[1] = k;
  emxEnsureCapacity((emxArray__common *)idx, i, (int32_T)sizeof(int32_T));
  k = p->size[1];
  for (i = 0; i < k; i++) {
    idx->data[i] = 0;
  }

  if (p->size[1] == 0) {
  } else {
    b_emxInit_int32_T(&iwork, 1, true);
    b_n = p->size[1] + 1;
    k = p->size[1];
    i = iwork->size[0];
    iwork->size[0] = k;
    emxEnsureCapacity((emxArray__common *)iwork, i, (int32_T)sizeof(int32_T));
    for (k = 1; k <= b_n - 2; k += 2) {
      if ((p->data[k - 1] <= p->data[k]) || muDoubleScalarIsNaN(p->data[k])) {
        b_p = true;
      } else {
        b_p = false;
      }

      if (b_p) {
        idx->data[k - 1] = k;
        idx->data[k] = k + 1;
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }

    if ((p->size[1] & 1) != 0) {
      idx->data[p->size[1] - 1] = p->size[1];
    }

    i = 2;
    while (i < b_n - 1) {
      i2 = i << 1;
      j = 1;
      for (pEnd = 1 + i; pEnd < b_n; pEnd = qEnd + i) {
        c_p = j;
        q = pEnd - 1;
        qEnd = j + i2;
        if (qEnd > b_n) {
          qEnd = b_n;
        }

        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          if ((p->data[idx->data[c_p - 1] - 1] <= p->data[idx->data[q] - 1]) ||
              muDoubleScalarIsNaN(p->data[idx->data[q] - 1])) {
            b_p = true;
          } else {
            b_p = false;
          }

          if (b_p) {
            iwork->data[k] = idx->data[c_p - 1];
            c_p++;
            if (c_p == pEnd) {
              while (q + 1 < qEnd) {
                k++;
                iwork->data[k] = idx->data[q];
                q++;
              }
            }
          } else {
            iwork->data[k] = idx->data[q];
            q++;
            if (q + 1 == qEnd) {
              while (c_p < pEnd) {
                k++;
                iwork->data[k] = idx->data[c_p - 1];
                c_p++;
              }
            }
          }

          k++;
        }

        for (k = 0; k + 1 <= kEnd; k++) {
          idx->data[(j + k) - 1] = iwork->data[k];
        }

        j = qEnd;
      }

      i = i2;
    }

    emxFree_int32_T(&iwork);
  }

  emxInit_real_T(&b_idx, 1, true);
  k = idx->size[1];
  i = b_idx->size[0];
  b_idx->size[0] = k;
  emxEnsureCapacity((emxArray__common *)b_idx, i, (int32_T)sizeof(real_T));
  for (i = 0; i < k; i++) {
    b_idx->data[i] = idx->data[i];
  }

  emxFree_int32_T(&idx);
  for (i = 0; i < 2; i++) {
    d_p[i] = p->size[i];
  }

  i = p->size[0] * p->size[1];
  p->size[0] = 1;
  p->size[1] = d_p[1];
  emxEnsureCapacity((emxArray__common *)p, i, (int32_T)sizeof(real_T));
  k = d_p[1];
  for (i = 0; i < k; i++) {
    p->data[p->size[0] * i] = b_idx->data[d_p[0] * i];
  }

  emxFree_real_T(&b_idx);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (randperm.c) */
