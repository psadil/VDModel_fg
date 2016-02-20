/*
 * determineCriterion.cpp
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

/* Variable Definitions */
static emlrtRSInfo be_emlrtRSI = { 9, "determineCriterion",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\determineCriterion.m"
};

static emlrtRTEInfo p_emlrtRTEI = { 1, 18, "determineCriterion",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\determineCriterion.m"
};

static emlrtBCInfo sg_emlrtBCI = { -1, -1, 9, 23, "p.usePRC",
  "determineCriterion",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\determineCriterion.m",
  0 };

static emlrtBCInfo tg_emlrtBCI = { -1, -1, 10, 53, "p.famil_diff_thresh",
  "determineCriterion",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\determineCriterion.m",
  0 };

static emlrtBCInfo ug_emlrtBCI = { -1, -1, 10, 55, "p.famil_diff_thresh",
  "determineCriterion",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\determineCriterion.m",
  0 };

static emlrtBCInfo vg_emlrtBCI = { -1, -1, 11, 52, "p.famil_diff_thresh",
  "determineCriterion",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\determineCriterion.m",
  0 };

static emlrtECInfo w_emlrtECI = { 2, 11, 31, "determineCriterion",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\determineCriterion.m"
};

static emlrtBCInfo wg_emlrtBCI = { -1, -1, 13, 53, "p.famil_diff_thresh",
  "determineCriterion",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\determineCriterion.m",
  0 };

static emlrtBCInfo xg_emlrtBCI = { -1, -1, 13, 55, "p.famil_diff_thresh",
  "determineCriterion",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\determineCriterion.m",
  0 };

static emlrtBCInfo yg_emlrtBCI = { -1, -1, 14, 102, "p.famil_diff_thresh",
  "determineCriterion",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\determineCriterion.m",
  0 };

static emlrtECInfo x_emlrtECI = { 2, 14, 31, "determineCriterion",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\determineCriterion.m"
};

static emlrtBCInfo ah_emlrtBCI = { -1, -1, 20, 49, "p.famil_diff_thresh",
  "determineCriterion",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\determineCriterion.m",
  0 };

static emlrtBCInfo bh_emlrtBCI = { -1, -1, 20, 51, "p.famil_diff_thresh",
  "determineCriterion",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\determineCriterion.m",
  0 };

static emlrtBCInfo ch_emlrtBCI = { -1, -1, 21, 98, "p.famil_diff_thresh",
  "determineCriterion",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\determineCriterion.m",
  0 };

static emlrtECInfo y_emlrtECI = { 2, 21, 27, "determineCriterion",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\determineCriterion.m"
};

static emlrtBCInfo dh_emlrtBCI = { -1, -1, 21, 28, "p.famil_difference",
  "determineCriterion",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\determineCriterion.m",
  0 };

static emlrtBCInfo eh_emlrtBCI = { -1, -1, 14, 32, "p.famil_difference",
  "determineCriterion",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\determineCriterion.m",
  0 };

static emlrtBCInfo fh_emlrtBCI = { -1, -1, 11, 58, "p.famil_difference",
  "determineCriterion",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\determineCriterion.m",
  0 };

/* Function Definitions */
void determineCriterion(const emlrtStack *sp, struct0_T *p, real_T trial)
{
  emxArray_real_T *r7;
  emxArray_real_T *b_p;
  int32_T loop_ub;
  int32_T i25;
  int32_T c_p;
  int32_T d_p;
  int32_T e_p;
  emxArray_real_T *f_p;
  int32_T b_loop_ub;
  int32_T g_p;
  int32_T h_p;
  emxArray_real_T *r8;
  int32_T i_p;
  int32_T j_p;
  emxArray_real_T *r9;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* update criterion for use on next trial */
  /*  when two layers are available, each are allowed seperate decision */
  /*  thresholds */
  /*  p.mean_famil_diff(trial) = mean(familDiffs); */
  c_emxInit_real_T(sp, &r7, 2, &p_emlrtRTEI, true);
  if (p->numThresh == 2.0) {
    emxInit_real_T(sp, &b_p, 1, &p_emlrtRTEI, true);
    loop_ub = p->usePRC->size[0];
    i25 = p->usePRC->size[1];
    c_p = (int32_T)trial;
    if ((c_p >= 1) && (c_p < i25)) {
    } else {
      c_p = emlrtDynamicBoundsCheckR2012b(c_p, 1, i25, (emlrtBCInfo *)
        &sg_emlrtBCI, sp);
    }

    i25 = b_p->size[0];
    b_p->size[0] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)b_p, i25, (int32_T)sizeof(real_T),
                      &p_emlrtRTEI);
    for (i25 = 0; i25 < loop_ub; i25++) {
      b_p->data[i25] = p->usePRC->data[i25 + p->usePRC->size[0] * (c_p - 1)];
    }

    st.site = &be_emlrtRSI;
    if (all(&st, b_p)) {
      if (1.0 > (real_T)p->famil_diff_thresh->size[1] - 1.0) {
        loop_ub = -1;
      } else {
        i25 = p->famil_diff_thresh->size[1];
        emlrtDynamicBoundsCheckR2012b(1, 1, i25, (emlrtBCInfo *)&ug_emlrtBCI, sp);
        i25 = p->famil_diff_thresh->size[1];
        c_p = (int32_T)((real_T)p->famil_diff_thresh->size[1] - 1.0);
        if ((c_p >= 1) && (c_p < i25)) {
          d_p = c_p;
        } else {
          d_p = emlrtDynamicBoundsCheckR2012b(c_p, 1, i25, (emlrtBCInfo *)
            &ug_emlrtBCI, sp);
        }

        loop_ub = d_p - 1;
      }

      i25 = p->famil_diff_thresh->size[0];
      emlrtDynamicBoundsCheckR2012b(2, 1, i25, (emlrtBCInfo *)&tg_emlrtBCI, sp);
      i25 = p->famil_diff_thresh->size[0];
      emlrtDynamicBoundsCheckR2012b(1, 1, i25, (emlrtBCInfo *)&vg_emlrtBCI, sp);
      i25 = r7->size[0] * r7->size[1];
      r7->size[0] = 1;
      r7->size[1] = loop_ub + 2;
      emxEnsureCapacity(sp, (emxArray__common *)r7, i25, (int32_T)sizeof(real_T),
                        &p_emlrtRTEI);
      i25 = p->famil_difference->size[1];
      c_p = (int32_T)trial;
      if ((c_p >= 1) && (c_p < i25)) {
        e_p = c_p;
      } else {
        e_p = emlrtDynamicBoundsCheckR2012b(c_p, 1, i25, (emlrtBCInfo *)
          &fh_emlrtBCI, sp);
      }

      r7->data[0] = p->famil_difference->data[e_p - 1];
      for (i25 = 0; i25 <= loop_ub; i25++) {
        r7->data[r7->size[0] * (i25 + 1)] = p->famil_diff_thresh->data[1 +
          p->famil_diff_thresh->size[0] * i25];
      }

      c_emxInit_real_T(sp, &f_p, 2, &p_emlrtRTEI, true);
      i25 = p->famil_diff_thresh->size[1];
      c_p = r7->size[1];
      if (i25 != c_p) {
        emlrtDimSizeEqCheckR2012b(i25, c_p, (emlrtECInfo *)&w_emlrtECI, sp);
      }

      c_p = p->famil_diff_thresh->size[1];
      i25 = f_p->size[0] * f_p->size[1];
      f_p->size[0] = 2;
      f_p->size[1] = c_p;
      emxEnsureCapacity(sp, (emxArray__common *)f_p, i25, (int32_T)sizeof(real_T),
                        &p_emlrtRTEI);
      for (i25 = 0; i25 < c_p; i25++) {
        f_p->data[f_p->size[0] * i25] = p->famil_diff_thresh->data
          [p->famil_diff_thresh->size[0] * i25];
      }

      loop_ub = r7->size[1];
      for (i25 = 0; i25 < loop_ub; i25++) {
        f_p->data[1 + f_p->size[0] * i25] = r7->data[r7->size[0] * i25];
      }

      i25 = p->famil_diff_thresh->size[0] * p->famil_diff_thresh->size[1];
      p->famil_diff_thresh->size[0] = f_p->size[0];
      p->famil_diff_thresh->size[1] = f_p->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)p->famil_diff_thresh, i25,
                        (int32_T)sizeof(real_T), &p_emlrtRTEI);
      loop_ub = f_p->size[1];
      for (i25 = 0; i25 < loop_ub; i25++) {
        b_loop_ub = f_p->size[0];
        for (c_p = 0; c_p < b_loop_ub; c_p++) {
          p->famil_diff_thresh->data[c_p + p->famil_diff_thresh->size[0] * i25] =
            f_p->data[c_p + f_p->size[0] * i25];
        }
      }

      emxFree_real_T(&f_p);
    } else {
      if (1.0 > (real_T)p->famil_diff_thresh->size[1] - 1.0) {
        loop_ub = -1;
      } else {
        i25 = p->famil_diff_thresh->size[1];
        emlrtDynamicBoundsCheckR2012b(1, 1, i25, (emlrtBCInfo *)&xg_emlrtBCI, sp);
        i25 = p->famil_diff_thresh->size[1];
        c_p = (int32_T)((real_T)p->famil_diff_thresh->size[1] - 1.0);
        if ((c_p >= 1) && (c_p < i25)) {
          g_p = c_p;
        } else {
          g_p = emlrtDynamicBoundsCheckR2012b(c_p, 1, i25, (emlrtBCInfo *)
            &xg_emlrtBCI, sp);
        }

        loop_ub = g_p - 1;
      }

      i25 = p->famil_diff_thresh->size[0];
      emlrtDynamicBoundsCheckR2012b(1, 1, i25, (emlrtBCInfo *)&wg_emlrtBCI, sp);
      i25 = r7->size[0] * r7->size[1];
      r7->size[0] = 1;
      r7->size[1] = loop_ub + 2;
      emxEnsureCapacity(sp, (emxArray__common *)r7, i25, (int32_T)sizeof(real_T),
                        &p_emlrtRTEI);
      i25 = p->famil_difference->size[1];
      c_p = (int32_T)trial;
      if ((c_p >= 1) && (c_p < i25)) {
        h_p = c_p;
      } else {
        h_p = emlrtDynamicBoundsCheckR2012b(c_p, 1, i25, (emlrtBCInfo *)
          &eh_emlrtBCI, sp);
      }

      r7->data[0] = p->famil_difference->data[h_p - 1];
      for (i25 = 0; i25 <= loop_ub; i25++) {
        r7->data[r7->size[0] * (i25 + 1)] = p->famil_diff_thresh->data
          [p->famil_diff_thresh->size[0] * i25];
      }

      c_emxInit_real_T(sp, &r8, 2, &p_emlrtRTEI, true);
      i25 = p->famil_diff_thresh->size[0];
      emlrtDynamicBoundsCheckR2012b(2, 1, i25, (emlrtBCInfo *)&yg_emlrtBCI, sp);
      i25 = p->famil_diff_thresh->size[1];
      c_p = r7->size[1];
      if (c_p != i25) {
        emlrtDimSizeEqCheckR2012b(c_p, i25, (emlrtECInfo *)&x_emlrtECI, sp);
      }

      c_p = p->famil_diff_thresh->size[1] - 1;
      i25 = r8->size[0] * r8->size[1];
      r8->size[0] = 2;
      r8->size[1] = r7->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)r8, i25, (int32_T)sizeof(real_T),
                        &p_emlrtRTEI);
      loop_ub = r7->size[1];
      for (i25 = 0; i25 < loop_ub; i25++) {
        r8->data[r8->size[0] * i25] = r7->data[r7->size[0] * i25];
      }

      for (i25 = 0; i25 <= c_p; i25++) {
        r8->data[1 + r8->size[0] * i25] = p->famil_diff_thresh->data[1 +
          p->famil_diff_thresh->size[0] * i25];
      }

      i25 = p->famil_diff_thresh->size[0] * p->famil_diff_thresh->size[1];
      p->famil_diff_thresh->size[0] = r8->size[0];
      p->famil_diff_thresh->size[1] = r8->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)p->famil_diff_thresh, i25,
                        (int32_T)sizeof(real_T), &p_emlrtRTEI);
      loop_ub = r8->size[1];
      for (i25 = 0; i25 < loop_ub; i25++) {
        b_loop_ub = r8->size[0];
        for (c_p = 0; c_p < b_loop_ub; c_p++) {
          p->famil_diff_thresh->data[c_p + p->famil_diff_thresh->size[0] * i25] =
            r8->data[c_p + r8->size[0] * i25];
        }
      }

      emxFree_real_T(&r8);

      /*  p.famil_diff_thresh = [p.famil_diff_thresh, p.famil_difference(trial)]; */
      /*      p.threshForPlotting(trial) = mean(p.famil_diff_thresh); */
      /*  p.familDiff_threshTracking(trial) = famil_diff_thresh_new; */
    }

    emxFree_real_T(&b_p);
  } else {
    if (1.0 > (real_T)p->famil_diff_thresh->size[1] - 1.0) {
      loop_ub = -1;
    } else {
      i25 = p->famil_diff_thresh->size[1];
      emlrtDynamicBoundsCheckR2012b(1, 1, i25, (emlrtBCInfo *)&bh_emlrtBCI, sp);
      i25 = p->famil_diff_thresh->size[1];
      c_p = (int32_T)((real_T)p->famil_diff_thresh->size[1] - 1.0);
      if ((c_p >= 1) && (c_p < i25)) {
        i_p = c_p;
      } else {
        i_p = emlrtDynamicBoundsCheckR2012b(c_p, 1, i25, (emlrtBCInfo *)
          &bh_emlrtBCI, sp);
      }

      loop_ub = i_p - 1;
    }

    i25 = p->famil_diff_thresh->size[0];
    emlrtDynamicBoundsCheckR2012b(1, 1, i25, (emlrtBCInfo *)&ah_emlrtBCI, sp);
    i25 = r7->size[0] * r7->size[1];
    r7->size[0] = 1;
    r7->size[1] = loop_ub + 2;
    emxEnsureCapacity(sp, (emxArray__common *)r7, i25, (int32_T)sizeof(real_T),
                      &p_emlrtRTEI);
    i25 = p->famil_difference->size[1];
    c_p = (int32_T)trial;
    if ((c_p >= 1) && (c_p < i25)) {
      j_p = c_p;
    } else {
      j_p = emlrtDynamicBoundsCheckR2012b(c_p, 1, i25, (emlrtBCInfo *)
        &dh_emlrtBCI, sp);
    }

    r7->data[0] = p->famil_difference->data[j_p - 1];
    for (i25 = 0; i25 <= loop_ub; i25++) {
      r7->data[r7->size[0] * (i25 + 1)] = p->famil_diff_thresh->data
        [p->famil_diff_thresh->size[0] * i25];
    }

    c_emxInit_real_T(sp, &r9, 2, &p_emlrtRTEI, true);
    i25 = p->famil_diff_thresh->size[0];
    emlrtDynamicBoundsCheckR2012b(2, 1, i25, (emlrtBCInfo *)&ch_emlrtBCI, sp);
    i25 = p->famil_diff_thresh->size[1];
    c_p = r7->size[1];
    if (c_p != i25) {
      emlrtDimSizeEqCheckR2012b(c_p, i25, (emlrtECInfo *)&y_emlrtECI, sp);
    }

    c_p = p->famil_diff_thresh->size[1] - 1;
    i25 = r9->size[0] * r9->size[1];
    r9->size[0] = 2;
    r9->size[1] = r7->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)r9, i25, (int32_T)sizeof(real_T),
                      &p_emlrtRTEI);
    loop_ub = r7->size[1];
    for (i25 = 0; i25 < loop_ub; i25++) {
      r9->data[r9->size[0] * i25] = r7->data[r7->size[0] * i25];
    }

    for (i25 = 0; i25 <= c_p; i25++) {
      r9->data[1 + r9->size[0] * i25] = p->famil_diff_thresh->data[1 +
        p->famil_diff_thresh->size[0] * i25];
    }

    i25 = p->famil_diff_thresh->size[0] * p->famil_diff_thresh->size[1];
    p->famil_diff_thresh->size[0] = r9->size[0];
    p->famil_diff_thresh->size[1] = r9->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)p->famil_diff_thresh, i25,
                      (int32_T)sizeof(real_T), &p_emlrtRTEI);
    loop_ub = r9->size[1];
    for (i25 = 0; i25 < loop_ub; i25++) {
      b_loop_ub = r9->size[0];
      for (c_p = 0; c_p < b_loop_ub; c_p++) {
        p->famil_diff_thresh->data[c_p + p->famil_diff_thresh->size[0] * i25] =
          r9->data[c_p + r9->size[0] * i25];
      }
    }

    emxFree_real_T(&r9);
  }

  emxFree_real_T(&r7);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (determineCriterion.cpp) */
