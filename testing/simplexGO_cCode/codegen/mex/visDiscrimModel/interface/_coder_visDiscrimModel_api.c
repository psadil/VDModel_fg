/*
 * _coder_visDiscrimModel_api.c
 *
 * Code generation for function '_coder_visDiscrimModel_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "_coder_visDiscrimModel_api.h"
#include "visDiscrimModel_emxutil.h"
#include "visDiscrimModel_data.h"

/* Function Declarations */
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, struct0_T *y);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static void c_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_char_T *y);
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);
static real_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);
static void e_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[2]);
static void emlrt_marshallIn(const mxArray *p, const char_T *identifier,
  struct0_T *y);
static const mxArray *emlrt_marshallOut(const struct0_T *u);
static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y);
static void g_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y);
static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y);
static void i_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y);
static void j_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_char_T *ret);
static real_T k_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static void l_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[2]);
static void m_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret);
static void n_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret);
static void o_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret);
static void p_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret);

/* Function Definitions */
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[93] = { "wd", "numRows", "numLayers",
    "numGrids_Caudal", "numGrids_PRC", "nGrids", "maxNumGrids", "components",
    "numInputDims_Caudal", "numInputDims_PRC", "numInputDims", "decision_noise",
    "maxFixations", "A", "A_encoding", "etaExp", "B", "G_exp", "sigma", "eta",
    "numTrainCycles", "numEncodingCycles", "numFeaturesToSample",
    "fixn_ratio_lowHigh", "outsideRatio", "sizeOfPeak", "fives",
    "variableEncode", "diffEncode", "numThresh", "lengthOfCrit",
    "famil_diff_thresh_start", "setPre", "nameOfFolder",
    "totalInpDimsConditions", "totalTrainingConditions", "totalStimConditions",
    "totalStimSets", "totalSimulations", "totalEncodingConditions", "expt",
    "nMismatch", "nMatch", "nTrials", "gridMat", "famil_diff_thresh", "G",
    "ratNum", "stimCond", "stimuli_misMatch", "stimuli_match", "layer", "tType",
    "stimOrder", "stimSet", "nRows", "nTrainCycles", "which_gp_layer",
    "fixn_ratio", "maxFix", "nFeaturesToSample", "numGrids", "nInpDims",
    "usePRC", "nEncodCycles", "meanSelectivity_caudal_new",
    "meanSelectivity_PRC_new", "meanSelectivity_caudal_prev",
    "meanSelectivity_PRC_prev", "familDiff_caudal", "familDiff_PRC",
    "prevStimInit_act_peak", "prevStimInit_act_total", "prevStimFin_act_peak",
    "prevStimFin_act_total", "newStimInit_act_peak", "newStimInit_act_total",
    "newStimFin_act_peak", "newStimFin_act_total", "featsSampedByComparison",
    "sample_feat", "fixations", "peak_act", "totalAct", "comparedFeat",
    "familDiff_withNoise", "famil_difference", "answer", "correct",
    "Acc_firstHalf", "Acc_secondHalf", "dPrime_first", "dPrime_second" };

  thisId.fParent = parentId;
  emlrtCheckStructR2012b(emlrtRootTLSGlobal, parentId, u, 93, fieldNames, 0U, 0);
  thisId.fIdentifier = "wd";
  c_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "wd")), &thisId, y->wd);
  thisId.fIdentifier = "numRows";
  y->numRows = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "numRows")), &thisId);
  thisId.fIdentifier = "numLayers";
  y->numLayers = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "numLayers")), &thisId);
  thisId.fIdentifier = "numGrids_Caudal";
  y->numGrids_Caudal = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "numGrids_Caudal")), &thisId);
  thisId.fIdentifier = "numGrids_PRC";
  y->numGrids_PRC = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "numGrids_PRC")), &thisId);
  thisId.fIdentifier = "nGrids";
  e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "nGrids")), &thisId, y->nGrids);
  thisId.fIdentifier = "maxNumGrids";
  y->maxNumGrids = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "maxNumGrids")), &thisId);
  thisId.fIdentifier = "components";
  y->components = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "components")), &thisId);
  thisId.fIdentifier = "numInputDims_Caudal";
  y->numInputDims_Caudal = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "numInputDims_Caudal")), &thisId);
  thisId.fIdentifier = "numInputDims_PRC";
  y->numInputDims_PRC = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "numInputDims_PRC")), &thisId);
  thisId.fIdentifier = "numInputDims";
  e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "numInputDims")), &thisId, y->numInputDims);
  thisId.fIdentifier = "decision_noise";
  y->decision_noise = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "decision_noise")), &thisId);
  thisId.fIdentifier = "maxFixations";
  e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "maxFixations")), &thisId, y->maxFixations);
  thisId.fIdentifier = "A";
  y->A = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u,
    0, "A")), &thisId);
  thisId.fIdentifier = "A_encoding";
  y->A_encoding = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "A_encoding")), &thisId);
  thisId.fIdentifier = "etaExp";
  y->etaExp = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "etaExp")), &thisId);
  thisId.fIdentifier = "B";
  y->B = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u,
    0, "B")), &thisId);
  thisId.fIdentifier = "G_exp";
  y->G_exp = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "G_exp")), &thisId);
  thisId.fIdentifier = "sigma";
  y->sigma = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "sigma")), &thisId);
  thisId.fIdentifier = "eta";
  y->eta = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal,
    u, 0, "eta")), &thisId);
  thisId.fIdentifier = "numTrainCycles";
  y->numTrainCycles = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "numTrainCycles")), &thisId);
  thisId.fIdentifier = "numEncodingCycles";
  e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "numEncodingCycles")), &thisId, y->numEncodingCycles);
  thisId.fIdentifier = "numFeaturesToSample";
  e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "numFeaturesToSample")), &thisId, y->numFeaturesToSample);
  thisId.fIdentifier = "fixn_ratio_lowHigh";
  e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "fixn_ratio_lowHigh")), &thisId, y->fixn_ratio_lowHigh);
  thisId.fIdentifier = "outsideRatio";
  e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "outsideRatio")), &thisId, y->outsideRatio);
  thisId.fIdentifier = "sizeOfPeak";
  y->sizeOfPeak = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "sizeOfPeak")), &thisId);
  thisId.fIdentifier = "fives";
  y->fives = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "fives")), &thisId);
  thisId.fIdentifier = "variableEncode";
  y->variableEncode = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "variableEncode")), &thisId);
  thisId.fIdentifier = "diffEncode";
  y->diffEncode = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "diffEncode")), &thisId);
  thisId.fIdentifier = "numThresh";
  y->numThresh = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "numThresh")), &thisId);
  thisId.fIdentifier = "lengthOfCrit";
  y->lengthOfCrit = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "lengthOfCrit")), &thisId);
  thisId.fIdentifier = "famil_diff_thresh_start";
  f_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "famil_diff_thresh_start")), &thisId, y->famil_diff_thresh_start);
  thisId.fIdentifier = "setPre";
  y->setPre = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "setPre")), &thisId);
  thisId.fIdentifier = "nameOfFolder";
  c_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "nameOfFolder")), &thisId, y->nameOfFolder);
  thisId.fIdentifier = "totalInpDimsConditions";
  y->totalInpDimsConditions = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "totalInpDimsConditions")), &thisId);
  thisId.fIdentifier = "totalTrainingConditions";
  y->totalTrainingConditions = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "totalTrainingConditions")), &thisId);
  thisId.fIdentifier = "totalStimConditions";
  y->totalStimConditions = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "totalStimConditions")), &thisId);
  thisId.fIdentifier = "totalStimSets";
  y->totalStimSets = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "totalStimSets")), &thisId);
  thisId.fIdentifier = "totalSimulations";
  y->totalSimulations = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "totalSimulations")), &thisId);
  thisId.fIdentifier = "totalEncodingConditions";
  y->totalEncodingConditions = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "totalEncodingConditions")), &thisId);
  thisId.fIdentifier = "expt";
  c_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "expt")), &thisId, y->expt);
  thisId.fIdentifier = "nMismatch";
  y->nMismatch = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "nMismatch")), &thisId);
  thisId.fIdentifier = "nMatch";
  y->nMatch = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "nMatch")), &thisId);
  thisId.fIdentifier = "nTrials";
  y->nTrials = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "nTrials")), &thisId);
  thisId.fIdentifier = "gridMat";
  g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "gridMat")), &thisId, y->gridMat);
  thisId.fIdentifier = "famil_diff_thresh";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "famil_diff_thresh")), &thisId, y->famil_diff_thresh);
  thisId.fIdentifier = "G";
  y->G = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u,
    0, "G")), &thisId);
  thisId.fIdentifier = "ratNum";
  y->ratNum = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "ratNum")), &thisId);
  thisId.fIdentifier = "stimCond";
  y->stimCond = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "stimCond")), &thisId);
  thisId.fIdentifier = "stimuli_misMatch";
  g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "stimuli_misMatch")), &thisId, y->stimuli_misMatch);
  thisId.fIdentifier = "stimuli_match";
  g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "stimuli_match")), &thisId, y->stimuli_match);
  thisId.fIdentifier = "layer";
  y->layer = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "layer")), &thisId);
  thisId.fIdentifier = "tType";
  i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "tType")), &thisId, y->tType);
  thisId.fIdentifier = "stimOrder";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "stimOrder")), &thisId, y->stimOrder);
  thisId.fIdentifier = "stimSet";
  y->stimSet = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "stimSet")), &thisId);
  thisId.fIdentifier = "nRows";
  y->nRows = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "nRows")), &thisId);
  thisId.fIdentifier = "nTrainCycles";
  y->nTrainCycles = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "nTrainCycles")), &thisId);
  thisId.fIdentifier = "which_gp_layer";
  y->which_gp_layer = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "which_gp_layer")), &thisId);
  thisId.fIdentifier = "fixn_ratio";
  y->fixn_ratio = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "fixn_ratio")), &thisId);
  thisId.fIdentifier = "maxFix";
  y->maxFix = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "maxFix")), &thisId);
  thisId.fIdentifier = "nFeaturesToSample";
  y->nFeaturesToSample = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "nFeaturesToSample")), &thisId);
  thisId.fIdentifier = "numGrids";
  i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "numGrids")), &thisId, y->numGrids);
  thisId.fIdentifier = "nInpDims";
  i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "nInpDims")), &thisId, y->nInpDims);
  thisId.fIdentifier = "usePRC";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "usePRC")), &thisId, y->usePRC);
  thisId.fIdentifier = "nEncodCycles";
  y->nEncodCycles = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "nEncodCycles")), &thisId);
  thisId.fIdentifier = "meanSelectivity_caudal_new";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "meanSelectivity_caudal_new")), &thisId, y->meanSelectivity_caudal_new);
  thisId.fIdentifier = "meanSelectivity_PRC_new";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "meanSelectivity_PRC_new")), &thisId, y->meanSelectivity_PRC_new);
  thisId.fIdentifier = "meanSelectivity_caudal_prev";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "meanSelectivity_caudal_prev")), &thisId, y->meanSelectivity_caudal_prev);
  thisId.fIdentifier = "meanSelectivity_PRC_prev";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "meanSelectivity_PRC_prev")), &thisId, y->meanSelectivity_PRC_prev);
  thisId.fIdentifier = "familDiff_caudal";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "familDiff_caudal")), &thisId, y->familDiff_caudal);
  thisId.fIdentifier = "familDiff_PRC";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "familDiff_PRC")), &thisId, y->familDiff_PRC);
  thisId.fIdentifier = "prevStimInit_act_peak";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "prevStimInit_act_peak")), &thisId, y->prevStimInit_act_peak);
  thisId.fIdentifier = "prevStimInit_act_total";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "prevStimInit_act_total")), &thisId, y->prevStimInit_act_total);
  thisId.fIdentifier = "prevStimFin_act_peak";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "prevStimFin_act_peak")), &thisId, y->prevStimFin_act_peak);
  thisId.fIdentifier = "prevStimFin_act_total";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "prevStimFin_act_total")), &thisId, y->prevStimFin_act_total);
  thisId.fIdentifier = "newStimInit_act_peak";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "newStimInit_act_peak")), &thisId, y->newStimInit_act_peak);
  thisId.fIdentifier = "newStimInit_act_total";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "newStimInit_act_total")), &thisId, y->newStimInit_act_total);
  thisId.fIdentifier = "newStimFin_act_peak";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "newStimFin_act_peak")), &thisId, y->newStimFin_act_peak);
  thisId.fIdentifier = "newStimFin_act_total";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "newStimFin_act_total")), &thisId, y->newStimFin_act_total);
  thisId.fIdentifier = "featsSampedByComparison";
  g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "featsSampedByComparison")), &thisId, y->featsSampedByComparison);
  thisId.fIdentifier = "sample_feat";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "sample_feat")), &thisId, y->sample_feat);
  thisId.fIdentifier = "fixations";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "fixations")), &thisId, y->fixations);
  thisId.fIdentifier = "peak_act";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "peak_act")), &thisId, y->peak_act);
  thisId.fIdentifier = "totalAct";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "totalAct")), &thisId, y->totalAct);
  thisId.fIdentifier = "comparedFeat";
  h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "comparedFeat")), &thisId, y->comparedFeat);
  thisId.fIdentifier = "familDiff_withNoise";
  i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "familDiff_withNoise")), &thisId, y->familDiff_withNoise);
  thisId.fIdentifier = "famil_difference";
  i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "famil_difference")), &thisId, y->famil_difference);
  thisId.fIdentifier = "answer";
  i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "answer")), &thisId, y->answer);
  thisId.fIdentifier = "correct";
  i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "correct")), &thisId, y->correct);
  thisId.fIdentifier = "Acc_firstHalf";
  y->Acc_firstHalf = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "Acc_firstHalf")), &thisId);
  thisId.fIdentifier = "Acc_secondHalf";
  y->Acc_secondHalf = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "Acc_secondHalf")), &thisId);
  thisId.fIdentifier = "dPrime_first";
  y->dPrime_first = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "dPrime_first")), &thisId);
  thisId.fIdentifier = "dPrime_second";
  y->dPrime_second = d_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "dPrime_second")), &thisId);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m1;
  real_T *pData;
  int32_T i9;
  int32_T i;
  int32_T b_i;
  int32_T c_i;
  y = NULL;
  m1 = emlrtCreateNumericArray(3, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m1);
  i9 = 0;
  for (i = 0; i < u->size[2]; i++) {
    for (b_i = 0; b_i < u->size[1]; b_i++) {
      for (c_i = 0; c_i < u->size[0]; c_i++) {
        pData[i9] = u->data[(c_i + u->size[0] * b_i) + u->size[0] * u->size[1] *
          i];
        i9++;
      }
    }
  }

  emlrtAssign(&y, m1);
  return y;
}

static void c_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_char_T *y)
{
  j_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m2;
  real_T *pData;
  int32_T i10;
  int32_T i;
  int32_T b_i;
  y = NULL;
  m2 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m2);
  i10 = 0;
  for (i = 0; i < u->size[1]; i++) {
    for (b_i = 0; b_i < u->size[0]; b_i++) {
      pData[i10] = u->data[b_i + u->size[0] * i];
      i10++;
    }
  }

  emlrtAssign(&y, m2);
  return y;
}

static real_T d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  real_T y;
  y = k_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m3;
  real_T *pData;
  int32_T i11;
  int32_T i;
  y = NULL;
  m3 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m3);
  i11 = 0;
  for (i = 0; i < u->size[1]; i++) {
    pData[i11] = u->data[u->size[0] * i];
    i11++;
  }

  emlrtAssign(&y, m3);
  return y;
}

static void e_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[2])
{
  l_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const mxArray *p, const char_T *identifier,
  struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(emlrtAlias(p), &thisId, y);
  emlrtDestroyArray(&p);
}

static const mxArray *emlrt_marshallOut(const struct0_T *u)
{
  const mxArray *y;
  emxArray_char_T *b_u;
  emxArray_real_T *c_u;
  emxArray_char_T *d_u;
  emxArray_char_T *e_u;
  int32_T i8;
  int32_T loop_ub;
  const mxArray *b_y;
  const mxArray *m0;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  static const int32_T iv1[2] = { 1, 2 };

  real_T *pData;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  static const int32_T iv2[2] = { 1, 2 };

  const mxArray *m_y;
  const mxArray *n_y;
  static const int32_T iv3[2] = { 1, 2 };

  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *q_y;
  const mxArray *r_y;
  const mxArray *s_y;
  const mxArray *t_y;
  const mxArray *u_y;
  const mxArray *v_y;
  const mxArray *w_y;
  static const int32_T iv4[2] = { 1, 2 };

  const mxArray *x_y;
  static const int32_T iv5[2] = { 1, 2 };

  const mxArray *y_y;
  static const int32_T iv6[2] = { 1, 2 };

  const mxArray *ab_y;
  static const int32_T iv7[2] = { 1, 2 };

  const mxArray *bb_y;
  const mxArray *cb_y;
  const mxArray *db_y;
  const mxArray *eb_y;
  const mxArray *fb_y;
  const mxArray *gb_y;
  const mxArray *hb_y;
  const mxArray *ib_y;
  const mxArray *jb_y;
  const mxArray *kb_y;
  const mxArray *lb_y;
  const mxArray *mb_y;
  const mxArray *nb_y;
  const mxArray *ob_y;
  const mxArray *pb_y;
  const mxArray *qb_y;
  const mxArray *rb_y;
  const mxArray *sb_y;
  const mxArray *tb_y;
  const mxArray *ub_y;
  const mxArray *vb_y;
  const mxArray *wb_y;
  const mxArray *xb_y;
  const mxArray *yb_y;
  const mxArray *ac_y;
  const mxArray *bc_y;
  const mxArray *cc_y;
  const mxArray *dc_y;
  const mxArray *ec_y;
  const mxArray *fc_y;
  const mxArray *gc_y;
  const mxArray *hc_y;
  const mxArray *ic_y;
  const mxArray *jc_y;
  const mxArray *kc_y;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInit_char_T(&b_u, 2, true);
  emxInit_real_T(&c_u, 1, true);
  emxInit_char_T(&d_u, 2, true);
  emxInit_char_T(&e_u, 2, true);
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  i8 = b_u->size[0] * b_u->size[1];
  b_u->size[0] = 1;
  b_u->size[1] = u->wd->size[1];
  emxEnsureCapacity((emxArray__common *)b_u, i8, (int32_T)sizeof(char_T));
  loop_ub = u->wd->size[0] * u->wd->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    b_u->data[i8] = u->wd->data[i8];
  }

  b_y = NULL;
  m0 = emlrtCreateCharArray(2, *(int32_T (*)[2])b_u->size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, b_u->size[1], m0, &b_u->data[0]);
  emlrtAssign(&b_y, m0);
  emlrtAddField(y, b_y, "wd", 0);
  c_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->numRows);
  emlrtAssign(&c_y, m0);
  emlrtAddField(y, c_y, "numRows", 0);
  d_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->numLayers);
  emlrtAssign(&d_y, m0);
  emlrtAddField(y, d_y, "numLayers", 0);
  e_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->numGrids_Caudal);
  emlrtAssign(&e_y, m0);
  emlrtAddField(y, e_y, "numGrids_Caudal", 0);
  f_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->numGrids_PRC);
  emlrtAssign(&f_y, m0);
  emlrtAddField(y, f_y, "numGrids_PRC", 0);
  g_y = NULL;
  m0 = emlrtCreateNumericArray(2, iv1, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m0);
  for (loop_ub = 0; loop_ub < 2; loop_ub++) {
    pData[loop_ub] = u->nGrids[loop_ub];
  }

  emlrtAssign(&g_y, m0);
  emlrtAddField(y, g_y, "nGrids", 0);
  h_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->maxNumGrids);
  emlrtAssign(&h_y, m0);
  emlrtAddField(y, h_y, "maxNumGrids", 0);
  i_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->components);
  emlrtAssign(&i_y, m0);
  emlrtAddField(y, i_y, "components", 0);
  j_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->numInputDims_Caudal);
  emlrtAssign(&j_y, m0);
  emlrtAddField(y, j_y, "numInputDims_Caudal", 0);
  k_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->numInputDims_PRC);
  emlrtAssign(&k_y, m0);
  emlrtAddField(y, k_y, "numInputDims_PRC", 0);
  l_y = NULL;
  m0 = emlrtCreateNumericArray(2, iv2, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m0);
  for (loop_ub = 0; loop_ub < 2; loop_ub++) {
    pData[loop_ub] = u->numInputDims[loop_ub];
  }

  emlrtAssign(&l_y, m0);
  emlrtAddField(y, l_y, "numInputDims", 0);
  m_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->decision_noise);
  emlrtAssign(&m_y, m0);
  emlrtAddField(y, m_y, "decision_noise", 0);
  n_y = NULL;
  m0 = emlrtCreateNumericArray(2, iv3, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m0);
  for (loop_ub = 0; loop_ub < 2; loop_ub++) {
    pData[loop_ub] = u->maxFixations[loop_ub];
  }

  emlrtAssign(&n_y, m0);
  emlrtAddField(y, n_y, "maxFixations", 0);
  o_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->A);
  emlrtAssign(&o_y, m0);
  emlrtAddField(y, o_y, "A", 0);
  p_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->A_encoding);
  emlrtAssign(&p_y, m0);
  emlrtAddField(y, p_y, "A_encoding", 0);
  q_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->etaExp);
  emlrtAssign(&q_y, m0);
  emlrtAddField(y, q_y, "etaExp", 0);
  r_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->B);
  emlrtAssign(&r_y, m0);
  emlrtAddField(y, r_y, "B", 0);
  s_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->G_exp);
  emlrtAssign(&s_y, m0);
  emlrtAddField(y, s_y, "G_exp", 0);
  t_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->sigma);
  emlrtAssign(&t_y, m0);
  emlrtAddField(y, t_y, "sigma", 0);
  u_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->eta);
  emlrtAssign(&u_y, m0);
  emlrtAddField(y, u_y, "eta", 0);
  v_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->numTrainCycles);
  emlrtAssign(&v_y, m0);
  emlrtAddField(y, v_y, "numTrainCycles", 0);
  w_y = NULL;
  m0 = emlrtCreateNumericArray(2, iv4, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m0);
  for (loop_ub = 0; loop_ub < 2; loop_ub++) {
    pData[loop_ub] = u->numEncodingCycles[loop_ub];
  }

  emlrtAssign(&w_y, m0);
  emlrtAddField(y, w_y, "numEncodingCycles", 0);
  x_y = NULL;
  m0 = emlrtCreateNumericArray(2, iv5, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m0);
  for (loop_ub = 0; loop_ub < 2; loop_ub++) {
    pData[loop_ub] = u->numFeaturesToSample[loop_ub];
  }

  emlrtAssign(&x_y, m0);
  emlrtAddField(y, x_y, "numFeaturesToSample", 0);
  y_y = NULL;
  m0 = emlrtCreateNumericArray(2, iv6, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m0);
  for (loop_ub = 0; loop_ub < 2; loop_ub++) {
    pData[loop_ub] = u->fixn_ratio_lowHigh[loop_ub];
  }

  emlrtAssign(&y_y, m0);
  emlrtAddField(y, y_y, "fixn_ratio_lowHigh", 0);
  ab_y = NULL;
  m0 = emlrtCreateNumericArray(2, iv7, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m0);
  for (loop_ub = 0; loop_ub < 2; loop_ub++) {
    pData[loop_ub] = u->outsideRatio[loop_ub];
  }

  emlrtAssign(&ab_y, m0);
  emlrtAddField(y, ab_y, "outsideRatio", 0);
  bb_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->sizeOfPeak);
  emlrtAssign(&bb_y, m0);
  emlrtAddField(y, bb_y, "sizeOfPeak", 0);
  cb_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->fives);
  emlrtAssign(&cb_y, m0);
  emlrtAddField(y, cb_y, "fives", 0);
  db_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->variableEncode);
  emlrtAssign(&db_y, m0);
  emlrtAddField(y, db_y, "variableEncode", 0);
  eb_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->diffEncode);
  emlrtAssign(&eb_y, m0);
  emlrtAddField(y, eb_y, "diffEncode", 0);
  fb_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->numThresh);
  emlrtAssign(&fb_y, m0);
  emlrtAddField(y, fb_y, "numThresh", 0);
  gb_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->lengthOfCrit);
  emlrtAssign(&gb_y, m0);
  emlrtAddField(y, gb_y, "lengthOfCrit", 0);
  i8 = c_u->size[0];
  c_u->size[0] = u->famil_diff_thresh_start->size[0];
  emxEnsureCapacity((emxArray__common *)c_u, i8, (int32_T)sizeof(real_T));
  loop_ub = u->famil_diff_thresh_start->size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    c_u->data[i8] = u->famil_diff_thresh_start->data[i8];
  }

  hb_y = NULL;
  m0 = emlrtCreateNumericArray(1, *(int32_T (*)[2])c_u->size, mxDOUBLE_CLASS,
    mxREAL);
  pData = (real_T *)mxGetPr(m0);
  i8 = 0;
  for (loop_ub = 0; loop_ub < c_u->size[0]; loop_ub++) {
    pData[i8] = c_u->data[loop_ub];
    i8++;
  }

  emlrtAssign(&hb_y, m0);
  emlrtAddField(y, hb_y, "famil_diff_thresh_start", 0);
  ib_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->setPre);
  emlrtAssign(&ib_y, m0);
  emlrtAddField(y, ib_y, "setPre", 0);
  i8 = d_u->size[0] * d_u->size[1];
  d_u->size[0] = 1;
  d_u->size[1] = u->nameOfFolder->size[1];
  emxEnsureCapacity((emxArray__common *)d_u, i8, (int32_T)sizeof(char_T));
  loop_ub = u->nameOfFolder->size[0] * u->nameOfFolder->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    d_u->data[i8] = u->nameOfFolder->data[i8];
  }

  jb_y = NULL;
  m0 = emlrtCreateCharArray(2, *(int32_T (*)[2])d_u->size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, d_u->size[1], m0, &d_u->data[0]);
  emlrtAssign(&jb_y, m0);
  emlrtAddField(y, jb_y, "nameOfFolder", 0);
  kb_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->totalInpDimsConditions);
  emlrtAssign(&kb_y, m0);
  emlrtAddField(y, kb_y, "totalInpDimsConditions", 0);
  lb_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->totalTrainingConditions);
  emlrtAssign(&lb_y, m0);
  emlrtAddField(y, lb_y, "totalTrainingConditions", 0);
  mb_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->totalStimConditions);
  emlrtAssign(&mb_y, m0);
  emlrtAddField(y, mb_y, "totalStimConditions", 0);
  nb_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->totalStimSets);
  emlrtAssign(&nb_y, m0);
  emlrtAddField(y, nb_y, "totalStimSets", 0);
  ob_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->totalSimulations);
  emlrtAssign(&ob_y, m0);
  emlrtAddField(y, ob_y, "totalSimulations", 0);
  pb_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->totalEncodingConditions);
  emlrtAssign(&pb_y, m0);
  emlrtAddField(y, pb_y, "totalEncodingConditions", 0);
  i8 = e_u->size[0] * e_u->size[1];
  e_u->size[0] = 1;
  e_u->size[1] = u->expt->size[1];
  emxEnsureCapacity((emxArray__common *)e_u, i8, (int32_T)sizeof(char_T));
  loop_ub = u->expt->size[0] * u->expt->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    e_u->data[i8] = u->expt->data[i8];
  }

  qb_y = NULL;
  m0 = emlrtCreateCharArray(2, *(int32_T (*)[2])e_u->size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, e_u->size[1], m0, &e_u->data[0]);
  emlrtAssign(&qb_y, m0);
  emlrtAddField(y, qb_y, "expt", 0);
  rb_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->nMismatch);
  emlrtAssign(&rb_y, m0);
  emlrtAddField(y, rb_y, "nMismatch", 0);
  sb_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->nMatch);
  emlrtAssign(&sb_y, m0);
  emlrtAddField(y, sb_y, "nMatch", 0);
  tb_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->nTrials);
  emlrtAssign(&tb_y, m0);
  emlrtAddField(y, tb_y, "nTrials", 0);
  emlrtAddField(y, b_emlrt_marshallOut(u->gridMat), "gridMat", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->famil_diff_thresh),
                "famil_diff_thresh", 0);
  ub_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->G);
  emlrtAssign(&ub_y, m0);
  emlrtAddField(y, ub_y, "G", 0);
  vb_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->ratNum);
  emlrtAssign(&vb_y, m0);
  emlrtAddField(y, vb_y, "ratNum", 0);
  wb_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->stimCond);
  emlrtAssign(&wb_y, m0);
  emlrtAddField(y, wb_y, "stimCond", 0);
  emlrtAddField(y, b_emlrt_marshallOut(u->stimuli_misMatch), "stimuli_misMatch",
                0);
  emlrtAddField(y, b_emlrt_marshallOut(u->stimuli_match), "stimuli_match", 0);
  xb_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->layer);
  emlrtAssign(&xb_y, m0);
  emlrtAddField(y, xb_y, "layer", 0);
  emlrtAddField(y, d_emlrt_marshallOut(u->tType), "tType", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->stimOrder), "stimOrder", 0);
  yb_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->stimSet);
  emlrtAssign(&yb_y, m0);
  emlrtAddField(y, yb_y, "stimSet", 0);
  ac_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->nRows);
  emlrtAssign(&ac_y, m0);
  emlrtAddField(y, ac_y, "nRows", 0);
  bc_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->nTrainCycles);
  emlrtAssign(&bc_y, m0);
  emlrtAddField(y, bc_y, "nTrainCycles", 0);
  cc_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->which_gp_layer);
  emlrtAssign(&cc_y, m0);
  emlrtAddField(y, cc_y, "which_gp_layer", 0);
  dc_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->fixn_ratio);
  emlrtAssign(&dc_y, m0);
  emlrtAddField(y, dc_y, "fixn_ratio", 0);
  ec_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->maxFix);
  emlrtAssign(&ec_y, m0);
  emlrtAddField(y, ec_y, "maxFix", 0);
  fc_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->nFeaturesToSample);
  emlrtAssign(&fc_y, m0);
  emlrtAddField(y, fc_y, "nFeaturesToSample", 0);
  emlrtAddField(y, d_emlrt_marshallOut(u->numGrids), "numGrids", 0);
  emlrtAddField(y, d_emlrt_marshallOut(u->nInpDims), "nInpDims", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->usePRC), "usePRC", 0);
  gc_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->nEncodCycles);
  emlrtAssign(&gc_y, m0);
  emlrtAddField(y, gc_y, "nEncodCycles", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->meanSelectivity_caudal_new),
                "meanSelectivity_caudal_new", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->meanSelectivity_PRC_new),
                "meanSelectivity_PRC_new", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->meanSelectivity_caudal_prev),
                "meanSelectivity_caudal_prev", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->meanSelectivity_PRC_prev),
                "meanSelectivity_PRC_prev", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->familDiff_caudal), "familDiff_caudal",
                0);
  emlrtAddField(y, c_emlrt_marshallOut(u->familDiff_PRC), "familDiff_PRC", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->prevStimInit_act_peak),
                "prevStimInit_act_peak", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->prevStimInit_act_total),
                "prevStimInit_act_total", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->prevStimFin_act_peak),
                "prevStimFin_act_peak", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->prevStimFin_act_total),
                "prevStimFin_act_total", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->newStimInit_act_peak),
                "newStimInit_act_peak", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->newStimInit_act_total),
                "newStimInit_act_total", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->newStimFin_act_peak),
                "newStimFin_act_peak", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->newStimFin_act_total),
                "newStimFin_act_total", 0);
  emlrtAddField(y, b_emlrt_marshallOut(u->featsSampedByComparison),
                "featsSampedByComparison", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->sample_feat), "sample_feat", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->fixations), "fixations", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->peak_act), "peak_act", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->totalAct), "totalAct", 0);
  emlrtAddField(y, c_emlrt_marshallOut(u->comparedFeat), "comparedFeat", 0);
  emlrtAddField(y, d_emlrt_marshallOut(u->familDiff_withNoise),
                "familDiff_withNoise", 0);
  emlrtAddField(y, d_emlrt_marshallOut(u->famil_difference), "famil_difference",
                0);
  emlrtAddField(y, d_emlrt_marshallOut(u->answer), "answer", 0);
  emlrtAddField(y, d_emlrt_marshallOut(u->correct), "correct", 0);
  hc_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->Acc_firstHalf);
  emlrtAssign(&hc_y, m0);
  emlrtAddField(y, hc_y, "Acc_firstHalf", 0);
  ic_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->Acc_secondHalf);
  emlrtAssign(&ic_y, m0);
  emlrtAddField(y, ic_y, "Acc_secondHalf", 0);
  jc_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->dPrime_first);
  emlrtAssign(&jc_y, m0);
  emlrtAddField(y, jc_y, "dPrime_first", 0);
  kc_y = NULL;
  m0 = emlrtCreateDoubleScalar(u->dPrime_second);
  emlrtAssign(&kc_y, m0);
  emlrtAddField(y, kc_y, "dPrime_second", 0);
  emxFree_char_T(&e_u);
  emxFree_char_T(&d_u);
  emxFree_real_T(&c_u);
  emxFree_char_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
  return y;
}

static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y)
{
  m_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y)
{
  n_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y)
{
  o_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, emxArray_real_T *y)
{
  p_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void j_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_char_T *ret)
{
  int32_T iv8[2];
  int32_T i12;
  int32_T iv9[2];
  boolean_T bv0[2] = { false, true };

  for (i12 = 0; i12 < 2; i12++) {
    iv8[i12] = 1 + -2 * i12;
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "char", false, 2U,
    iv8, &bv0[0], iv9);
  i12 = ret->size[0] * ret->size[1];
  ret->size[0] = iv9[0];
  ret->size[1] = iv9[1];
  emxEnsureCapacity((emxArray__common *)ret, i12, (int32_T)sizeof(char_T));
  emlrtImportArrayR2011b(src, ret->data, 1, false);
  emlrtDestroyArray(&src);
}

static real_T k_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void l_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[2])
{
  int32_T iv10[2];
  int32_T i13;
  for (i13 = 0; i13 < 2; i13++) {
    iv10[i13] = 1 + i13;
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
    iv10);
  for (i13 = 0; i13 < 2; i13++) {
    ret[i13] = (*(real_T (*)[2])mxGetData(src))[i13];
  }

  emlrtDestroyArray(&src);
}

static void m_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret)
{
  int32_T iv11[1];
  boolean_T bv1[1] = { true };

  static const int32_T iv12[1] = { -1 };

  int32_T i14;
  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 1U,
    iv12, &bv1[0], iv11);
  i14 = ret->size[0];
  ret->size[0] = iv11[0];
  emxEnsureCapacity((emxArray__common *)ret, i14, (int32_T)sizeof(real_T));
  emlrtImportArrayR2011b(src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void n_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret)
{
  int32_T iv13[3];
  int32_T i;
  int32_T iv14[3];
  boolean_T bv2[3] = { true, true, true };

  for (i = 0; i < 3; i++) {
    iv13[i] = -1;
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 3U,
    iv13, &bv2[0], iv14);
  i = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv14[0];
  ret->size[1] = iv14[1];
  ret->size[2] = iv14[2];
  emxEnsureCapacity((emxArray__common *)ret, i, (int32_T)sizeof(real_T));
  emlrtImportArrayR2011b(src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void o_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret)
{
  int32_T iv15[2];
  int32_T i;
  int32_T iv16[2];
  boolean_T bv3[2] = { true, true };

  for (i = 0; i < 2; i++) {
    iv15[i] = -1;
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
    iv15, &bv3[0], iv16);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv16[0];
  ret->size[1] = iv16[1];
  emxEnsureCapacity((emxArray__common *)ret, i, (int32_T)sizeof(real_T));
  emlrtImportArrayR2011b(src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void p_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, emxArray_real_T *ret)
{
  int32_T iv17[2];
  int32_T i15;
  int32_T iv18[2];
  boolean_T bv4[2] = { false, true };

  for (i15 = 0; i15 < 2; i15++) {
    iv17[i15] = 1 + -2 * i15;
  }

  emlrtCheckVsBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
    iv17, &bv4[0], iv18);
  i15 = ret->size[0] * ret->size[1];
  ret->size[0] = iv18[0];
  ret->size[1] = iv18[1];
  emxEnsureCapacity((emxArray__common *)ret, i15, (int32_T)sizeof(real_T));
  emlrtImportArrayR2011b(src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

void visDiscrimModel_api(const mxArray * const prhs[1], const mxArray *plhs[1])
{
  struct0_T p;
  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  emxInitStruct_struct0_T(&p, true);

  /* Marshall function inputs */
  emlrt_marshallIn(emlrtAliasP(prhs[0]), "p", &p);

  /* Invoke the target function */
  visDiscrimModel(&p);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&p);
  emxFreeStruct_struct0_T(&p);
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (_coder_visDiscrimModel_api.c) */
