/*
 * visDiscrimModel.c
 *
 * Code generation for function 'visDiscrimModel'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "visDiscrimModel_emxutil.h"
#include "randperm.h"
#include "rand.h"
#include "sum.h"
#include "rdivide.h"
#include "exp.h"
#include "log.h"
#include "repmat.h"
#include "power.h"
#include "abs.h"
#include "findWinningNode.h"
#include "any.h"
#include "squeeze.h"
#include "all.h"
#include "mean.h"
#include "cat.h"
#include "determineCriterion.h"
#include "norminv.h"
#include "visDiscrimModel_data.h"

/* Function Definitions */
void visDiscrimModel(struct0_T *p)
{
  emxArray_real_T *weights;
  real_T b_p[6];
  int32_T ixstart;
  real_T mtmp;
  int32_T ix;
  boolean_T exitg18;
  int32_T inputs;
  int32_T nx;
  boolean_T exitg17;
  boolean_T exitg16;
  boolean_T exitg15;
  boolean_T exitg14;
  boolean_T exitg13;
  int32_T unnamed_idx_1;
  int32_T unnamed_idx_2;
  boolean_T exitg12;
  real_T tTypeCnt[2];
  real_T y;
  int32_T trial;
  emxArray_real_T *stimuli;
  emxArray_real_T *stimPair;
  emxArray_real_T *prevStimSelec;
  emxArray_real_T *features_sampled_prev;
  emxArray_real_T *sample_feat;
  emxArray_real_T *avail_feat;
  emxArray_real_T *features_sampled;
  emxArray_real_T *inps_tmp;
  emxArray_real_T *stimulus;
  emxArray_real_T *selectivity;
  emxArray_real_T *initial_selec;
  emxArray_real_T *row_dist_mat;
  emxArray_real_T *col_dist_mat;
  emxArray_real_T *input_mat;
  emxArray_real_T *f;
  emxArray_real_T *winners;
  emxArray_real_T *featuresToCompare;
  emxArray_real_T *meanSelectivity_caudal_prev;
  emxArray_real_T *familDiff_caudal;
  emxArray_real_T *dist_mat;
  emxArray_real_T *b_inputs;
  emxArray_real_T *whichCaudal;
  emxArray_real_T *weights_child;
  emxArray_int32_T *r0;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  emxArray_real_T *b_y;
  emxArray_boolean_T *b_x;
  emxArray_int32_T *b_ii;
  emxArray_boolean_T *c_p;
  emxArray_real_T *d_p;
  emxArray_boolean_T *e_p;
  emxArray_real_T *f_p;
  emxArray_boolean_T *g_p;
  emxArray_real_T *h_p;
  emxArray_boolean_T *i_p;
  emxArray_real_T *j_p;
  emxArray_real_T *k_p;
  emxArray_real_T *l_p;
  emxArray_real_T *b_sample_feat;
  emxArray_real_T *b_stimuli;
  emxArray_real_T *m_p;
  emxArray_real_T *n_p;
  emxArray_real_T *o_p;
  emxArray_real_T *p_p;
  emxArray_real_T *q_p;
  emxArray_real_T *b_meanSelectivity_caudal_prev;
  emxArray_real_T *b_input_mat;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_real_T *r_p;
  emxArray_real_T *b_inps_tmp;
  emxArray_real_T *s_p;
  emxArray_real_T *t_p;
  emxArray_real_T *u_p;
  emxArray_real_T *v_p;
  emxArray_boolean_T *b_features_sampled;
  emxArray_real_T *b_weights;
  emxArray_boolean_T *b_features_sampled_prev;
  emxArray_boolean_T *c_features_sampled;
  emxArray_real_T *b_stimPair;
  emxArray_real_T *c_stimPair;
  emxArray_real_T *c_sample_feat;
  emxArray_real_T *b_avail_feat;
  emxArray_real_T *c_avail_feat;
  int32_T exitg2;
  int32_T loop_ub;
  int32_T w_p;
  int32_T idx;
  int32_T nm1d2;
  int32_T c_ii;
  real_T stim;
  int32_T first_stim_sampled;
  int32_T stopSampling;
  uint32_T comparison;
  int32_T keepSampling;
  int32_T exitg1;
  int32_T exitg11;
  int32_T stick;
  real_T stick_switch;
  boolean_T exitg10;
  boolean_T guard4 = false;
  int32_T c_inps_tmp[1];
  emxArray_real_T d_inps_tmp;
  int32_T outsz[3];
  int32_T sz[3];
  int32_T k;
  real_T x_p[3];
  int32_T n;
  boolean_T exitg9;
  boolean_T exitg8;
  real_T selectivity_child;
  int32_T usePRC;
  int32_T layer;
  real_T b;
  real_T anew;
  real_T apnd;
  real_T ndbl;
  real_T cdiff;
  real_T absb;
  real_T kd;
  real_T y_p;
  real_T d1;
  int32_T grid;
  int32_T b_loop_ub;
  int32_T i16;
  int32_T weights_idx_0;
  int32_T weights_idx_1;
  int32_T weights_idx_2;
  int32_T weights_idx_3;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  real_T nEncodCycles;
  real_T win_col;
  real_T win_row;
  int32_T cycle;
  int32_T vstride;
  int32_T iy;
  int32_T j;
  int32_T ixstop;
  int32_T b_ix;
  boolean_T exitg7;
  boolean_T exitg6;
  int32_T c_inputs;
  real_T dv0[3];
  int32_T e_inps_tmp;
  int32_T f_inps_tmp;
  real_T act_peak;
  real_T act_total;
  int32_T c_weights;
  int32_T d_weights;
  int32_T e_weights;
  int32_T f_weights;
  int32_T unnamed_idx_3;
  real_T nothingRatio;
  boolean_T b_guard1 = false;
  boolean_T b_guard2 = false;
  int32_T layer_prev;
  boolean_T exitg5;
  boolean_T exitg4;
  boolean_T guard3 = false;
  real_T familDiff;
  real_T d2;
  real_T familDiffs_temp_idx_0;
  real_T familDiffs_temp_idx_1;
  boolean_T exitg3;
  real_T A;
  real_T B;
  real_T b_A;
  real_T b_B;
  real_T c_A;
  real_T c_B;
  real_T d_A;
  real_T d_B;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  d_emxInit_real_T(&weights, 6, true);

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  Matlab code for making a Self Organising Feature Map grid (SOFM) */
  /*  */
  /*  Rosie Cowell (Dec 2011) */
  /*  */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  Represent the SOFM as a 2-D grid of x,y coordinates */
  /*  i.e. 3 dimensions in all: Rows, Cols, Slices */
  /*  3rd-Dimension, slice 1: x-coords */
  /*  3rd-Dimension, slice 2: y-coords */
  /*  Load the pretrained weights at beginning of visual discrimination task */
  b_p[0] = (int32_T)p->layer;
  b_p[1] = (int32_T)p->nRows;
  b_p[2] = (int32_T)p->nRows;
  b_p[3] = (int32_T)p->components;
  b_p[4] = (int32_T)p->numInputDims[(int32_T)p->numLayers - 1];
  b_p[5] = (int32_T)p->numGrids->data[(int32_T)p->layer - 1];
  repmat(b_p, weights);

  /*  will need this uncommented soon... */
  /*  for layer=1:p.layer */
  /*      nInpDims=p.numInputDims(layer); */
  /*      for grid=1:p.nGrids(layer) */
  /*          if ~p.setPre */
  /*              location = [p.wd,'/rats/rat', char(48+p.ratNum), '/pretrainedW__layer', char(48+layer), 'grid', char(48+grid),'.mat']; */
  /*              w = load(location); */
  /*              weights(layer,:,:,1:nInpDims,grid)=w.w; */
  /*              fclose('all'); */
  /*  */
  /*          else */
  /*              weights = repmat(.5,(size(weights))); */
  /*          end */
  /*      end */
  /*  end */
  /* % initialize storage variables */
  /*  to be plotted with plotFamilDiffs */
  ixstart = 1;
  mtmp = p->nGrids[0];
  if (muDoubleScalarIsNaN(p->nGrids[0])) {
    ix = 2;
    exitg18 = false;
    while ((!exitg18) && (ix < 3)) {
      ixstart = 2;
      if (!muDoubleScalarIsNaN(p->nGrids[1])) {
        mtmp = p->nGrids[1];
        exitg18 = true;
      } else {
        ix = 3;
      }
    }
  }

  if ((ixstart < 2) && (p->nGrids[1] < mtmp)) {
    mtmp = p->nGrids[1];
  }

  inputs = p->meanSelectivity_caudal_new->size[0] *
    p->meanSelectivity_caudal_new->size[1];
  p->meanSelectivity_caudal_new->size[0] = (int32_T)p->nTrials;
  p->meanSelectivity_caudal_new->size[1] = (int32_T)mtmp;
  emxEnsureCapacity((emxArray__common *)p->meanSelectivity_caudal_new, inputs,
                    (int32_T)sizeof(real_T));
  nx = (int32_T)p->nTrials * (int32_T)mtmp;
  for (inputs = 0; inputs < nx; inputs++) {
    p->meanSelectivity_caudal_new->data[inputs] = 0.0;
  }

  ixstart = 1;
  mtmp = p->nGrids[0];
  if (muDoubleScalarIsNaN(p->nGrids[0])) {
    ix = 2;
    exitg17 = false;
    while ((!exitg17) && (ix < 3)) {
      ixstart = 2;
      if (!muDoubleScalarIsNaN(p->nGrids[1])) {
        mtmp = p->nGrids[1];
        exitg17 = true;
      } else {
        ix = 3;
      }
    }
  }

  if ((ixstart < 2) && (p->nGrids[1] < mtmp)) {
    mtmp = p->nGrids[1];
  }

  inputs = p->meanSelectivity_PRC_new->size[0] * p->
    meanSelectivity_PRC_new->size[1];
  p->meanSelectivity_PRC_new->size[0] = (int32_T)p->nTrials;
  p->meanSelectivity_PRC_new->size[1] = (int32_T)mtmp;
  emxEnsureCapacity((emxArray__common *)p->meanSelectivity_PRC_new, inputs,
                    (int32_T)sizeof(real_T));
  nx = (int32_T)p->nTrials * (int32_T)mtmp;
  for (inputs = 0; inputs < nx; inputs++) {
    p->meanSelectivity_PRC_new->data[inputs] = 0.0;
  }

  ixstart = 1;
  mtmp = p->nGrids[0];
  if (muDoubleScalarIsNaN(p->nGrids[0])) {
    ix = 2;
    exitg16 = false;
    while ((!exitg16) && (ix < 3)) {
      ixstart = 2;
      if (!muDoubleScalarIsNaN(p->nGrids[1])) {
        mtmp = p->nGrids[1];
        exitg16 = true;
      } else {
        ix = 3;
      }
    }
  }

  if ((ixstart < 2) && (p->nGrids[1] < mtmp)) {
    mtmp = p->nGrids[1];
  }

  inputs = p->meanSelectivity_caudal_prev->size[0] *
    p->meanSelectivity_caudal_prev->size[1];
  p->meanSelectivity_caudal_prev->size[0] = (int32_T)p->nTrials;
  p->meanSelectivity_caudal_prev->size[1] = (int32_T)mtmp;
  emxEnsureCapacity((emxArray__common *)p->meanSelectivity_caudal_prev, inputs,
                    (int32_T)sizeof(real_T));
  nx = (int32_T)p->nTrials * (int32_T)mtmp;
  for (inputs = 0; inputs < nx; inputs++) {
    p->meanSelectivity_caudal_prev->data[inputs] = 0.0;
  }

  ixstart = 1;
  mtmp = p->nGrids[0];
  if (muDoubleScalarIsNaN(p->nGrids[0])) {
    ix = 2;
    exitg15 = false;
    while ((!exitg15) && (ix < 3)) {
      ixstart = 2;
      if (!muDoubleScalarIsNaN(p->nGrids[1])) {
        mtmp = p->nGrids[1];
        exitg15 = true;
      } else {
        ix = 3;
      }
    }
  }

  if ((ixstart < 2) && (p->nGrids[1] < mtmp)) {
    mtmp = p->nGrids[1];
  }

  inputs = p->meanSelectivity_PRC_prev->size[0] * p->
    meanSelectivity_PRC_prev->size[1];
  p->meanSelectivity_PRC_prev->size[0] = (int32_T)p->nTrials;
  p->meanSelectivity_PRC_prev->size[1] = (int32_T)mtmp;
  emxEnsureCapacity((emxArray__common *)p->meanSelectivity_PRC_prev, inputs,
                    (int32_T)sizeof(real_T));
  nx = (int32_T)p->nTrials * (int32_T)mtmp;
  for (inputs = 0; inputs < nx; inputs++) {
    p->meanSelectivity_PRC_prev->data[inputs] = 0.0;
  }

  ixstart = 1;
  mtmp = p->nGrids[0];
  if (muDoubleScalarIsNaN(p->nGrids[0])) {
    ix = 2;
    exitg14 = false;
    while ((!exitg14) && (ix < 3)) {
      ixstart = 2;
      if (!muDoubleScalarIsNaN(p->nGrids[1])) {
        mtmp = p->nGrids[1];
        exitg14 = true;
      } else {
        ix = 3;
      }
    }
  }

  if ((ixstart < 2) && (p->nGrids[1] < mtmp)) {
    mtmp = p->nGrids[1];
  }

  inputs = p->familDiff_caudal->size[0] * p->familDiff_caudal->size[1];
  p->familDiff_caudal->size[0] = (int32_T)p->nTrials;
  p->familDiff_caudal->size[1] = (int32_T)mtmp;
  emxEnsureCapacity((emxArray__common *)p->familDiff_caudal, inputs, (int32_T)
                    sizeof(real_T));
  nx = (int32_T)p->nTrials * (int32_T)mtmp;
  for (inputs = 0; inputs < nx; inputs++) {
    p->familDiff_caudal->data[inputs] = 0.0;
  }

  ixstart = 1;
  mtmp = p->nGrids[0];
  if (muDoubleScalarIsNaN(p->nGrids[0])) {
    ix = 2;
    exitg13 = false;
    while ((!exitg13) && (ix < 3)) {
      ixstart = 2;
      if (!muDoubleScalarIsNaN(p->nGrids[1])) {
        mtmp = p->nGrids[1];
        exitg13 = true;
      } else {
        ix = 3;
      }
    }
  }

  if ((ixstart < 2) && (p->nGrids[1] < mtmp)) {
    mtmp = p->nGrids[1];
  }

  inputs = p->familDiff_PRC->size[0] * p->familDiff_PRC->size[1];
  p->familDiff_PRC->size[0] = (int32_T)p->nTrials;
  p->familDiff_PRC->size[1] = (int32_T)mtmp;
  emxEnsureCapacity((emxArray__common *)p->familDiff_PRC, inputs, (int32_T)
                    sizeof(real_T));
  nx = (int32_T)p->nTrials * (int32_T)mtmp;
  for (inputs = 0; inputs < nx; inputs++) {
    p->familDiff_PRC->data[inputs] = 0.0;
  }

  inputs = p->prevStimInit_act_peak->size[0] * p->prevStimInit_act_peak->size[1];
  p->prevStimInit_act_peak->size[0] = (int32_T)p->layer;
  p->prevStimInit_act_peak->size[1] = (int32_T)p->nTrials;
  emxEnsureCapacity((emxArray__common *)p->prevStimInit_act_peak, inputs,
                    (int32_T)sizeof(real_T));
  nx = (int32_T)p->layer * (int32_T)p->nTrials;
  for (inputs = 0; inputs < nx; inputs++) {
    p->prevStimInit_act_peak->data[inputs] = 0.0;
  }

  inputs = p->prevStimInit_act_total->size[0] * p->prevStimInit_act_total->size
    [1];
  p->prevStimInit_act_total->size[0] = (int32_T)p->layer;
  p->prevStimInit_act_total->size[1] = (int32_T)p->nTrials;
  emxEnsureCapacity((emxArray__common *)p->prevStimInit_act_total, inputs,
                    (int32_T)sizeof(real_T));
  nx = (int32_T)p->layer * (int32_T)p->nTrials;
  for (inputs = 0; inputs < nx; inputs++) {
    p->prevStimInit_act_total->data[inputs] = 0.0;
  }

  inputs = p->prevStimFin_act_peak->size[0] * p->prevStimFin_act_peak->size[1];
  p->prevStimFin_act_peak->size[0] = (int32_T)p->layer;
  p->prevStimFin_act_peak->size[1] = (int32_T)p->nTrials;
  emxEnsureCapacity((emxArray__common *)p->prevStimFin_act_peak, inputs,
                    (int32_T)sizeof(real_T));
  nx = (int32_T)p->layer * (int32_T)p->nTrials;
  for (inputs = 0; inputs < nx; inputs++) {
    p->prevStimFin_act_peak->data[inputs] = 0.0;
  }

  inputs = p->prevStimFin_act_total->size[0] * p->prevStimFin_act_total->size[1];
  p->prevStimFin_act_total->size[0] = (int32_T)p->layer;
  p->prevStimFin_act_total->size[1] = (int32_T)p->nTrials;
  emxEnsureCapacity((emxArray__common *)p->prevStimFin_act_total, inputs,
                    (int32_T)sizeof(real_T));
  nx = (int32_T)p->layer * (int32_T)p->nTrials;
  for (inputs = 0; inputs < nx; inputs++) {
    p->prevStimFin_act_total->data[inputs] = 0.0;
  }

  inputs = p->newStimInit_act_peak->size[0] * p->newStimInit_act_peak->size[1];
  p->newStimInit_act_peak->size[0] = (int32_T)p->layer;
  p->newStimInit_act_peak->size[1] = (int32_T)p->nTrials;
  emxEnsureCapacity((emxArray__common *)p->newStimInit_act_peak, inputs,
                    (int32_T)sizeof(real_T));
  nx = (int32_T)p->layer * (int32_T)p->nTrials;
  for (inputs = 0; inputs < nx; inputs++) {
    p->newStimInit_act_peak->data[inputs] = 0.0;
  }

  inputs = p->newStimInit_act_total->size[0] * p->newStimInit_act_total->size[1];
  p->newStimInit_act_total->size[0] = (int32_T)p->layer;
  p->newStimInit_act_total->size[1] = (int32_T)p->nTrials;
  emxEnsureCapacity((emxArray__common *)p->newStimInit_act_total, inputs,
                    (int32_T)sizeof(real_T));
  nx = (int32_T)p->layer * (int32_T)p->nTrials;
  for (inputs = 0; inputs < nx; inputs++) {
    p->newStimInit_act_total->data[inputs] = 0.0;
  }

  inputs = p->newStimFin_act_peak->size[0] * p->newStimFin_act_peak->size[1];
  p->newStimFin_act_peak->size[0] = (int32_T)p->layer;
  p->newStimFin_act_peak->size[1] = (int32_T)p->nTrials;
  emxEnsureCapacity((emxArray__common *)p->newStimFin_act_peak, inputs, (int32_T)
                    sizeof(real_T));
  nx = (int32_T)p->layer * (int32_T)p->nTrials;
  for (inputs = 0; inputs < nx; inputs++) {
    p->newStimFin_act_peak->data[inputs] = 0.0;
  }

  inputs = p->newStimFin_act_total->size[0] * p->newStimFin_act_total->size[1];
  p->newStimFin_act_total->size[0] = (int32_T)p->layer;
  p->newStimFin_act_total->size[1] = (int32_T)p->nTrials;
  emxEnsureCapacity((emxArray__common *)p->newStimFin_act_total, inputs,
                    (int32_T)sizeof(real_T));
  nx = (int32_T)p->layer * (int32_T)p->nTrials;
  for (inputs = 0; inputs < nx; inputs++) {
    p->newStimFin_act_total->data[inputs] = 0.0;
  }

  /*  two layers when PRC is available (control sessions) */
  /*  diagnostic for tracking number of features sampled during each */
  /*  comparison. The first dim (a 2) refers to stim */
  inputs = p->featsSampedByComparison->size[0] * p->
    featsSampedByComparison->size[1] * p->featsSampedByComparison->size[2];
  p->featsSampedByComparison->size[0] = 2;
  emxEnsureCapacity((emxArray__common *)p->featsSampedByComparison, inputs,
                    (int32_T)sizeof(real_T));
  unnamed_idx_1 = (int32_T)p->nTrials;
  inputs = p->featsSampedByComparison->size[0] * p->
    featsSampedByComparison->size[1] * p->featsSampedByComparison->size[2];
  p->featsSampedByComparison->size[1] = unnamed_idx_1;
  emxEnsureCapacity((emxArray__common *)p->featsSampedByComparison, inputs,
                    (int32_T)sizeof(real_T));
  unnamed_idx_2 = (int32_T)p->maxFixations[(int32_T)p->stimCond - 1];
  inputs = p->featsSampedByComparison->size[0] * p->
    featsSampedByComparison->size[1] * p->featsSampedByComparison->size[2];
  p->featsSampedByComparison->size[2] = unnamed_idx_2;
  emxEnsureCapacity((emxArray__common *)p->featsSampedByComparison, inputs,
                    (int32_T)sizeof(real_T));
  nx = ((int32_T)p->nTrials << 1) * (int32_T)p->maxFixations[(int32_T)
    p->stimCond - 1];
  for (inputs = 0; inputs < nx; inputs++) {
    p->featsSampedByComparison->data[inputs] = 0.0;
  }

  /*  which features were sampled during a given trial */
  ixstart = 1;
  mtmp = p->nGrids[0];
  if (muDoubleScalarIsNaN(p->nGrids[0])) {
    ix = 2;
    exitg12 = false;
    while ((!exitg12) && (ix < 3)) {
      ixstart = 2;
      if (!muDoubleScalarIsNaN(p->nGrids[1])) {
        mtmp = p->nGrids[1];
        exitg12 = true;
      } else {
        ix = 3;
      }
    }
  }

  if ((ixstart < 2) && (p->nGrids[1] > mtmp)) {
    mtmp = p->nGrids[1];
  }

  inputs = p->sample_feat->size[0] * p->sample_feat->size[1];
  p->sample_feat->size[0] = (int32_T)p->nTrials;
  p->sample_feat->size[1] = (int32_T)mtmp;
  emxEnsureCapacity((emxArray__common *)p->sample_feat, inputs, (int32_T)sizeof
                    (real_T));
  nx = (int32_T)p->nTrials * (int32_T)mtmp;
  for (inputs = 0; inputs < nx; inputs++) {
    p->sample_feat->data[inputs] = 0.0;
  }

  /*  incriment total fixation counter (used to shrink learning parameter) */
  inputs = p->fixations->size[0] * p->fixations->size[1];
  p->fixations->size[0] = 1;
  p->fixations->size[1] = (int32_T)p->nTrials;
  emxEnsureCapacity((emxArray__common *)p->fixations, inputs, (int32_T)sizeof
                    (real_T));
  nx = (int32_T)p->nTrials;
  for (inputs = 0; inputs < nx; inputs++) {
    p->fixations->data[inputs] = 0.0;
  }

  /*  tally of activation by trial and layer */
  inputs = p->peak_act->size[0] * p->peak_act->size[1];
  p->peak_act->size[0] = (int32_T)p->nTrials;
  p->peak_act->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)p->peak_act, inputs, (int32_T)sizeof
                    (real_T));
  nx = (int32_T)p->nTrials << 1;
  for (inputs = 0; inputs < nx; inputs++) {
    p->peak_act->data[inputs] = 0.0;
  }

  inputs = p->totalAct->size[0] * p->totalAct->size[1];
  p->totalAct->size[0] = (int32_T)p->nTrials;
  p->totalAct->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)p->totalAct, inputs, (int32_T)sizeof
                    (real_T));
  nx = (int32_T)p->nTrials << 1;
  for (inputs = 0; inputs < nx; inputs++) {
    p->totalAct->data[inputs] = 0.0;
  }

  /*  which features were compared */
  inputs = p->comparedFeat->size[0] * p->comparedFeat->size[1];
  p->comparedFeat->size[0] = (int32_T)p->nTrials;
  p->comparedFeat->size[1] = (int32_T)p->numGrids_Caudal;
  emxEnsureCapacity((emxArray__common *)p->comparedFeat, inputs, (int32_T)sizeof
                    (real_T));
  nx = (int32_T)p->nTrials * (int32_T)p->numGrids_Caudal;
  for (inputs = 0; inputs < nx; inputs++) {
    p->comparedFeat->data[inputs] = 0.0;
  }

  /* % begin trial loop */
  /*  for picking out the stim in the stimulus pair... */
  for (inputs = 0; inputs < 2; inputs++) {
    tTypeCnt[inputs] = 0.0;
  }

  y = p->nTrials;
  trial = 0;
  b_emxInit_real_T(&stimuli, 3, true);
  c_emxInit_real_T(&stimPair, 2, true);
  c_emxInit_real_T(&prevStimSelec, 2, true);
  emxInit_real_T(&features_sampled_prev, 1, true);
  emxInit_real_T(&sample_feat, 1, true);
  c_emxInit_real_T(&avail_feat, 2, true);
  emxInit_real_T(&features_sampled, 1, true);
  c_emxInit_real_T(&inps_tmp, 2, true);
  emxInit_real_T(&stimulus, 1, true);
  c_emxInit_real_T(&selectivity, 2, true);
  c_emxInit_real_T(&initial_selec, 2, true);
  b_emxInit_real_T(&row_dist_mat, 3, true);
  b_emxInit_real_T(&col_dist_mat, 3, true);
  b_emxInit_real_T(&input_mat, 3, true);
  b_emxInit_real_T(&f, 3, true);
  c_emxInit_real_T(&winners, 2, true);
  c_emxInit_real_T(&featuresToCompare, 2, true);
  c_emxInit_real_T(&meanSelectivity_caudal_prev, 2, true);
  c_emxInit_real_T(&familDiff_caudal, 2, true);
  c_emxInit_real_T(&dist_mat, 2, true);
  c_emxInit_real_T(&b_inputs, 2, true);
  c_emxInit_real_T(&whichCaudal, 2, true);
  b_emxInit_real_T(&weights_child, 3, true);
  emxInit_int32_T(&r0, 2, true);
  b_emxInit_int32_T(&r1, 1, true);
  b_emxInit_int32_T(&r2, 1, true);
  emxInit_boolean_T(&x, 1, true);
  b_emxInit_int32_T(&ii, 1, true);
  b_emxInit_real_T(&b_y, 3, true);
  b_emxInit_boolean_T(&b_x, 2, true);
  emxInit_int32_T(&b_ii, 2, true);
  b_emxInit_boolean_T(&c_p, 2, true);
  c_emxInit_real_T(&d_p, 2, true);
  b_emxInit_boolean_T(&e_p, 2, true);
  c_emxInit_real_T(&f_p, 2, true);
  b_emxInit_boolean_T(&g_p, 2, true);
  c_emxInit_real_T(&h_p, 2, true);
  b_emxInit_boolean_T(&i_p, 2, true);
  c_emxInit_real_T(&j_p, 2, true);
  c_emxInit_real_T(&k_p, 2, true);
  c_emxInit_real_T(&l_p, 2, true);
  emxInit_real_T(&b_sample_feat, 1, true);
  b_emxInit_real_T(&b_stimuli, 3, true);
  c_emxInit_real_T(&m_p, 2, true);
  c_emxInit_real_T(&n_p, 2, true);
  emxInit_real_T(&o_p, 1, true);
  emxInit_real_T(&p_p, 1, true);
  emxInit_real_T(&q_p, 1, true);
  c_emxInit_real_T(&b_meanSelectivity_caudal_prev, 2, true);
  b_emxInit_real_T(&b_input_mat, 3, true);
  c_emxInit_real_T(&r3, 2, true);
  c_emxInit_real_T(&r4, 2, true);
  c_emxInit_real_T(&r_p, 2, true);
  c_emxInit_real_T(&b_inps_tmp, 2, true);
  c_emxInit_real_T(&s_p, 2, true);
  c_emxInit_real_T(&t_p, 2, true);
  c_emxInit_real_T(&u_p, 2, true);
  c_emxInit_real_T(&v_p, 2, true);
  emxInit_boolean_T(&b_features_sampled, 1, true);
  e_emxInit_real_T(&b_weights, 4, true);
  emxInit_boolean_T(&b_features_sampled_prev, 1, true);
  emxInit_boolean_T(&c_features_sampled, 1, true);
  c_emxInit_real_T(&b_stimPair, 2, true);
  c_emxInit_real_T(&c_stimPair, 2, true);
  emxInit_real_T(&c_sample_feat, 1, true);
  c_emxInit_real_T(&b_avail_feat, 2, true);
  c_emxInit_real_T(&c_avail_feat, 2, true);
  do {
    exitg2 = 0;
    if (trial <= (int32_T)y - 1) {
      /* %% Determine trial type and increment count */
      tTypeCnt[(int32_T)p->tType->data[trial] - 1]++;
      if (p->tType->data[trial] == 1.0) {
        /*          tTypeStr='Mismatch'; */
        inputs = stimuli->size[0] * stimuli->size[1] * stimuli->size[2];
        stimuli->size[0] = p->stimuli_misMatch->size[0];
        stimuli->size[1] = p->stimuli_misMatch->size[1];
        stimuli->size[2] = p->stimuli_misMatch->size[2];
        emxEnsureCapacity((emxArray__common *)stimuli, inputs, (int32_T)sizeof
                          (real_T));
        nx = p->stimuli_misMatch->size[0] * p->stimuli_misMatch->size[1] *
          p->stimuli_misMatch->size[2];
        for (inputs = 0; inputs < nx; inputs++) {
          stimuli->data[inputs] = p->stimuli_misMatch->data[inputs];
        }
      } else {
        /*          tTypeStr='Match'; */
        inputs = stimuli->size[0] * stimuli->size[1] * stimuli->size[2];
        stimuli->size[0] = p->stimuli_match->size[0];
        stimuli->size[1] = p->stimuli_match->size[1];
        stimuli->size[2] = p->stimuli_match->size[2];
        emxEnsureCapacity((emxArray__common *)stimuli, inputs, (int32_T)sizeof
                          (real_T));
        nx = p->stimuli_match->size[0] * p->stimuli_match->size[1] *
          p->stimuli_match->size[2];
        for (inputs = 0; inputs < nx; inputs++) {
          stimuli->data[inputs] = p->stimuli_match->data[inputs];
        }
      }

      /*      fprintf('\n\nTrial %d: Stim Cond %d, %s Trial, Rat %d.\n',trial, p.stimCond, tTypeStr, p.ratNum); */
      /* ---------------------------------------------------------------------- */
      /* %% Get the two stimuli for this simultaneous visual discrimination trial */
      /*      stim_name = ['stimuli',char(48+tType)]; %tType==1 is Mismatch, tType==2 is Match */
      /*      stimuli = fid.(stim_name); */
      nx = stimuli->size[1];
      loop_ub = stimuli->size[2];
      w_p = (int32_T)p->stimOrder->data[((int32_T)tTypeCnt[(int32_T)p->
        tType->data[trial] - 1] + p->stimOrder->size[0] * ((int32_T)p->
        tType->data[trial] - 1)) - 1];
      inputs = b_stimuli->size[0] * b_stimuli->size[1] * b_stimuli->size[2];
      b_stimuli->size[0] = 1;
      b_stimuli->size[1] = nx;
      b_stimuli->size[2] = loop_ub;
      emxEnsureCapacity((emxArray__common *)b_stimuli, inputs, (int32_T)sizeof
                        (real_T));
      for (inputs = 0; inputs < loop_ub; inputs++) {
        for (idx = 0; idx < nx; idx++) {
          b_stimuli->data[b_stimuli->size[0] * idx + b_stimuli->size[0] *
            b_stimuli->size[1] * inputs] = stimuli->data[((w_p + stimuli->size[0]
            * idx) + stimuli->size[0] * stimuli->size[1] * inputs) - 1];
        }
      }

      squeeze(b_stimuli, stimPair);
      w_p = stimPair->size[0];
      nm1d2 = stimPair->size[0];
      c_ii = stimPair->size[1];
      inputs = b_stimPair->size[0] * b_stimPair->size[1];
      b_stimPair->size[0] = nm1d2;
      b_stimPair->size[1] = c_ii;
      emxEnsureCapacity((emxArray__common *)b_stimPair, inputs, (int32_T)sizeof
                        (real_T));
      for (inputs = 0; inputs < c_ii; inputs++) {
        for (idx = 0; idx < nm1d2; idx++) {
          b_stimPair->data[idx + b_stimPair->size[0] * inputs] = stimPair->
            data[idx + w_p * inputs];
        }
      }

      inputs = stimPair->size[0] * stimPair->size[1];
      stimPair->size[0] = b_stimPair->size[0];
      stimPair->size[1] = b_stimPair->size[1];
      emxEnsureCapacity((emxArray__common *)stimPair, inputs, (int32_T)sizeof
                        (real_T));
      nx = b_stimPair->size[1];
      for (inputs = 0; inputs < nx; inputs++) {
        loop_ub = b_stimPair->size[0];
        for (idx = 0; idx < loop_ub; idx++) {
          stimPair->data[idx + stimPair->size[0] * inputs] = b_stimPair->
            data[idx + b_stimPair->size[0] * inputs];
        }
      }

      /* ---------------------------------------------------------------------- */
      /* %% Generate series of saccades and present stimuli, for this trial */
      /*     %%     [weights, stop_sampling, p] = VD_compare_stimuli(stimPair, weights, p, trial); %weights output on previous trial get input on next trial */
      /*      p.activations(:,:,:,trial)=activations; */
      /* VD_compare_stimuli_controllOfFixation called by visDiscrimModel.m */
      /*  want this function to: decide which features of the stimulus to present */
      /*  11/2/14 ps in stick && fixation if statement, added a line to clear */
      /* sample_feat before changing them to 1 */
      /*  5/18/15 ps */
      /*  commented out all assignments of activations (in an effort to speed up */
      /*  processing), since not looking at them directly right now. */
      /*     %% storage variables */
      inputs = prevStimSelec->size[0] * prevStimSelec->size[1];
      prevStimSelec->size[0] = (int32_T)p->layer;
      prevStimSelec->size[1] = (int32_T)p->numGrids_Caudal;
      emxEnsureCapacity((emxArray__common *)prevStimSelec, inputs, (int32_T)
                        sizeof(real_T));
      nx = (int32_T)p->layer * (int32_T)p->numGrids_Caudal;
      for (inputs = 0; inputs < nx; inputs++) {
        prevStimSelec->data[inputs] = 0.0;
      }

      /*  prevInitialSelec = zeros(1,p.numGrids_Caudal); */
      /*  pktot.prevStimFin_act_peak = zeros(p.layer,1); */
      /*  pktot.prevStimFin_act_total = zeros(p.layer,1); */
      /*  pktot.prevStimInit_act_peak = zeros(p.layer,1); */
      /*  pktot.prevStimInit_act_total = zeros(p.layer,1); */
      /*  */
      /*  pktot.init_act_peak = zeros(p.layer,1); */
      /*  pktot.init_act_total = zeros(p.layer,1); */
      /*  pktot.fin_act_peak = zeros(p.layer,1); */
      /*  pktot.fin_act_total = zeros(p.layer,1); */
      /*  prevStimSelec = zeros(1,p.numGrids_Caudal); */
      /*  prevStimSelec = zeros(1,p.numGrids_Caudal); */
      /*  fixations = 0; */
      stim = 1.0;
      first_stim_sampled = 1;
      stopSampling = 0;
      comparison = 0U;

      /*  p.fixations_total(trial) = 0; */
      /*     %% preparing input stimulus for processing */
      if (1.0 > p->components) {
        nx = 0;
      } else {
        nx = (int32_T)p->components;
      }

      w_p = stimPair->size[1];
      inputs = c_stimPair->size[0] * c_stimPair->size[1];
      c_stimPair->size[0] = nx;
      c_stimPair->size[1] = w_p;
      emxEnsureCapacity((emxArray__common *)c_stimPair, inputs, (int32_T)sizeof
                        (real_T));
      for (inputs = 0; inputs < w_p; inputs++) {
        for (idx = 0; idx < nx; idx++) {
          c_stimPair->data[idx + c_stimPair->size[0] * inputs] = stimPair->
            data[idx + stimPair->size[0] * inputs];
        }
      }

      inputs = stimPair->size[0] * stimPair->size[1];
      stimPair->size[0] = c_stimPair->size[0];
      stimPair->size[1] = c_stimPair->size[1];
      emxEnsureCapacity((emxArray__common *)stimPair, inputs, (int32_T)sizeof
                        (real_T));
      nx = c_stimPair->size[1];
      for (inputs = 0; inputs < nx; inputs++) {
        loop_ub = c_stimPair->size[0];
        for (idx = 0; idx < loop_ub; idx++) {
          stimPair->data[idx + stimPair->size[0] * inputs] = c_stimPair->
            data[idx + c_stimPair->size[0] * inputs];
        }
      }

      keepSampling = 0;
      inputs = features_sampled_prev->size[0];
      features_sampled_prev->size[0] = (int32_T)p->numGrids_Caudal;
      emxEnsureCapacity((emxArray__common *)features_sampled_prev, inputs,
                        (int32_T)sizeof(real_T));
      nx = (int32_T)p->numGrids_Caudal;
      for (inputs = 0; inputs < nx; inputs++) {
        features_sampled_prev->data[inputs] = 0.0;
      }

      /*     %% */
      do {
        exitg1 = 0;
        if (((p->fixations->data[trial] < p->maxFix) && (stopSampling == 0)) ||
            ((keepSampling != 0) && (stopSampling == 0))) {
          /*  stop when enough evidence accumulated or maxFix saccades made */
          comparison++;
          inputs = sample_feat->size[0];
          sample_feat->size[0] = (int32_T)p->numGrids_Caudal;
          emxEnsureCapacity((emxArray__common *)sample_feat, inputs, (int32_T)
                            sizeof(real_T));
          nx = (int32_T)p->numGrids_Caudal;
          for (inputs = 0; inputs < nx; inputs++) {
            sample_feat->data[inputs] = 0.0;
          }

          randperm(p->numGrids_Caudal, avail_feat);
          if (1.0 > p->nFeaturesToSample) {
            nx = 0;
          } else {
            nx = (int32_T)p->nFeaturesToSample;
          }

          inputs = b_ii->size[0] * b_ii->size[1];
          b_ii->size[0] = 1;
          b_ii->size[1] = nx;
          emxEnsureCapacity((emxArray__common *)b_ii, inputs, (int32_T)sizeof
                            (int32_T));
          for (inputs = 0; inputs < nx; inputs++) {
            b_ii->data[b_ii->size[0] * inputs] = (int32_T)avail_feat->
              data[inputs];
          }

          nx = b_ii->size[0] * b_ii->size[1];
          for (inputs = 0; inputs < nx; inputs++) {
            sample_feat->data[b_ii->data[inputs] - 1] = 1.0;
          }

          /* sample features (at random) */
          p->fixations->data[trial]++;

          /* % total fixations across both stimuli */
          if (!(first_stim_sampled != 0)) {
            /* force at least one feature in newly sampled stim to */
            /*  be compared with features samped from prev */
            /*  stim. */
            do {
              exitg11 = 0;
              inputs = b_sample_feat->size[0];
              b_sample_feat->size[0] = features_sampled_prev->size[0];
              emxEnsureCapacity((emxArray__common *)b_sample_feat, inputs,
                                (int32_T)sizeof(real_T));
              nx = features_sampled_prev->size[0];
              for (inputs = 0; inputs < nx; inputs++) {
                b_sample_feat->data[inputs] = sample_feat->data[(int32_T)
                  features_sampled_prev->data[inputs] - 1];
              }

              if (!any(b_sample_feat)) {
                inputs = sample_feat->size[0];
                sample_feat->size[0] = (int32_T)p->numGrids_Caudal;
                emxEnsureCapacity((emxArray__common *)sample_feat, inputs,
                                  (int32_T)sizeof(real_T));
                nx = (int32_T)p->numGrids_Caudal;
                for (inputs = 0; inputs < nx; inputs++) {
                  sample_feat->data[inputs] = 0.0;
                }

                randperm(p->numGrids_Caudal, avail_feat);
                if (1.0 > p->nFeaturesToSample) {
                  nx = 0;
                } else {
                  nx = (int32_T)p->nFeaturesToSample;
                }

                inputs = b_ii->size[0] * b_ii->size[1];
                b_ii->size[0] = 1;
                b_ii->size[1] = nx;
                emxEnsureCapacity((emxArray__common *)b_ii, inputs, (int32_T)
                                  sizeof(int32_T));
                for (inputs = 0; inputs < nx; inputs++) {
                  b_ii->data[b_ii->size[0] * inputs] = (int32_T)avail_feat->
                    data[inputs];
                }

                nx = b_ii->size[0] * b_ii->size[1];
                for (inputs = 0; inputs < nx; inputs++) {
                  sample_feat->data[b_ii->data[inputs] - 1] = 1.0;
                }

                /* sample features (at random) */
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(emlrtRootTLSGlobal);
                }
              } else {
                exitg11 = 1;
              }
            } while (exitg11 == 0);
          }

          stick = 1;
          while (stick == 1) {
            /* ------------------------------------------------------------------ */
            /*  decide whether to stick or switch stimulus (using fixation ratio) */
            /* ------------------------------------------------------------------ */
            stick_switch = c_rand();

            /*          stickProb = p.fixn_ratio/(p.fixn_ratio+1); */
            if (stick_switch <= p->fixn_ratio) {
              /* ------------------------------------------------------------------ */
              /* if stick, sample more features */
              /* ------------------------------------------------------------------ */
              /* && (p.fixations(trial) <= p.maxFix), */
              /*  sample 3 features on each fixation (note: remove one already-sampled feature, if 1st or 2nd fixation on this stim) */
              if (avail_feat->size[1] > p->nFeaturesToSample) {
                /*  make sure that enough features are left to sample from */
                if (2 > avail_feat->size[1]) {
                  inputs = 0;
                  idx = 0;
                } else {
                  inputs = 1;
                  idx = avail_feat->size[1];
                }

                w_p = b_avail_feat->size[0] * b_avail_feat->size[1];
                b_avail_feat->size[0] = 1;
                b_avail_feat->size[1] = idx - inputs;
                emxEnsureCapacity((emxArray__common *)b_avail_feat, w_p,
                                  (int32_T)sizeof(real_T));
                nx = idx - inputs;
                for (idx = 0; idx < nx; idx++) {
                  b_avail_feat->data[b_avail_feat->size[0] * idx] =
                    avail_feat->data[inputs + idx];
                }

                inputs = avail_feat->size[0] * avail_feat->size[1];
                avail_feat->size[0] = 1;
                avail_feat->size[1] = b_avail_feat->size[1];
                emxEnsureCapacity((emxArray__common *)avail_feat, inputs,
                                  (int32_T)sizeof(real_T));
                nx = b_avail_feat->size[1];
                for (inputs = 0; inputs < nx; inputs++) {
                  avail_feat->data[avail_feat->size[0] * inputs] =
                    b_avail_feat->data[b_avail_feat->size[0] * inputs];
                }

                /* NOTE: all features can only be sampled once (features are being totted up over fixations and sampled at the end) */
                p->fixations->data[trial]++;
                randperm(avail_feat->size[1], meanSelectivity_caudal_prev);
                inputs = c_avail_feat->size[0] * c_avail_feat->size[1];
                c_avail_feat->size[0] = 1;
                c_avail_feat->size[1] = meanSelectivity_caudal_prev->size[1];
                emxEnsureCapacity((emxArray__common *)c_avail_feat, inputs,
                                  (int32_T)sizeof(real_T));
                nx = meanSelectivity_caudal_prev->size[1];
                for (inputs = 0; inputs < nx; inputs++) {
                  c_avail_feat->data[c_avail_feat->size[0] * inputs] =
                    avail_feat->data[(int32_T)meanSelectivity_caudal_prev->
                    data[meanSelectivity_caudal_prev->size[0] * inputs] - 1];
                }

                inputs = avail_feat->size[0] * avail_feat->size[1];
                avail_feat->size[0] = 1;
                avail_feat->size[1] = c_avail_feat->size[1];
                emxEnsureCapacity((emxArray__common *)avail_feat, inputs,
                                  (int32_T)sizeof(real_T));
                nx = c_avail_feat->size[1];
                for (inputs = 0; inputs < nx; inputs++) {
                  avail_feat->data[avail_feat->size[0] * inputs] =
                    c_avail_feat->data[c_avail_feat->size[0] * inputs];
                }

                if (1.0 > p->nFeaturesToSample) {
                  nx = 0;
                } else {
                  nx = (int32_T)p->nFeaturesToSample;
                }

                inputs = b_ii->size[0] * b_ii->size[1];
                b_ii->size[0] = 1;
                b_ii->size[1] = nx;
                emxEnsureCapacity((emxArray__common *)b_ii, inputs, (int32_T)
                                  sizeof(int32_T));
                for (inputs = 0; inputs < nx; inputs++) {
                  b_ii->data[b_ii->size[0] * inputs] = (int32_T)avail_feat->
                    data[inputs];
                }

                nx = b_ii->size[0] * b_ii->size[1];
                for (inputs = 0; inputs < nx; inputs++) {
                  sample_feat->data[b_ii->data[inputs] - 1] = 1.0;
                }

                /* sample features */
              } else {
                stick = 0;
              }
            } else {
              /* if stick_switch >= stickProb */
              stick = 0;
            }

            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(emlrtRootTLSGlobal);
            }
          }

          nx = p->sample_feat->size[1];
          inputs = ii->size[0];
          ii->size[0] = nx;
          emxEnsureCapacity((emxArray__common *)ii, inputs, (int32_T)sizeof
                            (int32_T));
          for (inputs = 0; inputs < nx; inputs++) {
            ii->data[inputs] = inputs;
          }

          unnamed_idx_1 = ii->size[0];
          for (inputs = 0; inputs < unnamed_idx_1; inputs++) {
            p->sample_feat->data[trial + p->sample_feat->size[0] * ii->
              data[inputs]] = sample_feat->data[inputs];
          }

          p->featsSampedByComparison->data[(((int32_T)stim +
            p->featsSampedByComparison->size[0] * trial) +
            p->featsSampedByComparison->size[0] * p->
            featsSampedByComparison->size[1] * ((int32_T)comparison - 1)) - 1] =
            sum(sample_feat);

          /*      % incriment total fixation counter (used to shrink learning parameter) */
          /*      p.fixations_total = p.fixations_total+fixations; */
          /*  Incorporate all evidence together into stimulus presentation; grab stimulus, sample the specified features, fill remaining inputs with 0.5 */
          inputs = x->size[0];
          x->size[0] = sample_feat->size[0];
          emxEnsureCapacity((emxArray__common *)x, inputs, (int32_T)sizeof
                            (boolean_T));
          nx = sample_feat->size[0];
          for (inputs = 0; inputs < nx; inputs++) {
            x->data[inputs] = (sample_feat->data[inputs] == 1.0);
          }

          nx = x->size[0];
          idx = 0;
          inputs = ii->size[0];
          ii->size[0] = x->size[0];
          emxEnsureCapacity((emxArray__common *)ii, inputs, (int32_T)sizeof
                            (int32_T));
          c_ii = 1;
          exitg10 = false;
          while ((!exitg10) && (c_ii <= nx)) {
            guard4 = false;
            if (x->data[c_ii - 1]) {
              idx++;
              ii->data[idx - 1] = c_ii;
              if (idx >= nx) {
                exitg10 = true;
              } else {
                guard4 = true;
              }
            } else {
              guard4 = true;
            }

            if (guard4) {
              c_ii++;
            }
          }

          if (x->size[0] == 1) {
            if (idx == 0) {
              inputs = ii->size[0];
              ii->size[0] = 0;
              emxEnsureCapacity((emxArray__common *)ii, inputs, (int32_T)sizeof
                                (int32_T));
            }
          } else {
            inputs = ii->size[0];
            if (1 > idx) {
              ii->size[0] = 0;
            } else {
              ii->size[0] = idx;
            }

            emxEnsureCapacity((emxArray__common *)ii, inputs, (int32_T)sizeof
                              (int32_T));
          }

          inputs = features_sampled->size[0];
          features_sampled->size[0] = ii->size[0];
          emxEnsureCapacity((emxArray__common *)features_sampled, inputs,
                            (int32_T)sizeof(real_T));
          nx = ii->size[0];
          for (inputs = 0; inputs < nx; inputs++) {
            features_sampled->data[inputs] = ii->data[inputs];
          }

          /* next few lines translate the sampled features into correct input dimensions in the 15 element input vector */
          inputs = sample_feat->size[0];
          sample_feat->size[0] = features_sampled->size[0];
          emxEnsureCapacity((emxArray__common *)sample_feat, inputs, (int32_T)
                            sizeof(real_T));
          nx = features_sampled->size[0];
          for (inputs = 0; inputs < nx; inputs++) {
            sample_feat->data[inputs] = (features_sampled->data[inputs] - 1.0) *
              p->numInputDims_Caudal + 1.0;
          }

          inputs = inps_tmp->size[0] * inps_tmp->size[1];
          inps_tmp->size[0] = (int32_T)(p->numInputDims_Caudal - 1.0);
          emxEnsureCapacity((emxArray__common *)inps_tmp, inputs, (int32_T)
                            sizeof(real_T));
          nm1d2 = sample_feat->size[0];
          inputs = inps_tmp->size[0] * inps_tmp->size[1];
          inps_tmp->size[1] = nm1d2;
          emxEnsureCapacity((emxArray__common *)inps_tmp, inputs, (int32_T)
                            sizeof(real_T));
          nx = (int32_T)(p->numInputDims_Caudal - 1.0) * sample_feat->size[0];
          for (inputs = 0; inputs < nx; inputs++) {
            inps_tmp->data[inputs] = 0.0;
          }

          nm1d2 = 0;
          while (nm1d2 <= (int32_T)(p->numInputDims_Caudal - 1.0) - 1) {
            nx = inps_tmp->size[1];
            inputs = ii->size[0];
            ii->size[0] = nx;
            emxEnsureCapacity((emxArray__common *)ii, inputs, (int32_T)sizeof
                              (int32_T));
            for (inputs = 0; inputs < nx; inputs++) {
              ii->data[inputs] = inputs;
            }

            inputs = c_sample_feat->size[0];
            c_sample_feat->size[0] = sample_feat->size[0];
            emxEnsureCapacity((emxArray__common *)c_sample_feat, inputs,
                              (int32_T)sizeof(real_T));
            nx = sample_feat->size[0];
            for (inputs = 0; inputs < nx; inputs++) {
              c_sample_feat->data[inputs] = sample_feat->data[inputs] + (1.0 +
                (real_T)nm1d2);
            }

            unnamed_idx_1 = ii->size[0];
            for (inputs = 0; inputs < unnamed_idx_1; inputs++) {
              inps_tmp->data[nm1d2 + inps_tmp->size[0] * ii->data[inputs]] =
                c_sample_feat->data[inputs];
            }

            nm1d2++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(emlrtRootTLSGlobal);
            }
          }

          c_inps_tmp[0] = inps_tmp->size[0] * inps_tmp->size[1];
          d_inps_tmp = *inps_tmp;
          d_inps_tmp.size = (int32_T *)&c_inps_tmp;
          d_inps_tmp.numDimensions = 1;
          cat(sample_feat, &d_inps_tmp, b_inputs);

          /*          inputs = cat(1,inputs, inputs+1, inputs+2); */
          inputs = sample_feat->size[0];
          sample_feat->size[0] = (int32_T)p->components;
          emxEnsureCapacity((emxArray__common *)sample_feat, inputs, (int32_T)
                            sizeof(real_T));
          nx = (int32_T)p->components;
          for (inputs = 0; inputs < nx; inputs++) {
            sample_feat->data[inputs] = 1.0;
          }

          inputs = r0->size[0] * r0->size[1];
          r0->size[0] = b_inputs->size[0];
          r0->size[1] = b_inputs->size[1];
          emxEnsureCapacity((emxArray__common *)r0, inputs, (int32_T)sizeof
                            (int32_T));
          nx = b_inputs->size[0] * b_inputs->size[1];
          for (inputs = 0; inputs < nx; inputs++) {
            r0->data[inputs] = (int32_T)b_inputs->data[inputs];
          }

          nx = r0->size[0] * r0->size[1];
          for (inputs = 0; inputs < nx; inputs++) {
            sample_feat->data[r0->data[inputs] - 1] = 0.0;
          }

          nx = stimPair->size[0];
          inputs = stimulus->size[0];
          stimulus->size[0] = nx;
          emxEnsureCapacity((emxArray__common *)stimulus, inputs, (int32_T)
                            sizeof(real_T));
          for (inputs = 0; inputs < nx; inputs++) {
            stimulus->data[inputs] = stimPair->data[inputs + stimPair->size[0] *
              ((int32_T)stim - 1)];
          }

          nm1d2 = sample_feat->size[0];
          for (c_ii = 0; c_ii < nm1d2; c_ii++) {
            if (sample_feat->data[c_ii] == 1.0) {
              stimulus->data[c_ii] = 0.5;
            }
          }

          /*         %% */
          /* ---------------------------------------------------------------------- */
          /*  Expose network to this stimulus, calculate selectivity, and update weights */
          /* ---------------------------------------------------------------------- */
          /*      weights = zeros(p.numLayers,p.nRows,p.nRows,p.numInputDims(p.layer),max(p.numGrids)); */
          /*      [weights, selectivity, initial_selec, p, ~, usePRC, acts, initial_acts] = VD_present_stimulus(stimulus, weights, p, features_sampled, trial, ~); */
          /*  Function called by VD_present_stimulus.m. Presents the network with the two stimuli on this trial. */
          outsz[0] = 1;
          outsz[1] = 1;
          outsz[2] = stimulus->size[0];
          for (inputs = 0; inputs < 3; inputs++) {
            sz[inputs] = outsz[inputs];
          }

          inputs = b_y->size[0] * b_y->size[1] * b_y->size[2];
          b_y->size[0] = 1;
          b_y->size[1] = 1;
          b_y->size[2] = sz[2];
          emxEnsureCapacity((emxArray__common *)b_y, inputs, (int32_T)sizeof
                            (real_T));
          for (k = 0; k + 1 <= stimulus->size[0]; k++) {
            b_y->data[k] = stimulus->data[k];
          }

          x_p[0] = p->nRows;
          x_p[1] = p->nRows;
          x_p[2] = 1.0;
          b_repmat(b_y, x_p, stimuli);

          /*  5 grids (only 1 stimulus) */
          ixstart = 1;
          n = p->numGrids->size[1];
          mtmp = p->numGrids->data[0];
          if (p->numGrids->size[1] > 1) {
            if (muDoubleScalarIsNaN(p->numGrids->data[0])) {
              ix = 2;
              exitg9 = false;
              while ((!exitg9) && (ix <= n)) {
                ixstart = ix;
                if (!muDoubleScalarIsNaN(p->numGrids->data[ix - 1])) {
                  mtmp = p->numGrids->data[ix - 1];
                  exitg9 = true;
                } else {
                  ix++;
                }
              }
            }

            if (ixstart < p->numGrids->size[1]) {
              while (ixstart + 1 <= n) {
                if (p->numGrids->data[ixstart] > mtmp) {
                  mtmp = p->numGrids->data[ixstart];
                }

                ixstart++;
              }
            }
          }

          inputs = selectivity->size[0] * selectivity->size[1];
          selectivity->size[0] = (int32_T)p->numLayers;
          selectivity->size[1] = (int32_T)mtmp;
          emxEnsureCapacity((emxArray__common *)selectivity, inputs, (int32_T)
                            sizeof(real_T));
          nx = (int32_T)p->numLayers * (int32_T)mtmp;
          for (inputs = 0; inputs < nx; inputs++) {
            selectivity->data[inputs] = 0.0;
          }

          ixstart = 1;
          n = p->numGrids->size[1];
          mtmp = p->numGrids->data[0];
          if (p->numGrids->size[1] > 1) {
            if (muDoubleScalarIsNaN(p->numGrids->data[0])) {
              ix = 2;
              exitg8 = false;
              while ((!exitg8) && (ix <= n)) {
                ixstart = ix;
                if (!muDoubleScalarIsNaN(p->numGrids->data[ix - 1])) {
                  mtmp = p->numGrids->data[ix - 1];
                  exitg8 = true;
                } else {
                  ix++;
                }
              }
            }

            if (ixstart < p->numGrids->size[1]) {
              while (ixstart + 1 <= n) {
                if (p->numGrids->data[ixstart] > mtmp) {
                  mtmp = p->numGrids->data[ixstart];
                }

                ixstart++;
              }
            }
          }

          inputs = initial_selec->size[0] * initial_selec->size[1];
          initial_selec->size[0] = (int32_T)p->numLayers;
          initial_selec->size[1] = (int32_T)mtmp;
          emxEnsureCapacity((emxArray__common *)initial_selec, inputs, (int32_T)
                            sizeof(real_T));
          nx = (int32_T)p->numLayers * (int32_T)mtmp;
          for (inputs = 0; inputs < nx; inputs++) {
            initial_selec->data[inputs] = 0.0;
          }

          /*  pktot.fin_act_peak = zeros(p.numLayers,max(p.numGrids)); */
          /*  pktot.fin_act_total = zeros(p.numLayers,max(p.numGrids)); */
          /*  pktot.init_act_peak = zeros(p.numLayers,max(p.numGrids)); */
          /*  pktot.init_act_total = zeros(p.numLayers,max(p.numGrids)); */
          /*  winact = zeros(p.numLayers,p.maxNumGrids,2);  % activation in each grid in x,y coordinates? */
          inputs = row_dist_mat->size[0] * row_dist_mat->size[1] *
            row_dist_mat->size[2];
          row_dist_mat->size[0] = (int32_T)p->numRows;
          row_dist_mat->size[1] = (int32_T)p->numRows;
          row_dist_mat->size[2] = 2;
          emxEnsureCapacity((emxArray__common *)row_dist_mat, inputs, (int32_T)
                            sizeof(real_T));
          nx = (int32_T)p->numRows * (int32_T)p->numRows << 1;
          for (inputs = 0; inputs < nx; inputs++) {
            row_dist_mat->data[inputs] = 0.0;
          }

          inputs = col_dist_mat->size[0] * col_dist_mat->size[1] *
            col_dist_mat->size[2];
          col_dist_mat->size[0] = (int32_T)p->numRows;
          col_dist_mat->size[1] = (int32_T)p->numRows;
          col_dist_mat->size[2] = 2;
          emxEnsureCapacity((emxArray__common *)col_dist_mat, inputs, (int32_T)
                            sizeof(real_T));
          nx = (int32_T)p->numRows * (int32_T)p->numRows << 1;
          for (inputs = 0; inputs < nx; inputs++) {
            col_dist_mat->data[inputs] = 0.0;
          }

          /*          selectivity = 0; */
          selectivity_child = 0.0;

          /*  only use PRC layer if available and enough features were sampled */
          if ((p->layer == 2.0) && (features_sampled->size[0] ==
               p->numGrids_Caudal)) {
            usePRC = 1;
          } else {
            usePRC = 0;
          }

          /*         %% Expose network to stimuli and update weights */
          /*  switchRatio = 0; */
          /*  fix = 0; */
          /*  while switchRatio < p.fixn_ratio_lowHigh(p.stimCond) */
          /*  */
          /*      % if fixation wasn't outside of stimulus, incriment fixations */
          /*      % for each encoding cycle */
          /*      p.fixations(trial) = p.fixations(trial) + 1; %% total fixations across both stimuli */
          /*  */
          layer = 0;
          while (layer <= (int32_T)p->layer - 1) {
            b = p->nGrids[layer] * p->numInputDims[layer];
            if (muDoubleScalarIsNaN(p->numInputDims[layer]) ||
                muDoubleScalarIsNaN(b)) {
              n = 0;
              anew = rtNaN;
              apnd = b;
            } else if ((p->numInputDims[layer] == 0.0) || ((1.0 < b) &&
                        (p->numInputDims[layer] < 0.0)) || ((b < 1.0) &&
                        (p->numInputDims[layer] > 0.0))) {
              n = -1;
              anew = 1.0;
              apnd = b;
            } else if (muDoubleScalarIsInf(b)) {
              n = 0;
              anew = rtNaN;
              apnd = b;
            } else if (muDoubleScalarIsInf(p->numInputDims[layer])) {
              n = 0;
              anew = 1.0;
              apnd = b;
            } else {
              anew = 1.0;
              ndbl = muDoubleScalarFloor((b - 1.0) / p->numInputDims[layer] +
                0.5);
              apnd = 1.0 + ndbl * p->numInputDims[layer];
              if (p->numInputDims[layer] > 0.0) {
                cdiff = apnd - b;
              } else {
                cdiff = b - apnd;
              }

              absb = muDoubleScalarAbs(b);
              if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 *
                  muDoubleScalarMax(1.0, absb)) {
                ndbl++;
                apnd = b;
              } else if (cdiff > 0.0) {
                apnd = 1.0 + (ndbl - 1.0) * p->numInputDims[layer];
              } else {
                ndbl++;
              }

              if (ndbl >= 0.0) {
                n = (int32_T)ndbl - 1;
              } else {
                n = -1;
              }
            }

            inputs = avail_feat->size[0] * avail_feat->size[1];
            avail_feat->size[0] = 1;
            avail_feat->size[1] = n + 1;
            emxEnsureCapacity((emxArray__common *)avail_feat, inputs, (int32_T)
                              sizeof(real_T));
            if (n + 1 > 0) {
              avail_feat->data[0] = anew;
              if (n + 1 > 1) {
                avail_feat->data[n] = apnd;
                inputs = n + (n < 0);
                if (inputs >= 0) {
                  nm1d2 = (int32_T)((uint32_T)inputs >> 1);
                } else {
                  nm1d2 = (int32_T)~(~(uint32_T)inputs >> 1);
                }

                for (k = 1; k < nm1d2; k++) {
                  kd = (real_T)k * p->numInputDims[layer];
                  avail_feat->data[k] = anew + kd;
                  avail_feat->data[n - k] = apnd - kd;
                }

                if (nm1d2 << 1 == n) {
                  avail_feat->data[nm1d2] = (anew + apnd) / 2.0;
                } else {
                  kd = (real_T)nm1d2 * p->numInputDims[layer];
                  avail_feat->data[nm1d2] = anew + kd;
                  avail_feat->data[nm1d2 + 1] = apnd - kd;
                }
              }
            }

            inputs = featuresToCompare->size[0] * featuresToCompare->size[1];
            featuresToCompare->size[0] = 1;
            featuresToCompare->size[1] = avail_feat->size[1];
            emxEnsureCapacity((emxArray__common *)featuresToCompare, inputs,
                              (int32_T)sizeof(real_T));
            y_p = p->numInputDims[layer];
            nx = avail_feat->size[0] * avail_feat->size[1];
            for (inputs = 0; inputs < nx; inputs++) {
              featuresToCompare->data[inputs] = (avail_feat->data[inputs] + y_p)
                - 1.0;
            }

            d1 = p->nGrids[layer];
            grid = 0;
            while (grid <= (int32_T)d1 - 1) {
              inputs = input_mat->size[0] * input_mat->size[1] * input_mat->
                size[2];
              input_mat->size[0] = (int32_T)p->nRows;
              emxEnsureCapacity((emxArray__common *)input_mat, inputs, (int32_T)
                                sizeof(real_T));
              inputs = input_mat->size[0] * input_mat->size[1] * input_mat->
                size[2];
              input_mat->size[1] = (int32_T)p->nRows;
              emxEnsureCapacity((emxArray__common *)input_mat, inputs, (int32_T)
                                sizeof(real_T));
              inputs = input_mat->size[0] * input_mat->size[1] * input_mat->
                size[2];
              input_mat->size[2] = (int32_T)p->numInputDims[layer];
              emxEnsureCapacity((emxArray__common *)input_mat, inputs, (int32_T)
                                sizeof(real_T));
              nx = (int32_T)p->nRows * (int32_T)p->nRows * (int32_T)
                p->numInputDims[layer];
              for (inputs = 0; inputs < nx; inputs++) {
                input_mat->data[inputs] = 0.0;
              }

              /*  should end with a (:,:,15) input_mat for PRC layer that checks features 1:15, and a (:,:,3) input_mat for caudal, where each 4th-dim checks three features */
              if (avail_feat->data[grid] > featuresToCompare->data[grid]) {
                inputs = 1;
                idx = 0;
              } else {
                inputs = (int32_T)avail_feat->data[grid];
                idx = (int32_T)featuresToCompare->data[grid];
              }

              nx = stimuli->size[0] - 1;
              loop_ub = stimuli->size[1] - 1;
              b_loop_ub = idx - inputs;
              for (idx = 0; idx <= b_loop_ub; idx++) {
                for (w_p = 0; w_p <= loop_ub; w_p++) {
                  for (i16 = 0; i16 <= nx; i16++) {
                    input_mat->data[(i16 + input_mat->size[0] * w_p) +
                      input_mat->size[0] * input_mat->size[1] * idx] =
                      stimuli->data[(i16 + stimuli->size[0] * w_p) +
                      stimuli->size[0] * stimuli->size[1] * ((inputs + idx) - 1)];
                  }
                }
              }

              /*  put the variable 'weights' into the format previously accepted by the model. */
              if (1.0 > p->numInputDims[layer]) {
                nx = 0;
              } else {
                nx = (int32_T)p->numInputDims[layer];
              }

              weights_idx_0 = weights->size[0];
              weights_idx_1 = weights->size[1];
              weights_idx_2 = weights->size[2];
              weights_idx_3 = weights->size[3];
              loop_ub = weights->size[1];
              b_loop_ub = weights->size[2];
              inputs = b_weights->size[0] * b_weights->size[1] * b_weights->
                size[2] * b_weights->size[3];
              b_weights->size[0] = 1;
              b_weights->size[1] = loop_ub;
              b_weights->size[2] = b_loop_ub;
              b_weights->size[3] = nx;
              emxEnsureCapacity((emxArray__common *)b_weights, inputs, (int32_T)
                                sizeof(real_T));
              for (inputs = 0; inputs < nx; inputs++) {
                for (idx = 0; idx < b_loop_ub; idx++) {
                  for (w_p = 0; w_p < loop_ub; w_p++) {
                    b_weights->data[(b_weights->size[0] * w_p + b_weights->size
                                     [0] * b_weights->size[1] * idx) +
                      b_weights->size[0] * b_weights->size[1] * b_weights->size
                      [2] * inputs] = weights->data[(((layer + weights_idx_0 *
                      w_p) + weights_idx_0 * weights_idx_1 * idx) +
                      weights_idx_0 * weights_idx_1 * weights_idx_2 * inputs) +
                      weights_idx_0 * weights_idx_1 * weights_idx_2 *
                      weights_idx_3 * grid];
                  }
                }
              }

              b_squeeze(b_weights, weights_child);

              /*  if no features that this grid pays attention to were sampled, */
              /*  or if dealing with PRC but 5 features weren't sampled, skip */
              /*  presenting */
              /*          if (layer==1 && (~any(features_sampled==grid) || usePRC)) || (layer==2 && ~usePRC) */
              guard1 = false;
              guard2 = false;
              if (!(p->fives != 0.0)) {
                if (1.0 + (real_T)layer == 1.0) {
                  inputs = b_features_sampled->size[0];
                  b_features_sampled->size[0] = features_sampled->size[0];
                  emxEnsureCapacity((emxArray__common *)b_features_sampled,
                                    inputs, (int32_T)sizeof(boolean_T));
                  nx = features_sampled->size[0];
                  for (inputs = 0; inputs < nx; inputs++) {
                    b_features_sampled->data[inputs] = (features_sampled->
                      data[inputs] == 1.0 + (real_T)grid);
                  }

                  if (!b_any(b_features_sampled)) {
                  } else {
                    guard2 = true;
                  }
                } else {
                  guard2 = true;
                }
              } else {
                guard1 = true;
              }

              if (guard2) {
                if ((1.0 + (real_T)layer == 2.0) && (!(usePRC != 0))) {
                } else {
                  guard1 = true;
                }
              }

              if (guard1) {
                nEncodCycles = p->nEncodCycles;
                if (p->variableEncode != 0.0) {
                  stick_switch = c_rand();
                  while (stick_switch < p->fixn_ratio_lowHigh[(int32_T)
                         p->stimCond - 1]) {
                    nEncodCycles += p->nEncodCycles;
                    p->fixations->data[trial]++;

                    /* % total fixations across both stimuli */
                    stick_switch = c_rand();
                    if (*emlrtBreakCheckR2012bFlagVar != 0) {
                      emlrtBreakCheckR2012b(emlrtRootTLSGlobal);
                    }
                  }
                }

                /* ------------------------------------------------------------------ */
                /*  Find winning node */
                /* -------------------------------------------------------------- */
                nx = input_mat->size[0];
                loop_ub = input_mat->size[1];
                b_loop_ub = input_mat->size[2];
                inputs = b_input_mat->size[0] * b_input_mat->size[1] *
                  b_input_mat->size[2];
                b_input_mat->size[0] = nx;
                b_input_mat->size[1] = loop_ub;
                b_input_mat->size[2] = b_loop_ub;
                emxEnsureCapacity((emxArray__common *)b_input_mat, inputs,
                                  (int32_T)sizeof(real_T));
                for (inputs = 0; inputs < b_loop_ub; inputs++) {
                  for (idx = 0; idx < loop_ub; idx++) {
                    for (w_p = 0; w_p < nx; w_p++) {
                      b_input_mat->data[(w_p + b_input_mat->size[0] * idx) +
                        b_input_mat->size[0] * b_input_mat->size[1] * inputs] =
                        input_mat->data[(w_p + input_mat->size[0] * idx) +
                        input_mat->size[0] * input_mat->size[1] * inputs];
                    }
                  }
                }

                findWinningNode(weights_child, b_input_mat, p->
                                numInputDims[layer], &win_row, &win_col,
                                dist_mat);
                cycle = 0;
                while (cycle <= (int32_T)nEncodCycles - 1) {
                  /*              p.winning(layer,grid,trial,1:2) = [win_row, win_col]; */
                  /* -------------------------------------------------------------- */
                  /* Calculate each unit's distance from winner and activation */
                  /* -------------------------------------------------------------- */
                  /*              [f, acts, selectivity, p, act_peak, act_total] = VD_calc_selectivity_fast(win_row, win_col, dist_mat, p, p.numInputDims(layer), trial, layer); */
                  /* %% Calculate city-block distance from winner in grid, with wraparound */
                  /* %find distance of each unit from winner (using gridMat, which stores the position of each unit in the grid) */
                  /* %create a matrix with a slice for each of the two potential minimum distances for rows and cols */
                  nx = p->gridMat->size[0];
                  loop_ub = p->gridMat->size[1];
                  inputs = v_p->size[0] * v_p->size[1];
                  v_p->size[0] = nx;
                  v_p->size[1] = loop_ub;
                  emxEnsureCapacity((emxArray__common *)v_p, inputs, (int32_T)
                                    sizeof(real_T));
                  for (inputs = 0; inputs < loop_ub; inputs++) {
                    for (idx = 0; idx < nx; idx++) {
                      v_p->data[idx + v_p->size[0] * inputs] = p->gridMat->
                        data[idx + p->gridMat->size[0] * inputs] - win_row;
                    }
                  }

                  b_abs(v_p, inps_tmp);
                  nx = inps_tmp->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    loop_ub = inps_tmp->size[0];
                    for (idx = 0; idx < loop_ub; idx++) {
                      row_dist_mat->data[idx + row_dist_mat->size[0] * inputs] =
                        inps_tmp->data[idx + inps_tmp->size[0] * inputs];
                    }
                  }

                  nx = p->gridMat->size[0];
                  loop_ub = p->gridMat->size[1];
                  inputs = u_p->size[0] * u_p->size[1];
                  u_p->size[0] = nx;
                  u_p->size[1] = loop_ub;
                  emxEnsureCapacity((emxArray__common *)u_p, inputs, (int32_T)
                                    sizeof(real_T));
                  for (inputs = 0; inputs < loop_ub; inputs++) {
                    for (idx = 0; idx < nx; idx++) {
                      u_p->data[idx + u_p->size[0] * inputs] = p->gridMat->
                        data[idx + p->gridMat->size[0] * inputs] - win_row;
                    }
                  }

                  b_abs(u_p, inps_tmp);
                  nx = inps_tmp->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    loop_ub = inps_tmp->size[0];
                    for (idx = 0; idx < loop_ub; idx++) {
                      row_dist_mat->data[(idx + row_dist_mat->size[0] * inputs)
                        + row_dist_mat->size[0] * row_dist_mat->size[1]] =
                        p->nRows - inps_tmp->data[idx + inps_tmp->size[0] *
                        inputs];
                    }
                  }

                  nx = p->gridMat->size[0];
                  loop_ub = p->gridMat->size[1];
                  inputs = t_p->size[0] * t_p->size[1];
                  t_p->size[0] = nx;
                  t_p->size[1] = loop_ub;
                  emxEnsureCapacity((emxArray__common *)t_p, inputs, (int32_T)
                                    sizeof(real_T));
                  for (inputs = 0; inputs < loop_ub; inputs++) {
                    for (idx = 0; idx < nx; idx++) {
                      t_p->data[idx + t_p->size[0] * inputs] = p->gridMat->data
                        [(idx + p->gridMat->size[0] * inputs) + p->gridMat->
                        size[0] * p->gridMat->size[1]] - win_col;
                    }
                  }

                  b_abs(t_p, inps_tmp);
                  nx = inps_tmp->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    loop_ub = inps_tmp->size[0];
                    for (idx = 0; idx < loop_ub; idx++) {
                      col_dist_mat->data[idx + col_dist_mat->size[0] * inputs] =
                        inps_tmp->data[idx + inps_tmp->size[0] * inputs];
                    }
                  }

                  nx = p->gridMat->size[0];
                  loop_ub = p->gridMat->size[1];
                  inputs = s_p->size[0] * s_p->size[1];
                  s_p->size[0] = nx;
                  s_p->size[1] = loop_ub;
                  emxEnsureCapacity((emxArray__common *)s_p, inputs, (int32_T)
                                    sizeof(real_T));
                  for (inputs = 0; inputs < loop_ub; inputs++) {
                    for (idx = 0; idx < nx; idx++) {
                      s_p->data[idx + s_p->size[0] * inputs] = p->gridMat->data
                        [(idx + p->gridMat->size[0] * inputs) + p->gridMat->
                        size[0] * p->gridMat->size[1]] - win_col;
                    }
                  }

                  b_abs(s_p, inps_tmp);
                  nx = inps_tmp->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    loop_ub = inps_tmp->size[0];
                    for (idx = 0; idx < loop_ub; idx++) {
                      col_dist_mat->data[(idx + col_dist_mat->size[0] * inputs)
                        + col_dist_mat->size[0] * col_dist_mat->size[1]] =
                        p->nRows - inps_tmp->data[idx + inps_tmp->size[0] *
                        inputs];
                    }
                  }

                  /* %find the minimum of the two values for row and for col */
                  for (inputs = 0; inputs < 3; inputs++) {
                    outsz[inputs] = row_dist_mat->size[inputs];
                  }

                  inputs = inps_tmp->size[0] * inps_tmp->size[1];
                  inps_tmp->size[0] = outsz[0];
                  inps_tmp->size[1] = outsz[1];
                  emxEnsureCapacity((emxArray__common *)inps_tmp, inputs,
                                    (int32_T)sizeof(real_T));
                  vstride = 1;
                  for (k = 0; k < 2; k++) {
                    vstride *= row_dist_mat->size[k];
                  }

                  ix = 0;
                  iy = -1;
                  for (j = 1; j <= vstride; j++) {
                    ix++;
                    ixstart = ix;
                    ixstop = ix + vstride;
                    mtmp = row_dist_mat->data[ix - 1];
                    if (muDoubleScalarIsNaN(row_dist_mat->data[ix - 1])) {
                      b_ix = ix + vstride;
                      exitg7 = false;
                      while ((!exitg7) && ((vstride > 0) && (b_ix <= ixstop))) {
                        ixstart = b_ix;
                        if (!muDoubleScalarIsNaN(row_dist_mat->data[b_ix - 1]))
                        {
                          mtmp = row_dist_mat->data[b_ix - 1];
                          exitg7 = true;
                        } else {
                          b_ix += vstride;
                        }
                      }
                    }

                    if (ixstart < ixstop) {
                      b_ix = ixstart + vstride;
                      while ((vstride > 0) && (b_ix <= ixstop)) {
                        if (row_dist_mat->data[b_ix - 1] < mtmp) {
                          mtmp = row_dist_mat->data[b_ix - 1];
                        }

                        b_ix += vstride;
                      }
                    }

                    iy++;
                    inps_tmp->data[iy] = mtmp;
                  }

                  for (inputs = 0; inputs < 3; inputs++) {
                    outsz[inputs] = col_dist_mat->size[inputs];
                  }

                  inputs = b_inputs->size[0] * b_inputs->size[1];
                  b_inputs->size[0] = outsz[0];
                  b_inputs->size[1] = outsz[1];
                  emxEnsureCapacity((emxArray__common *)b_inputs, inputs,
                                    (int32_T)sizeof(real_T));
                  vstride = 1;
                  for (k = 0; k < 2; k++) {
                    vstride *= col_dist_mat->size[k];
                  }

                  ix = 0;
                  iy = -1;
                  for (j = 1; j <= vstride; j++) {
                    ix++;
                    ixstart = ix;
                    ixstop = ix + vstride;
                    mtmp = col_dist_mat->data[ix - 1];
                    if (muDoubleScalarIsNaN(col_dist_mat->data[ix - 1])) {
                      b_ix = ix + vstride;
                      exitg6 = false;
                      while ((!exitg6) && ((vstride > 0) && (b_ix <= ixstop))) {
                        ixstart = b_ix;
                        if (!muDoubleScalarIsNaN(col_dist_mat->data[b_ix - 1]))
                        {
                          mtmp = col_dist_mat->data[b_ix - 1];
                          exitg6 = true;
                        } else {
                          b_ix += vstride;
                        }
                      }
                    }

                    if (ixstart < ixstop) {
                      b_ix = ixstart + vstride;
                      while ((vstride > 0) && (b_ix <= ixstop)) {
                        if (col_dist_mat->data[b_ix - 1] < mtmp) {
                          mtmp = col_dist_mat->data[b_ix - 1];
                        }

                        b_ix += vstride;
                      }
                    }

                    iy++;
                    b_inputs->data[iy] = mtmp;
                  }

                  /* %Sum the two minimum distances to get the city_block distance */
                  /*  find how far away each node is from the winner */
                  /*  grid_idx = pdist2(p.idxMat,[win_row,win_col],'cityblock'); */
                  /*  grid_dist = reshape(grid_idx,[p.numRows,p.numRows]); */
                  /*  grid_dist(grid_dist>p.numRows) = grid_dist(grid_dist>p.numRows)-p.numRows; */
                  inputs = b_inps_tmp->size[0] * b_inps_tmp->size[1];
                  b_inps_tmp->size[0] = inps_tmp->size[0];
                  b_inps_tmp->size[1] = inps_tmp->size[1];
                  emxEnsureCapacity((emxArray__common *)b_inps_tmp, inputs,
                                    (int32_T)sizeof(real_T));
                  nx = inps_tmp->size[0] * inps_tmp->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    b_inps_tmp->data[inputs] = inps_tmp->data[inputs] +
                      b_inputs->data[inputs];
                  }

                  rdivide(b_inps_tmp, p->G_exp, inps_tmp);
                  power(inps_tmp, b_inputs);
                  inputs = b_inputs->size[0] * b_inputs->size[1];
                  emxEnsureCapacity((emxArray__common *)b_inputs, inputs,
                                    (int32_T)sizeof(real_T));
                  inputs = b_inputs->size[0];
                  c_inputs = b_inputs->size[1];
                  nx = inputs * c_inputs;
                  for (inputs = 0; inputs < nx; inputs++) {
                    b_inputs->data[inputs] = -b_inputs->data[inputs];
                  }

                  b_exp(b_inputs);

                  /*  f_out=zeros(p.numRows,p.numRows,nInpDims); */
                  inputs = r_p->size[0] * r_p->size[1];
                  r_p->size[0] = b_inputs->size[0];
                  r_p->size[1] = b_inputs->size[1];
                  emxEnsureCapacity((emxArray__common *)r_p, inputs, (int32_T)
                                    sizeof(real_T));
                  nx = b_inputs->size[0] * b_inputs->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    r_p->data[inputs] = p->etaExp * b_inputs->data[inputs];
                  }

                  dv0[0] = 1.0;
                  dv0[1] = 1.0;
                  dv0[2] = p->numInputDims[layer];
                  c_repmat(r_p, dv0, f);
                  inputs = r4->size[0] * r4->size[1];
                  r4->size[0] = (int32_T)p->nRows;
                  r4->size[1] = (int32_T)p->nRows;
                  emxEnsureCapacity((emxArray__common *)r4, inputs, (int32_T)
                                    sizeof(real_T));
                  nx = (int32_T)p->nRows * (int32_T)p->nRows;
                  for (inputs = 0; inputs < nx; inputs++) {
                    r4->data[inputs] = 1.0;
                  }

                  b_rdivide(r4, dist_mat, inps_tmp);
                  b_log(inps_tmp);

                  /*  create this ln thing that deals with distance of nodes away from original stimulus vector */
                  /*                                                    (not winning node, because this is used for 'recognition' ratio ((S_samp-S_nov)/(S_samp+S_nov))) */
                  inputs = inps_tmp->size[0] * inps_tmp->size[1];
                  emxEnsureCapacity((emxArray__common *)inps_tmp, inputs,
                                    (int32_T)sizeof(real_T));
                  e_inps_tmp = inps_tmp->size[0];
                  f_inps_tmp = inps_tmp->size[1];
                  nx = e_inps_tmp * f_inps_tmp;
                  for (inputs = 0; inputs < nx; inputs++) {
                    inps_tmp->data[inputs] = -inps_tmp->data[inputs];
                  }

                  b_exp(inps_tmp);
                  inputs = r3->size[0] * r3->size[1];
                  r3->size[0] = inps_tmp->size[0];
                  r3->size[1] = inps_tmp->size[1];
                  emxEnsureCapacity((emxArray__common *)r3, inputs, (int32_T)
                                    sizeof(real_T));
                  nx = inps_tmp->size[0] * inps_tmp->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    r3->data[inputs] = 1.0 + inps_tmp->data[inputs];
                  }

                  c_rdivide(r3, inps_tmp);

                  /* squashing function   (why squash?) */
                  /* may make sense to go back to version where we 'cap' the distance (because then the dynamic range of */
                  /* outputs starts at 0 rather than 0.5) */
                  inputs = winners->size[0] * winners->size[1];
                  winners->size[0] = (int32_T)p->sizeOfPeak;
                  winners->size[1] = 2;
                  emxEnsureCapacity((emxArray__common *)winners, inputs,
                                    (int32_T)sizeof(real_T));
                  nx = (int32_T)p->sizeOfPeak << 1;
                  for (inputs = 0; inputs < nx; inputs++) {
                    winners->data[inputs] = 0.0;
                  }

                  winners->data[0] = win_row;
                  winners->data[winners->size[0]] = win_col;

                  /* city block distance 1 neighbours */
                  winners->data[1] = win_row;
                  winners->data[1 + winners->size[0]] = win_col + 1.0;
                  winners->data[2] = win_row;
                  winners->data[2 + winners->size[0]] = win_col - 1.0;
                  winners->data[3] = win_row + 1.0;
                  winners->data[3 + winners->size[0]] = win_col;
                  winners->data[4] = win_row - 1.0;
                  winners->data[4 + winners->size[0]] = win_col;

                  /* city block distance 2 neighbours */
                  /*                      winners(6,:) = [win_row+1 win_col+1]; */
                  /*                      winners(7,:) = [win_row+1 win_col-1]; */
                  /*                      winners(8,:) = [win_row-1 win_col-1]; */
                  /*                      winners(9,:) = [win_row-1 win_col+1]; */
                  /*                      %city block distance 2-in-a-line neighbours */
                  /*                      winners(10,:) = [win_row win_col+2]; */
                  /*                      winners(11,:) = [win_row win_col-2]; */
                  /*                      winners(12,:) = [win_row+2 win_col]; */
                  /*                      winners(13,:) = [win_row-2 win_col]; */
                  /*                      %city block distance 3 neighbours */
                  /*                      winners(14,:) = [win_row+1 win_col+2]; */
                  /*                      winners(15,:) = [win_row+1 win_col-2]; */
                  /*                      winners(16,:) = [win_row-1 win_col+2]; */
                  /*                      winners(17,:) = [win_row-1 win_col-2]; */
                  /*                      winners(18,:) = [win_row+2 win_col+1]; */
                  /*                      winners(19,:) = [win_row+2 win_col-1]; */
                  /*                      winners(20,:) = [win_row-2 win_col+1]; */
                  /*                      winners(21,:) = [win_row-2 win_col-1]; */
                  /*                      %city block distance 3-in-a-line neighbours */
                  /*                      winners(22,:) = [win_row win_col+3]; */
                  /*                      winners(23,:) = [win_row win_col-3]; */
                  /*                      winners(24,:) = [win_row+3 win_col]; */
                  /*                      winners(25,:) = [win_row-3 win_col]; */
                  w_p = 0;
                  while (w_p <= (int32_T)p->sizeOfPeak - 1) {
                    /* % however many winners in peak */
                    if (winners->data[w_p] > p->nRows) {
                      winners->data[w_p] -= p->nRows;
                    } else {
                      if (winners->data[w_p] <= 0.0) {
                        winners->data[w_p] += p->nRows;
                      }
                    }

                    if (winners->data[w_p + winners->size[0]] > p->nRows) {
                      winners->data[w_p + winners->size[0]] -= p->nRows;
                    } else {
                      if (winners->data[w_p + winners->size[0]] <= 0.0) {
                        winners->data[w_p + winners->size[0]] += p->nRows;
                      }
                    }

                    w_p++;
                    if (*emlrtBreakCheckR2012bFlagVar != 0) {
                      emlrtBreakCheckR2012b(emlrtRootTLSGlobal);
                    }
                  }

                  /*  if any(isnan(act_out)) */
                  /*     act_out(isnan(act_out))=0; */
                  /*  end */
                  act_peak = 0.0;
                  w_p = 0;
                  while (w_p <= (int32_T)p->sizeOfPeak - 1) {
                    act_peak += inps_tmp->data[((int32_T)winners->data[w_p] +
                      inps_tmp->size[0] * ((int32_T)winners->data[w_p +
                      winners->size[0]] - 1)) - 1];
                    w_p++;
                    if (*emlrtBreakCheckR2012bFlagVar != 0) {
                      emlrtBreakCheckR2012b(emlrtRootTLSGlobal);
                    }
                  }

                  /*  p.act_peak(trial,layer) = act_peak; */
                  b_sum(inps_tmp, meanSelectivity_caudal_prev);
                  act_total = c_sum(meanSelectivity_caudal_prev);
                  selectivity_child = act_peak / act_total;

                  /*                     %% */
                  if (1.0 + (real_T)cycle == 1.0) {
                    /* need to compare last set of weights of old grid to */
                    initial_selec->data[layer + initial_selec->size[0] * grid] =
                      selectivity_child;

                    /*                      pktot.init_act_peak(layer,grid) = act_peak; */
                    /*                      pktot.init_act_total(layer,grid) = act_total; */
                    /*  initial weights of new grid. */
                  }

                  /* %% Update Weights */
                  inputs = weights_child->size[0] * weights_child->size[1] *
                    weights_child->size[2];
                  emxEnsureCapacity((emxArray__common *)weights_child, inputs,
                                    (int32_T)sizeof(real_T));
                  nx = weights_child->size[2];
                  for (inputs = 0; inputs < nx; inputs++) {
                    loop_ub = weights_child->size[1];
                    for (idx = 0; idx < loop_ub; idx++) {
                      b_loop_ub = weights_child->size[0];
                      for (w_p = 0; w_p < b_loop_ub; w_p++) {
                        weights_child->data[(w_p + weights_child->size[0] * idx)
                          + weights_child->size[0] * weights_child->size[1] *
                          inputs] += f->data[(w_p + f->size[0] * idx) + f->size
                          [0] * f->size[1] * inputs] * (input_mat->data[(w_p +
                          input_mat->size[0] * idx) + input_mat->size[0] *
                          input_mat->size[1] * inputs] - weights_child->data
                          [(w_p + weights_child->size[0] * idx) +
                          weights_child->size[0] * weights_child->size[1] *
                          inputs]);
                      }
                    }
                  }

                  /*  update based on spire around winning node */
                  cycle++;
                  if (*emlrtBreakCheckR2012bFlagVar != 0) {
                    emlrtBreakCheckR2012b(emlrtRootTLSGlobal);
                  }
                }

                /* %% Go to next cycle (if switchRatio is low enough) */
                if (1.0 > p->numInputDims[layer]) {
                  nx = 0;
                } else {
                  nx = (int32_T)p->numInputDims[layer];
                }

                loop_ub = weights->size[1];
                inputs = ii->size[0];
                ii->size[0] = loop_ub;
                emxEnsureCapacity((emxArray__common *)ii, inputs, (int32_T)
                                  sizeof(int32_T));
                for (inputs = 0; inputs < loop_ub; inputs++) {
                  ii->data[inputs] = inputs;
                }

                loop_ub = weights->size[2];
                inputs = r1->size[0];
                r1->size[0] = loop_ub;
                emxEnsureCapacity((emxArray__common *)r1, inputs, (int32_T)
                                  sizeof(int32_T));
                for (inputs = 0; inputs < loop_ub; inputs++) {
                  r1->data[inputs] = inputs;
                }

                inputs = r2->size[0];
                r2->size[0] = nx;
                emxEnsureCapacity((emxArray__common *)r2, inputs, (int32_T)
                                  sizeof(int32_T));
                for (inputs = 0; inputs < nx; inputs++) {
                  r2->data[inputs] = inputs;
                }

                c_weights = weights->size[0];
                d_weights = weights->size[1];
                e_weights = weights->size[2];
                f_weights = weights->size[3];
                unnamed_idx_1 = ii->size[0];
                unnamed_idx_2 = r1->size[0];
                unnamed_idx_3 = r2->size[0];
                for (inputs = 0; inputs < unnamed_idx_3; inputs++) {
                  for (idx = 0; idx < unnamed_idx_2; idx++) {
                    for (w_p = 0; w_p < unnamed_idx_1; w_p++) {
                      weights->data[(((layer + c_weights * ii->data[w_p]) +
                                      c_weights * d_weights * r1->data[idx]) +
                                     c_weights * d_weights * e_weights *
                                     r2->data[inputs]) + c_weights * d_weights *
                        e_weights * f_weights * grid] = weights_child->data[(w_p
                        + unnamed_idx_1 * idx) + unnamed_idx_1 * unnamed_idx_2 *
                        inputs];
                    }
                  }
                }

                /* % Overwrite weight values in the orignial W matrix, for this grid. */
                /*  use activations as calculated AFTER final weight update */
                selectivity->data[layer + selectivity->size[0] * grid] =
                  selectivity_child;

                /*              pktot.fin_act_peak(layer,grid) = act_peak; */
                /*              pktot.fin_act_total(layer,grid) = act_total; */
              }

              grid++;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(emlrtRootTLSGlobal);
              }
            }

            /*  end of loop for each grid */
            layer++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(emlrtRootTLSGlobal);
            }
          }

          /*  end of layer loop */
          /*         %% */
          /*  after completing within-stimulus fixations, some fixations can land, */
          /*  not on the other stimulus, but outside of both */
          nothingRatio = c_rand();
          if (nothingRatio > p->outsideRatio[(int32_T)p->stimCond - 1]) {
            p->fixations->data[trial]++;

            /* % total fixations across both stimuli */
          }

          b_guard1 = false;
          b_guard2 = false;
          if (first_stim_sampled == 0) {
            /* || (first_stim_sampled == 1 && p.fixations(trial) >= p.maxFix)% to indicate that we have another stim's worth of activations */
            /*          p.fixations(trial) = fixations; */
            /* ------------------------------------------------------------------ */
            /*  look at grids */
            /* ------------------------------------------------------------------ */
            /*          plotTempActs(prevStimActs, initial_acts, p.layer) */
            /* ------------------------------------------------------------------ */
            /*  complie structure for determining mismatch */
            /* ------------------------------------------------------------------ */
            /*          judging.activations_new = activations; */
            /*          judging.activations_prev = prevStimActs; */
            /*          judging.initial_acts = initial_acts; */
            /*  storing whether PRC is used */
            /*  second row is always new stim */
            p->usePRC->data[((int32_T)stim + p->usePRC->size[0] * trial) - 1] =
              usePRC;

            /*             %% */
            /* ------------------------------------------------------------------ */
            /*  determine which layer is most selective */
            /* ------------------------------------------------------------------ */
            /*          [stopSampling, p, whichCaudal] = determineMisMatch(judging, p, trial); */
            /*  compares the difference in the maximumly selective layer of the network */
            /*  to the current and previous stim to a funning familiarity difference */
            /*  might be called again if not enough evidence has been accrued. */
            /*             %% Gather selectivity */
            /*             %% storage variables */
            inputs = avail_feat->size[0] * avail_feat->size[1];
            avail_feat->size[0] = 1;
            avail_feat->size[1] = 1;
            emxEnsureCapacity((emxArray__common *)avail_feat, inputs, (int32_T)
                              sizeof(real_T));
            avail_feat->data[0] = 0.0;

            /*             %% */
            /* -------------------------------------------------------------------------- */
            /*  Decide which features were compared. Only necessary for caudal layer (or) */
            /*  any layer that has more than 1 grid. */
            /* -------------------------------------------------------------------------- */
            inputs = featuresToCompare->size[0] * featuresToCompare->size[1];
            featuresToCompare->size[0] = 1;
            featuresToCompare->size[1] = (int32_T)p->numGrids_Caudal;
            emxEnsureCapacity((emxArray__common *)featuresToCompare, inputs,
                              (int32_T)sizeof(real_T));
            nx = (int32_T)p->numGrids_Caudal;
            for (inputs = 0; inputs < nx; inputs++) {
              featuresToCompare->data[inputs] = 0.0;
            }

            nm1d2 = 0;
            while (nm1d2 <= (int32_T)p->numGrids_Caudal - 1) {
              inputs = c_features_sampled->size[0];
              c_features_sampled->size[0] = features_sampled->size[0];
              emxEnsureCapacity((emxArray__common *)c_features_sampled, inputs,
                                (int32_T)sizeof(boolean_T));
              nx = features_sampled->size[0];
              for (inputs = 0; inputs < nx; inputs++) {
                c_features_sampled->data[inputs] = (features_sampled->
                  data[inputs] == 1.0 + (real_T)nm1d2);
              }

              if (b_any(c_features_sampled)) {
                inputs = b_features_sampled_prev->size[0];
                b_features_sampled_prev->size[0] = features_sampled_prev->size[0];
                emxEnsureCapacity((emxArray__common *)b_features_sampled_prev,
                                  inputs, (int32_T)sizeof(boolean_T));
                nx = features_sampled_prev->size[0];
                for (inputs = 0; inputs < nx; inputs++) {
                  b_features_sampled_prev->data[inputs] =
                    (features_sampled_prev->data[inputs] == 1.0 + (real_T)nm1d2);
                }

                if (b_any(b_features_sampled_prev)) {
                  featuresToCompare->data[nm1d2] = 1.0;
                }
              }

              nm1d2++;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(emlrtRootTLSGlobal);
              }
            }

            if (!(c_sum(featuresToCompare) != 0.0)) {
              exitg1 = 2;
            } else {
              nx = featuresToCompare->size[1];
              for (inputs = 0; inputs < nx; inputs++) {
                p->comparedFeat->data[trial + p->comparedFeat->size[0] * inputs]
                  = featuresToCompare->data[featuresToCompare->size[0] * inputs];
              }

              /* -------------------------------------------------------------------------- */
              /*  determine which layer is most selective for each stimulus */
              /* -------------------------------------------------------------------------- */
              /* first, look at most recent stim */
              nm1d2 = 0;
              while (nm1d2 <= (int32_T)p->numLayers - 1) {
                if (1.0 + (real_T)nm1d2 == 1.0) {
                  /*          p.meanSelectivity_caudal_new(trial,:) = judging.initial_selec(layer_new,:).*featuresToCompare; % only look at layers for which features were sampled */
                  nx = initial_selec->size[1];
                  inputs = avail_feat->size[0] * avail_feat->size[1];
                  avail_feat->size[0] = 1;
                  avail_feat->size[1] = nx;
                  emxEnsureCapacity((emxArray__common *)avail_feat, inputs,
                                    (int32_T)sizeof(real_T));
                  for (inputs = 0; inputs < nx; inputs++) {
                    avail_feat->data[avail_feat->size[0] * inputs] =
                      initial_selec->data[initial_selec->size[0] * inputs] *
                      featuresToCompare->data[featuresToCompare->size[0] *
                      inputs];
                  }
                } else {
                  if (1.0 + (real_T)nm1d2 == 2.0) {
                    nx = p->usePRC->size[0];
                    inputs = p_p->size[0];
                    p_p->size[0] = nx;
                    emxEnsureCapacity((emxArray__common *)p_p, inputs, (int32_T)
                                      sizeof(real_T));
                    for (inputs = 0; inputs < nx; inputs++) {
                      p_p->data[inputs] = p->usePRC->data[inputs + p->
                        usePRC->size[0] * trial];
                    }

                    if (sum(p_p) == 2.0) {
                      /*  when plotting, need to make sure that the p.usePRC==(0 || 1) cases aren't */
                      /*  looked at... */
                      nx = p->meanSelectivity_PRC_new->size[1];
                      for (inputs = 0; inputs < nx; inputs++) {
                        p->meanSelectivity_PRC_new->data[trial +
                          p->meanSelectivity_PRC_new->size[0] * inputs] =
                          initial_selec->data[1];
                      }
                    }
                  }
                }

                nm1d2++;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(emlrtRootTLSGlobal);
                }
              }

              /* now, look at prevoius stim */
              layer_prev = 0;
              while (layer_prev <= (int32_T)p->numLayers - 1) {
                if (1.0 + (real_T)layer_prev == 1.0) {
                  /*          p.meanSelectivity_caudal_prev(trial,:) = judging.selectivity_prev(layer_prev,:).*featuresToCompare; % only look at grids for which features were sampled */
                  nx = prevStimSelec->size[1];
                  inputs = meanSelectivity_caudal_prev->size[0] *
                    meanSelectivity_caudal_prev->size[1];
                  meanSelectivity_caudal_prev->size[0] = 1;
                  meanSelectivity_caudal_prev->size[1] = nx;
                  emxEnsureCapacity((emxArray__common *)
                                    meanSelectivity_caudal_prev, inputs,
                                    (int32_T)sizeof(real_T));
                  for (inputs = 0; inputs < nx; inputs++) {
                    meanSelectivity_caudal_prev->
                      data[meanSelectivity_caudal_prev->size[0] * inputs] =
                      prevStimSelec->data[prevStimSelec->size[0] * inputs] *
                      featuresToCompare->data[featuresToCompare->size[0] *
                      inputs];
                  }

                  inputs = b_meanSelectivity_caudal_prev->size[0] *
                    b_meanSelectivity_caudal_prev->size[1];
                  b_meanSelectivity_caudal_prev->size[0] = 1;
                  b_meanSelectivity_caudal_prev->size[1] =
                    meanSelectivity_caudal_prev->size[1];
                  emxEnsureCapacity((emxArray__common *)
                                    b_meanSelectivity_caudal_prev, inputs,
                                    (int32_T)sizeof(real_T));
                  nx = meanSelectivity_caudal_prev->size[0] *
                    meanSelectivity_caudal_prev->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    b_meanSelectivity_caudal_prev->data[inputs] =
                      meanSelectivity_caudal_prev->data[inputs] -
                      avail_feat->data[inputs];
                  }

                  c_abs(b_meanSelectivity_caudal_prev, familDiff_caudal);

                  /*  determine which grid in caudal layer would be used for judgement */
                  ixstart = 1;
                  n = familDiff_caudal->size[1];
                  mtmp = familDiff_caudal->data[0];
                  if (familDiff_caudal->size[1] > 1) {
                    if (muDoubleScalarIsNaN(familDiff_caudal->data[0])) {
                      ix = 2;
                      exitg5 = false;
                      while ((!exitg5) && (ix <= n)) {
                        ixstart = ix;
                        if (!muDoubleScalarIsNaN(familDiff_caudal->data[ix - 1]))
                        {
                          mtmp = familDiff_caudal->data[ix - 1];
                          exitg5 = true;
                        } else {
                          ix++;
                        }
                      }
                    }

                    if (ixstart < familDiff_caudal->size[1]) {
                      while (ixstart + 1 <= n) {
                        if (familDiff_caudal->data[ixstart] > mtmp) {
                          mtmp = familDiff_caudal->data[ixstart];
                        }

                        ixstart++;
                      }
                    }
                  }

                  inputs = b_x->size[0] * b_x->size[1];
                  b_x->size[0] = 1;
                  b_x->size[1] = familDiff_caudal->size[1];
                  emxEnsureCapacity((emxArray__common *)b_x, inputs, (int32_T)
                                    sizeof(boolean_T));
                  nx = familDiff_caudal->size[0] * familDiff_caudal->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    b_x->data[inputs] = (familDiff_caudal->data[inputs] == mtmp);
                  }

                  nx = b_x->size[1];
                  idx = 0;
                  inputs = b_ii->size[0] * b_ii->size[1];
                  b_ii->size[0] = 1;
                  b_ii->size[1] = b_x->size[1];
                  emxEnsureCapacity((emxArray__common *)b_ii, inputs, (int32_T)
                                    sizeof(int32_T));
                  c_ii = 1;
                  exitg4 = false;
                  while ((!exitg4) && (c_ii <= nx)) {
                    guard3 = false;
                    if (b_x->data[c_ii - 1]) {
                      idx++;
                      b_ii->data[idx - 1] = c_ii;
                      if (idx >= nx) {
                        exitg4 = true;
                      } else {
                        guard3 = true;
                      }
                    } else {
                      guard3 = true;
                    }

                    if (guard3) {
                      c_ii++;
                    }
                  }

                  if (b_x->size[1] == 1) {
                    if (idx == 0) {
                      inputs = b_ii->size[0] * b_ii->size[1];
                      b_ii->size[0] = 1;
                      b_ii->size[1] = 0;
                      emxEnsureCapacity((emxArray__common *)b_ii, inputs,
                                        (int32_T)sizeof(int32_T));
                    }
                  } else {
                    inputs = b_ii->size[0] * b_ii->size[1];
                    if (1 > idx) {
                      b_ii->size[1] = 0;
                    } else {
                      b_ii->size[1] = idx;
                    }

                    emxEnsureCapacity((emxArray__common *)b_ii, inputs, (int32_T)
                                      sizeof(int32_T));
                  }

                  inputs = whichCaudal->size[0] * whichCaudal->size[1];
                  whichCaudal->size[0] = 1;
                  whichCaudal->size[1] = b_ii->size[1];
                  emxEnsureCapacity((emxArray__common *)whichCaudal, inputs,
                                    (int32_T)sizeof(real_T));
                  nx = b_ii->size[0] * b_ii->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    whichCaudal->data[inputs] = b_ii->data[inputs];
                  }

                  /*                  if length(whichCaudal)>1 */
                  /*                  end */
                  p->meanSelectivity_caudal_prev->data[trial] =
                    meanSelectivity_caudal_prev->data[(int32_T)whichCaudal->
                    data[0] - 1];
                  p->meanSelectivity_caudal_new->data[trial] = avail_feat->data
                    [(int32_T)whichCaudal->data[0] - 1];
                  p->familDiff_caudal->data[trial] = familDiff_caudal->data
                    [(int32_T)whichCaudal->data[0] - 1];
                } else {
                  if (1.0 + (real_T)layer_prev == 2.0) {
                    nx = p->usePRC->size[0];
                    inputs = q_p->size[0];
                    q_p->size[0] = nx;
                    emxEnsureCapacity((emxArray__common *)q_p, inputs, (int32_T)
                                      sizeof(real_T));
                    for (inputs = 0; inputs < nx; inputs++) {
                      q_p->data[inputs] = p->usePRC->data[inputs + p->
                        usePRC->size[0] * trial];
                    }

                    if (all(q_p)) {
                      p->meanSelectivity_PRC_prev->data[trial] =
                        prevStimSelec->data[1];
                      p->familDiff_PRC->data[trial] = muDoubleScalarAbs
                        (p->meanSelectivity_PRC_prev->data[trial] -
                         p->meanSelectivity_PRC_new->data[trial]);
                    }
                  }
                }

                layer_prev++;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(emlrtRootTLSGlobal);
                }
              }

              if (!(p->diffEncode != 0.0)) {
                /*  only use PRC layer if p.numGrids_Caudal features were sampled for both stimuli */
                nx = p->usePRC->size[0];
                inputs = o_p->size[0];
                o_p->size[0] = nx;
                emxEnsureCapacity((emxArray__common *)o_p, inputs, (int32_T)
                                  sizeof(real_T));
                for (inputs = 0; inputs < nx; inputs++) {
                  o_p->data[inputs] = p->usePRC->data[inputs + p->usePRC->size[0]
                    * trial];
                }

                if (all(o_p) && (p->which_gp_layer == 2.0)) {
                  familDiff = p->familDiff_PRC->data[trial];
                  nx = p->famil_diff_thresh->size[1];
                  w_p = (int32_T)p->numThresh;
                  inputs = avail_feat->size[0] * avail_feat->size[1];
                  avail_feat->size[0] = 1;
                  avail_feat->size[1] = nx;
                  emxEnsureCapacity((emxArray__common *)avail_feat, inputs,
                                    (int32_T)sizeof(real_T));
                  for (inputs = 0; inputs < nx; inputs++) {
                    avail_feat->data[avail_feat->size[0] * inputs] =
                      p->famil_diff_thresh->data[(w_p + p->
                      famil_diff_thresh->size[0] * inputs) - 1];
                  }
                } else {
                  familDiff = p->familDiff_caudal->data[trial];
                  nx = p->famil_diff_thresh->size[1];
                  inputs = avail_feat->size[0] * avail_feat->size[1];
                  avail_feat->size[0] = 1;
                  avail_feat->size[1] = nx;
                  emxEnsureCapacity((emxArray__common *)avail_feat, inputs,
                                    (int32_T)sizeof(real_T));
                  for (inputs = 0; inputs < nx; inputs++) {
                    avail_feat->data[avail_feat->size[0] * inputs] =
                      p->famil_diff_thresh->data[p->famil_diff_thresh->size[0] *
                      inputs];
                  }
                }
              } else if (p->layer == 2.0) {
                nx = p->famil_diff_thresh->size[1];
                inputs = m_p->size[0] * m_p->size[1];
                m_p->size[0] = 1;
                m_p->size[1] = nx;
                emxEnsureCapacity((emxArray__common *)m_p, inputs, (int32_T)
                                  sizeof(real_T));
                for (inputs = 0; inputs < nx; inputs++) {
                  m_p->data[m_p->size[0] * inputs] = p->famil_diff_thresh->
                    data[p->famil_diff_thresh->size[0] * inputs];
                }

                nx = p->famil_diff_thresh->size[1];
                w_p = (int32_T)p->numThresh;
                inputs = n_p->size[0] * n_p->size[1];
                n_p->size[0] = 1;
                n_p->size[1] = nx;
                emxEnsureCapacity((emxArray__common *)n_p, inputs, (int32_T)
                                  sizeof(real_T));
                for (inputs = 0; inputs < nx; inputs++) {
                  n_p->data[n_p->size[0] * inputs] = p->famil_diff_thresh->data
                    [(w_p + p->famil_diff_thresh->size[0] * inputs) - 1];
                }

                d1 = mean(m_p);
                d2 = mean(n_p);
                familDiffs_temp_idx_0 = p->familDiff_caudal->data[trial] - d1;
                familDiffs_temp_idx_1 = p->familDiff_PRC->data[trial] - d2;
                ixstart = 1;
                mtmp = familDiffs_temp_idx_0;
                nm1d2 = 1;
                if (muDoubleScalarIsNaN(familDiffs_temp_idx_0)) {
                  ix = 2;
                  exitg3 = false;
                  while ((!exitg3) && (ix < 3)) {
                    ixstart = 2;
                    if (!muDoubleScalarIsNaN(familDiffs_temp_idx_1)) {
                      mtmp = familDiffs_temp_idx_1;
                      nm1d2 = 2;
                      exitg3 = true;
                    } else {
                      ix = 3;
                    }
                  }
                }

                if ((ixstart < 2) && (familDiffs_temp_idx_1 > mtmp)) {
                  nm1d2 = 2;
                }

                if (nm1d2 == 2) {
                  familDiff = p->familDiff_PRC->data[trial];
                  nx = p->famil_diff_thresh->size[1];
                  w_p = (int32_T)p->numThresh;
                  inputs = avail_feat->size[0] * avail_feat->size[1];
                  avail_feat->size[0] = 1;
                  avail_feat->size[1] = nx;
                  emxEnsureCapacity((emxArray__common *)avail_feat, inputs,
                                    (int32_T)sizeof(real_T));
                  for (inputs = 0; inputs < nx; inputs++) {
                    avail_feat->data[avail_feat->size[0] * inputs] =
                      p->famil_diff_thresh->data[(w_p + p->
                      famil_diff_thresh->size[0] * inputs) - 1];
                  }
                } else {
                  familDiff = p->familDiff_caudal->data[trial];
                  nx = p->famil_diff_thresh->size[1];
                  inputs = avail_feat->size[0] * avail_feat->size[1];
                  avail_feat->size[0] = 1;
                  avail_feat->size[1] = nx;
                  emxEnsureCapacity((emxArray__common *)avail_feat, inputs,
                                    (int32_T)sizeof(real_T));
                  for (inputs = 0; inputs < nx; inputs++) {
                    avail_feat->data[avail_feat->size[0] * inputs] =
                      p->famil_diff_thresh->data[p->famil_diff_thresh->size[0] *
                      inputs];
                  }

                  nx = p->usePRC->size[0];
                  for (inputs = 0; inputs < nx; inputs++) {
                    p->usePRC->data[inputs + p->usePRC->size[0] * trial] = 0.0;
                  }
                }
              } else {
                familDiff = p->familDiff_caudal->data[trial];
                nx = p->famil_diff_thresh->size[1];
                inputs = avail_feat->size[0] * avail_feat->size[1];
                avail_feat->size[0] = 1;
                avail_feat->size[1] = nx;
                emxEnsureCapacity((emxArray__common *)avail_feat, inputs,
                                  (int32_T)sizeof(real_T));
                for (inputs = 0; inputs < nx; inputs++) {
                  avail_feat->data[avail_feat->size[0] * inputs] =
                    p->famil_diff_thresh->data[p->famil_diff_thresh->size[0] *
                    inputs];
                }

                nx = p->usePRC->size[0];
                for (inputs = 0; inputs < nx; inputs++) {
                  p->usePRC->data[inputs + p->usePRC->size[0] * trial] = 0.0;
                }
              }

              /*             %% compare differences in selectivity with threshold */
              /*  p.famil_difference_most(trial) = abs(mostSelectiveLayer_new - mostSelectiveLayer_prev);% /(mostSelectiveLayer_new+mostSelectiveLayer_prev); %+ (rand*2-1)*p.decision_noise; */
              /*  familDiff = p.familDiff_max(trial); */
              /*  noise = p.decision_noise.*rand; */
              p->familDiff_withNoise->data[trial] = (familDiff -
                p->decision_noise) + (familDiff - (familDiff - p->decision_noise))
                * c_rand();

              /* familDiff + noise;%  ((rand(1,5)*2-1)*p.decision_noise); */
              /*  p.familDiff_withNoise(trial) = familDiff; */
              /*  thresh = (thresh-noise)+(thresh-(thresh-noise)).*rand; */
              if (c_any(p->familDiff_withNoise->data[trial] > mean(avail_feat)))
              {
                /*  we have misMatching feature! So, stop sampling */
                stopSampling = 1;

                /*  threshold is running av. of last 6 trials famil differences */
              } else {
                /*  no evidence for misMatch of stimuli */
              }

              /*  temporarily commenting out to see if caudal layre can be same in lesion */
              /*  and control */
              /*  record the famil diff of the grids that looked at that stimuli */
              /*  if (p.layer == 2) && (all(p.usePRC(:,trial))) % if PRC layer not available, or not enough features were sampled... */
              /*      p.famil_difference(trial) = familDiff; */
              /*  else */
              /*      %     because sometimes two grids can match, need to select just one of */
              /*      %     them */
              /*      famil_diff_temp = familDiff(whichCaudal); */
              /*      p.famil_difference(trial) = famil_diff_temp(1); */
              /*  end */
              p->famil_difference->data[trial] = p->familDiff_withNoise->
                data[trial];

              /*             %% */
              /* ------------------------------------------------------------------ */
              /* stop sampling if evidence of mismatch acquired */
              /* ------------------------------------------------------------------ */
              if (stopSampling == 1) {
                b_guard1 = true;
              } else {
                b_guard2 = true;
              }
            }
          } else {
            b_guard2 = true;
          }

          if (b_guard2) {
            /* ---------------------------------------------------------------------- */
            /* save weights and activations from this stimulus */
            /* ---------------------------------------------------------------------- */
            inputs = features_sampled_prev->size[0];
            features_sampled_prev->size[0] = features_sampled->size[0];
            emxEnsureCapacity((emxArray__common *)features_sampled_prev, inputs,
                              (int32_T)sizeof(real_T));
            nx = features_sampled->size[0];
            for (inputs = 0; inputs < nx; inputs++) {
              features_sampled_prev->data[inputs] = features_sampled->
                data[inputs];
            }

            inputs = prevStimSelec->size[0] * prevStimSelec->size[1];
            prevStimSelec->size[0] = selectivity->size[0];
            prevStimSelec->size[1] = selectivity->size[1];
            emxEnsureCapacity((emxArray__common *)prevStimSelec, inputs,
                              (int32_T)sizeof(real_T));
            nx = selectivity->size[0] * selectivity->size[1];
            for (inputs = 0; inputs < nx; inputs++) {
              prevStimSelec->data[inputs] = selectivity->data[inputs];
            }

            /*      prevInitialSelec = initial_selec; */
            /*      prevInitialActs = initial_acts; */
            /*      prev_mean_act = mean_act; */
            /*      prevStimActs = acts; */
            /*  first row is always previous stim */
            p->usePRC->data[((int32_T)stim + p->usePRC->size[0] * trial) - 1] =
              usePRC;

            /* ---------------------------------------------------------------------- */
            /* switch to other stim (last thing you do) */
            /* ---------------------------------------------------------------------- */
            stim = (stim + 2.0) / stim - 1.0;

            /* 1 goes to 2, 2 goes to 1 */
            if ((first_stim_sampled == 1) && (p->fixations->data[trial] >=
                 p->maxFix)) {
              keepSampling = 1;
            } else {
              if (first_stim_sampled == 0) {
                keepSampling = 0;
              }
            }

            first_stim_sampled = 0;

            /* to indicate that we are no longer on the first stim being sampled (so a comparison should be made from now on) */
            b_guard1 = true;
          }

          if (b_guard1) {
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(emlrtRootTLSGlobal);
            }
          }
        } else {
          /*     %% */
          /* ---------------------------------------------------------------------- */
          /* %% Record the discrimination choice */
          /* stop_sampling: 1 = mismatch, 0 = match (note: tType==1 is Mismatch; tType==2 is Match) */
          p->answer->data[trial] = 0.0;

          /*  answer=1 is mismatch; answer=0 is match */
          p->correct->data[trial] = muDoubleScalarAbs(p->answer->data[trial] -
            (p->tType->data[trial] - 1.0));

          /*  correct=1 is correct; correct=0 is incorrect */
          /* ---------------------------------------------------------------------- */
          /* %% Analyze the trial information */
          /*  need the (1) because double [0 0] occasionally appear. */
          /*      p.famil_difference(trial)=trial_info.famil_difference(1); */
          /*      p.correlation(trial,:) = trial_info.correlation; */
          /*      p.selectivity_prev(trial) = trial_info.selectivity_prev; */
          /*      p.selectivity_new(trial) = trial_info.selectivity_new; */
          /*      p.activations_new(1:p.layer,:,:,:,trial) = trial_info.activations; */
          /*      p.activations_prev(1:p.layer,:,:,:,trial) = trial_info.prevStimActs; */
          determineCriterion(p, 1.0 + (real_T)trial);
          trial++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(emlrtRootTLSGlobal);
          }

          exitg1 = 1;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
      } else {
        exitg2 = 1;
      }
    } else {
      /*  End of loop over trials */
      /*  will eventually go into funciton that collects performance of all rats */
      /*  and plots measures of their performance... */
      y = p->nTrials / 2.0;
      if (1.0 > y) {
        nx = 0;
      } else {
        nx = (int32_T)y;
      }

      inputs = l_p->size[0] * l_p->size[1];
      l_p->size[0] = 1;
      l_p->size[1] = nx;
      emxEnsureCapacity((emxArray__common *)l_p, inputs, (int32_T)sizeof(real_T));
      for (inputs = 0; inputs < nx; inputs++) {
        l_p->data[l_p->size[0] * inputs] = p->correct->data[inputs];
      }

      A = c_sum(l_p);
      p->Acc_firstHalf = A / (p->nTrials / 2.0);
      y = p->nTrials / 2.0;
      if (y + 1.0 > p->correct->size[1]) {
        inputs = 0;
        idx = 0;
      } else {
        inputs = (int32_T)(y + 1.0) - 1;
        idx = p->correct->size[1];
      }

      w_p = k_p->size[0] * k_p->size[1];
      k_p->size[0] = 1;
      k_p->size[1] = idx - inputs;
      emxEnsureCapacity((emxArray__common *)k_p, w_p, (int32_T)sizeof(real_T));
      nx = idx - inputs;
      for (idx = 0; idx < nx; idx++) {
        k_p->data[k_p->size[0] * idx] = p->correct->data[inputs + idx];
      }

      A = c_sum(k_p);
      p->Acc_secondHalf = A / (p->nTrials / 2.0);
      y = p->nTrials / 2.0;
      if (1.0 > y) {
        nx = 0;
      } else {
        nx = (int32_T)y;
      }

      y = p->nTrials / 2.0;
      if (1.0 > y) {
        loop_ub = 0;
      } else {
        loop_ub = (int32_T)y;
      }

      inputs = j_p->size[0] * j_p->size[1];
      j_p->size[0] = 1;
      j_p->size[1] = nx;
      emxEnsureCapacity((emxArray__common *)j_p, inputs, (int32_T)sizeof(real_T));
      for (inputs = 0; inputs < nx; inputs++) {
        j_p->data[j_p->size[0] * inputs] = p->answer->data[inputs] * (real_T)
          (p->tType->data[inputs] == 1.0);
      }

      A = c_sum(j_p);
      inputs = i_p->size[0] * i_p->size[1];
      i_p->size[0] = 1;
      i_p->size[1] = loop_ub;
      emxEnsureCapacity((emxArray__common *)i_p, inputs, (int32_T)sizeof
                        (boolean_T));
      for (inputs = 0; inputs < loop_ub; inputs++) {
        i_p->data[i_p->size[0] * inputs] = (p->tType->data[inputs] == 1.0);
      }

      B = d_sum(i_p);

      /*  a 'yes' (mismatch judgement) on trials that were mismatches (ie, p.tType==1) */
      y = p->nTrials / 2.0;
      if (1.0 > y) {
        nx = 0;
      } else {
        nx = (int32_T)y;
      }

      y = p->nTrials / 2.0;
      if (1.0 > y) {
        loop_ub = 0;
      } else {
        loop_ub = (int32_T)y;
      }

      inputs = h_p->size[0] * h_p->size[1];
      h_p->size[0] = 1;
      h_p->size[1] = nx;
      emxEnsureCapacity((emxArray__common *)h_p, inputs, (int32_T)sizeof(real_T));
      for (inputs = 0; inputs < nx; inputs++) {
        h_p->data[h_p->size[0] * inputs] = p->answer->data[inputs] * (real_T)
          (p->tType->data[inputs] == 2.0);
      }

      b_A = c_sum(h_p);
      inputs = g_p->size[0] * g_p->size[1];
      g_p->size[0] = 1;
      g_p->size[1] = loop_ub;
      emxEnsureCapacity((emxArray__common *)g_p, inputs, (int32_T)sizeof
                        (boolean_T));
      for (inputs = 0; inputs < loop_ub; inputs++) {
        g_p->data[g_p->size[0] * inputs] = (p->tType->data[inputs] == 2.0);
      }

      b_B = d_sum(g_p);

      /*  a 'yes' on matching trials */
      y = p->nTrials / 2.0;
      if (y + 1.0 > p->answer->size[1]) {
        inputs = 0;
        idx = 0;
      } else {
        inputs = (int32_T)(y + 1.0) - 1;
        idx = p->answer->size[1];
      }

      y = p->nTrials / 2.0;
      if (y + 1.0 > p->tType->size[1]) {
        w_p = 0;
      } else {
        w_p = (int32_T)(y + 1.0) - 1;
      }

      y = p->nTrials / 2.0;
      if (y + 1.0 > p->tType->size[1]) {
        i16 = 0;
        c_ii = 0;
      } else {
        i16 = (int32_T)(y + 1.0) - 1;
        c_ii = p->tType->size[1];
      }

      nm1d2 = f_p->size[0] * f_p->size[1];
      f_p->size[0] = 1;
      f_p->size[1] = idx - inputs;
      emxEnsureCapacity((emxArray__common *)f_p, nm1d2, (int32_T)sizeof(real_T));
      nx = idx - inputs;
      for (idx = 0; idx < nx; idx++) {
        f_p->data[f_p->size[0] * idx] = p->answer->data[inputs + idx] * (real_T)
          (p->tType->data[w_p + idx] == 1.0);
      }

      c_A = c_sum(f_p);
      inputs = e_p->size[0] * e_p->size[1];
      e_p->size[0] = 1;
      e_p->size[1] = c_ii - i16;
      emxEnsureCapacity((emxArray__common *)e_p, inputs, (int32_T)sizeof
                        (boolean_T));
      nx = c_ii - i16;
      for (inputs = 0; inputs < nx; inputs++) {
        e_p->data[e_p->size[0] * inputs] = (p->tType->data[i16 + inputs] == 1.0);
      }

      c_B = d_sum(e_p);

      /*  a 'yes' (mismatch judgement) on trials that were mismatches (ie, p.tType==1) */
      y = p->nTrials / 2.0;
      if (y + 1.0 > p->answer->size[1]) {
        inputs = 0;
        idx = 0;
      } else {
        inputs = (int32_T)(y + 1.0) - 1;
        idx = p->answer->size[1];
      }

      y = p->nTrials / 2.0;
      if (y + 1.0 > p->tType->size[1]) {
        w_p = 0;
      } else {
        w_p = (int32_T)(y + 1.0) - 1;
      }

      y = p->nTrials / 2.0;
      if (y + 1.0 > p->tType->size[1]) {
        i16 = 0;
        c_ii = 0;
      } else {
        i16 = (int32_T)(y + 1.0) - 1;
        c_ii = p->tType->size[1];
      }

      nm1d2 = d_p->size[0] * d_p->size[1];
      d_p->size[0] = 1;
      d_p->size[1] = idx - inputs;
      emxEnsureCapacity((emxArray__common *)d_p, nm1d2, (int32_T)sizeof(real_T));
      nx = idx - inputs;
      for (idx = 0; idx < nx; idx++) {
        d_p->data[d_p->size[0] * idx] = p->answer->data[inputs + idx] * (real_T)
          (p->tType->data[w_p + idx] == 2.0);
      }

      d_A = c_sum(d_p);
      inputs = c_p->size[0] * c_p->size[1];
      c_p->size[0] = 1;
      c_p->size[1] = c_ii - i16;
      emxEnsureCapacity((emxArray__common *)c_p, inputs, (int32_T)sizeof
                        (boolean_T));
      nx = c_ii - i16;
      for (inputs = 0; inputs < nx; inputs++) {
        c_p->data[c_p->size[0] * inputs] = (p->tType->data[i16 + inputs] == 2.0);
      }

      d_B = d_sum(c_p);

      /*  a 'yes' on matching trials */
      /* -------------------------------------------------------------------------- */
      /*  d' was measure of decreased performance for patients (should drastically */
      /*  drop during second half of trials on rats lacking PRC layer, but not be */
      /*  affected by controls */
      p->dPrime_first = norminv(A / B) - norminv(b_A / b_B);
      p->dPrime_second = norminv(c_A / c_B) - norminv(d_A / d_B);
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  emxFree_real_T(&c_avail_feat);
  emxFree_real_T(&b_avail_feat);
  emxFree_real_T(&c_sample_feat);
  emxFree_real_T(&c_stimPair);
  emxFree_real_T(&b_stimPair);
  emxFree_boolean_T(&c_features_sampled);
  emxFree_boolean_T(&b_features_sampled_prev);
  emxFree_real_T(&b_weights);
  emxFree_boolean_T(&b_features_sampled);
  emxFree_real_T(&v_p);
  emxFree_real_T(&u_p);
  emxFree_real_T(&t_p);
  emxFree_real_T(&s_p);
  emxFree_real_T(&b_inps_tmp);
  emxFree_real_T(&r_p);
  emxFree_real_T(&r4);
  emxFree_real_T(&r3);
  emxFree_real_T(&b_input_mat);
  emxFree_real_T(&b_meanSelectivity_caudal_prev);
  emxFree_real_T(&q_p);
  emxFree_real_T(&p_p);
  emxFree_real_T(&o_p);
  emxFree_real_T(&n_p);
  emxFree_real_T(&m_p);
  emxFree_real_T(&b_stimuli);
  emxFree_real_T(&b_sample_feat);
  emxFree_real_T(&l_p);
  emxFree_real_T(&k_p);
  emxFree_real_T(&j_p);
  emxFree_boolean_T(&i_p);
  emxFree_real_T(&h_p);
  emxFree_boolean_T(&g_p);
  emxFree_real_T(&f_p);
  emxFree_boolean_T(&e_p);
  emxFree_real_T(&d_p);
  emxFree_boolean_T(&c_p);
  emxFree_int32_T(&b_ii);
  emxFree_boolean_T(&b_x);
  emxFree_real_T(&b_y);
  emxFree_int32_T(&ii);
  emxFree_boolean_T(&x);
  emxFree_int32_T(&r2);
  emxFree_int32_T(&r1);
  emxFree_int32_T(&r0);
  emxFree_real_T(&weights_child);
  emxFree_real_T(&whichCaudal);
  emxFree_real_T(&b_inputs);
  emxFree_real_T(&dist_mat);
  emxFree_real_T(&familDiff_caudal);
  emxFree_real_T(&meanSelectivity_caudal_prev);
  emxFree_real_T(&featuresToCompare);
  emxFree_real_T(&winners);
  emxFree_real_T(&f);
  emxFree_real_T(&input_mat);
  emxFree_real_T(&col_dist_mat);
  emxFree_real_T(&row_dist_mat);
  emxFree_real_T(&initial_selec);
  emxFree_real_T(&selectivity);
  emxFree_real_T(&stimulus);
  emxFree_real_T(&inps_tmp);
  emxFree_real_T(&features_sampled);
  emxFree_real_T(&avail_feat);
  emxFree_real_T(&sample_feat);
  emxFree_real_T(&features_sampled_prev);
  emxFree_real_T(&prevStimSelec);
  emxFree_real_T(&stimPair);
  emxFree_real_T(&stimuli);
  emxFree_real_T(&weights);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (visDiscrimModel.c) */
