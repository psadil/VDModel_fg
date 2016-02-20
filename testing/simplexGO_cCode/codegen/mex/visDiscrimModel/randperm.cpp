/*
 * randperm.cpp
 *
 * Code generation for function 'randperm'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "randperm.h"
#include "visDiscrimModel_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "visDiscrimModel_data.h"

/* Variable Definitions */
static emlrtRSInfo xb_emlrtRSI = { 15, "randperm",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtRSInfo yb_emlrtRSI = { 16, "randperm",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtRSInfo ac_emlrtRSI = { 77, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtRSInfo bc_emlrtRSI = { 211, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtRSInfo cc_emlrtRSI = { 264, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 1, 14, "randperm",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 207, 9, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 16, 5, "randperm",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 207, 1, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtDCInfo emlrtDCI = { 100, 34, "rand",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m",
  4 };

static emlrtRTEInfo wb_emlrtRTEI = { 12, 15, "randperm",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtRTEInfo xb_emlrtRTEI = { 10, 15, "randperm",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

/* Function Definitions */
void randperm(const emlrtStack *sp, real_T n, emxArray_real_T *p)
{
  boolean_T overflow;
  emxArray_int32_T *idx;
  int32_T i;
  int32_T k;
  emxArray_int32_T *iwork;
  int32_T b_n;
  int32_T i2;
  int32_T j;
  int32_T pEnd;
  int32_T b_p;
  int32_T q;
  int32_T qEnd;
  int32_T kEnd;
  emxArray_real_T *b_idx;
  int32_T c_p[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (n <= 9.007199254740991E+15) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &xb_emlrtRTEI,
      "MATLAB:randperm:inputNTooLarge", 0);
  }

  if ((n >= 0.0) && (n == muDoubleScalarFloor(n))) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &wb_emlrtRTEI, "MATLAB:randperm:inputType",
      0);
  }

  emxInit_int32_T(sp, &idx, 2, &f_emlrtRTEI, true);
  st.site = &xb_emlrtRSI;
  emlrtNonNegativeCheckR2012b(n, (emlrtDCInfo *)&emlrtDCI, &st);
  i = p->size[0] * p->size[1];
  p->size[0] = 1;
  p->size[1] = (int32_T)n;
  emxEnsureCapacity(&st, (emxArray__common *)p, i, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  emlrtRandu(&p->data[0], (int32_T)n);
  st.site = &yb_emlrtRSI;
  i = idx->size[0] * idx->size[1];
  idx->size[0] = 1;
  emxEnsureCapacity(&st, (emxArray__common *)idx, i, (int32_T)sizeof(int32_T),
                    &d_emlrtRTEI);
  k = p->size[1];
  i = idx->size[0] * idx->size[1];
  idx->size[1] = k;
  emxEnsureCapacity(&st, (emxArray__common *)idx, i, (int32_T)sizeof(int32_T),
                    &d_emlrtRTEI);
  k = p->size[1];
  for (i = 0; i < k; i++) {
    idx->data[i] = 0;
  }

  if (p->size[1] == 0) {
  } else {
    b_emxInit_int32_T(&st, &iwork, 1, &g_emlrtRTEI, true);
    b_st.site = &ac_emlrtRSI;
    b_n = p->size[1] + 1;
    k = p->size[1];
    i = iwork->size[0];
    iwork->size[0] = k;
    emxEnsureCapacity(&b_st, (emxArray__common *)iwork, i, (int32_T)sizeof
                      (int32_T), &e_emlrtRTEI);
    c_st.site = &bc_emlrtRSI;
    if (1 > p->size[1] - 1) {
      overflow = false;
    } else {
      overflow = (p->size[1] - 1 > 2147483645);
    }

    if (overflow) {
      d_st.site = &wb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (k = 1; k <= b_n - 2; k += 2) {
      if ((p->data[k - 1] <= p->data[k]) || muDoubleScalarIsNaN(p->data[k])) {
        overflow = true;
      } else {
        overflow = false;
      }

      if (overflow) {
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
        b_p = j;
        q = pEnd - 1;
        qEnd = j + i2;
        if (qEnd > b_n) {
          qEnd = b_n;
        }

        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          if ((p->data[idx->data[b_p - 1] - 1] <= p->data[idx->data[q] - 1]) ||
              muDoubleScalarIsNaN(p->data[idx->data[q] - 1])) {
            overflow = true;
          } else {
            overflow = false;
          }

          if (overflow) {
            iwork->data[k] = idx->data[b_p - 1];
            b_p++;
            if (b_p == pEnd) {
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
              while (b_p < pEnd) {
                k++;
                iwork->data[k] = idx->data[b_p - 1];
                b_p++;
              }
            }
          }

          k++;
        }

        c_st.site = &cc_emlrtRSI;
        for (k = 0; k + 1 <= kEnd; k++) {
          idx->data[(j + k) - 1] = iwork->data[k];
        }

        j = qEnd;
      }

      i = i2;
    }

    emxFree_int32_T(&iwork);
  }

  emxInit_real_T(&st, &b_idx, 1, &d_emlrtRTEI, true);
  k = idx->size[1];
  i = b_idx->size[0];
  b_idx->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)b_idx, i, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  for (i = 0; i < k; i++) {
    b_idx->data[i] = idx->data[i];
  }

  emxFree_int32_T(&idx);
  for (i = 0; i < 2; i++) {
    c_p[i] = p->size[i];
  }

  i = p->size[0] * p->size[1];
  p->size[0] = 1;
  p->size[1] = c_p[1];
  emxEnsureCapacity(sp, (emxArray__common *)p, i, (int32_T)sizeof(real_T),
                    &d_emlrtRTEI);
  k = c_p[1];
  for (i = 0; i < k; i++) {
    p->data[p->size[0] * i] = b_idx->data[c_p[0] * i];
  }

  emxFree_real_T(&b_idx);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (randperm.cpp) */
