/*
 * determineCriterion.c
 *
 * Code generation for function 'determineCriterion'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "determineCriterion.h"
#include "visDiscrimModel_emxutil.h"
#include "all.h"
#include "visDiscrimModel_data.h"

/* Function Definitions */
void determineCriterion(struct0_T *p, real_T trial)
{
  emxArray_real_T *b_p;
  int32_T loop_ub;
  int32_T i19;
  emxArray_real_T *c_p;
  int32_T d_p;
  int32_T i20;
  emxArray_real_T *e_p;
  emxArray_real_T *f_p;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);

  /* update criterion for use on next trial */
  /*  when two layers are available, each are allowed seperate decision */
  /*  thresholds */
  /*  p.mean_famil_diff(trial) = mean(familDiffs); */
  if (p->numThresh == 2.0) {
    emxInit_real_T(&b_p, 1, true);
    loop_ub = p->usePRC->size[0];
    i19 = b_p->size[0];
    b_p->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)b_p, i19, (int32_T)sizeof(real_T));
    for (i19 = 0; i19 < loop_ub; i19++) {
      b_p->data[i19] = p->usePRC->data[i19 + p->usePRC->size[0] * ((int32_T)
        trial - 1)];
    }

    if (all(b_p)) {
      if (1.0 > (real_T)p->famil_diff_thresh->size[1] - 1.0) {
        loop_ub = -1;
      } else {
        loop_ub = (int32_T)((real_T)p->famil_diff_thresh->size[1] - 1.0) - 1;
      }

      c_emxInit_real_T(&c_p, 2, true);
      d_p = p->famil_diff_thresh->size[1];
      i19 = c_p->size[0] * c_p->size[1];
      c_p->size[0] = 2;
      c_p->size[1] = d_p;
      emxEnsureCapacity((emxArray__common *)c_p, i19, (int32_T)sizeof(real_T));
      for (i19 = 0; i19 < d_p; i19++) {
        c_p->data[c_p->size[0] * i19] = p->famil_diff_thresh->data
          [p->famil_diff_thresh->size[0] * i19];
      }

      c_p->data[1] = p->famil_difference->data[(int32_T)trial - 1];
      for (i19 = 0; i19 <= loop_ub; i19++) {
        c_p->data[1 + c_p->size[0] * (i19 + 1)] = p->famil_diff_thresh->data[1 +
          p->famil_diff_thresh->size[0] * i19];
      }

      i19 = p->famil_diff_thresh->size[0] * p->famil_diff_thresh->size[1];
      p->famil_diff_thresh->size[0] = c_p->size[0];
      p->famil_diff_thresh->size[1] = c_p->size[1];
      emxEnsureCapacity((emxArray__common *)p->famil_diff_thresh, i19, (int32_T)
                        sizeof(real_T));
      loop_ub = c_p->size[1];
      for (i19 = 0; i19 < loop_ub; i19++) {
        d_p = c_p->size[0];
        for (i20 = 0; i20 < d_p; i20++) {
          p->famil_diff_thresh->data[i20 + p->famil_diff_thresh->size[0] * i19] =
            c_p->data[i20 + c_p->size[0] * i19];
        }
      }

      emxFree_real_T(&c_p);
    } else {
      if (1.0 > (real_T)p->famil_diff_thresh->size[1] - 1.0) {
        loop_ub = -1;
      } else {
        loop_ub = (int32_T)((real_T)p->famil_diff_thresh->size[1] - 1.0) - 1;
      }

      c_emxInit_real_T(&e_p, 2, true);
      d_p = p->famil_diff_thresh->size[1] - 1;
      i19 = e_p->size[0] * e_p->size[1];
      e_p->size[0] = 2;
      e_p->size[1] = loop_ub + 2;
      emxEnsureCapacity((emxArray__common *)e_p, i19, (int32_T)sizeof(real_T));
      e_p->data[0] = p->famil_difference->data[(int32_T)trial - 1];
      for (i19 = 0; i19 <= loop_ub; i19++) {
        e_p->data[e_p->size[0] * (i19 + 1)] = p->famil_diff_thresh->data
          [p->famil_diff_thresh->size[0] * i19];
      }

      for (i19 = 0; i19 <= d_p; i19++) {
        e_p->data[1 + e_p->size[0] * i19] = p->famil_diff_thresh->data[1 +
          p->famil_diff_thresh->size[0] * i19];
      }

      i19 = p->famil_diff_thresh->size[0] * p->famil_diff_thresh->size[1];
      p->famil_diff_thresh->size[0] = e_p->size[0];
      p->famil_diff_thresh->size[1] = e_p->size[1];
      emxEnsureCapacity((emxArray__common *)p->famil_diff_thresh, i19, (int32_T)
                        sizeof(real_T));
      loop_ub = e_p->size[1];
      for (i19 = 0; i19 < loop_ub; i19++) {
        d_p = e_p->size[0];
        for (i20 = 0; i20 < d_p; i20++) {
          p->famil_diff_thresh->data[i20 + p->famil_diff_thresh->size[0] * i19] =
            e_p->data[i20 + e_p->size[0] * i19];
        }
      }

      emxFree_real_T(&e_p);

      /*  p.famil_diff_thresh = [p.famil_diff_thresh, p.famil_difference(trial)]; */
      /*      p.threshForPlotting(trial) = mean(p.famil_diff_thresh); */
      /*  p.familDiff_threshTracking(trial) = famil_diff_thresh_new; */
    }

    emxFree_real_T(&b_p);
  } else {
    if (1.0 > (real_T)p->famil_diff_thresh->size[1] - 1.0) {
      loop_ub = -1;
    } else {
      loop_ub = (int32_T)((real_T)p->famil_diff_thresh->size[1] - 1.0) - 1;
    }

    c_emxInit_real_T(&f_p, 2, true);
    d_p = p->famil_diff_thresh->size[1] - 1;
    i19 = f_p->size[0] * f_p->size[1];
    f_p->size[0] = 2;
    f_p->size[1] = loop_ub + 2;
    emxEnsureCapacity((emxArray__common *)f_p, i19, (int32_T)sizeof(real_T));
    f_p->data[0] = p->famil_difference->data[(int32_T)trial - 1];
    for (i19 = 0; i19 <= loop_ub; i19++) {
      f_p->data[f_p->size[0] * (i19 + 1)] = p->famil_diff_thresh->data
        [p->famil_diff_thresh->size[0] * i19];
    }

    for (i19 = 0; i19 <= d_p; i19++) {
      f_p->data[1 + f_p->size[0] * i19] = p->famil_diff_thresh->data[1 +
        p->famil_diff_thresh->size[0] * i19];
    }

    i19 = p->famil_diff_thresh->size[0] * p->famil_diff_thresh->size[1];
    p->famil_diff_thresh->size[0] = f_p->size[0];
    p->famil_diff_thresh->size[1] = f_p->size[1];
    emxEnsureCapacity((emxArray__common *)p->famil_diff_thresh, i19, (int32_T)
                      sizeof(real_T));
    loop_ub = f_p->size[1];
    for (i19 = 0; i19 < loop_ub; i19++) {
      d_p = f_p->size[0];
      for (i20 = 0; i20 < d_p; i20++) {
        p->famil_diff_thresh->data[i20 + p->famil_diff_thresh->size[0] * i19] =
          f_p->data[i20 + f_p->size[0] * i19];
      }
    }

    emxFree_real_T(&f_p);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (determineCriterion.c) */
