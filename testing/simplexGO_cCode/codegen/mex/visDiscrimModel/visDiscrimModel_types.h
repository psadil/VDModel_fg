/*
 * visDiscrimModel_types.h
 *
 * Code generation for function 'visDiscrimModel'
 *
 */

#ifndef __VISDISCRIMMODEL_TYPES_H__
#define __VISDISCRIMMODEL_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray__common
#define struct_emxArray__common

struct emxArray__common
{
  void *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray__common*/

#ifndef typedef_emxArray__common
#define typedef_emxArray__common

typedef struct emxArray__common emxArray__common;

#endif                                 /*typedef_emxArray__common*/

#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_boolean_T*/

#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T

typedef struct emxArray_boolean_T emxArray_boolean_T;

#endif                                 /*typedef_emxArray_boolean_T*/

#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T

struct emxArray_char_T
{
  char_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_char_T*/

#ifndef typedef_emxArray_char_T
#define typedef_emxArray_char_T

typedef struct emxArray_char_T emxArray_char_T;

#endif                                 /*typedef_emxArray_char_T*/

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T

typedef struct emxArray_int32_T emxArray_int32_T;

#endif                                 /*typedef_emxArray_int32_T*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  emxArray_char_T *wd;
  real_T numRows;
  real_T numLayers;
  real_T numGrids_Caudal;
  real_T numGrids_PRC;
  real_T nGrids[2];
  real_T maxNumGrids;
  real_T components;
  real_T numInputDims_Caudal;
  real_T numInputDims_PRC;
  real_T numInputDims[2];
  real_T decision_noise;
  real_T maxFixations[2];
  real_T A;
  real_T A_encoding;
  real_T etaExp;
  real_T B;
  real_T G_exp;
  real_T sigma;
  real_T eta;
  real_T numTrainCycles;
  real_T numEncodingCycles[2];
  real_T numFeaturesToSample[2];
  real_T fixn_ratio_lowHigh[2];
  real_T outsideRatio[2];
  real_T sizeOfPeak;
  real_T fives;
  real_T variableEncode;
  real_T diffEncode;
  real_T numThresh;
  real_T lengthOfCrit;
  emxArray_real_T *famil_diff_thresh_start;
  real_T setPre;
  emxArray_char_T *nameOfFolder;
  real_T totalInpDimsConditions;
  real_T totalTrainingConditions;
  real_T totalStimConditions;
  real_T totalStimSets;
  real_T totalSimulations;
  real_T totalEncodingConditions;
  emxArray_char_T *expt;
  real_T nMismatch;
  real_T nMatch;
  real_T nTrials;
  emxArray_real_T *gridMat;
  emxArray_real_T *famil_diff_thresh;
  real_T G;
  real_T ratNum;
  real_T stimCond;
  emxArray_real_T *stimuli_misMatch;
  emxArray_real_T *stimuli_match;
  real_T layer;
  emxArray_real_T *tType;
  emxArray_real_T *stimOrder;
  real_T stimSet;
  real_T nRows;
  real_T nTrainCycles;
  real_T which_gp_layer;
  real_T fixn_ratio;
  real_T maxFix;
  real_T nFeaturesToSample;
  emxArray_real_T *numGrids;
  emxArray_real_T *nInpDims;
  emxArray_real_T *usePRC;
  real_T nEncodCycles;
  emxArray_real_T *meanSelectivity_caudal_new;
  emxArray_real_T *meanSelectivity_PRC_new;
  emxArray_real_T *meanSelectivity_caudal_prev;
  emxArray_real_T *meanSelectivity_PRC_prev;
  emxArray_real_T *familDiff_caudal;
  emxArray_real_T *familDiff_PRC;
  emxArray_real_T *prevStimInit_act_peak;
  emxArray_real_T *prevStimInit_act_total;
  emxArray_real_T *prevStimFin_act_peak;
  emxArray_real_T *prevStimFin_act_total;
  emxArray_real_T *newStimInit_act_peak;
  emxArray_real_T *newStimInit_act_total;
  emxArray_real_T *newStimFin_act_peak;
  emxArray_real_T *newStimFin_act_total;
  emxArray_real_T *featsSampedByComparison;
  emxArray_real_T *sample_feat;
  emxArray_real_T *fixations;
  emxArray_real_T *peak_act;
  emxArray_real_T *totalAct;
  emxArray_real_T *comparedFeat;
  emxArray_real_T *familDiff_withNoise;
  emxArray_real_T *famil_difference;
  emxArray_real_T *answer;
  emxArray_real_T *correct;
  real_T Acc_firstHalf;
  real_T Acc_secondHalf;
  real_T dPrime_first;
  real_T dPrime_second;
} struct0_T;

#endif                                 /*typedef_struct0_T*/
#endif

/* End of code generation (visDiscrimModel_types.h) */
