/*
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "repmat.h"
#include "visDiscrimModel_emxutil.h"
#include "visDiscrimModel_data.h"

/* Function Declarations */
static int32_T div_s32(int32_T numerator, int32_T denominator);

/* Function Definitions */
static int32_T div_s32(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroErrorR2012b(NULL, emlrtRootTLSGlobal);
  } else {
    if (numerator >= 0) {
      absNumerator = (uint32_T)numerator;
    } else {
      absNumerator = (uint32_T)-numerator;
    }

    if (denominator >= 0) {
      absDenominator = (uint32_T)denominator;
    } else {
      absDenominator = (uint32_T)-denominator;
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    absNumerator /= absDenominator;
    if (quotientNeedsNegation) {
      quotient = -(int32_T)absNumerator;
    } else {
      quotient = (int32_T)absNumerator;
    }
  }

  return quotient;
}

void b_repmat(const emxArray_real_T *a, const real_T varargin_1[3],
              emxArray_real_T *b)
{
  int32_T outsize[3];
  int32_T varargin_1_idx_2;
  boolean_T p;
  int32_T k;
  int32_T ib;
  int32_T ia;
  int32_T ibtmp;
  int32_T q;
  outsize[2] = a->size[2];
  varargin_1_idx_2 = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = (int32_T)varargin_1[0];
  b->size[1] = (int32_T)varargin_1[1];
  b->size[2] = a->size[2];
  emxEnsureCapacity((emxArray__common *)b, varargin_1_idx_2, (int32_T)sizeof
                    (real_T));
  if (!(a->size[2] == 0)) {
    if ((int32_T)varargin_1[0] == 0) {
      p = true;
    } else if ((int32_T)varargin_1[1] == 0) {
      p = true;
    } else if (outsize[2] == 0) {
      p = true;
    } else {
      p = false;
    }

    if (!p) {
      for (varargin_1_idx_2 = 0; varargin_1_idx_2 < 3; varargin_1_idx_2++) {
        outsize[varargin_1_idx_2] = 1;
      }

      for (k = 0; k < 2; k++) {
        outsize[k + 1] = outsize[k] * b->size[k];
      }

      varargin_1_idx_2 = a->size[2];
      varargin_1_idx_2 *= (int32_T)varargin_1[0] * (int32_T)varargin_1[1];
      for (ib = 0; ib + 1 <= varargin_1_idx_2; ib++) {
        ia = 0;
        ibtmp = ib;
        for (k = 2; k > -1; k += -1) {
          q = div_s32(div_s32(ibtmp, outsize[k]) * outsize[k], outsize[k]);
          ia = (ia + q) - div_s32(q, a->size[k]) * a->size[k];
          ibtmp -= div_s32(ibtmp, outsize[k]) * outsize[k];
        }

        b->data[ib] = a->data[ia];
      }
    }
  }
}

void c_repmat(const emxArray_real_T *a, const real_T varargin_1[3],
              emxArray_real_T *b)
{
  int32_T outsize_idx_0;
  int32_T outsize_idx_1;
  int32_T jcol;
  boolean_T p;
  int32_T nrows;
  int32_T ncols;
  int32_T ntilecols;
  int32_T k;
  int32_T iv0[3];
  int32_T iacol;
  int32_T ibmat;
  outsize_idx_0 = a->size[0];
  outsize_idx_1 = a->size[1];
  jcol = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = a->size[0];
  b->size[1] = a->size[1];
  b->size[2] = (int32_T)varargin_1[2];
  emxEnsureCapacity((emxArray__common *)b, jcol, (int32_T)sizeof(real_T));
  if (!((a->size[0] == 0) || (a->size[1] == 0))) {
    if (outsize_idx_0 == 0) {
      p = true;
    } else if (outsize_idx_1 == 0) {
      p = true;
    } else if ((int32_T)varargin_1[2] == 0) {
      p = true;
    } else {
      p = false;
    }

    if (!p) {
      nrows = a->size[0];
      ncols = a->size[1];
      ntilecols = 1;
      k = 3;
      while ((k > 2) && ((int32_T)varargin_1[2] == 1)) {
        k = 2;
      }

      for (outsize_idx_0 = 2; outsize_idx_0 <= k; outsize_idx_0++) {
        iv0[0] = 1;
        iv0[1] = 1;
        iv0[2] = (int32_T)varargin_1[2];
        ntilecols *= iv0[outsize_idx_0 - 1];
      }

      for (outsize_idx_0 = 1; outsize_idx_0 <= ntilecols; outsize_idx_0++) {
        outsize_idx_1 = (outsize_idx_0 - 1) * (nrows * ncols) - 1;
        for (jcol = 0; jcol + 1 <= ncols; jcol++) {
          iacol = jcol * nrows;
          ibmat = outsize_idx_1 + jcol * nrows;
          for (k = 1; k <= nrows; k++) {
            b->data[ibmat + k] = a->data[(iacol + k) - 1];
          }
        }
      }
    }
  }
}

void repmat(const real_T varargin_1[6], emxArray_real_T *b)
{
  int32_T i0;
  int32_T loop_ub;
  i0 = b->size[0] * b->size[1] * b->size[2] * b->size[3] * b->size[4] * b->size
    [5];
  b->size[0] = (int32_T)varargin_1[0];
  emxEnsureCapacity((emxArray__common *)b, i0, (int32_T)sizeof(real_T));
  i0 = b->size[0] * b->size[1] * b->size[2] * b->size[3] * b->size[4] * b->size
    [5];
  b->size[1] = (int32_T)varargin_1[1];
  emxEnsureCapacity((emxArray__common *)b, i0, (int32_T)sizeof(real_T));
  i0 = b->size[0] * b->size[1] * b->size[2] * b->size[3] * b->size[4] * b->size
    [5];
  b->size[2] = (int32_T)varargin_1[2];
  emxEnsureCapacity((emxArray__common *)b, i0, (int32_T)sizeof(real_T));
  i0 = b->size[0] * b->size[1] * b->size[2] * b->size[3] * b->size[4] * b->size
    [5];
  b->size[3] = (int32_T)varargin_1[3];
  emxEnsureCapacity((emxArray__common *)b, i0, (int32_T)sizeof(real_T));
  i0 = b->size[0] * b->size[1] * b->size[2] * b->size[3] * b->size[4] * b->size
    [5];
  b->size[4] = (int32_T)varargin_1[4];
  emxEnsureCapacity((emxArray__common *)b, i0, (int32_T)sizeof(real_T));
  i0 = b->size[0] * b->size[1] * b->size[2] * b->size[3] * b->size[4] * b->size
    [5];
  b->size[5] = (int32_T)varargin_1[5];
  emxEnsureCapacity((emxArray__common *)b, i0, (int32_T)sizeof(real_T));
  loop_ub = (int32_T)varargin_1[0] * (int32_T)varargin_1[1] * (int32_T)
    varargin_1[2] * (int32_T)varargin_1[3] * (int32_T)varargin_1[4] * (int32_T)
    varargin_1[5];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b->data[i0] = 0.5;
  }
}

/* End of code generation (repmat.c) */
