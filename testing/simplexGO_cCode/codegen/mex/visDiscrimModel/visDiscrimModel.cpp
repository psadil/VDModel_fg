/*
 * visDiscrimModel.cpp
 *
 * Code generation for function 'visDiscrimModel'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "visDiscrimModel.h"
#include "rand.h"
#include "visDiscrimModel_emxutil.h"
#include "eml_error.h"
#include "abs.h"
#include "rdivide.h"
#include "eml_int_forloop_overflow_check.h"
#include "randperm.h"
#include "sum.h"
#include "exp.h"
#include "log.h"
#include "repmat.h"
#include "power.h"
#include "findWinningNode.h"
#include "any.h"
#include "squeeze.h"
#include "all.h"
#include "mean.h"
#include "cat.h"
#include "determineCriterion.h"
#include "norminv.h"
#include "visDiscrimModel_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 758, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo b_emlrtRSI = { 757, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo c_emlrtRSI = { 751, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo d_emlrtRSI = { 750, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo e_emlrtRSI = { 748, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo f_emlrtRSI = { 747, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo g_emlrtRSI = { 745, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo h_emlrtRSI = { 744, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo i_emlrtRSI = { 738, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo j_emlrtRSI = { 630, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo k_emlrtRSI = { 626, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo l_emlrtRSI = { 601, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo m_emlrtRSI = { 589, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo n_emlrtRSI = { 578, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo o_emlrtRSI = { 563, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo p_emlrtRSI = { 543, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo q_emlrtRSI = { 527, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo r_emlrtRSI = { 523, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo s_emlrtRSI = { 464, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo t_emlrtRSI = { 422, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo u_emlrtRSI = { 360, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo v_emlrtRSI = { 358, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo w_emlrtRSI = { 355, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo x_emlrtRSI = { 346, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo y_emlrtRSI = { 345, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo ab_emlrtRSI = { 321, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo bb_emlrtRSI = { 313, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo cb_emlrtRSI = { 309, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo db_emlrtRSI = { 298, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo eb_emlrtRSI = { 291, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo fb_emlrtRSI = { 278, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo gb_emlrtRSI = { 243, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo hb_emlrtRSI = { 242, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo ib_emlrtRSI = { 238, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo jb_emlrtRSI = { 220, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo kb_emlrtRSI = { 216, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo lb_emlrtRSI = { 210, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo mb_emlrtRSI = { 201, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo nb_emlrtRSI = { 182, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo ob_emlrtRSI = { 171, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo pb_emlrtRSI = { 169, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo qb_emlrtRSI = { 162, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo rb_emlrtRSI = { 103, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo sb_emlrtRSI = { 18, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRSInfo ic_emlrtRSI = { 41, "find",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo jc_emlrtRSI = { 230, "find",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo mc_emlrtRSI = { 97, "reshape",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo nc_emlrtRSI = { 50, "reshape",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo oc_emlrtRSI = { 25, "reshape",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo qc_emlrtRSI = { 16, "max",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"
};

static emlrtRSInfo vc_emlrtRSI = { 79, "colon",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo wc_emlrtRSI = { 283, "colon",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo xc_emlrtRSI = { 291, "colon",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 14, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo r_emlrtRTEI = { 249, 13, "find",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 17, 1, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 86, 5, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo u_emlrtRTEI = { 103, 5, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo v_emlrtRTEI = { 125, 5, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo w_emlrtRTEI = { 155, 5, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo x_emlrtRTEI = { 161, 9, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo y_emlrtRTEI = { 162, 9, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo ab_emlrtRTEI = { 216, 9, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo bb_emlrtRTEI = { 223, 9, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo cb_emlrtRTEI = { 240, 9, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo db_emlrtRTEI = { 241, 9, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo eb_emlrtRTEI = { 242, 9, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo fb_emlrtRTEI = { 243, 9, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo gb_emlrtRTEI = { 252, 9, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo hb_emlrtRTEI = { 253, 9, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo ib_emlrtRTEI = { 284, 17, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo jb_emlrtRTEI = { 346, 21, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo kb_emlrtRTEI = { 358, 21, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo lb_emlrtRTEI = { 366, 21, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo mb_emlrtRTEI = { 521, 13, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo nb_emlrtRTEI = { 558, 21, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo ob_emlrtRTEI = { 560, 21, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo pb_emlrtRTEI = { 219, 9, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo qb_emlrtRTEI = { 502, 13, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo rb_emlrtRTEI = { 290, 17, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo sb_emlrtRTEI = { 33, 6, "find",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtECInfo b_emlrtECI = { -1, 443, 17, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 443, 39, "activations",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 443, 29, "activations",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtECInfo c_emlrtECI = { -1, 432, 25, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtBCInfo c_emlrtBCI = { -1, -1, 432, 48, "initial_acts",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 432, 38, "initial_acts",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 751, 87, "p.tType", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo c_emlrtDCI = { 751, 87, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtECInfo d_emlrtECI = { 2, 751, 21, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtBCInfo f_emlrtBCI = { -1, -1, 751, 51, "p.tType", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo d_emlrtDCI = { 751, 51, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 751, 21, "p.answer", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo e_emlrtDCI = { 751, 21, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 750, 88, "p.tType", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo f_emlrtDCI = { 750, 88, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtECInfo e_emlrtECI = { 2, 750, 22, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtBCInfo i_emlrtBCI = { -1, -1, 750, 52, "p.tType", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo g_emlrtDCI = { 750, 52, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 750, 22, "p.answer", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo h_emlrtDCI = { 750, 22, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 748, 78, "p.tType", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo i_emlrtDCI = { 748, 78, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtECInfo f_emlrtECI = { 2, 748, 20, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtBCInfo l_emlrtBCI = { -1, -1, 748, 46, "p.tType", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo j_emlrtDCI = { 748, 46, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 748, 20, "p.answer", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo k_emlrtDCI = { 748, 20, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 747, 79, "p.tType", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo l_emlrtDCI = { 747, 79, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtECInfo g_emlrtECI = { 2, 747, 21, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtBCInfo o_emlrtBCI = { -1, -1, 747, 47, "p.tType", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo m_emlrtDCI = { 747, 47, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 747, 21, "p.answer", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo n_emlrtDCI = { 747, 21, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 745, 24, "p.correct",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo o_emlrtDCI = { 745, 24, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 744, 23, "p.correct",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo p_emlrtDCI = { 744, 23, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 722, 45, "p.tType", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 722, 28, "p.answer", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 616, 32, "p.usePRC", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 615, 50, "p.famil_diff_thresh",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 610, 36, "p.usePRC", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 609, 54, "p.famil_diff_thresh",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 606, 54, "p.famil_diff_thresh",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo q_emlrtDCI = { 606, 54, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 601, 150, "p.famil_diff_thresh",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo r_emlrtDCI = { 601, 150, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 601, 93, "p.famil_diff_thresh",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 594, 50, "p.famil_diff_thresh",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 591, 50, "p.famil_diff_thresh",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo s_emlrtDCI = { 591, 50, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 589, 36, "p.usePRC",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 580, 86, "p.meanSelectivity_PRC_new",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 580, 50, "p.meanSelectivity_PRC_prev",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 579, 93, "judging.selectivity_prev",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 579, 82, "judging.selectivity_prev",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 578, 61, "p.usePRC",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 566, 35, "whichCaudal",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtECInfo h_emlrtECI = { 2, 560, 44, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtECInfo i_emlrtECI = { 2, 558, 51, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 558, 76, "judging.selectivity_prev",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtRTEInfo lc_emlrtRTEI = { 555, 13, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 547, 47, "p.meanSelectivity_PRC_new",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 547, 90, "judging.initial_selec",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 547, 80, "judging.initial_selec",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 543, 58, "p.usePRC",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtECInfo j_emlrtECI = { 2, 540, 50, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 540, 72, "judging.initial_selec",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtRTEInfo mc_emlrtRTEI = { 537, 13, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtECInfo k_emlrtECI = { -1, 530, 13, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 530, 28, "p.comparedFeat",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtRTEInfo nc_emlrtRTEI = { 522, 13, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtECInfo l_emlrtECI = { -1, 442, 17, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 442, 59, "weights", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 442, 35, "weights", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo t_emlrtDCI = { 442, 35, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 442, 25, "weights", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtECInfo m_emlrtECI = { 3, 438, 37, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtECInfo n_emlrtECI = { 3, 438, 53, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtECInfo o_emlrtECI = { 3, 438, 57, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtRTEInfo oc_emlrtRTEI = { 416, 21, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 396, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 395, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 394, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 393, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 391, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 390, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 389, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 388, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 387, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 386, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo gc_emlrtBCI = { -1, -1, 385, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo hc_emlrtBCI = { -1, -1, 384, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 382, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 381, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 380, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 379, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 377, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 376, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 375, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 374, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 372, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 371, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo sc_emlrtBCI = { -1, -1, 370, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo tc_emlrtBCI = { -1, -1, 369, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo uc_emlrtBCI = { -1, -1, 367, 29, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtRTEInfo pc_emlrtRTEI = { 398, 21, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtECInfo p_emlrtECI = { 2, 348, 33, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtECInfo q_emlrtECI = { -1, 342, 21, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtECInfo r_emlrtECI = { -1, 341, 21, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtECInfo s_emlrtECI = { -1, 340, 21, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtECInfo t_emlrtECI = { -1, 339, 21, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtBCInfo vc_emlrtBCI = { -1, -1, 342, 71, "p.gridMat",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo wc_emlrtBCI = { -1, -1, 341, 61, "p.gridMat",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo xc_emlrtBCI = { -1, -1, 340, 71, "p.gridMat",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo yc_emlrtBCI = { -1, -1, 339, 61, "p.gridMat",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtRTEInfo qc_emlrtRTEI = { 323, 17, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtECInfo u_emlrtECI = { -1, 287, 17, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtBCInfo ad_emlrtBCI = { -1, -1, 290, 75, "weights", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo bd_emlrtBCI = { -1, -1, 290, 51, "weights", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo u_emlrtDCI = { 290, 51, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo cd_emlrtBCI = { -1, -1, 290, 41, "weights", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo dd_emlrtBCI = { -1, -1, 287, 47, "inp_mat", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo v_emlrtDCI = { 287, 47, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo ed_emlrtBCI = { -1, -1, 287, 73, "lastFeatureToCheck",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo fd_emlrtBCI = { -1, -1, 287, 47, "firstFeatureToCheck",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtRTEInfo rc_emlrtRTEI = { 282, 13, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtBCInfo gd_emlrtBCI = { 1, 2, 278, 36, "p.numInputDims",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtRTEInfo sc_emlrtRTEI = { 276, 9, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtBCInfo hd_emlrtBCI = { -1, -1, 223, 31, "stimPair",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtECInfo v_emlrtECI = { -1, 209, 9, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtBCInfo id_emlrtBCI = { -1, -1, 209, 23, "p.sample_feat",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo jd_emlrtBCI = { -1, -1, 202, 33, "avail_feat",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo w_emlrtDCI = { 202, 33, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo kd_emlrtBCI = { -1, -1, 198, 34, "avail_feat",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo ld_emlrtBCI = { -1, -1, 172, 29, "avail_feat",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo x_emlrtDCI = { 172, 29, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo md_emlrtBCI = { -1, -1, 163, 21, "avail_feat",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo y_emlrtDCI = { 163, 21, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo nd_emlrtBCI = { -1, -1, 153, 25, "stimPair",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo ab_emlrtDCI = { 153, 25, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo od_emlrtBCI = { -1, -1, 103, 32, "stimuli", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo bb_emlrtDCI = { 103, 32, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo cb_emlrtDCI = { 86, 30, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo db_emlrtDCI = { 86, 30, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo eb_emlrtDCI = { 86, 21, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo fb_emlrtDCI = { 86, 21, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtBCInfo pd_emlrtBCI = { -1, -1, 84, 13, "p.tType", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtRTEInfo tc_emlrtRTEI = { 82, 1, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m"
};

static emlrtDCInfo gb_emlrtDCI = { 17, 80, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo hb_emlrtDCI = { 17, 80, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo ib_emlrtDCI = { 17, 52, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo jb_emlrtDCI = { 17, 52, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo kb_emlrtDCI = { 17, 39, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo lb_emlrtDCI = { 17, 39, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo mb_emlrtDCI = { 17, 31, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo nb_emlrtDCI = { 17, 31, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo ob_emlrtDCI = { 17, 23, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo pb_emlrtDCI = { 17, 23, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo qb_emlrtDCI = { 17, 15, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo rb_emlrtDCI = { 17, 15, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtRTEInfo uc_emlrtRTEI = { 239, 9, "find",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo vc_emlrtRTEI = { 60, 23, "reshape",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRTEInfo wc_emlrtRTEI = { 404, 15, "colon",
  "C:\\Program Files\\MATLAB\\R2015a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtDCInfo sb_emlrtDCI = { 41, 38, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo tb_emlrtDCI = { 41, 38, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo ub_emlrtDCI = { 41, 48, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo vb_emlrtDCI = { 41, 48, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo wb_emlrtDCI = { 42, 35, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo xb_emlrtDCI = { 42, 35, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo yb_emlrtDCI = { 42, 45, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo ac_emlrtDCI = { 42, 45, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo bc_emlrtDCI = { 43, 39, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo cc_emlrtDCI = { 43, 39, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo dc_emlrtDCI = { 43, 49, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo ec_emlrtDCI = { 43, 49, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo fc_emlrtDCI = { 44, 36, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo gc_emlrtDCI = { 44, 36, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo hc_emlrtDCI = { 44, 46, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo ic_emlrtDCI = { 44, 46, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo jc_emlrtDCI = { 45, 28, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo kc_emlrtDCI = { 45, 28, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo lc_emlrtDCI = { 45, 38, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo mc_emlrtDCI = { 45, 38, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo nc_emlrtDCI = { 46, 25, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo oc_emlrtDCI = { 46, 25, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo pc_emlrtDCI = { 46, 35, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo qc_emlrtDCI = { 46, 35, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo rc_emlrtDCI = { 49, 33, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo sc_emlrtDCI = { 49, 33, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo tc_emlrtDCI = { 49, 41, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo uc_emlrtDCI = { 49, 41, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo vc_emlrtDCI = { 50, 34, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo wc_emlrtDCI = { 50, 34, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo xc_emlrtDCI = { 50, 42, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo yc_emlrtDCI = { 50, 42, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo ad_emlrtDCI = { 51, 32, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo bd_emlrtDCI = { 51, 32, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo cd_emlrtDCI = { 51, 40, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo dd_emlrtDCI = { 51, 40, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo ed_emlrtDCI = { 52, 33, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo fd_emlrtDCI = { 52, 33, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo gd_emlrtDCI = { 52, 41, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo hd_emlrtDCI = { 52, 41, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo id_emlrtDCI = { 53, 32, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo jd_emlrtDCI = { 53, 32, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo kd_emlrtDCI = { 53, 40, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo ld_emlrtDCI = { 53, 40, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo md_emlrtDCI = { 54, 33, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo nd_emlrtDCI = { 54, 33, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo od_emlrtDCI = { 54, 41, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo pd_emlrtDCI = { 54, 41, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo qd_emlrtDCI = { 55, 31, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo rd_emlrtDCI = { 55, 31, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo sd_emlrtDCI = { 55, 39, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo td_emlrtDCI = { 55, 39, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo ud_emlrtDCI = { 56, 32, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo vd_emlrtDCI = { 56, 32, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo wd_emlrtDCI = { 56, 40, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo xd_emlrtDCI = { 56, 40, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo yd_emlrtDCI = { 65, 23, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo ae_emlrtDCI = { 65, 23, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo be_emlrtDCI = { 65, 33, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo ce_emlrtDCI = { 65, 33, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo de_emlrtDCI = { 68, 23, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo ee_emlrtDCI = { 68, 23, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo fe_emlrtDCI = { 71, 20, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo ge_emlrtDCI = { 71, 20, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo he_emlrtDCI = { 72, 20, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo ie_emlrtDCI = { 72, 20, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo je_emlrtDCI = { 75, 24, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo ke_emlrtDCI = { 75, 24, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo le_emlrtDCI = { 75, 35, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo me_emlrtDCI = { 75, 35, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo ne_emlrtDCI = { 125, 27, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo oe_emlrtDCI = { 125, 27, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo pe_emlrtDCI = { 125, 35, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo qe_emlrtDCI = { 125, 35, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo re_emlrtDCI = { 240, 29, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo se_emlrtDCI = { 240, 29, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo te_emlrtDCI = { 240, 37, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo ue_emlrtDCI = { 240, 37, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo ve_emlrtDCI = { 240, 45, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo we_emlrtDCI = { 240, 45, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo xe_emlrtDCI = { 240, 53, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo ye_emlrtDCI = { 240, 53, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo af_emlrtDCI = { 241, 30, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo bf_emlrtDCI = { 241, 30, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo cf_emlrtDCI = { 241, 38, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo df_emlrtDCI = { 241, 38, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo ef_emlrtDCI = { 241, 46, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo ff_emlrtDCI = { 241, 46, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo gf_emlrtDCI = { 241, 54, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo hf_emlrtDCI = { 241, 54, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo if_emlrtDCI = { 242, 23, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo jf_emlrtDCI = { 242, 23, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo kf_emlrtDCI = { 242, 35, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo lf_emlrtDCI = { 242, 35, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo mf_emlrtDCI = { 243, 31, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo nf_emlrtDCI = { 243, 31, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo of_emlrtDCI = { 243, 43, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo pf_emlrtDCI = { 243, 43, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo qf_emlrtDCI = { 245, 22, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo rf_emlrtDCI = { 245, 22, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo sf_emlrtDCI = { 245, 30, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo tf_emlrtDCI = { 245, 30, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo uf_emlrtDCI = { 252, 30, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo vf_emlrtDCI = { 252, 30, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo wf_emlrtDCI = { 252, 40, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo xf_emlrtDCI = { 252, 40, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo yf_emlrtDCI = { 253, 30, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo ag_emlrtDCI = { 253, 30, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo bg_emlrtDCI = { 253, 40, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo cg_emlrtDCI = { 253, 40, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo dg_emlrtDCI = { 521, 41, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo eg_emlrtDCI = { 521, 41, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo fg_emlrtDCI = { 360, 37, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo gg_emlrtDCI = { 360, 37, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo hg_emlrtDCI = { 360, 45, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo ig_emlrtDCI = { 360, 45, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo jg_emlrtDCI = { 366, 37, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo kg_emlrtDCI = { 366, 37, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtBCInfo qd_emlrtBCI = { 1, 2, 17, 52, "p.numInputDims",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo rd_emlrtBCI = { -1, -1, 17, 80, "p.numGrids",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo lg_emlrtDCI = { 62, 37, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo mg_emlrtDCI = { 62, 37, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo ng_emlrtDCI = { 62, 47, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo og_emlrtDCI = { 62, 47, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtBCInfo sd_emlrtBCI = { 1, 2, 62, 47, "p.maxFixations",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo td_emlrtBCI = { 1, 2, 85, 5, "tTypeCnt", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo pg_emlrtDCI = { 85, 5, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo ud_emlrtBCI = { 1, 2, 85, 23, "tTypeCnt", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo qg_emlrtDCI = { 85, 23, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo vd_emlrtBCI = { -1, -1, 103, 44, "p.stimOrder",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo wd_emlrtBCI = { -1, -1, 103, 60, "p.stimOrder",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo rg_emlrtDCI = { 155, 35, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo sg_emlrtDCI = { 155, 35, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtBCInfo xd_emlrtBCI = { -1, -1, 158, 13, "p.fixations",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo yd_emlrtBCI = { -1, -1, 721, 5, "p.answer", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo ae_emlrtBCI = { -1, -1, 722, 5, "p.correct",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo tg_emlrtDCI = { 161, 29, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo ug_emlrtDCI = { 161, 29, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtBCInfo be_emlrtBCI = { -1, -1, 163, 9, "sample_feat",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo ce_emlrtBCI = { -1, -1, 164, 9, "p.fixations",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo de_emlrtBCI = { -1, -1, 164, 30, "p.fixations",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo ee_emlrtBCI = { -1, -1, 169, 24, "sample_feat",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo fe_emlrtBCI = { -1, -1, 210, 35, "p.featsSampedByComparison",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo vg_emlrtDCI = { 210, 35, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo ge_emlrtBCI = { -1, -1, 210, 40, "p.featsSampedByComparison",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo he_emlrtBCI = { -1, -1, 210, 47, "p.featsSampedByComparison",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo wg_emlrtDCI = { 221, 26, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo xg_emlrtDCI = { 221, 26, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtBCInfo ie_emlrtBCI = { -1, -1, 222, 9, "nonInputs",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo je_emlrtBCI = { 1, 2, 465, 27, "p.outsideRatio",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo yg_emlrtDCI = { 465, 27, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo ke_emlrtBCI = { -1, -1, 466, 13, "p.fixations",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo le_emlrtBCI = { -1, -1, 466, 34, "p.fixations",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo me_emlrtBCI = { -1, -1, 494, 22, "p.usePRC",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo ne_emlrtBCI = { -1, -1, 494, 27, "p.usePRC",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo oe_emlrtBCI = { -1, -1, 614, 33, "p.familDiff_caudal",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo pe_emlrtBCI = { -1, -1, 601, 40, "p.familDiff_caudal",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo qe_emlrtBCI = { -1, -1, 601, 100, "p.familDiff_PRC",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo re_emlrtBCI = { -1, -1, 608, 37, "p.familDiff_caudal",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo se_emlrtBCI = { -1, -1, 605, 37, "p.familDiff_PRC",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo te_emlrtBCI = { -1, -1, 593, 33, "p.familDiff_caudal",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo ue_emlrtBCI = { -1, -1, 590, 33, "p.familDiff_PRC",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo ve_emlrtBCI = { -1, -1, 626, 13, "p.familDiff_withNoise",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo we_emlrtBCI = { -1, -1, 630, 20, "p.familDiff_withNoise",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo xe_emlrtBCI = { -1, -1, 653, 13, "p.famil_difference",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo ye_emlrtBCI = { -1, -1, 653, 41, "p.familDiff_withNoise",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo af_emlrtBCI = { -1, -1, 687, 18, "p.usePRC",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo bf_emlrtBCI = { -1, -1, 687, 23, "p.usePRC",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo cf_emlrtBCI = { -1, -1, 695, 39, "p.fixations",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo df_emlrtBCI = { -1, -1, 579, 21, "p.meanSelectivity_PRC_prev",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo ef_emlrtBCI = { -1, -1, 580, 21, "p.familDiff_PRC",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo ff_emlrtBCI = { -1, -1, 573, 21,
  "p.meanSelectivity_caudal_prev", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo gf_emlrtBCI = { -1, -1, 573, 60,
  "meanSelectivity_caudal_prev", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo hf_emlrtBCI = { -1, -1, 574, 21,
  "p.meanSelectivity_caudal_new", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo if_emlrtBCI = { -1, -1, 574, 59, "meanSelectivity_caudal_new",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo jf_emlrtBCI = { -1, -1, 576, 21, "p.familDiff_caudal",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo kf_emlrtBCI = { -1, -1, 576, 49, "familDiff_caudal",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo lf_emlrtBCI = { -1, -1, 524, 21, "featuresToCompare",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo mf_emlrtBCI = { 1, 2, 278, 58, "p.nGrids", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo nf_emlrtBCI = { 1, 2, 278, 74, "p.numInputDims",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo ah_emlrtDCI = { 284, 33, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo bh_emlrtDCI = { 284, 33, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo ch_emlrtDCI = { 284, 41, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo dh_emlrtDCI = { 284, 41, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtDCInfo eh_emlrtDCI = { 284, 49, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo fh_emlrtDCI = { 284, 49, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtBCInfo of_emlrtBCI = { 1, 2, 310, 42, "p.fixn_ratio_lowHigh",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo gh_emlrtDCI = { 310, 42, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo pf_emlrtBCI = { -1, -1, 444, 23, "selec", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo qf_emlrtBCI = { -1, -1, 444, 29, "selec", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo rf_emlrtBCI = { -1, -1, 427, 39, "initial_selec",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo sf_emlrtBCI = { -1, -1, 427, 45, "initial_selec",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo tf_emlrtBCI = { -1, -1, 417, 52, "acts", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo hh_emlrtDCI = { 417, 52, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo uf_emlrtBCI = { -1, -1, 417, 60, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo vf_emlrtBCI = { -1, -1, 417, 69, "acts", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo ih_emlrtDCI = { 417, 69, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtBCInfo wf_emlrtBCI = { -1, -1, 417, 77, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo xf_emlrtBCI = { -1, -1, 399, 36, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo yf_emlrtBCI = { -1, -1, 401, 40, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo ag_emlrtBCI = { -1, -1, 402, 37, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo bg_emlrtBCI = { -1, -1, 402, 59, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo cg_emlrtBCI = { -1, -1, 400, 37, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo dg_emlrtBCI = { -1, -1, 400, 59, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo eg_emlrtBCI = { -1, -1, 404, 36, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo fg_emlrtBCI = { -1, -1, 406, 40, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo gg_emlrtBCI = { -1, -1, 407, 37, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo hg_emlrtBCI = { -1, -1, 407, 59, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo ig_emlrtBCI = { -1, -1, 405, 37, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo jg_emlrtBCI = { -1, -1, 405, 59, "winners", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo kg_emlrtBCI = { -1, -1, 312, 25, "p.fixations",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo lg_emlrtBCI = { -1, -1, 312, 46, "p.fixations",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo mg_emlrtBCI = { -1, -1, 224, 9, "stimulus", "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo ng_emlrtBCI = { -1, -1, 200, 21, "p.fixations",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo og_emlrtBCI = { -1, -1, 200, 42, "p.fixations",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo pg_emlrtBCI = { -1, -1, 201, 34, "avail_feat",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtBCInfo qg_emlrtBCI = { -1, -1, 202, 21, "sample_feat",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

static emlrtDCInfo jh_emlrtDCI = { 170, 37, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  1 };

static emlrtDCInfo kh_emlrtDCI = { 170, 37, "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  4 };

static emlrtBCInfo rg_emlrtBCI = { -1, -1, 172, 17, "sample_feat",
  "visDiscrimModel",
  "C:\\Users\\lab\\Documents\\MATLAB\\psadilTesting\\simulations\\4caudalGrids\\simplexGO_cCode\\visDiscrimModel.m",
  0 };

/* Function Definitions */
void visDiscrimModel(const emlrtStack *sp, struct0_T *p)
{
  emxArray_real_T *weights;
  real_T y;
  int32_T inputs;
  int32_T b_inputs;
  int32_T min_col_dist_mat;
  int32_T b_min_col_dist_mat;
  real_T b_p[6];
  int32_T ixstart;
  real_T mtmp;
  int32_T ix;
  boolean_T exitg19;
  real_T d0;
  real_T b_y;
  real_T d1;
  int32_T nx;
  boolean_T exitg18;
  real_T c_y;
  real_T d2;
  boolean_T exitg17;
  real_T d_y;
  real_T d3;
  boolean_T exitg16;
  real_T e_y;
  real_T d4;
  boolean_T exitg15;
  real_T f_y;
  real_T d5;
  boolean_T exitg14;
  real_T g_y;
  real_T d6;
  real_T h_y;
  real_T d7;
  real_T i_y;
  real_T d8;
  real_T j_y;
  real_T d9;
  real_T k_y;
  real_T d10;
  real_T l_y;
  real_T d11;
  real_T m_y;
  real_T d12;
  real_T n_y;
  real_T d13;
  real_T o_y;
  real_T d14;
  int32_T unnamed_idx_1;
  int32_T c_inputs;
  int32_T d_inputs;
  int32_T unnamed_idx_2;
  int32_T e_inputs;
  real_T p_y;
  real_T d15;
  boolean_T exitg13;
  real_T q_y;
  real_T d16;
  real_T r_y;
  real_T s_y;
  real_T t_y;
  real_T d17;
  real_T tTypeCnt[2];
  int32_T trial;
  emxArray_real_T *stimuli;
  emxArray_real_T *stimPair;
  emxArray_real_T *prevStimSelec;
  emxArray_real_T *features_sampled_prev;
  emxArray_real_T *sample_feat;
  emxArray_real_T *avail_feat;
  emxArray_real_T *features_sampled;
  emxArray_real_T *stimulus;
  emxArray_real_T *activations;
  emxArray_real_T *initial_acts;
  emxArray_real_T *selec;
  emxArray_real_T *initial_selec;
  emxArray_real_T *row_dist_mat;
  emxArray_real_T *col_dist_mat;
  emxArray_real_T *input_mat;
  emxArray_real_T *c_min_col_dist_mat;
  emxArray_real_T *f;
  emxArray_real_T *winners;
  emxArray_real_T *featuresToCompare;
  emxArray_real_T *meanSelectivity_caudal_prev;
  emxArray_real_T *familDiff_caudal;
  emxArray_real_T *dist_mat;
  emxArray_real_T *f_inputs;
  emxArray_real_T *whichCaudal;
  emxArray_real_T *weights_child;
  emxArray_int32_T *r0;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
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
  emxArray_real_T *c_sample_feat;
  emxArray_real_T *d_sample_feat;
  emxArray_real_T *b_stimuli;
  emxArray_real_T *m_p;
  emxArray_real_T *n_p;
  emxArray_real_T *o_p;
  emxArray_real_T *p_p;
  emxArray_real_T *q_p;
  emxArray_real_T *b_meanSelectivity_caudal_prev;
  emxArray_real_T *b_input_mat;
  emxArray_real_T *r5;
  emxArray_real_T *r6;
  emxArray_real_T *r_p;
  emxArray_real_T *g_inputs;
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
  emxArray_real_T *b_prevStimSelec;
  emxArray_real_T *b_initial_selec;
  emxArray_real_T *c_stimuli;
  emxArray_real_T *c_input_mat;
  emxArray_real_T *d_input_mat;
  emxArray_real_T *b_avail_feat;
  emxArray_real_T *c_avail_feat;
  int32_T exitg2;
  int32_T h_inputs;
  int32_T d_min_col_dist_mat;
  int32_T loop_ub;
  int32_T idx;
  int32_T i15;
  int32_T maxdimlen;
  int32_T b_idx;
  int32_T b_maxdimlen;
  real_T d18;
  real_T d19;
  real_T d20;
  real_T stim;
  int32_T first_stim_sampled;
  int32_T stopSampling;
  uint32_T comparison;
  int32_T keepSampling;
  int32_T exitg1;
  int32_T b_trial;
  int32_T c_trial;
  int32_T d_trial;
  int32_T exitg12;
  int32_T c_idx;
  int32_T stick;
  real_T stick_switch;
  int32_T e_trial;
  int32_T f_trial;
  int32_T e_min_col_dist_mat;
  int32_T iv22[2];
  int32_T i_inputs;
  int32_T g_trial;
  int32_T i16;
  boolean_T overflow;
  boolean_T exitg11;
  boolean_T guard4 = false;
  int32_T b_nx;
  real_T outsz[3];
  int32_T sz[3];
  real_T familDiffs_temp_idx_0;
  int32_T k;
  real_T w_p[3];
  real_T d21;
  real_T d22;
  real_T d23;
  real_T d24;
  real_T d25;
  real_T d26;
  real_T d27;
  real_T d28;
  real_T d29;
  real_T d30;
  int32_T n;
  boolean_T exitg10;
  real_T d31;
  real_T d32;
  boolean_T exitg9;
  real_T d33;
  real_T d34;
  real_T d35;
  real_T d36;
  real_T d37;
  real_T d38;
  real_T d39;
  real_T d40;
  real_T selectivity;
  int32_T usePRC;
  int32_T layer;
  int32_T b_layer;
  int32_T c_layer;
  real_T b;
  real_T anew;
  real_T apnd;
  real_T ndbl;
  real_T cdiff;
  real_T absb;
  real_T kd;
  int32_T grid;
  real_T d41;
  real_T d42;
  real_T d43;
  int32_T f_min_col_dist_mat;
  int32_T d_idx;
  int32_T c_ii[3];
  int32_T b_loop_ub;
  int32_T weights_idx_1;
  int32_T weights_idx_2;
  int32_T weights_idx_3;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  real_T nEncodCycles;
  int32_T exitg8;
  int32_T j_inputs;
  int32_T h_trial;
  int32_T i_trial;
  real_T win_col;
  real_T win_row;
  int32_T cycle;
  int32_T d_ii[2];
  int32_T e_ii[2];
  int32_T f_ii[2];
  int32_T g_ii[2];
  int32_T vstride;
  boolean_T b11;
  int32_T j;
  int32_T ixstop;
  int32_T b_ix;
  boolean_T exitg7;
  boolean_T b12;
  boolean_T exitg6;
  int32_T c_x[2];
  int32_T b_featuresToCompare[2];
  real_T dv0[3];
  real_T d44;
  real_T d45;
  real_T d46;
  int32_T c_maxdimlen;
  int32_T d_maxdimlen;
  int32_T e_maxdimlen;
  int32_T f_maxdimlen;
  int32_T g_maxdimlen;
  int32_T h_maxdimlen;
  int32_T i_maxdimlen;
  int32_T j_maxdimlen;
  int32_T k_maxdimlen;
  int32_T l_maxdimlen;
  int32_T m_maxdimlen;
  int32_T n_maxdimlen;
  real_T act_peak;
  int32_T o_maxdimlen;
  int32_T p_maxdimlen;
  int32_T g_min_col_dist_mat;
  int32_T i17;
  real_T act_total;
  int32_T d_layer;
  int32_T b_grid;
  int32_T iv23[3];
  int32_T e_input_mat[3];
  int32_T b_weights_child[3];
  int32_T c_weights_child;
  int32_T d_weights_child;
  int32_T iv24[4];
  int32_T c_weights;
  int32_T d_weights;
  int32_T e_weights;
  int32_T unnamed_idx_3;
  int32_T iv25[3];
  int32_T e_layer;
  int32_T c_grid;
  real_T nothingRatio;
  int32_T k_inputs;
  int32_T j_trial;
  int32_T k_trial;
  boolean_T guard1 = false;
  boolean_T b_guard2 = false;
  int32_T h_min_col_dist_mat;
  int32_T l_trial;
  int32_T q_maxdimlen;
  int32_T iv26[2];
  int32_T layer_new;
  int32_T layer_prev;
  boolean_T exitg5;
  boolean_T exitg4;
  boolean_T b_guard3 = false;
  int32_T m_trial;
  int32_T e_idx;
  int32_T n_trial;
  int32_T f_idx;
  int32_T o_trial;
  int32_T g_idx;
  int32_T p_trial;
  int32_T q_trial;
  int32_T r_trial;
  real_T familDiff;
  int32_T s_trial;
  int32_T t_trial;
  int32_T u_trial;
  real_T familDiffs_temp_idx_1;
  boolean_T exitg3;
  int32_T v_trial;
  int32_T w_trial;
  int32_T x_trial;
  int32_T y_trial;
  int32_T ab_trial;
  int32_T bb_trial;
  int32_T cb_trial;
  int32_T i_min_col_dist_mat;
  int32_T db_trial;
  boolean_T b_guard1 = false;
  int32_T eb_trial;
  int32_T fb_trial;
  int32_T gb_trial;
  real_T A;
  int32_T j_min_col_dist_mat;
  int32_T iv27[2];
  real_T B;
  int32_T iv28[2];
  real_T b_A;
  real_T b_B;
  int32_T k_min_col_dist_mat;
  int32_T i18;
  int32_T iv29[2];
  int32_T i19;
  real_T c_A;
  real_T c_B;
  int32_T l_min_col_dist_mat;
  int32_T i20;
  int32_T iv30[2];
  int32_T i21;
  real_T d_A;
  real_T d_B;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  d_emxInit_real_T(sp, &weights, 6, &s_emlrtRTEI, true);

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
  y = p->layer;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&rb_emlrtDCI, sp);
  }

  emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&qb_emlrtDCI, sp);
  y = p->nRows;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&pb_emlrtDCI, sp);
  }

  emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&ob_emlrtDCI, sp);
  y = p->nRows;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&nb_emlrtDCI, sp);
  }

  emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&mb_emlrtDCI, sp);
  y = p->components;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&lb_emlrtDCI, sp);
  }

  emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&kb_emlrtDCI, sp);
  y = p->numLayers;
  if (y == (int32_T)muDoubleScalarFloor(y)) {
    inputs = (int32_T)y;
  } else {
    inputs = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&ib_emlrtDCI, sp);
  }

  if ((inputs >= 1) && (inputs < 2)) {
    b_inputs = inputs;
  } else {
    b_inputs = emlrtDynamicBoundsCheckR2012b(inputs, 1, 2, (emlrtBCInfo *)
      &qd_emlrtBCI, sp);
  }

  y = p->numInputDims[b_inputs - 1];
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&jb_emlrtDCI, sp);
  }

  emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&ib_emlrtDCI, sp);
  inputs = p->numGrids->size[1];
  y = p->layer;
  if (y == (int32_T)muDoubleScalarFloor(y)) {
    min_col_dist_mat = (int32_T)y;
  } else {
    min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)
      &gb_emlrtDCI, sp);
  }

  if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
    b_min_col_dist_mat = min_col_dist_mat;
  } else {
    b_min_col_dist_mat = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1,
      inputs, (emlrtBCInfo *)&rd_emlrtBCI, sp);
  }

  y = p->numGrids->data[b_min_col_dist_mat - 1];
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&hb_emlrtDCI, sp);
  }

  emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&gb_emlrtDCI, sp);
  b_p[0] = (int32_T)p->layer;
  b_p[1] = (int32_T)p->nRows;
  b_p[2] = (int32_T)p->nRows;
  b_p[3] = (int32_T)p->components;
  b_p[4] = (int32_T)p->numInputDims[(int32_T)p->numLayers - 1];
  b_p[5] = (int32_T)p->numGrids->data[(int32_T)p->layer - 1];
  st.site = &sb_emlrtRSI;
  repmat(&st, b_p, weights);

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
    exitg19 = false;
    while ((!exitg19) && (ix < 3)) {
      ixstart = 2;
      if (!muDoubleScalarIsNaN(p->nGrids[1])) {
        mtmp = p->nGrids[1];
        exitg19 = true;
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
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&tb_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->meanSelectivity_caudal_new->size[0] = (int32_T)y;
  } else {
    p->meanSelectivity_caudal_new->size[0] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&sb_emlrtDCI, sp);
  }

  if (mtmp >= 0.0) {
    y = mtmp;
  } else {
    y = emlrtNonNegativeCheckR2012b(mtmp, (emlrtDCInfo *)&vb_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->meanSelectivity_caudal_new->size[1] = (int32_T)y;
  } else {
    p->meanSelectivity_caudal_new->size[1] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&ub_emlrtDCI, sp);
  }

  emxEnsureCapacity(sp, (emxArray__common *)p->meanSelectivity_caudal_new,
                    inputs, (int32_T)sizeof(real_T), &emlrtRTEI);
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&tb_emlrtDCI, sp);
  }

  if (mtmp >= 0.0) {
    d0 = mtmp;
  } else {
    d0 = emlrtNonNegativeCheckR2012b(mtmp, (emlrtDCInfo *)&vb_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    b_y = y;
  } else {
    b_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&sb_emlrtDCI, sp);
  }

  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
    d1 = d0;
  } else {
    d1 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&ub_emlrtDCI, sp);
  }

  nx = (int32_T)b_y * (int32_T)d1;
  for (inputs = 0; inputs < nx; inputs++) {
    p->meanSelectivity_caudal_new->data[inputs] = 0.0;
  }

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

  inputs = p->meanSelectivity_PRC_new->size[0] * p->
    meanSelectivity_PRC_new->size[1];
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&xb_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->meanSelectivity_PRC_new->size[0] = (int32_T)y;
  } else {
    p->meanSelectivity_PRC_new->size[0] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&wb_emlrtDCI, sp);
  }

  if (mtmp >= 0.0) {
    y = mtmp;
  } else {
    y = emlrtNonNegativeCheckR2012b(mtmp, (emlrtDCInfo *)&ac_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->meanSelectivity_PRC_new->size[1] = (int32_T)y;
  } else {
    p->meanSelectivity_PRC_new->size[1] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&yb_emlrtDCI, sp);
  }

  emxEnsureCapacity(sp, (emxArray__common *)p->meanSelectivity_PRC_new, inputs,
                    (int32_T)sizeof(real_T), &emlrtRTEI);
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&xb_emlrtDCI, sp);
  }

  if (mtmp >= 0.0) {
    d0 = mtmp;
  } else {
    d0 = emlrtNonNegativeCheckR2012b(mtmp, (emlrtDCInfo *)&ac_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    c_y = y;
  } else {
    c_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&wb_emlrtDCI, sp);
  }

  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
    d2 = d0;
  } else {
    d2 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&yb_emlrtDCI, sp);
  }

  nx = (int32_T)c_y * (int32_T)d2;
  for (inputs = 0; inputs < nx; inputs++) {
    p->meanSelectivity_PRC_new->data[inputs] = 0.0;
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

  inputs = p->meanSelectivity_caudal_prev->size[0] *
    p->meanSelectivity_caudal_prev->size[1];
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&cc_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->meanSelectivity_caudal_prev->size[0] = (int32_T)y;
  } else {
    p->meanSelectivity_caudal_prev->size[0] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&bc_emlrtDCI, sp);
  }

  if (mtmp >= 0.0) {
    y = mtmp;
  } else {
    y = emlrtNonNegativeCheckR2012b(mtmp, (emlrtDCInfo *)&ec_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->meanSelectivity_caudal_prev->size[1] = (int32_T)y;
  } else {
    p->meanSelectivity_caudal_prev->size[1] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&dc_emlrtDCI, sp);
  }

  emxEnsureCapacity(sp, (emxArray__common *)p->meanSelectivity_caudal_prev,
                    inputs, (int32_T)sizeof(real_T), &emlrtRTEI);
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&cc_emlrtDCI, sp);
  }

  if (mtmp >= 0.0) {
    d0 = mtmp;
  } else {
    d0 = emlrtNonNegativeCheckR2012b(mtmp, (emlrtDCInfo *)&ec_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    d_y = y;
  } else {
    d_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&bc_emlrtDCI, sp);
  }

  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
    d3 = d0;
  } else {
    d3 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&dc_emlrtDCI, sp);
  }

  nx = (int32_T)d_y * (int32_T)d3;
  for (inputs = 0; inputs < nx; inputs++) {
    p->meanSelectivity_caudal_prev->data[inputs] = 0.0;
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

  inputs = p->meanSelectivity_PRC_prev->size[0] * p->
    meanSelectivity_PRC_prev->size[1];
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&gc_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->meanSelectivity_PRC_prev->size[0] = (int32_T)y;
  } else {
    p->meanSelectivity_PRC_prev->size[0] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&fc_emlrtDCI, sp);
  }

  if (mtmp >= 0.0) {
    y = mtmp;
  } else {
    y = emlrtNonNegativeCheckR2012b(mtmp, (emlrtDCInfo *)&ic_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->meanSelectivity_PRC_prev->size[1] = (int32_T)y;
  } else {
    p->meanSelectivity_PRC_prev->size[1] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&hc_emlrtDCI, sp);
  }

  emxEnsureCapacity(sp, (emxArray__common *)p->meanSelectivity_PRC_prev, inputs,
                    (int32_T)sizeof(real_T), &emlrtRTEI);
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&gc_emlrtDCI, sp);
  }

  if (mtmp >= 0.0) {
    d0 = mtmp;
  } else {
    d0 = emlrtNonNegativeCheckR2012b(mtmp, (emlrtDCInfo *)&ic_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    e_y = y;
  } else {
    e_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&fc_emlrtDCI, sp);
  }

  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
    d4 = d0;
  } else {
    d4 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&hc_emlrtDCI, sp);
  }

  nx = (int32_T)e_y * (int32_T)d4;
  for (inputs = 0; inputs < nx; inputs++) {
    p->meanSelectivity_PRC_prev->data[inputs] = 0.0;
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

  inputs = p->familDiff_caudal->size[0] * p->familDiff_caudal->size[1];
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&kc_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->familDiff_caudal->size[0] = (int32_T)y;
  } else {
    p->familDiff_caudal->size[0] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&jc_emlrtDCI, sp);
  }

  if (mtmp >= 0.0) {
    y = mtmp;
  } else {
    y = emlrtNonNegativeCheckR2012b(mtmp, (emlrtDCInfo *)&mc_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->familDiff_caudal->size[1] = (int32_T)y;
  } else {
    p->familDiff_caudal->size[1] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&lc_emlrtDCI, sp);
  }

  emxEnsureCapacity(sp, (emxArray__common *)p->familDiff_caudal, inputs,
                    (int32_T)sizeof(real_T), &emlrtRTEI);
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&kc_emlrtDCI, sp);
  }

  if (mtmp >= 0.0) {
    d0 = mtmp;
  } else {
    d0 = emlrtNonNegativeCheckR2012b(mtmp, (emlrtDCInfo *)&mc_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    f_y = y;
  } else {
    f_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&jc_emlrtDCI, sp);
  }

  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
    d5 = d0;
  } else {
    d5 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&lc_emlrtDCI, sp);
  }

  nx = (int32_T)f_y * (int32_T)d5;
  for (inputs = 0; inputs < nx; inputs++) {
    p->familDiff_caudal->data[inputs] = 0.0;
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

  inputs = p->familDiff_PRC->size[0] * p->familDiff_PRC->size[1];
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&oc_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->familDiff_PRC->size[0] = (int32_T)y;
  } else {
    p->familDiff_PRC->size[0] = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo
      *)&nc_emlrtDCI, sp);
  }

  if (mtmp >= 0.0) {
    y = mtmp;
  } else {
    y = emlrtNonNegativeCheckR2012b(mtmp, (emlrtDCInfo *)&qc_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->familDiff_PRC->size[1] = (int32_T)y;
  } else {
    p->familDiff_PRC->size[1] = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo
      *)&pc_emlrtDCI, sp);
  }

  emxEnsureCapacity(sp, (emxArray__common *)p->familDiff_PRC, inputs, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&oc_emlrtDCI, sp);
  }

  if (mtmp >= 0.0) {
    d0 = mtmp;
  } else {
    d0 = emlrtNonNegativeCheckR2012b(mtmp, (emlrtDCInfo *)&qc_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    g_y = y;
  } else {
    g_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&nc_emlrtDCI, sp);
  }

  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
    d6 = d0;
  } else {
    d6 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&pc_emlrtDCI, sp);
  }

  nx = (int32_T)g_y * (int32_T)d6;
  for (inputs = 0; inputs < nx; inputs++) {
    p->familDiff_PRC->data[inputs] = 0.0;
  }

  inputs = p->prevStimInit_act_peak->size[0] * p->prevStimInit_act_peak->size[1];
  y = p->layer;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&sc_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->prevStimInit_act_peak->size[0] = (int32_T)y;
  } else {
    p->prevStimInit_act_peak->size[0] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&rc_emlrtDCI, sp);
  }

  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&uc_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->prevStimInit_act_peak->size[1] = (int32_T)y;
  } else {
    p->prevStimInit_act_peak->size[1] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&tc_emlrtDCI, sp);
  }

  emxEnsureCapacity(sp, (emxArray__common *)p->prevStimInit_act_peak, inputs,
                    (int32_T)sizeof(real_T), &emlrtRTEI);
  y = p->layer;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&sc_emlrtDCI, sp);
  }

  d0 = p->nTrials;
  if (d0 >= 0.0) {
  } else {
    d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&uc_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    h_y = y;
  } else {
    h_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&rc_emlrtDCI, sp);
  }

  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
    d7 = d0;
  } else {
    d7 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&tc_emlrtDCI, sp);
  }

  nx = (int32_T)h_y * (int32_T)d7;
  for (inputs = 0; inputs < nx; inputs++) {
    p->prevStimInit_act_peak->data[inputs] = 0.0;
  }

  inputs = p->prevStimInit_act_total->size[0] * p->prevStimInit_act_total->size
    [1];
  y = p->layer;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&wc_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->prevStimInit_act_total->size[0] = (int32_T)y;
  } else {
    p->prevStimInit_act_total->size[0] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&vc_emlrtDCI, sp);
  }

  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&yc_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->prevStimInit_act_total->size[1] = (int32_T)y;
  } else {
    p->prevStimInit_act_total->size[1] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&xc_emlrtDCI, sp);
  }

  emxEnsureCapacity(sp, (emxArray__common *)p->prevStimInit_act_total, inputs,
                    (int32_T)sizeof(real_T), &emlrtRTEI);
  y = p->layer;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&wc_emlrtDCI, sp);
  }

  d0 = p->nTrials;
  if (d0 >= 0.0) {
  } else {
    d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&yc_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    i_y = y;
  } else {
    i_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&vc_emlrtDCI, sp);
  }

  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
    d8 = d0;
  } else {
    d8 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&xc_emlrtDCI, sp);
  }

  nx = (int32_T)i_y * (int32_T)d8;
  for (inputs = 0; inputs < nx; inputs++) {
    p->prevStimInit_act_total->data[inputs] = 0.0;
  }

  inputs = p->prevStimFin_act_peak->size[0] * p->prevStimFin_act_peak->size[1];
  y = p->layer;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&bd_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->prevStimFin_act_peak->size[0] = (int32_T)y;
  } else {
    p->prevStimFin_act_peak->size[0] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&ad_emlrtDCI, sp);
  }

  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&dd_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->prevStimFin_act_peak->size[1] = (int32_T)y;
  } else {
    p->prevStimFin_act_peak->size[1] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&cd_emlrtDCI, sp);
  }

  emxEnsureCapacity(sp, (emxArray__common *)p->prevStimFin_act_peak, inputs,
                    (int32_T)sizeof(real_T), &emlrtRTEI);
  y = p->layer;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&bd_emlrtDCI, sp);
  }

  d0 = p->nTrials;
  if (d0 >= 0.0) {
  } else {
    d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&dd_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    j_y = y;
  } else {
    j_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&ad_emlrtDCI, sp);
  }

  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
    d9 = d0;
  } else {
    d9 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&cd_emlrtDCI, sp);
  }

  nx = (int32_T)j_y * (int32_T)d9;
  for (inputs = 0; inputs < nx; inputs++) {
    p->prevStimFin_act_peak->data[inputs] = 0.0;
  }

  inputs = p->prevStimFin_act_total->size[0] * p->prevStimFin_act_total->size[1];
  y = p->layer;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&fd_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->prevStimFin_act_total->size[0] = (int32_T)y;
  } else {
    p->prevStimFin_act_total->size[0] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&ed_emlrtDCI, sp);
  }

  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&hd_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->prevStimFin_act_total->size[1] = (int32_T)y;
  } else {
    p->prevStimFin_act_total->size[1] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&gd_emlrtDCI, sp);
  }

  emxEnsureCapacity(sp, (emxArray__common *)p->prevStimFin_act_total, inputs,
                    (int32_T)sizeof(real_T), &emlrtRTEI);
  y = p->layer;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&fd_emlrtDCI, sp);
  }

  d0 = p->nTrials;
  if (d0 >= 0.0) {
  } else {
    d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&hd_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    k_y = y;
  } else {
    k_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&ed_emlrtDCI, sp);
  }

  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
    d10 = d0;
  } else {
    d10 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&gd_emlrtDCI, sp);
  }

  nx = (int32_T)k_y * (int32_T)d10;
  for (inputs = 0; inputs < nx; inputs++) {
    p->prevStimFin_act_total->data[inputs] = 0.0;
  }

  inputs = p->newStimInit_act_peak->size[0] * p->newStimInit_act_peak->size[1];
  y = p->layer;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&jd_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->newStimInit_act_peak->size[0] = (int32_T)y;
  } else {
    p->newStimInit_act_peak->size[0] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&id_emlrtDCI, sp);
  }

  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&ld_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->newStimInit_act_peak->size[1] = (int32_T)y;
  } else {
    p->newStimInit_act_peak->size[1] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&kd_emlrtDCI, sp);
  }

  emxEnsureCapacity(sp, (emxArray__common *)p->newStimInit_act_peak, inputs,
                    (int32_T)sizeof(real_T), &emlrtRTEI);
  y = p->layer;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&jd_emlrtDCI, sp);
  }

  d0 = p->nTrials;
  if (d0 >= 0.0) {
  } else {
    d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&ld_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    l_y = y;
  } else {
    l_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&id_emlrtDCI, sp);
  }

  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
    d11 = d0;
  } else {
    d11 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&kd_emlrtDCI, sp);
  }

  nx = (int32_T)l_y * (int32_T)d11;
  for (inputs = 0; inputs < nx; inputs++) {
    p->newStimInit_act_peak->data[inputs] = 0.0;
  }

  inputs = p->newStimInit_act_total->size[0] * p->newStimInit_act_total->size[1];
  y = p->layer;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&nd_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->newStimInit_act_total->size[0] = (int32_T)y;
  } else {
    p->newStimInit_act_total->size[0] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&md_emlrtDCI, sp);
  }

  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&pd_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->newStimInit_act_total->size[1] = (int32_T)y;
  } else {
    p->newStimInit_act_total->size[1] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&od_emlrtDCI, sp);
  }

  emxEnsureCapacity(sp, (emxArray__common *)p->newStimInit_act_total, inputs,
                    (int32_T)sizeof(real_T), &emlrtRTEI);
  y = p->layer;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&nd_emlrtDCI, sp);
  }

  d0 = p->nTrials;
  if (d0 >= 0.0) {
  } else {
    d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&pd_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    m_y = y;
  } else {
    m_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&md_emlrtDCI, sp);
  }

  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
    d12 = d0;
  } else {
    d12 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&od_emlrtDCI, sp);
  }

  nx = (int32_T)m_y * (int32_T)d12;
  for (inputs = 0; inputs < nx; inputs++) {
    p->newStimInit_act_total->data[inputs] = 0.0;
  }

  inputs = p->newStimFin_act_peak->size[0] * p->newStimFin_act_peak->size[1];
  y = p->layer;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&rd_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->newStimFin_act_peak->size[0] = (int32_T)y;
  } else {
    p->newStimFin_act_peak->size[0] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&qd_emlrtDCI, sp);
  }

  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&td_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->newStimFin_act_peak->size[1] = (int32_T)y;
  } else {
    p->newStimFin_act_peak->size[1] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&sd_emlrtDCI, sp);
  }

  emxEnsureCapacity(sp, (emxArray__common *)p->newStimFin_act_peak, inputs,
                    (int32_T)sizeof(real_T), &emlrtRTEI);
  y = p->layer;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&rd_emlrtDCI, sp);
  }

  d0 = p->nTrials;
  if (d0 >= 0.0) {
  } else {
    d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&td_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    n_y = y;
  } else {
    n_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&qd_emlrtDCI, sp);
  }

  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
    d13 = d0;
  } else {
    d13 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&sd_emlrtDCI, sp);
  }

  nx = (int32_T)n_y * (int32_T)d13;
  for (inputs = 0; inputs < nx; inputs++) {
    p->newStimFin_act_peak->data[inputs] = 0.0;
  }

  inputs = p->newStimFin_act_total->size[0] * p->newStimFin_act_total->size[1];
  y = p->layer;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&vd_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->newStimFin_act_total->size[0] = (int32_T)y;
  } else {
    p->newStimFin_act_total->size[0] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&ud_emlrtDCI, sp);
  }

  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&xd_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->newStimFin_act_total->size[1] = (int32_T)y;
  } else {
    p->newStimFin_act_total->size[1] = (int32_T)emlrtIntegerCheckR2012b(y,
      (emlrtDCInfo *)&wd_emlrtDCI, sp);
  }

  emxEnsureCapacity(sp, (emxArray__common *)p->newStimFin_act_total, inputs,
                    (int32_T)sizeof(real_T), &emlrtRTEI);
  y = p->layer;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&vd_emlrtDCI, sp);
  }

  d0 = p->nTrials;
  if (d0 >= 0.0) {
  } else {
    d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&xd_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    o_y = y;
  } else {
    o_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&ud_emlrtDCI, sp);
  }

  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
    d14 = d0;
  } else {
    d14 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&wd_emlrtDCI, sp);
  }

  nx = (int32_T)o_y * (int32_T)d14;
  for (inputs = 0; inputs < nx; inputs++) {
    p->newStimFin_act_total->data[inputs] = 0.0;
  }

  /*  two layers when PRC is available (control sessions) */
  /*  diagnostic for tracking number of features sampled during each */
  /*  comparison. The first dim (a 2) refers to stim */
  inputs = p->featsSampedByComparison->size[0] * p->
    featsSampedByComparison->size[1] * p->featsSampedByComparison->size[2];
  p->featsSampedByComparison->size[0] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)p->featsSampedByComparison, inputs,
                    (int32_T)sizeof(real_T), &emlrtRTEI);
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&mg_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    unnamed_idx_1 = (int32_T)y;
  } else {
    unnamed_idx_1 = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)
      &lg_emlrtDCI, sp);
  }

  y = p->stimCond;
  if (y == (int32_T)muDoubleScalarFloor(y)) {
    inputs = (int32_T)y;
  } else {
    inputs = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&ng_emlrtDCI, sp);
  }

  if ((inputs >= 1) && (inputs < 2)) {
    c_inputs = inputs;
  } else {
    c_inputs = emlrtDynamicBoundsCheckR2012b(inputs, 1, 2, (emlrtBCInfo *)
      &sd_emlrtBCI, sp);
  }

  y = p->maxFixations[c_inputs - 1];
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&og_emlrtDCI, sp);
  }

  emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&ng_emlrtDCI, sp);
  inputs = p->featsSampedByComparison->size[0] * p->
    featsSampedByComparison->size[1] * p->featsSampedByComparison->size[2];
  p->featsSampedByComparison->size[1] = unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)p->featsSampedByComparison, inputs,
                    (int32_T)sizeof(real_T), &emlrtRTEI);
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&mg_emlrtDCI, sp);
  }

  emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&lg_emlrtDCI, sp);
  y = p->stimCond;
  if (y == (int32_T)muDoubleScalarFloor(y)) {
    inputs = (int32_T)y;
  } else {
    inputs = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&ng_emlrtDCI, sp);
  }

  if ((inputs >= 1) && (inputs < 2)) {
    d_inputs = inputs;
  } else {
    d_inputs = emlrtDynamicBoundsCheckR2012b(inputs, 1, 2, (emlrtBCInfo *)
      &sd_emlrtBCI, sp);
  }

  y = p->maxFixations[d_inputs - 1];
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&og_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    unnamed_idx_2 = (int32_T)y;
  } else {
    unnamed_idx_2 = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)
      &ng_emlrtDCI, sp);
  }

  inputs = p->featsSampedByComparison->size[0] * p->
    featsSampedByComparison->size[1] * p->featsSampedByComparison->size[2];
  p->featsSampedByComparison->size[2] = unnamed_idx_2;
  emxEnsureCapacity(sp, (emxArray__common *)p->featsSampedByComparison, inputs,
                    (int32_T)sizeof(real_T), &emlrtRTEI);
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&mg_emlrtDCI, sp);
  }

  d0 = p->stimCond;
  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
    inputs = (int32_T)d0;
  } else {
    inputs = (int32_T)emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&ng_emlrtDCI,
      sp);
  }

  if ((inputs >= 1) && (inputs < 2)) {
    e_inputs = inputs;
  } else {
    e_inputs = emlrtDynamicBoundsCheckR2012b(inputs, 1, 2, (emlrtBCInfo *)
      &sd_emlrtBCI, sp);
  }

  d0 = p->maxFixations[e_inputs - 1];
  if (d0 >= 0.0) {
  } else {
    d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&og_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p_y = y;
  } else {
    p_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&lg_emlrtDCI, sp);
  }

  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
    d15 = d0;
  } else {
    d15 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&ng_emlrtDCI, sp);
  }

  nx = ((int32_T)p_y << 1) * (int32_T)d15;
  for (inputs = 0; inputs < nx; inputs++) {
    p->featsSampedByComparison->data[inputs] = 0.0;
  }

  /*  which features were sampled during a given trial */
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

  if ((ixstart < 2) && (p->nGrids[1] > mtmp)) {
    mtmp = p->nGrids[1];
  }

  inputs = p->sample_feat->size[0] * p->sample_feat->size[1];
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&ae_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->sample_feat->size[0] = (int32_T)y;
  } else {
    p->sample_feat->size[0] = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)
      &yd_emlrtDCI, sp);
  }

  if (mtmp >= 0.0) {
    y = mtmp;
  } else {
    y = emlrtNonNegativeCheckR2012b(mtmp, (emlrtDCInfo *)&ce_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->sample_feat->size[1] = (int32_T)y;
  } else {
    p->sample_feat->size[1] = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)
      &be_emlrtDCI, sp);
  }

  emxEnsureCapacity(sp, (emxArray__common *)p->sample_feat, inputs, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&ae_emlrtDCI, sp);
  }

  if (mtmp >= 0.0) {
    d0 = mtmp;
  } else {
    d0 = emlrtNonNegativeCheckR2012b(mtmp, (emlrtDCInfo *)&ce_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    q_y = y;
  } else {
    q_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&yd_emlrtDCI, sp);
  }

  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
    d16 = d0;
  } else {
    d16 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&be_emlrtDCI, sp);
  }

  nx = (int32_T)q_y * (int32_T)d16;
  for (inputs = 0; inputs < nx; inputs++) {
    p->sample_feat->data[inputs] = 0.0;
  }

  /*  incriment total fixation counter (used to shrink learning parameter) */
  inputs = p->fixations->size[0] * p->fixations->size[1];
  p->fixations->size[0] = 1;
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&ee_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->fixations->size[1] = (int32_T)y;
  } else {
    p->fixations->size[1] = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)
      &de_emlrtDCI, sp);
  }

  emxEnsureCapacity(sp, (emxArray__common *)p->fixations, inputs, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&ee_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    nx = (int32_T)y;
  } else {
    nx = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&de_emlrtDCI, sp);
  }

  for (inputs = 0; inputs < nx; inputs++) {
    p->fixations->data[inputs] = 0.0;
  }

  /*  tally of activation by trial and layer */
  inputs = p->peak_act->size[0] * p->peak_act->size[1];
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&ge_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->peak_act->size[0] = (int32_T)y;
  } else {
    p->peak_act->size[0] = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)
      &fe_emlrtDCI, sp);
  }

  p->peak_act->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)p->peak_act, inputs, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&ge_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    r_y = y;
  } else {
    r_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&fe_emlrtDCI, sp);
  }

  nx = (int32_T)r_y << 1;
  for (inputs = 0; inputs < nx; inputs++) {
    p->peak_act->data[inputs] = 0.0;
  }

  inputs = p->totalAct->size[0] * p->totalAct->size[1];
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&ie_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->totalAct->size[0] = (int32_T)y;
  } else {
    p->totalAct->size[0] = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)
      &he_emlrtDCI, sp);
  }

  p->totalAct->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)p->totalAct, inputs, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&ie_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    s_y = y;
  } else {
    s_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&he_emlrtDCI, sp);
  }

  nx = (int32_T)s_y << 1;
  for (inputs = 0; inputs < nx; inputs++) {
    p->totalAct->data[inputs] = 0.0;
  }

  /*  which features were compared */
  inputs = p->comparedFeat->size[0] * p->comparedFeat->size[1];
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&ke_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->comparedFeat->size[0] = (int32_T)y;
  } else {
    p->comparedFeat->size[0] = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)
      &je_emlrtDCI, sp);
  }

  y = p->numGrids_Caudal;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&me_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    p->comparedFeat->size[1] = (int32_T)y;
  } else {
    p->comparedFeat->size[1] = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)
      &le_emlrtDCI, sp);
  }

  emxEnsureCapacity(sp, (emxArray__common *)p->comparedFeat, inputs, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  y = p->nTrials;
  if (y >= 0.0) {
  } else {
    y = emlrtNonNegativeCheckR2012b(y, (emlrtDCInfo *)&ke_emlrtDCI, sp);
  }

  d0 = p->numGrids_Caudal;
  if (d0 >= 0.0) {
  } else {
    d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&me_emlrtDCI, sp);
  }

  if (y == (int32_T)muDoubleScalarFloor(y)) {
    t_y = y;
  } else {
    t_y = emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)&je_emlrtDCI, sp);
  }

  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
    d17 = d0;
  } else {
    d17 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&le_emlrtDCI, sp);
  }

  nx = (int32_T)t_y * (int32_T)d17;
  for (inputs = 0; inputs < nx; inputs++) {
    p->comparedFeat->data[inputs] = 0.0;
  }

  /* % begin trial loop */
  /*  for picking out the stim in the stimulus pair... */
  for (inputs = 0; inputs < 2; inputs++) {
    tTypeCnt[inputs] = 0.0;
  }

  y = p->nTrials;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, p->nTrials, mxDOUBLE_CLASS, (int32_T)
    p->nTrials, (emlrtRTEInfo *)&tc_emlrtRTEI, sp);
  trial = 1;
  b_emxInit_real_T(sp, &stimuli, 3, &t_emlrtRTEI, true);
  c_emxInit_real_T(sp, &stimPair, 2, &u_emlrtRTEI, true);
  c_emxInit_real_T(sp, &prevStimSelec, 2, &v_emlrtRTEI, true);
  emxInit_real_T(sp, &features_sampled_prev, 1, &w_emlrtRTEI, true);
  emxInit_real_T(sp, &sample_feat, 1, &x_emlrtRTEI, true);
  c_emxInit_real_T(sp, &avail_feat, 2, &y_emlrtRTEI, true);
  emxInit_real_T(sp, &features_sampled, 1, &ab_emlrtRTEI, true);
  emxInit_real_T(sp, &stimulus, 1, &bb_emlrtRTEI, true);
  e_emxInit_real_T(sp, &activations, 4, &cb_emlrtRTEI, true);
  e_emxInit_real_T(sp, &initial_acts, 4, &db_emlrtRTEI, true);
  c_emxInit_real_T(sp, &selec, 2, &eb_emlrtRTEI, true);
  c_emxInit_real_T(sp, &initial_selec, 2, &fb_emlrtRTEI, true);
  b_emxInit_real_T(sp, &row_dist_mat, 3, &gb_emlrtRTEI, true);
  b_emxInit_real_T(sp, &col_dist_mat, 3, &hb_emlrtRTEI, true);
  b_emxInit_real_T(sp, &input_mat, 3, &ib_emlrtRTEI, true);
  c_emxInit_real_T(sp, &c_min_col_dist_mat, 2, &jb_emlrtRTEI, true);
  b_emxInit_real_T(sp, &f, 3, &kb_emlrtRTEI, true);
  c_emxInit_real_T(sp, &winners, 2, &lb_emlrtRTEI, true);
  c_emxInit_real_T(sp, &featuresToCompare, 2, &mb_emlrtRTEI, true);
  c_emxInit_real_T(sp, &meanSelectivity_caudal_prev, 2, &nb_emlrtRTEI, true);
  c_emxInit_real_T(sp, &familDiff_caudal, 2, &ob_emlrtRTEI, true);
  c_emxInit_real_T(sp, &dist_mat, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &f_inputs, 2, &pb_emlrtRTEI, true);
  c_emxInit_real_T(sp, &whichCaudal, 2, &qb_emlrtRTEI, true);
  b_emxInit_real_T(sp, &weights_child, 3, &rb_emlrtRTEI, true);
  emxInit_int32_T(sp, &r0, 2, &emlrtRTEI, true);
  b_emxInit_int32_T(sp, &r1, 1, &emlrtRTEI, true);
  b_emxInit_int32_T(sp, &r2, 1, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &r3, 3, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &r4, 3, &emlrtRTEI, true);
  emxInit_boolean_T(sp, &x, 1, &emlrtRTEI, true);
  b_emxInit_int32_T(sp, &ii, 1, &sb_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &b_x, 2, &emlrtRTEI, true);
  emxInit_int32_T(sp, &b_ii, 2, &sb_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &c_p, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &d_p, 2, &emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &e_p, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &f_p, 2, &emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &g_p, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &h_p, 2, &emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &i_p, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &j_p, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &k_p, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &l_p, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &b_sample_feat, 1, &emlrtRTEI, true);
  emxInit_real_T(sp, &c_sample_feat, 1, &emlrtRTEI, true);
  emxInit_real_T(sp, &d_sample_feat, 1, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_stimuli, 3, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &m_p, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &n_p, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &o_p, 1, &emlrtRTEI, true);
  emxInit_real_T(sp, &p_p, 1, &emlrtRTEI, true);
  emxInit_real_T(sp, &q_p, 1, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &b_meanSelectivity_caudal_prev, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_input_mat, 3, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &r5, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &r6, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &r_p, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &g_inputs, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &s_p, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &t_p, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &u_p, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &v_p, 2, &emlrtRTEI, true);
  emxInit_boolean_T(sp, &b_features_sampled, 1, &emlrtRTEI, true);
  e_emxInit_real_T(sp, &b_weights, 4, &emlrtRTEI, true);
  emxInit_boolean_T(sp, &b_features_sampled_prev, 1, &emlrtRTEI, true);
  emxInit_boolean_T(sp, &c_features_sampled, 1, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &b_stimPair, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &c_stimPair, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &b_prevStimSelec, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &b_initial_selec, 2, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_stimuli, 3, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_input_mat, 3, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &d_input_mat, 3, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &b_avail_feat, 2, &emlrtRTEI, true);
  c_emxInit_real_T(sp, &c_avail_feat, 2, &emlrtRTEI, true);
  do {
    exitg2 = 0;
    if (trial - 1 <= (int32_T)y - 1) {
      /* %% Determine trial type and increment count */
      inputs = p->tType->size[1];
      min_col_dist_mat = (trial - 1) + 1;
      emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs, (emlrtBCInfo *)
        &pd_emlrtBCI, sp);
      d0 = p->tType->data[trial - 1];
      if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
        inputs = (int32_T)d0;
      } else {
        inputs = (int32_T)emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)
          &pg_emlrtDCI, sp);
      }

      d0 = p->tType->data[trial - 1];
      if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
        min_col_dist_mat = (int32_T)d0;
      } else {
        min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)
          &qg_emlrtDCI, sp);
      }

      if ((inputs >= 1) && (inputs < 2)) {
        h_inputs = inputs;
      } else {
        h_inputs = emlrtDynamicBoundsCheckR2012b(inputs, 1, 2, (emlrtBCInfo *)
          &td_emlrtBCI, sp);
      }

      if ((min_col_dist_mat >= 1) && (min_col_dist_mat < 2)) {
        d_min_col_dist_mat = min_col_dist_mat;
      } else {
        d_min_col_dist_mat = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1,
          2, (emlrtBCInfo *)&ud_emlrtBCI, sp);
      }

      tTypeCnt[h_inputs - 1] = tTypeCnt[d_min_col_dist_mat - 1] + 1.0;
      d0 = p->nMatch;
      if (d0 >= 0.0) {
      } else {
        d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&fb_emlrtDCI, sp);
      }

      emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&eb_emlrtDCI, sp);
      d0 = p->components;
      if (d0 >= 0.0) {
      } else {
        d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&db_emlrtDCI, sp);
      }

      emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&cb_emlrtDCI, sp);
      if (p->tType->data[trial - 1] == 1.0) {
        /*          tTypeStr='Mismatch'; */
        inputs = stimuli->size[0] * stimuli->size[1] * stimuli->size[2];
        stimuli->size[0] = p->stimuli_misMatch->size[0];
        stimuli->size[1] = p->stimuli_misMatch->size[1];
        stimuli->size[2] = p->stimuli_misMatch->size[2];
        emxEnsureCapacity(sp, (emxArray__common *)stimuli, inputs, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
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
        emxEnsureCapacity(sp, (emxArray__common *)stimuli, inputs, (int32_T)
                          sizeof(real_T), &emlrtRTEI);
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
      inputs = stimuli->size[0];
      min_col_dist_mat = p->stimOrder->size[0];
      idx = (int32_T)tTypeCnt[(int32_T)p->tType->data[trial - 1] - 1];
      i15 = p->stimOrder->size[1];
      maxdimlen = (int32_T)p->tType->data[trial - 1];
      if ((idx >= 1) && (idx < min_col_dist_mat)) {
        b_idx = idx;
      } else {
        b_idx = emlrtDynamicBoundsCheckR2012b(idx, 1, min_col_dist_mat,
          (emlrtBCInfo *)&vd_emlrtBCI, sp);
      }

      if ((maxdimlen >= 1) && (maxdimlen < i15)) {
        b_maxdimlen = maxdimlen;
      } else {
        b_maxdimlen = emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i15,
          (emlrtBCInfo *)&wd_emlrtBCI, sp);
      }

      d0 = p->stimOrder->data[(b_idx + p->stimOrder->size[0] * (b_maxdimlen - 1))
        - 1];
      if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
        min_col_dist_mat = (int32_T)d0;
      } else {
        min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)
          &bb_emlrtDCI, sp);
      }

      if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
        maxdimlen = min_col_dist_mat;
      } else {
        maxdimlen = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
          (emlrtBCInfo *)&od_emlrtBCI, sp);
      }

      inputs = b_stimuli->size[0] * b_stimuli->size[1] * b_stimuli->size[2];
      b_stimuli->size[0] = 1;
      b_stimuli->size[1] = nx;
      b_stimuli->size[2] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)b_stimuli, inputs, (int32_T)
                        sizeof(real_T), &emlrtRTEI);
      for (inputs = 0; inputs < loop_ub; inputs++) {
        for (min_col_dist_mat = 0; min_col_dist_mat < nx; min_col_dist_mat++) {
          b_stimuli->data[b_stimuli->size[0] * min_col_dist_mat +
            b_stimuli->size[0] * b_stimuli->size[1] * inputs] = stimuli->data
            [((maxdimlen + stimuli->size[0] * min_col_dist_mat) + stimuli->size
              [0] * stimuli->size[1] * inputs) - 1];
        }
      }

      st.site = &rb_emlrtRSI;
      squeeze(&st, b_stimuli, stimPair);
      idx = stimPair->size[0];
      maxdimlen = stimPair->size[0];
      nx = stimPair->size[1];
      inputs = b_stimPair->size[0] * b_stimPair->size[1];
      b_stimPair->size[0] = maxdimlen;
      b_stimPair->size[1] = nx;
      emxEnsureCapacity(sp, (emxArray__common *)b_stimPair, inputs, (int32_T)
                        sizeof(real_T), &emlrtRTEI);
      for (inputs = 0; inputs < nx; inputs++) {
        for (min_col_dist_mat = 0; min_col_dist_mat < maxdimlen;
             min_col_dist_mat++) {
          b_stimPair->data[min_col_dist_mat + b_stimPair->size[0] * inputs] =
            stimPair->data[min_col_dist_mat + idx * inputs];
        }
      }

      inputs = stimPair->size[0] * stimPair->size[1];
      stimPair->size[0] = b_stimPair->size[0];
      stimPair->size[1] = b_stimPair->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)stimPair, inputs, (int32_T)
                        sizeof(real_T), &emlrtRTEI);
      nx = b_stimPair->size[1];
      for (inputs = 0; inputs < nx; inputs++) {
        loop_ub = b_stimPair->size[0];
        for (min_col_dist_mat = 0; min_col_dist_mat < loop_ub; min_col_dist_mat
             ++) {
          stimPair->data[min_col_dist_mat + stimPair->size[0] * inputs] =
            b_stimPair->data[min_col_dist_mat + b_stimPair->size[0] * inputs];
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
      d0 = p->layer;
      if (d0 >= 0.0) {
      } else {
        d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&oe_emlrtDCI, sp);
      }

      if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
        prevStimSelec->size[0] = (int32_T)d0;
      } else {
        prevStimSelec->size[0] = (int32_T)emlrtIntegerCheckR2012b(d0,
          (emlrtDCInfo *)&ne_emlrtDCI, sp);
      }

      d0 = p->numGrids_Caudal;
      if (d0 >= 0.0) {
      } else {
        d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&qe_emlrtDCI, sp);
      }

      if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
        prevStimSelec->size[1] = (int32_T)d0;
      } else {
        prevStimSelec->size[1] = (int32_T)emlrtIntegerCheckR2012b(d0,
          (emlrtDCInfo *)&pe_emlrtDCI, sp);
      }

      emxEnsureCapacity(sp, (emxArray__common *)prevStimSelec, inputs, (int32_T)
                        sizeof(real_T), &emlrtRTEI);
      d0 = p->layer;
      if (d0 >= 0.0) {
      } else {
        d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&oe_emlrtDCI, sp);
      }

      d18 = p->numGrids_Caudal;
      if (d18 >= 0.0) {
      } else {
        d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)&qe_emlrtDCI, sp);
      }

      if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
        d19 = d0;
      } else {
        d19 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&ne_emlrtDCI, sp);
      }

      if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
        d20 = d18;
      } else {
        d20 = emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)&pe_emlrtDCI, sp);
      }

      nx = (int32_T)d19 * (int32_T)d20;
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
        inputs = stimPair->size[0];
        emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)&nd_emlrtBCI,
          sp);
        inputs = stimPair->size[0];
        d0 = p->components;
        if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
          min_col_dist_mat = (int32_T)d0;
        } else {
          min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)
            &ab_emlrtDCI, sp);
        }

        if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
          nx = min_col_dist_mat;
        } else {
          nx = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
            (emlrtBCInfo *)&nd_emlrtBCI, sp);
        }
      }

      idx = stimPair->size[1];
      inputs = c_stimPair->size[0] * c_stimPair->size[1];
      c_stimPair->size[0] = nx;
      c_stimPair->size[1] = idx;
      emxEnsureCapacity(sp, (emxArray__common *)c_stimPair, inputs, (int32_T)
                        sizeof(real_T), &emlrtRTEI);
      for (inputs = 0; inputs < idx; inputs++) {
        for (min_col_dist_mat = 0; min_col_dist_mat < nx; min_col_dist_mat++) {
          c_stimPair->data[min_col_dist_mat + c_stimPair->size[0] * inputs] =
            stimPair->data[min_col_dist_mat + stimPair->size[0] * inputs];
        }
      }

      inputs = stimPair->size[0] * stimPair->size[1];
      stimPair->size[0] = c_stimPair->size[0];
      stimPair->size[1] = c_stimPair->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)stimPair, inputs, (int32_T)
                        sizeof(real_T), &emlrtRTEI);
      nx = c_stimPair->size[1];
      for (inputs = 0; inputs < nx; inputs++) {
        loop_ub = c_stimPair->size[0];
        for (min_col_dist_mat = 0; min_col_dist_mat < loop_ub; min_col_dist_mat
             ++) {
          stimPair->data[min_col_dist_mat + stimPair->size[0] * inputs] =
            c_stimPair->data[min_col_dist_mat + c_stimPair->size[0] * inputs];
        }
      }

      keepSampling = 0;
      inputs = features_sampled_prev->size[0];
      d0 = p->numGrids_Caudal;
      if (d0 >= 0.0) {
      } else {
        d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&sg_emlrtDCI, sp);
      }

      if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
        features_sampled_prev->size[0] = (int32_T)d0;
      } else {
        features_sampled_prev->size[0] = (int32_T)emlrtIntegerCheckR2012b(d0,
          (emlrtDCInfo *)&rg_emlrtDCI, sp);
      }

      emxEnsureCapacity(sp, (emxArray__common *)features_sampled_prev, inputs,
                        (int32_T)sizeof(real_T), &emlrtRTEI);
      d0 = p->numGrids_Caudal;
      if (d0 >= 0.0) {
      } else {
        d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&sg_emlrtDCI, sp);
      }

      if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
        nx = (int32_T)d0;
      } else {
        nx = (int32_T)emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&rg_emlrtDCI,
          sp);
      }

      for (inputs = 0; inputs < nx; inputs++) {
        features_sampled_prev->data[inputs] = 0.0;
      }

      /*     %% */
      do {
        exitg1 = 0;
        inputs = p->fixations->size[1];
        if ((trial >= 1) && (trial < inputs)) {
          b_trial = trial;
        } else {
          b_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs, (emlrtBCInfo
            *)&xd_emlrtBCI, sp);
        }

        if (((p->fixations->data[b_trial - 1] < p->maxFix) && (stopSampling == 0))
            || ((keepSampling != 0) && (stopSampling == 0))) {
          /*  stop when enough evidence accumulated or maxFix saccades made */
          comparison++;
          inputs = sample_feat->size[0];
          d0 = p->numGrids_Caudal;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&ug_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            sample_feat->size[0] = (int32_T)d0;
          } else {
            sample_feat->size[0] = (int32_T)emlrtIntegerCheckR2012b(d0,
              (emlrtDCInfo *)&tg_emlrtDCI, sp);
          }

          emxEnsureCapacity(sp, (emxArray__common *)sample_feat, inputs,
                            (int32_T)sizeof(real_T), &emlrtRTEI);
          d0 = p->numGrids_Caudal;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&ug_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            nx = (int32_T)d0;
          } else {
            nx = (int32_T)emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)
              &tg_emlrtDCI, sp);
          }

          for (inputs = 0; inputs < nx; inputs++) {
            sample_feat->data[inputs] = 0.0;
          }

          st.site = &qb_emlrtRSI;
          randperm(&st, p->numGrids_Caudal, avail_feat);
          if (1.0 > p->nFeaturesToSample) {
            nx = 0;
          } else {
            inputs = avail_feat->size[1];
            emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)
              &md_emlrtBCI, sp);
            inputs = avail_feat->size[1];
            d0 = p->nFeaturesToSample;
            if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
              min_col_dist_mat = (int32_T)d0;
            } else {
              min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(d0,
                (emlrtDCInfo *)&y_emlrtDCI, sp);
            }

            if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
              nx = min_col_dist_mat;
            } else {
              nx = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                (emlrtBCInfo *)&md_emlrtBCI, sp);
            }
          }

          maxdimlen = (int32_T)p->numGrids_Caudal;
          inputs = b_ii->size[0] * b_ii->size[1];
          b_ii->size[0] = 1;
          b_ii->size[1] = nx;
          emxEnsureCapacity(sp, (emxArray__common *)b_ii, inputs, (int32_T)
                            sizeof(int32_T), &emlrtRTEI);
          for (inputs = 0; inputs < nx; inputs++) {
            min_col_dist_mat = (int32_T)avail_feat->data[inputs];
            if ((min_col_dist_mat >= 1) && (min_col_dist_mat < maxdimlen)) {
              b_ii->data[b_ii->size[0] * inputs] = min_col_dist_mat;
            } else {
              b_ii->data[b_ii->size[0] * inputs] = emlrtDynamicBoundsCheckR2012b
                (min_col_dist_mat, 1, maxdimlen, (emlrtBCInfo *)&be_emlrtBCI, sp);
            }
          }

          nx = b_ii->size[0] * b_ii->size[1];
          for (inputs = 0; inputs < nx; inputs++) {
            sample_feat->data[b_ii->data[inputs] - 1] = 1.0;
          }

          /* sample features (at random) */
          inputs = p->fixations->size[1];
          min_col_dist_mat = p->fixations->size[1];
          if ((trial >= 1) && (trial < inputs)) {
            c_trial = trial;
          } else {
            c_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
              (emlrtBCInfo *)&ce_emlrtBCI, sp);
          }

          if ((trial >= 1) && (trial < min_col_dist_mat)) {
            d_trial = trial;
          } else {
            d_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, min_col_dist_mat,
              (emlrtBCInfo *)&de_emlrtBCI, sp);
          }

          p->fixations->data[c_trial - 1] = p->fixations->data[d_trial - 1] +
            1.0;

          /* % total fixations across both stimuli */
          if (!(first_stim_sampled != 0)) {
            /* force at least one feature in newly sampled stim to */
            /*  be compared with features samped from prev */
            /*  stim. */
            do {
              exitg12 = 0;
              inputs = d_sample_feat->size[0];
              d_sample_feat->size[0] = features_sampled_prev->size[0];
              emxEnsureCapacity(sp, (emxArray__common *)d_sample_feat, inputs,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              nx = features_sampled_prev->size[0];
              for (inputs = 0; inputs < nx; inputs++) {
                min_col_dist_mat = sample_feat->size[0];
                idx = (int32_T)features_sampled_prev->data[inputs];
                if ((idx >= 1) && (idx < min_col_dist_mat)) {
                  c_idx = idx;
                } else {
                  c_idx = emlrtDynamicBoundsCheckR2012b(idx, 1, min_col_dist_mat,
                    (emlrtBCInfo *)&ee_emlrtBCI, sp);
                }

                d_sample_feat->data[inputs] = sample_feat->data[c_idx - 1];
              }

              st.site = &pb_emlrtRSI;
              if (!any(&st, d_sample_feat)) {
                inputs = sample_feat->size[0];
                d0 = p->numGrids_Caudal;
                if (d0 >= 0.0) {
                } else {
                  d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)
                    &kh_emlrtDCI, sp);
                }

                if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
                  sample_feat->size[0] = (int32_T)d0;
                } else {
                  sample_feat->size[0] = (int32_T)emlrtIntegerCheckR2012b(d0,
                    (emlrtDCInfo *)&jh_emlrtDCI, sp);
                }

                emxEnsureCapacity(sp, (emxArray__common *)sample_feat, inputs,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                d0 = p->numGrids_Caudal;
                if (d0 >= 0.0) {
                } else {
                  d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)
                    &kh_emlrtDCI, sp);
                }

                if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
                  nx = (int32_T)d0;
                } else {
                  nx = (int32_T)emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)
                    &jh_emlrtDCI, sp);
                }

                for (inputs = 0; inputs < nx; inputs++) {
                  sample_feat->data[inputs] = 0.0;
                }

                st.site = &ob_emlrtRSI;
                randperm(&st, p->numGrids_Caudal, avail_feat);
                if (1.0 > p->nFeaturesToSample) {
                  nx = 0;
                } else {
                  inputs = avail_feat->size[1];
                  emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)
                    &ld_emlrtBCI, sp);
                  inputs = avail_feat->size[1];
                  d0 = p->nFeaturesToSample;
                  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
                    min_col_dist_mat = (int32_T)d0;
                  } else {
                    min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(d0,
                      (emlrtDCInfo *)&x_emlrtDCI, sp);
                  }

                  if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
                    nx = min_col_dist_mat;
                  } else {
                    nx = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1,
                      inputs, (emlrtBCInfo *)&ld_emlrtBCI, sp);
                  }
                }

                maxdimlen = (int32_T)p->numGrids_Caudal;
                inputs = b_ii->size[0] * b_ii->size[1];
                b_ii->size[0] = 1;
                b_ii->size[1] = nx;
                emxEnsureCapacity(sp, (emxArray__common *)b_ii, inputs, (int32_T)
                                  sizeof(int32_T), &emlrtRTEI);
                for (inputs = 0; inputs < nx; inputs++) {
                  min_col_dist_mat = (int32_T)avail_feat->data[inputs];
                  if ((min_col_dist_mat >= 1) && (min_col_dist_mat < maxdimlen))
                  {
                    b_ii->data[b_ii->size[0] * inputs] = min_col_dist_mat;
                  } else {
                    b_ii->data[b_ii->size[0] * inputs] =
                      emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1,
                      maxdimlen, (emlrtBCInfo *)&rg_emlrtBCI, sp);
                  }
                }

                nx = b_ii->size[0] * b_ii->size[1];
                for (inputs = 0; inputs < nx; inputs++) {
                  sample_feat->data[b_ii->data[inputs] - 1] = 1.0;
                }

                /* sample features (at random) */
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(sp);
                }
              } else {
                exitg12 = 1;
              }
            } while (exitg12 == 0);
          }

          stick = 1;
          while (stick == 1) {
            /* ------------------------------------------------------------------ */
            /*  decide whether to stick or switch stimulus (using fixation ratio) */
            /* ------------------------------------------------------------------ */
            st.site = &nb_emlrtRSI;
            stick_switch = b_rand();

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
                  min_col_dist_mat = 0;
                } else {
                  inputs = 1;
                  min_col_dist_mat = avail_feat->size[1];
                  idx = avail_feat->size[1];
                  if ((idx >= 1) && (idx < min_col_dist_mat)) {
                    min_col_dist_mat = idx;
                  } else {
                    min_col_dist_mat = emlrtDynamicBoundsCheckR2012b(idx, 1,
                      min_col_dist_mat, (emlrtBCInfo *)&kd_emlrtBCI, sp);
                  }
                }

                idx = b_avail_feat->size[0] * b_avail_feat->size[1];
                b_avail_feat->size[0] = 1;
                b_avail_feat->size[1] = min_col_dist_mat - inputs;
                emxEnsureCapacity(sp, (emxArray__common *)b_avail_feat, idx,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                nx = min_col_dist_mat - inputs;
                for (min_col_dist_mat = 0; min_col_dist_mat < nx;
                     min_col_dist_mat++) {
                  b_avail_feat->data[b_avail_feat->size[0] * min_col_dist_mat] =
                    avail_feat->data[inputs + min_col_dist_mat];
                }

                inputs = avail_feat->size[0] * avail_feat->size[1];
                avail_feat->size[0] = 1;
                avail_feat->size[1] = b_avail_feat->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)avail_feat, inputs,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                nx = b_avail_feat->size[1];
                for (inputs = 0; inputs < nx; inputs++) {
                  avail_feat->data[avail_feat->size[0] * inputs] =
                    b_avail_feat->data[b_avail_feat->size[0] * inputs];
                }

                /* NOTE: all features can only be sampled once (features are being totted up over fixations and sampled at the end) */
                inputs = p->fixations->size[1];
                min_col_dist_mat = p->fixations->size[1];
                if ((trial >= 1) && (trial < inputs)) {
                  e_trial = trial;
                } else {
                  e_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                    (emlrtBCInfo *)&ng_emlrtBCI, sp);
                }

                if ((trial >= 1) && (trial < min_col_dist_mat)) {
                  f_trial = trial;
                } else {
                  f_trial = emlrtDynamicBoundsCheckR2012b(trial, 1,
                    min_col_dist_mat, (emlrtBCInfo *)&og_emlrtBCI, sp);
                }

                p->fixations->data[e_trial - 1] = p->fixations->data[f_trial - 1]
                  + 1.0;
                st.site = &mb_emlrtRSI;
                randperm(&st, (real_T)avail_feat->size[1],
                         meanSelectivity_caudal_prev);
                maxdimlen = avail_feat->size[1];
                inputs = c_avail_feat->size[0] * c_avail_feat->size[1];
                c_avail_feat->size[0] = 1;
                c_avail_feat->size[1] = meanSelectivity_caudal_prev->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)c_avail_feat, inputs,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                nx = meanSelectivity_caudal_prev->size[1];
                for (inputs = 0; inputs < nx; inputs++) {
                  min_col_dist_mat = (int32_T)meanSelectivity_caudal_prev->
                    data[meanSelectivity_caudal_prev->size[0] * inputs];
                  if ((min_col_dist_mat >= 1) && (min_col_dist_mat < maxdimlen))
                  {
                    e_min_col_dist_mat = min_col_dist_mat;
                  } else {
                    e_min_col_dist_mat = emlrtDynamicBoundsCheckR2012b
                      (min_col_dist_mat, 1, maxdimlen, (emlrtBCInfo *)
                       &pg_emlrtBCI, sp);
                  }

                  c_avail_feat->data[c_avail_feat->size[0] * inputs] =
                    avail_feat->data[e_min_col_dist_mat - 1];
                }

                inputs = avail_feat->size[0] * avail_feat->size[1];
                avail_feat->size[0] = 1;
                avail_feat->size[1] = c_avail_feat->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)avail_feat, inputs,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                nx = c_avail_feat->size[1];
                for (inputs = 0; inputs < nx; inputs++) {
                  avail_feat->data[avail_feat->size[0] * inputs] =
                    c_avail_feat->data[c_avail_feat->size[0] * inputs];
                }

                if (1.0 > p->nFeaturesToSample) {
                  nx = 0;
                } else {
                  inputs = avail_feat->size[1];
                  emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)
                    &jd_emlrtBCI, sp);
                  inputs = avail_feat->size[1];
                  d0 = p->nFeaturesToSample;
                  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
                    min_col_dist_mat = (int32_T)d0;
                  } else {
                    min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(d0,
                      (emlrtDCInfo *)&w_emlrtDCI, sp);
                  }

                  if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
                    nx = min_col_dist_mat;
                  } else {
                    nx = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1,
                      inputs, (emlrtBCInfo *)&jd_emlrtBCI, sp);
                  }
                }

                inputs = b_ii->size[0] * b_ii->size[1];
                b_ii->size[0] = 1;
                b_ii->size[1] = nx;
                emxEnsureCapacity(sp, (emxArray__common *)b_ii, inputs, (int32_T)
                                  sizeof(int32_T), &emlrtRTEI);
                for (inputs = 0; inputs < nx; inputs++) {
                  min_col_dist_mat = sample_feat->size[0];
                  idx = (int32_T)avail_feat->data[inputs];
                  if ((idx >= 1) && (idx < min_col_dist_mat)) {
                    b_ii->data[b_ii->size[0] * inputs] = idx;
                  } else {
                    b_ii->data[b_ii->size[0] * inputs] =
                      emlrtDynamicBoundsCheckR2012b(idx, 1, min_col_dist_mat,
                      (emlrtBCInfo *)&qg_emlrtBCI, sp);
                  }
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
              emlrtBreakCheckR2012b(sp);
            }
          }

          inputs = p->sample_feat->size[0];
          min_col_dist_mat = (trial - 1) + 1;
          emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
            (emlrtBCInfo *)&id_emlrtBCI, sp);
          nx = p->sample_feat->size[1];
          inputs = ii->size[0];
          ii->size[0] = nx;
          emxEnsureCapacity(sp, (emxArray__common *)ii, inputs, (int32_T)sizeof
                            (int32_T), &emlrtRTEI);
          for (inputs = 0; inputs < nx; inputs++) {
            ii->data[inputs] = inputs;
          }

          iv22[0] = 1;
          iv22[1] = ii->size[0];
          emlrtSubAssignSizeCheckR2012b(iv22, 2, *(int32_T (*)[1])
            sample_feat->size, 1, (emlrtECInfo *)&v_emlrtECI, sp);
          unnamed_idx_1 = ii->size[0];
          for (inputs = 0; inputs < unnamed_idx_1; inputs++) {
            p->sample_feat->data[(trial + p->sample_feat->size[0] * ii->
                                  data[inputs]) - 1] = sample_feat->data[inputs];
          }

          if (stim == (int32_T)muDoubleScalarFloor(stim)) {
            inputs = (int32_T)stim;
          } else {
            inputs = (int32_T)emlrtIntegerCheckR2012b(stim, (emlrtDCInfo *)
              &vg_emlrtDCI, sp);
          }

          min_col_dist_mat = p->featsSampedByComparison->size[1];
          idx = p->featsSampedByComparison->size[2];
          i15 = (int32_T)comparison;
          if ((inputs >= 1) && (inputs < 2)) {
            i_inputs = inputs;
          } else {
            i_inputs = emlrtDynamicBoundsCheckR2012b(inputs, 1, 2, (emlrtBCInfo *)
              &fe_emlrtBCI, sp);
          }

          if ((trial >= 1) && (trial < min_col_dist_mat)) {
            g_trial = trial;
          } else {
            g_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, min_col_dist_mat,
              (emlrtBCInfo *)&ge_emlrtBCI, sp);
          }

          if ((i15 >= 1) && (i15 < idx)) {
            i16 = i15;
          } else {
            i16 = emlrtDynamicBoundsCheckR2012b(i15, 1, idx, (emlrtBCInfo *)
              &he_emlrtBCI, sp);
          }

          st.site = &lb_emlrtRSI;
          p->featsSampedByComparison->data[((i_inputs +
            p->featsSampedByComparison->size[0] * (g_trial - 1)) +
            p->featsSampedByComparison->size[0] * p->
            featsSampedByComparison->size[1] * (i16 - 1)) - 1] = sum(&st,
            sample_feat);

          /*      % incriment total fixation counter (used to shrink learning parameter) */
          /*      p.fixations_total = p.fixations_total+fixations; */
          /*  Incorporate all evidence together into stimulus presentation; grab stimulus, sample the specified features, fill remaining inputs with 0.5 */
          st.site = &kb_emlrtRSI;
          inputs = x->size[0];
          x->size[0] = sample_feat->size[0];
          emxEnsureCapacity(&st, (emxArray__common *)x, inputs, (int32_T)sizeof
                            (boolean_T), &emlrtRTEI);
          nx = sample_feat->size[0];
          for (inputs = 0; inputs < nx; inputs++) {
            x->data[inputs] = (sample_feat->data[inputs] == 1.0);
          }

          b_st.site = &ic_emlrtRSI;
          nx = x->size[0];
          idx = 0;
          inputs = ii->size[0];
          ii->size[0] = x->size[0];
          emxEnsureCapacity(&b_st, (emxArray__common *)ii, inputs, (int32_T)
                            sizeof(int32_T), &emlrtRTEI);
          c_st.site = &jc_emlrtRSI;
          if (1 > x->size[0]) {
            overflow = false;
          } else {
            overflow = (x->size[0] > 2147483646);
          }

          if (overflow) {
            d_st.site = &wb_emlrtRSI;
            check_forloop_overflow_error(&d_st);
          }

          maxdimlen = 1;
          exitg11 = false;
          while ((!exitg11) && (maxdimlen <= nx)) {
            guard4 = false;
            if (x->data[maxdimlen - 1]) {
              idx++;
              ii->data[idx - 1] = maxdimlen;
              if (idx >= nx) {
                exitg11 = true;
              } else {
                guard4 = true;
              }
            } else {
              guard4 = true;
            }

            if (guard4) {
              maxdimlen++;
            }
          }

          if (idx <= x->size[0]) {
          } else {
            emlrtErrorWithMessageIdR2012b(&b_st, &uc_emlrtRTEI,
              "Coder:builtins:AssertionFailed", 0);
          }

          if (x->size[0] == 1) {
            if (idx == 0) {
              inputs = ii->size[0];
              ii->size[0] = 0;
              emxEnsureCapacity(&b_st, (emxArray__common *)ii, inputs, (int32_T)
                                sizeof(int32_T), &emlrtRTEI);
            }
          } else {
            inputs = ii->size[0];
            if (1 > idx) {
              ii->size[0] = 0;
            } else {
              ii->size[0] = idx;
            }

            emxEnsureCapacity(&b_st, (emxArray__common *)ii, inputs, (int32_T)
                              sizeof(int32_T), &r_emlrtRTEI);
          }

          inputs = features_sampled->size[0];
          features_sampled->size[0] = ii->size[0];
          emxEnsureCapacity(&st, (emxArray__common *)features_sampled, inputs,
                            (int32_T)sizeof(real_T), &emlrtRTEI);
          nx = ii->size[0];
          for (inputs = 0; inputs < nx; inputs++) {
            features_sampled->data[inputs] = ii->data[inputs];
          }

          /* next few lines translate the sampled features into correct input dimensions in the 15 element input vector */
          inputs = sample_feat->size[0];
          sample_feat->size[0] = features_sampled->size[0];
          emxEnsureCapacity(sp, (emxArray__common *)sample_feat, inputs,
                            (int32_T)sizeof(real_T), &emlrtRTEI);
          nx = features_sampled->size[0];
          for (inputs = 0; inputs < nx; inputs++) {
            sample_feat->data[inputs] = (features_sampled->data[inputs] - 1.0) *
              3.0 + 1.0;
          }

          inputs = b_sample_feat->size[0];
          b_sample_feat->size[0] = sample_feat->size[0];
          emxEnsureCapacity(sp, (emxArray__common *)b_sample_feat, inputs,
                            (int32_T)sizeof(real_T), &emlrtRTEI);
          nx = sample_feat->size[0];
          for (inputs = 0; inputs < nx; inputs++) {
            b_sample_feat->data[inputs] = sample_feat->data[inputs] + 1.0;
          }

          inputs = c_sample_feat->size[0];
          c_sample_feat->size[0] = sample_feat->size[0];
          emxEnsureCapacity(sp, (emxArray__common *)c_sample_feat, inputs,
                            (int32_T)sizeof(real_T), &emlrtRTEI);
          nx = sample_feat->size[0];
          for (inputs = 0; inputs < nx; inputs++) {
            c_sample_feat->data[inputs] = sample_feat->data[inputs] + 2.0;
          }

          st.site = &jb_emlrtRSI;
          cat(&st, sample_feat, b_sample_feat, c_sample_feat, f_inputs);
          inputs = sample_feat->size[0];
          d0 = p->components;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&xg_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            sample_feat->size[0] = (int32_T)d0;
          } else {
            sample_feat->size[0] = (int32_T)emlrtIntegerCheckR2012b(d0,
              (emlrtDCInfo *)&wg_emlrtDCI, sp);
          }

          emxEnsureCapacity(sp, (emxArray__common *)sample_feat, inputs,
                            (int32_T)sizeof(real_T), &emlrtRTEI);
          d0 = p->components;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&xg_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            nx = (int32_T)d0;
          } else {
            nx = (int32_T)emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)
              &wg_emlrtDCI, sp);
          }

          for (inputs = 0; inputs < nx; inputs++) {
            sample_feat->data[inputs] = 1.0;
          }

          inputs = r0->size[0] * r0->size[1];
          r0->size[0] = f_inputs->size[0];
          r0->size[1] = f_inputs->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)r0, inputs, (int32_T)sizeof
                            (int32_T), &emlrtRTEI);
          maxdimlen = (int32_T)p->components;
          nx = f_inputs->size[0] * f_inputs->size[1];
          for (inputs = 0; inputs < nx; inputs++) {
            min_col_dist_mat = (int32_T)f_inputs->data[inputs];
            if ((min_col_dist_mat >= 1) && (min_col_dist_mat < maxdimlen)) {
              r0->data[inputs] = min_col_dist_mat;
            } else {
              r0->data[inputs] = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat,
                1, maxdimlen, (emlrtBCInfo *)&ie_emlrtBCI, sp);
            }
          }

          nx = r0->size[0] * r0->size[1];
          for (inputs = 0; inputs < nx; inputs++) {
            sample_feat->data[r0->data[inputs] - 1] = 0.0;
          }

          nx = stimPair->size[0];
          inputs = stimPair->size[1];
          min_col_dist_mat = (int32_T)stim;
          if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
            maxdimlen = min_col_dist_mat;
          } else {
            maxdimlen = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1,
              inputs, (emlrtBCInfo *)&hd_emlrtBCI, sp);
          }

          inputs = stimulus->size[0];
          stimulus->size[0] = nx;
          emxEnsureCapacity(sp, (emxArray__common *)stimulus, inputs, (int32_T)
                            sizeof(real_T), &emlrtRTEI);
          for (inputs = 0; inputs < nx; inputs++) {
            stimulus->data[inputs] = stimPair->data[inputs + stimPair->size[0] *
              (maxdimlen - 1)];
          }

          maxdimlen = sample_feat->size[0];
          for (nx = 0; nx < maxdimlen; nx++) {
            if (sample_feat->data[nx] == 1.0) {
              inputs = stimulus->size[0];
              if ((nx + 1 >= 1) && (nx + 1 < inputs)) {
                b_nx = nx + 1;
              } else {
                b_nx = emlrtDynamicBoundsCheckR2012b(nx + 1, 1, inputs,
                  (emlrtBCInfo *)&mg_emlrtBCI, sp);
              }

              stimulus->data[b_nx - 1] = 0.5;
            }
          }

          /*         %% */
          /* ---------------------------------------------------------------------- */
          /*  Expose network to this stimulus, calculate selectivity, and update weights */
          /* ---------------------------------------------------------------------- */
          /*      weights = zeros(p.numLayers,p.nRows,p.nRows,p.numInputDims(p.layer),max(p.numGrids)); */
          /*      [weights, selectivity, initial_selec, p, ~, usePRC, acts, initial_acts] = VD_present_stimulus(stimulus, weights, p, features_sampled, trial, ~); */
          /*  Function called by VD_present_stimulus.m. Presents the network with the two stimuli on this trial. */
          st.site = &ib_emlrtRSI;
          outsz[0] = 1.0;
          outsz[1] = 1.0;
          outsz[2] = stimulus->size[0];
          b_st.site = &oc_emlrtRSI;
          eml_assert_valid_size_arg(&b_st, outsz);
          for (inputs = 0; inputs < 3; inputs++) {
            sz[inputs] = (int32_T)outsz[inputs];
          }

          familDiffs_temp_idx_0 = stimulus->size[0];
          maxdimlen = (int32_T)(uint32_T)familDiffs_temp_idx_0;
          if (1 > (int32_T)(uint32_T)familDiffs_temp_idx_0) {
            maxdimlen = 1;
          }

          if (stimulus->size[0] < maxdimlen) {
          } else {
            maxdimlen = stimulus->size[0];
          }

          if (1 > maxdimlen) {
            b_st.site = &nc_emlrtRSI;
            b_eml_error(&b_st);
          }

          if (sz[2] > maxdimlen) {
            b_st.site = &nc_emlrtRSI;
            b_eml_error(&b_st);
          }

          inputs = r4->size[0] * r4->size[1] * r4->size[2];
          r4->size[0] = 1;
          r4->size[1] = 1;
          r4->size[2] = sz[2];
          emxEnsureCapacity(&st, (emxArray__common *)r4, inputs, (int32_T)sizeof
                            (real_T), &emlrtRTEI);
          if (stimulus->size[0] == sz[2]) {
          } else {
            emlrtErrorWithMessageIdR2012b(&st, &vc_emlrtRTEI,
              "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
          }

          b_st.site = &mc_emlrtRSI;
          if (1 > stimulus->size[0]) {
            overflow = false;
          } else {
            overflow = (stimulus->size[0] > 2147483646);
          }

          if (overflow) {
            c_st.site = &wb_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }

          for (k = 0; k + 1 <= stimulus->size[0]; k++) {
            r4->data[k] = stimulus->data[k];
          }

          w_p[0] = p->nRows;
          w_p[1] = p->nRows;
          w_p[2] = 1.0;
          st.site = &ib_emlrtRSI;
          b_repmat(&st, r4, w_p, stimuli);
          inputs = activations->size[0] * activations->size[1] *
            activations->size[2] * activations->size[3];
          d0 = p->layer;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&se_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            activations->size[0] = (int32_T)d0;
          } else {
            activations->size[0] = (int32_T)emlrtIntegerCheckR2012b(d0,
              (emlrtDCInfo *)&re_emlrtDCI, sp);
          }

          d0 = p->nRows;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&ue_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            activations->size[1] = (int32_T)d0;
          } else {
            activations->size[1] = (int32_T)emlrtIntegerCheckR2012b(d0,
              (emlrtDCInfo *)&te_emlrtDCI, sp);
          }

          d0 = p->nRows;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&we_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            activations->size[2] = (int32_T)d0;
          } else {
            activations->size[2] = (int32_T)emlrtIntegerCheckR2012b(d0,
              (emlrtDCInfo *)&ve_emlrtDCI, sp);
          }

          d0 = p->maxNumGrids;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&ye_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            activations->size[3] = (int32_T)d0;
          } else {
            activations->size[3] = (int32_T)emlrtIntegerCheckR2012b(d0,
              (emlrtDCInfo *)&xe_emlrtDCI, sp);
          }

          emxEnsureCapacity(sp, (emxArray__common *)activations, inputs,
                            (int32_T)sizeof(real_T), &emlrtRTEI);
          d0 = p->layer;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&se_emlrtDCI, sp);
          }

          d18 = p->nRows;
          if (d18 >= 0.0) {
          } else {
            d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)&ue_emlrtDCI,
              sp);
          }

          d21 = p->nRows;
          if (d21 >= 0.0) {
          } else {
            d21 = emlrtNonNegativeCheckR2012b(d21, (emlrtDCInfo *)&we_emlrtDCI,
              sp);
          }

          d22 = p->maxNumGrids;
          if (d22 >= 0.0) {
          } else {
            d22 = emlrtNonNegativeCheckR2012b(d22, (emlrtDCInfo *)&ye_emlrtDCI,
              sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            d23 = d0;
          } else {
            d23 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&re_emlrtDCI, sp);
          }

          if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
            d24 = d18;
          } else {
            d24 = emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)&te_emlrtDCI, sp);
          }

          if (d21 == (int32_T)muDoubleScalarFloor(d21)) {
            d25 = d21;
          } else {
            d25 = emlrtIntegerCheckR2012b(d21, (emlrtDCInfo *)&ve_emlrtDCI, sp);
          }

          if (d22 == (int32_T)muDoubleScalarFloor(d22)) {
            d26 = d22;
          } else {
            d26 = emlrtIntegerCheckR2012b(d22, (emlrtDCInfo *)&xe_emlrtDCI, sp);
          }

          nx = (int32_T)d23 * (int32_T)d24 * (int32_T)d25 * (int32_T)d26;
          for (inputs = 0; inputs < nx; inputs++) {
            activations->data[inputs] = 0.0;
          }

          /*  5 grids (only 1 stimulus) */
          inputs = initial_acts->size[0] * initial_acts->size[1] *
            initial_acts->size[2] * initial_acts->size[3];
          d0 = p->layer;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&bf_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            initial_acts->size[0] = (int32_T)d0;
          } else {
            initial_acts->size[0] = (int32_T)emlrtIntegerCheckR2012b(d0,
              (emlrtDCInfo *)&af_emlrtDCI, sp);
          }

          d0 = p->nRows;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&df_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            initial_acts->size[1] = (int32_T)d0;
          } else {
            initial_acts->size[1] = (int32_T)emlrtIntegerCheckR2012b(d0,
              (emlrtDCInfo *)&cf_emlrtDCI, sp);
          }

          d0 = p->nRows;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&ff_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            initial_acts->size[2] = (int32_T)d0;
          } else {
            initial_acts->size[2] = (int32_T)emlrtIntegerCheckR2012b(d0,
              (emlrtDCInfo *)&ef_emlrtDCI, sp);
          }

          d0 = p->maxNumGrids;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&hf_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            initial_acts->size[3] = (int32_T)d0;
          } else {
            initial_acts->size[3] = (int32_T)emlrtIntegerCheckR2012b(d0,
              (emlrtDCInfo *)&gf_emlrtDCI, sp);
          }

          emxEnsureCapacity(sp, (emxArray__common *)initial_acts, inputs,
                            (int32_T)sizeof(real_T), &emlrtRTEI);
          d0 = p->layer;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&bf_emlrtDCI, sp);
          }

          d18 = p->nRows;
          if (d18 >= 0.0) {
          } else {
            d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)&df_emlrtDCI,
              sp);
          }

          d21 = p->nRows;
          if (d21 >= 0.0) {
          } else {
            d21 = emlrtNonNegativeCheckR2012b(d21, (emlrtDCInfo *)&ff_emlrtDCI,
              sp);
          }

          d22 = p->maxNumGrids;
          if (d22 >= 0.0) {
          } else {
            d22 = emlrtNonNegativeCheckR2012b(d22, (emlrtDCInfo *)&hf_emlrtDCI,
              sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            d27 = d0;
          } else {
            d27 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&af_emlrtDCI, sp);
          }

          if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
            d28 = d18;
          } else {
            d28 = emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)&cf_emlrtDCI, sp);
          }

          if (d21 == (int32_T)muDoubleScalarFloor(d21)) {
            d29 = d21;
          } else {
            d29 = emlrtIntegerCheckR2012b(d21, (emlrtDCInfo *)&ef_emlrtDCI, sp);
          }

          if (d22 == (int32_T)muDoubleScalarFloor(d22)) {
            d30 = d22;
          } else {
            d30 = emlrtIntegerCheckR2012b(d22, (emlrtDCInfo *)&gf_emlrtDCI, sp);
          }

          nx = (int32_T)d27 * (int32_T)d28 * (int32_T)d29 * (int32_T)d30;
          for (inputs = 0; inputs < nx; inputs++) {
            initial_acts->data[inputs] = 0.0;
          }

          st.site = &hb_emlrtRSI;
          b_st.site = &qc_emlrtRSI;
          c_st.site = &rc_emlrtRSI;
          if ((p->numGrids->size[1] == 1) || (p->numGrids->size[1] != 1)) {
            overflow = true;
          } else {
            overflow = false;
          }

          if (overflow) {
          } else {
            emlrtErrorWithMessageIdR2012b(&c_st, &fc_emlrtRTEI,
              "Coder:toolbox:autoDimIncompatibility", 0);
          }

          if (p->numGrids->size[1] > 0) {
          } else {
            emlrtErrorWithMessageIdR2012b(&c_st, &gc_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          d_st.site = &sc_emlrtRSI;
          ixstart = 1;
          n = p->numGrids->size[1];
          mtmp = p->numGrids->data[0];
          if (p->numGrids->size[1] > 1) {
            if (muDoubleScalarIsNaN(p->numGrids->data[0])) {
              e_st.site = &uc_emlrtRSI;
              if (2 > p->numGrids->size[1]) {
                overflow = false;
              } else {
                overflow = (p->numGrids->size[1] > 2147483646);
              }

              if (overflow) {
                f_st.site = &wb_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

              ix = 2;
              exitg10 = false;
              while ((!exitg10) && (ix <= n)) {
                ixstart = ix;
                if (!muDoubleScalarIsNaN(p->numGrids->data[ix - 1])) {
                  mtmp = p->numGrids->data[ix - 1];
                  exitg10 = true;
                } else {
                  ix++;
                }
              }
            }

            if (ixstart < p->numGrids->size[1]) {
              e_st.site = &tc_emlrtRSI;
              if (ixstart + 1 > p->numGrids->size[1]) {
                overflow = false;
              } else {
                overflow = (p->numGrids->size[1] > 2147483646);
              }

              if (overflow) {
                f_st.site = &wb_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

              while (ixstart + 1 <= n) {
                if (p->numGrids->data[ixstart] > mtmp) {
                  mtmp = p->numGrids->data[ixstart];
                }

                ixstart++;
              }
            }
          }

          inputs = selec->size[0] * selec->size[1];
          d0 = p->numLayers;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&jf_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            selec->size[0] = (int32_T)d0;
          } else {
            selec->size[0] = (int32_T)emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)
              &if_emlrtDCI, sp);
          }

          if (mtmp >= 0.0) {
            d0 = mtmp;
          } else {
            d0 = emlrtNonNegativeCheckR2012b(mtmp, (emlrtDCInfo *)&lf_emlrtDCI,
              sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            selec->size[1] = (int32_T)d0;
          } else {
            selec->size[1] = (int32_T)emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)
              &kf_emlrtDCI, sp);
          }

          emxEnsureCapacity(sp, (emxArray__common *)selec, inputs, (int32_T)
                            sizeof(real_T), &emlrtRTEI);
          d0 = p->numLayers;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&jf_emlrtDCI, sp);
          }

          if (mtmp >= 0.0) {
            d18 = mtmp;
          } else {
            d18 = emlrtNonNegativeCheckR2012b(mtmp, (emlrtDCInfo *)&lf_emlrtDCI,
              sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            d31 = d0;
          } else {
            d31 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&if_emlrtDCI, sp);
          }

          if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
            d32 = d18;
          } else {
            d32 = emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)&kf_emlrtDCI, sp);
          }

          nx = (int32_T)d31 * (int32_T)d32;
          for (inputs = 0; inputs < nx; inputs++) {
            selec->data[inputs] = 0.0;
          }

          st.site = &gb_emlrtRSI;
          b_st.site = &qc_emlrtRSI;
          c_st.site = &rc_emlrtRSI;
          if ((p->numGrids->size[1] == 1) || (p->numGrids->size[1] != 1)) {
            overflow = true;
          } else {
            overflow = false;
          }

          if (overflow) {
          } else {
            emlrtErrorWithMessageIdR2012b(&c_st, &fc_emlrtRTEI,
              "Coder:toolbox:autoDimIncompatibility", 0);
          }

          if (p->numGrids->size[1] > 0) {
          } else {
            emlrtErrorWithMessageIdR2012b(&c_st, &gc_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          d_st.site = &sc_emlrtRSI;
          ixstart = 1;
          n = p->numGrids->size[1];
          mtmp = p->numGrids->data[0];
          if (p->numGrids->size[1] > 1) {
            if (muDoubleScalarIsNaN(p->numGrids->data[0])) {
              e_st.site = &uc_emlrtRSI;
              if (2 > p->numGrids->size[1]) {
                overflow = false;
              } else {
                overflow = (p->numGrids->size[1] > 2147483646);
              }

              if (overflow) {
                f_st.site = &wb_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

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
              e_st.site = &tc_emlrtRSI;
              if (ixstart + 1 > p->numGrids->size[1]) {
                overflow = false;
              } else {
                overflow = (p->numGrids->size[1] > 2147483646);
              }

              if (overflow) {
                f_st.site = &wb_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

              while (ixstart + 1 <= n) {
                if (p->numGrids->data[ixstart] > mtmp) {
                  mtmp = p->numGrids->data[ixstart];
                }

                ixstart++;
              }
            }
          }

          inputs = initial_selec->size[0] * initial_selec->size[1];
          d0 = p->numLayers;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&nf_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            initial_selec->size[0] = (int32_T)d0;
          } else {
            initial_selec->size[0] = (int32_T)emlrtIntegerCheckR2012b(d0,
              (emlrtDCInfo *)&mf_emlrtDCI, sp);
          }

          if (mtmp >= 0.0) {
            d0 = mtmp;
          } else {
            d0 = emlrtNonNegativeCheckR2012b(mtmp, (emlrtDCInfo *)&pf_emlrtDCI,
              sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            initial_selec->size[1] = (int32_T)d0;
          } else {
            initial_selec->size[1] = (int32_T)emlrtIntegerCheckR2012b(d0,
              (emlrtDCInfo *)&of_emlrtDCI, sp);
          }

          emxEnsureCapacity(sp, (emxArray__common *)initial_selec, inputs,
                            (int32_T)sizeof(real_T), &emlrtRTEI);
          d0 = p->numLayers;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&nf_emlrtDCI, sp);
          }

          if (mtmp >= 0.0) {
            d18 = mtmp;
          } else {
            d18 = emlrtNonNegativeCheckR2012b(mtmp, (emlrtDCInfo *)&pf_emlrtDCI,
              sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            d33 = d0;
          } else {
            d33 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&mf_emlrtDCI, sp);
          }

          if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
            d34 = d18;
          } else {
            d34 = emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)&of_emlrtDCI, sp);
          }

          nx = (int32_T)d33 * (int32_T)d34;
          for (inputs = 0; inputs < nx; inputs++) {
            initial_selec->data[inputs] = 0.0;
          }

          inputs = f_inputs->size[0] * f_inputs->size[1];
          d0 = p->nRows;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&rf_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            f_inputs->size[0] = (int32_T)d0;
          } else {
            f_inputs->size[0] = (int32_T)emlrtIntegerCheckR2012b(d0,
              (emlrtDCInfo *)&qf_emlrtDCI, sp);
          }

          d0 = p->nRows;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&tf_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            f_inputs->size[1] = (int32_T)d0;
          } else {
            f_inputs->size[1] = (int32_T)emlrtIntegerCheckR2012b(d0,
              (emlrtDCInfo *)&sf_emlrtDCI, sp);
          }

          emxEnsureCapacity(sp, (emxArray__common *)f_inputs, inputs, (int32_T)
                            sizeof(real_T), &emlrtRTEI);
          d0 = p->nRows;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&rf_emlrtDCI, sp);
          }

          d18 = p->nRows;
          if (d18 >= 0.0) {
          } else {
            d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)&tf_emlrtDCI,
              sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            d35 = d0;
          } else {
            d35 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&qf_emlrtDCI, sp);
          }

          if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
            d36 = d18;
          } else {
            d36 = emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)&sf_emlrtDCI, sp);
          }

          nx = (int32_T)d35 * (int32_T)d36;
          for (inputs = 0; inputs < nx; inputs++) {
            f_inputs->data[inputs] = 0.0;
          }

          /*  pktot.fin_act_peak = zeros(p.numLayers,max(p.numGrids)); */
          /*  pktot.fin_act_total = zeros(p.numLayers,max(p.numGrids)); */
          /*  pktot.init_act_peak = zeros(p.numLayers,max(p.numGrids)); */
          /*  pktot.init_act_total = zeros(p.numLayers,max(p.numGrids)); */
          /*  winact = zeros(p.numLayers,p.maxNumGrids,2);  % activation in each grid in x,y coordinates? */
          inputs = row_dist_mat->size[0] * row_dist_mat->size[1] *
            row_dist_mat->size[2];
          d0 = p->numRows;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&vf_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            row_dist_mat->size[0] = (int32_T)d0;
          } else {
            row_dist_mat->size[0] = (int32_T)emlrtIntegerCheckR2012b(d0,
              (emlrtDCInfo *)&uf_emlrtDCI, sp);
          }

          d0 = p->numRows;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&xf_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            row_dist_mat->size[1] = (int32_T)d0;
          } else {
            row_dist_mat->size[1] = (int32_T)emlrtIntegerCheckR2012b(d0,
              (emlrtDCInfo *)&wf_emlrtDCI, sp);
          }

          row_dist_mat->size[2] = 2;
          emxEnsureCapacity(sp, (emxArray__common *)row_dist_mat, inputs,
                            (int32_T)sizeof(real_T), &emlrtRTEI);
          d0 = p->numRows;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&vf_emlrtDCI, sp);
          }

          d18 = p->numRows;
          if (d18 >= 0.0) {
          } else {
            d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)&xf_emlrtDCI,
              sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            d37 = d0;
          } else {
            d37 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&uf_emlrtDCI, sp);
          }

          if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
            d38 = d18;
          } else {
            d38 = emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)&wf_emlrtDCI, sp);
          }

          nx = (int32_T)d37 * (int32_T)d38 << 1;
          for (inputs = 0; inputs < nx; inputs++) {
            row_dist_mat->data[inputs] = 0.0;
          }

          inputs = col_dist_mat->size[0] * col_dist_mat->size[1] *
            col_dist_mat->size[2];
          d0 = p->numRows;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&ag_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            col_dist_mat->size[0] = (int32_T)d0;
          } else {
            col_dist_mat->size[0] = (int32_T)emlrtIntegerCheckR2012b(d0,
              (emlrtDCInfo *)&yf_emlrtDCI, sp);
          }

          d0 = p->numRows;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&cg_emlrtDCI, sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            col_dist_mat->size[1] = (int32_T)d0;
          } else {
            col_dist_mat->size[1] = (int32_T)emlrtIntegerCheckR2012b(d0,
              (emlrtDCInfo *)&bg_emlrtDCI, sp);
          }

          col_dist_mat->size[2] = 2;
          emxEnsureCapacity(sp, (emxArray__common *)col_dist_mat, inputs,
                            (int32_T)sizeof(real_T), &emlrtRTEI);
          d0 = p->numRows;
          if (d0 >= 0.0) {
          } else {
            d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&ag_emlrtDCI, sp);
          }

          d18 = p->numRows;
          if (d18 >= 0.0) {
          } else {
            d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)&cg_emlrtDCI,
              sp);
          }

          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            d39 = d0;
          } else {
            d39 = emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)&yf_emlrtDCI, sp);
          }

          if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
            d40 = d18;
          } else {
            d40 = emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)&bg_emlrtDCI, sp);
          }

          nx = (int32_T)d39 * (int32_T)d40 << 1;
          for (inputs = 0; inputs < nx; inputs++) {
            col_dist_mat->data[inputs] = 0.0;
          }

          selectivity = 0.0;

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
          emlrtForLoopVectorCheckR2012b(1.0, 1.0, p->layer, mxDOUBLE_CLASS,
            (int32_T)p->layer, (emlrtRTEInfo *)&sc_emlrtRTEI, sp);
          layer = 0;
          while (layer <= (int32_T)p->layer - 1) {
            st.site = &fb_emlrtRSI;
            inputs = layer + 1;
            emlrtDynamicBoundsCheckR2012b(inputs, 1, 2, (emlrtBCInfo *)
              &gd_emlrtBCI, &st);
            if ((layer + 1 >= 1) && (layer + 1 < 2)) {
              b_layer = layer + 1;
            } else {
              b_layer = emlrtDynamicBoundsCheckR2012b(layer + 1, 1, 2,
                (emlrtBCInfo *)&mf_emlrtBCI, &st);
            }

            if ((layer + 1 >= 1) && (layer + 1 < 2)) {
              c_layer = layer + 1;
            } else {
              c_layer = emlrtDynamicBoundsCheckR2012b(layer + 1, 1, 2,
                (emlrtBCInfo *)&nf_emlrtBCI, &st);
            }

            b = p->nGrids[b_layer - 1] * p->numInputDims[c_layer - 1];
            b_st.site = &vc_emlrtRSI;
            if (muDoubleScalarIsNaN(p->numInputDims[layer]) ||
                muDoubleScalarIsNaN(b)) {
              n = 0;
              anew = rtNaN;
              apnd = b;
              overflow = false;
            } else if ((p->numInputDims[layer] == 0.0) || ((1.0 < b) &&
                        (p->numInputDims[layer] < 0.0)) || ((b < 1.0) &&
                        (p->numInputDims[layer] > 0.0))) {
              n = -1;
              anew = 1.0;
              apnd = b;
              overflow = false;
            } else if (muDoubleScalarIsInf(b)) {
              n = 0;
              anew = rtNaN;
              apnd = b;
              if (muDoubleScalarIsInf(p->numInputDims[layer]) || (1.0 == b)) {
                overflow = true;
              } else {
                overflow = false;
              }

              overflow = !overflow;
            } else if (muDoubleScalarIsInf(p->numInputDims[layer])) {
              n = 0;
              anew = 1.0;
              apnd = b;
              overflow = false;
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

              overflow = (2.147483647E+9 < ndbl);
              if (ndbl >= 0.0) {
                n = (int32_T)ndbl - 1;
              } else {
                n = -1;
              }
            }

            c_st.site = &wc_emlrtRSI;
            if (!overflow) {
            } else {
              emlrtErrorWithMessageIdR2012b(&c_st, &wc_emlrtRTEI,
                "Coder:MATLAB:pmaxsize", 0);
            }

            inputs = avail_feat->size[0] * avail_feat->size[1];
            avail_feat->size[0] = 1;
            avail_feat->size[1] = n + 1;
            emxEnsureCapacity(&b_st, (emxArray__common *)avail_feat, inputs,
                              (int32_T)sizeof(real_T), &emlrtRTEI);
            if (n + 1 > 0) {
              avail_feat->data[0] = anew;
              if (n + 1 > 1) {
                avail_feat->data[n] = apnd;
                inputs = n + (n < 0);
                if (inputs >= 0) {
                  maxdimlen = (int32_T)((uint32_T)inputs >> 1);
                } else {
                  maxdimlen = (int32_T)~(~(uint32_T)inputs >> 1);
                }

                c_st.site = &xc_emlrtRSI;
                for (k = 1; k < maxdimlen; k++) {
                  kd = (real_T)k * p->numInputDims[layer];
                  avail_feat->data[k] = anew + kd;
                  avail_feat->data[n - k] = apnd - kd;
                }

                if (maxdimlen << 1 == n) {
                  avail_feat->data[maxdimlen] = (anew + apnd) / 2.0;
                } else {
                  kd = (real_T)maxdimlen * p->numInputDims[layer];
                  avail_feat->data[maxdimlen] = anew + kd;
                  avail_feat->data[maxdimlen + 1] = apnd - kd;
                }
              }
            }

            inputs = featuresToCompare->size[0] * featuresToCompare->size[1];
            featuresToCompare->size[0] = 1;
            featuresToCompare->size[1] = avail_feat->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)featuresToCompare, inputs,
                              (int32_T)sizeof(real_T), &emlrtRTEI);
            kd = p->numInputDims[layer];
            nx = avail_feat->size[0] * avail_feat->size[1];
            for (inputs = 0; inputs < nx; inputs++) {
              featuresToCompare->data[inputs] = (avail_feat->data[inputs] + kd)
                - 1.0;
            }

            d0 = p->nGrids[layer];
            emlrtForLoopVectorCheckR2012b(1.0, 1.0, p->nGrids[layer],
              mxDOUBLE_CLASS, (int32_T)p->nGrids[layer], (emlrtRTEInfo *)
              &rc_emlrtRTEI, sp);
            grid = 0;
            while (grid <= (int32_T)d0 - 1) {
              d18 = p->nRows;
              if (d18 >= 0.0) {
              } else {
                d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)
                  &bh_emlrtDCI, sp);
              }

              if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
                maxdimlen = (int32_T)d18;
              } else {
                maxdimlen = (int32_T)emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)
                  &ah_emlrtDCI, sp);
              }

              d18 = p->nRows;
              if (d18 >= 0.0) {
              } else {
                d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)
                  &dh_emlrtDCI, sp);
              }

              emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)&ch_emlrtDCI, sp);
              d18 = p->numInputDims[layer];
              if (d18 >= 0.0) {
              } else {
                d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)
                  &fh_emlrtDCI, sp);
              }

              emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)&eh_emlrtDCI, sp);
              inputs = input_mat->size[0] * input_mat->size[1] * input_mat->
                size[2];
              input_mat->size[0] = maxdimlen;
              emxEnsureCapacity(sp, (emxArray__common *)input_mat, inputs,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              d18 = p->nRows;
              if (d18 >= 0.0) {
              } else {
                d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)
                  &bh_emlrtDCI, sp);
              }

              emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)&ah_emlrtDCI, sp);
              d18 = p->nRows;
              if (d18 >= 0.0) {
              } else {
                d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)
                  &dh_emlrtDCI, sp);
              }

              if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
                maxdimlen = (int32_T)d18;
              } else {
                maxdimlen = (int32_T)emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)
                  &ch_emlrtDCI, sp);
              }

              d18 = p->numInputDims[layer];
              if (d18 >= 0.0) {
              } else {
                d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)
                  &fh_emlrtDCI, sp);
              }

              emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)&eh_emlrtDCI, sp);
              inputs = input_mat->size[0] * input_mat->size[1] * input_mat->
                size[2];
              input_mat->size[1] = maxdimlen;
              emxEnsureCapacity(sp, (emxArray__common *)input_mat, inputs,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              d18 = p->nRows;
              if (d18 >= 0.0) {
              } else {
                d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)
                  &bh_emlrtDCI, sp);
              }

              emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)&ah_emlrtDCI, sp);
              d18 = p->nRows;
              if (d18 >= 0.0) {
              } else {
                d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)
                  &dh_emlrtDCI, sp);
              }

              emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)&ch_emlrtDCI, sp);
              d18 = p->numInputDims[layer];
              if (d18 >= 0.0) {
              } else {
                d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)
                  &fh_emlrtDCI, sp);
              }

              if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
                maxdimlen = (int32_T)d18;
              } else {
                maxdimlen = (int32_T)emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)
                  &eh_emlrtDCI, sp);
              }

              inputs = input_mat->size[0] * input_mat->size[1] * input_mat->
                size[2];
              input_mat->size[2] = maxdimlen;
              emxEnsureCapacity(sp, (emxArray__common *)input_mat, inputs,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              d18 = p->nRows;
              if (d18 >= 0.0) {
              } else {
                d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)
                  &bh_emlrtDCI, sp);
              }

              d21 = p->nRows;
              if (d21 >= 0.0) {
              } else {
                d21 = emlrtNonNegativeCheckR2012b(d21, (emlrtDCInfo *)
                  &dh_emlrtDCI, sp);
              }

              d22 = p->numInputDims[layer];
              if (d22 >= 0.0) {
              } else {
                d22 = emlrtNonNegativeCheckR2012b(d22, (emlrtDCInfo *)
                  &fh_emlrtDCI, sp);
              }

              if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
                d41 = d18;
              } else {
                d41 = emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)&ah_emlrtDCI,
                  sp);
              }

              if (d21 == (int32_T)muDoubleScalarFloor(d21)) {
                d42 = d21;
              } else {
                d42 = emlrtIntegerCheckR2012b(d21, (emlrtDCInfo *)&ch_emlrtDCI,
                  sp);
              }

              if (d22 == (int32_T)muDoubleScalarFloor(d22)) {
                d43 = d22;
              } else {
                d43 = emlrtIntegerCheckR2012b(d22, (emlrtDCInfo *)&eh_emlrtDCI,
                  sp);
              }

              nx = (int32_T)d41 * (int32_T)d42 * (int32_T)d43;
              for (inputs = 0; inputs < nx; inputs++) {
                input_mat->data[inputs] = 0.0;
              }

              /*  should end with a (:,:,15) input_mat for PRC layer that checks features 1:15, and a (:,:,3) input_mat for caudal, where each 4th-dim checks three features */
              inputs = avail_feat->size[1];
              min_col_dist_mat = grid + 1;
              emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                (emlrtBCInfo *)&fd_emlrtBCI, sp);
              inputs = featuresToCompare->size[1];
              min_col_dist_mat = grid + 1;
              emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                (emlrtBCInfo *)&ed_emlrtBCI, sp);
              if (avail_feat->data[grid] > featuresToCompare->data[grid]) {
                inputs = 0;
                min_col_dist_mat = -1;
              } else {
                inputs = stimuli->size[2];
                d18 = avail_feat->data[grid];
                if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
                  min_col_dist_mat = (int32_T)d18;
                } else {
                  min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(d18,
                    (emlrtDCInfo *)&v_emlrtDCI, sp);
                }

                if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
                  f_min_col_dist_mat = min_col_dist_mat;
                } else {
                  f_min_col_dist_mat = emlrtDynamicBoundsCheckR2012b
                    (min_col_dist_mat, 1, inputs, (emlrtBCInfo *)&dd_emlrtBCI,
                     sp);
                }

                inputs = f_min_col_dist_mat - 1;
                min_col_dist_mat = stimuli->size[2];
                d18 = featuresToCompare->data[grid];
                if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
                  idx = (int32_T)d18;
                } else {
                  idx = (int32_T)emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)
                    &v_emlrtDCI, sp);
                }

                if ((idx >= 1) && (idx < min_col_dist_mat)) {
                  d_idx = idx;
                } else {
                  d_idx = emlrtDynamicBoundsCheckR2012b(idx, 1, min_col_dist_mat,
                    (emlrtBCInfo *)&dd_emlrtBCI, sp);
                }

                min_col_dist_mat = d_idx - 1;
              }

              nx = (int32_T)p->nRows;
              idx = ii->size[0];
              ii->size[0] = (int32_T)p->nRows;
              emxEnsureCapacity(sp, (emxArray__common *)ii, idx, (int32_T)sizeof
                                (int32_T), &emlrtRTEI);
              for (idx = 0; idx < nx; idx++) {
                ii->data[idx] = idx;
              }

              nx = (int32_T)p->nRows;
              idx = r1->size[0];
              r1->size[0] = (int32_T)p->nRows;
              emxEnsureCapacity(sp, (emxArray__common *)r1, idx, (int32_T)sizeof
                                (int32_T), &emlrtRTEI);
              for (idx = 0; idx < nx; idx++) {
                r1->data[idx] = idx;
              }

              nx = (int32_T)p->numInputDims[layer];
              idx = r2->size[0];
              r2->size[0] = (int32_T)p->numInputDims[layer];
              emxEnsureCapacity(sp, (emxArray__common *)r2, idx, (int32_T)sizeof
                                (int32_T), &emlrtRTEI);
              for (idx = 0; idx < nx; idx++) {
                r2->data[idx] = idx;
              }

              c_ii[0] = ii->size[0];
              c_ii[1] = r1->size[0];
              c_ii[2] = r2->size[0];
              nx = stimuli->size[0];
              loop_ub = stimuli->size[1];
              idx = c_stimuli->size[0] * c_stimuli->size[1] * c_stimuli->size[2];
              c_stimuli->size[0] = nx;
              c_stimuli->size[1] = loop_ub;
              c_stimuli->size[2] = (min_col_dist_mat - inputs) + 1;
              emxEnsureCapacity(sp, (emxArray__common *)c_stimuli, idx, (int32_T)
                                sizeof(real_T), &emlrtRTEI);
              b_loop_ub = min_col_dist_mat - inputs;
              for (idx = 0; idx <= b_loop_ub; idx++) {
                for (i15 = 0; i15 < loop_ub; i15++) {
                  for (maxdimlen = 0; maxdimlen < nx; maxdimlen++) {
                    c_stimuli->data[(maxdimlen + c_stimuli->size[0] * i15) +
                      c_stimuli->size[0] * c_stimuli->size[1] * idx] =
                      stimuli->data[(maxdimlen + stimuli->size[0] * i15) +
                      stimuli->size[0] * stimuli->size[1] * (inputs + idx)];
                  }
                }
              }

              for (idx = 0; idx < 3; idx++) {
                sz[idx] = c_stimuli->size[idx];
              }

              emlrtSubAssignSizeCheckR2012b(c_ii, 3, sz, 3, (emlrtECInfo *)
                &u_emlrtECI, sp);
              nx = stimuli->size[0] - 1;
              loop_ub = stimuli->size[1] - 1;
              b_loop_ub = min_col_dist_mat - inputs;
              for (min_col_dist_mat = 0; min_col_dist_mat <= b_loop_ub;
                   min_col_dist_mat++) {
                for (idx = 0; idx <= loop_ub; idx++) {
                  for (i15 = 0; i15 <= nx; i15++) {
                    input_mat->data[(ii->data[i15] + input_mat->size[0] *
                                     r1->data[idx]) + input_mat->size[0] *
                      input_mat->size[1] * r2->data[min_col_dist_mat]] =
                      stimuli->data[(i15 + stimuli->size[0] * idx) +
                      stimuli->size[0] * stimuli->size[1] * (inputs +
                      min_col_dist_mat)];
                  }
                }
              }

              /*  put the variable 'weights' into the format previously accepted by the model. */
              if (1.0 > p->numInputDims[layer]) {
                nx = 0;
              } else {
                inputs = weights->size[3];
                emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)
                  &bd_emlrtBCI, sp);
                inputs = weights->size[3];
                d18 = p->numInputDims[layer];
                if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
                  min_col_dist_mat = (int32_T)d18;
                } else {
                  min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(d18,
                    (emlrtDCInfo *)&u_emlrtDCI, sp);
                }

                if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
                  nx = min_col_dist_mat;
                } else {
                  nx = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                    (emlrtBCInfo *)&bd_emlrtBCI, sp);
                }
              }

              inputs = weights->size[0];
              min_col_dist_mat = layer + 1;
              emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                (emlrtBCInfo *)&cd_emlrtBCI, sp);
              inputs = weights->size[4] * weights->size[5];
              min_col_dist_mat = grid + 1;
              emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                (emlrtBCInfo *)&ad_emlrtBCI, sp);
              maxdimlen = weights->size[0];
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
              emxEnsureCapacity(sp, (emxArray__common *)b_weights, inputs,
                                (int32_T)sizeof(real_T), &emlrtRTEI);
              for (inputs = 0; inputs < nx; inputs++) {
                for (min_col_dist_mat = 0; min_col_dist_mat < b_loop_ub;
                     min_col_dist_mat++) {
                  for (idx = 0; idx < loop_ub; idx++) {
                    b_weights->data[(b_weights->size[0] * idx + b_weights->size
                                     [0] * b_weights->size[1] * min_col_dist_mat)
                      + b_weights->size[0] * b_weights->size[1] *
                      b_weights->size[2] * inputs] = weights->data[(((layer +
                      maxdimlen * idx) + maxdimlen * weights_idx_1 *
                      min_col_dist_mat) + maxdimlen * weights_idx_1 *
                      weights_idx_2 * inputs) + maxdimlen * weights_idx_1 *
                      weights_idx_2 * weights_idx_3 * grid];
                  }
                }
              }

              st.site = &eb_emlrtRSI;
              b_squeeze(&st, b_weights, weights_child);

              /*  if no features that this grid pays attention to were sampled, */
              /*  or if dealing with PRC but 5 features weren't sampled, skip */
              /*  presenting */
              /*          if (layer==1 && (~any(features_sampled==grid) || usePRC)) || (layer==2 && ~usePRC) */
              guard2 = false;
              guard3 = false;
              if (!(p->fives != 0.0)) {
                if (1.0 + (real_T)layer == 1.0) {
                  inputs = b_features_sampled->size[0];
                  b_features_sampled->size[0] = features_sampled->size[0];
                  emxEnsureCapacity(sp, (emxArray__common *)b_features_sampled,
                                    inputs, (int32_T)sizeof(boolean_T),
                                    &emlrtRTEI);
                  nx = features_sampled->size[0];
                  for (inputs = 0; inputs < nx; inputs++) {
                    b_features_sampled->data[inputs] = (features_sampled->
                      data[inputs] == 1.0 + (real_T)grid);
                  }

                  st.site = &db_emlrtRSI;
                  if (!b_any(&st, b_features_sampled)) {
                  } else {
                    guard3 = true;
                  }
                } else {
                  guard3 = true;
                }
              } else {
                guard2 = true;
              }

              if (guard3) {
                if ((1.0 + (real_T)layer == 2.0) && (!(usePRC != 0))) {
                } else {
                  guard2 = true;
                }
              }

              if (guard2) {
                nEncodCycles = p->nEncodCycles;
                if (p->variableEncode != 0.0) {
                  st.site = &cb_emlrtRSI;
                  stick_switch = b_rand();
                  do {
                    exitg8 = 0;
                    d18 = p->stimCond;
                    if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
                      inputs = (int32_T)d18;
                    } else {
                      inputs = (int32_T)emlrtIntegerCheckR2012b(d18,
                        (emlrtDCInfo *)&gh_emlrtDCI, sp);
                    }

                    if ((inputs >= 1) && (inputs < 2)) {
                      j_inputs = inputs;
                    } else {
                      j_inputs = emlrtDynamicBoundsCheckR2012b(inputs, 1, 2,
                        (emlrtBCInfo *)&of_emlrtBCI, sp);
                    }

                    if (stick_switch < p->fixn_ratio_lowHigh[j_inputs - 1]) {
                      nEncodCycles += p->nEncodCycles;
                      inputs = p->fixations->size[1];
                      min_col_dist_mat = p->fixations->size[1];
                      if ((trial >= 1) && (trial < inputs)) {
                        h_trial = trial;
                      } else {
                        h_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                          (emlrtBCInfo *)&kg_emlrtBCI, sp);
                      }

                      if ((trial >= 1) && (trial < min_col_dist_mat)) {
                        i_trial = trial;
                      } else {
                        i_trial = emlrtDynamicBoundsCheckR2012b(trial, 1,
                          min_col_dist_mat, (emlrtBCInfo *)&lg_emlrtBCI, sp);
                      }

                      p->fixations->data[h_trial - 1] = p->fixations->
                        data[i_trial - 1] + 1.0;

                      /* % total fixations across both stimuli */
                      st.site = &bb_emlrtRSI;
                      stick_switch = b_rand();
                      if (*emlrtBreakCheckR2012bFlagVar != 0) {
                        emlrtBreakCheckR2012b(sp);
                      }
                    } else {
                      exitg8 = 1;
                    }
                  } while (exitg8 == 0);
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
                emxEnsureCapacity(sp, (emxArray__common *)b_input_mat, inputs,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                for (inputs = 0; inputs < b_loop_ub; inputs++) {
                  for (min_col_dist_mat = 0; min_col_dist_mat < loop_ub;
                       min_col_dist_mat++) {
                    for (idx = 0; idx < nx; idx++) {
                      b_input_mat->data[(idx + b_input_mat->size[0] *
                                         min_col_dist_mat) + b_input_mat->size[0]
                        * b_input_mat->size[1] * inputs] = input_mat->data[(idx
                        + input_mat->size[0] * min_col_dist_mat) +
                        input_mat->size[0] * input_mat->size[1] * inputs];
                    }
                  }
                }

                st.site = &ab_emlrtRSI;
                findWinningNode(&st, weights_child, b_input_mat, p->
                                numInputDims[layer], &win_row, &win_col,
                                dist_mat);
                emlrtForLoopVectorCheckR2012b(1.0, 1.0, nEncodCycles,
                  mxDOUBLE_CLASS, (int32_T)nEncodCycles, (emlrtRTEInfo *)
                  &qc_emlrtRTEI, sp);
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
                  nx = row_dist_mat->size[0];
                  inputs = ii->size[0];
                  ii->size[0] = nx;
                  emxEnsureCapacity(sp, (emxArray__common *)ii, inputs, (int32_T)
                                    sizeof(int32_T), &emlrtRTEI);
                  for (inputs = 0; inputs < nx; inputs++) {
                    ii->data[inputs] = inputs;
                  }

                  nx = row_dist_mat->size[1];
                  inputs = r1->size[0];
                  r1->size[0] = nx;
                  emxEnsureCapacity(sp, (emxArray__common *)r1, inputs, (int32_T)
                                    sizeof(int32_T), &emlrtRTEI);
                  for (inputs = 0; inputs < nx; inputs++) {
                    r1->data[inputs] = inputs;
                  }

                  inputs = p->gridMat->size[2];
                  emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)
                    &yc_emlrtBCI, sp);
                  nx = p->gridMat->size[0];
                  loop_ub = p->gridMat->size[1];
                  inputs = v_p->size[0] * v_p->size[1];
                  v_p->size[0] = nx;
                  v_p->size[1] = loop_ub;
                  emxEnsureCapacity(sp, (emxArray__common *)v_p, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (inputs = 0; inputs < loop_ub; inputs++) {
                    for (min_col_dist_mat = 0; min_col_dist_mat < nx;
                         min_col_dist_mat++) {
                      v_p->data[min_col_dist_mat + v_p->size[0] * inputs] =
                        p->gridMat->data[min_col_dist_mat + p->gridMat->size[0] *
                        inputs] - win_row;
                    }
                  }

                  b_abs(sp, v_p, f_inputs);
                  d_ii[0] = ii->size[0];
                  d_ii[1] = r1->size[0];
                  emlrtSubAssignSizeCheckR2012b(d_ii, 2, *(int32_T (*)[2])
                    f_inputs->size, 2, (emlrtECInfo *)&t_emlrtECI, sp);
                  nx = f_inputs->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    loop_ub = f_inputs->size[0];
                    for (min_col_dist_mat = 0; min_col_dist_mat < loop_ub;
                         min_col_dist_mat++) {
                      row_dist_mat->data[ii->data[min_col_dist_mat] +
                        row_dist_mat->size[0] * r1->data[inputs]] =
                        f_inputs->data[min_col_dist_mat + f_inputs->size[0] *
                        inputs];
                    }
                  }

                  nx = row_dist_mat->size[0];
                  inputs = ii->size[0];
                  ii->size[0] = nx;
                  emxEnsureCapacity(sp, (emxArray__common *)ii, inputs, (int32_T)
                                    sizeof(int32_T), &emlrtRTEI);
                  for (inputs = 0; inputs < nx; inputs++) {
                    ii->data[inputs] = inputs;
                  }

                  nx = row_dist_mat->size[1];
                  inputs = r1->size[0];
                  r1->size[0] = nx;
                  emxEnsureCapacity(sp, (emxArray__common *)r1, inputs, (int32_T)
                                    sizeof(int32_T), &emlrtRTEI);
                  for (inputs = 0; inputs < nx; inputs++) {
                    r1->data[inputs] = inputs;
                  }

                  inputs = p->gridMat->size[2];
                  emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)
                    &xc_emlrtBCI, sp);
                  nx = p->gridMat->size[0];
                  loop_ub = p->gridMat->size[1];
                  inputs = u_p->size[0] * u_p->size[1];
                  u_p->size[0] = nx;
                  u_p->size[1] = loop_ub;
                  emxEnsureCapacity(sp, (emxArray__common *)u_p, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (inputs = 0; inputs < loop_ub; inputs++) {
                    for (min_col_dist_mat = 0; min_col_dist_mat < nx;
                         min_col_dist_mat++) {
                      u_p->data[min_col_dist_mat + u_p->size[0] * inputs] =
                        p->gridMat->data[min_col_dist_mat + p->gridMat->size[0] *
                        inputs] - win_row;
                    }
                  }

                  b_abs(sp, u_p, f_inputs);
                  e_ii[0] = ii->size[0];
                  e_ii[1] = r1->size[0];
                  emlrtSubAssignSizeCheckR2012b(e_ii, 2, *(int32_T (*)[2])
                    f_inputs->size, 2, (emlrtECInfo *)&s_emlrtECI, sp);
                  nx = f_inputs->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    loop_ub = f_inputs->size[0];
                    for (min_col_dist_mat = 0; min_col_dist_mat < loop_ub;
                         min_col_dist_mat++) {
                      row_dist_mat->data[(ii->data[min_col_dist_mat] +
                                          row_dist_mat->size[0] * r1->
                                          data[inputs]) + row_dist_mat->size[0] *
                        row_dist_mat->size[1]] = p->nRows - f_inputs->
                        data[min_col_dist_mat + f_inputs->size[0] * inputs];
                    }
                  }

                  nx = col_dist_mat->size[0];
                  inputs = ii->size[0];
                  ii->size[0] = nx;
                  emxEnsureCapacity(sp, (emxArray__common *)ii, inputs, (int32_T)
                                    sizeof(int32_T), &emlrtRTEI);
                  for (inputs = 0; inputs < nx; inputs++) {
                    ii->data[inputs] = inputs;
                  }

                  nx = col_dist_mat->size[1];
                  inputs = r1->size[0];
                  r1->size[0] = nx;
                  emxEnsureCapacity(sp, (emxArray__common *)r1, inputs, (int32_T)
                                    sizeof(int32_T), &emlrtRTEI);
                  for (inputs = 0; inputs < nx; inputs++) {
                    r1->data[inputs] = inputs;
                  }

                  inputs = p->gridMat->size[2];
                  emlrtDynamicBoundsCheckR2012b(2, 1, inputs, (emlrtBCInfo *)
                    &wc_emlrtBCI, sp);
                  nx = p->gridMat->size[0];
                  loop_ub = p->gridMat->size[1];
                  inputs = t_p->size[0] * t_p->size[1];
                  t_p->size[0] = nx;
                  t_p->size[1] = loop_ub;
                  emxEnsureCapacity(sp, (emxArray__common *)t_p, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (inputs = 0; inputs < loop_ub; inputs++) {
                    for (min_col_dist_mat = 0; min_col_dist_mat < nx;
                         min_col_dist_mat++) {
                      t_p->data[min_col_dist_mat + t_p->size[0] * inputs] =
                        p->gridMat->data[(min_col_dist_mat + p->gridMat->size[0]
                                          * inputs) + p->gridMat->size[0] *
                        p->gridMat->size[1]] - win_col;
                    }
                  }

                  b_abs(sp, t_p, f_inputs);
                  f_ii[0] = ii->size[0];
                  f_ii[1] = r1->size[0];
                  emlrtSubAssignSizeCheckR2012b(f_ii, 2, *(int32_T (*)[2])
                    f_inputs->size, 2, (emlrtECInfo *)&r_emlrtECI, sp);
                  nx = f_inputs->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    loop_ub = f_inputs->size[0];
                    for (min_col_dist_mat = 0; min_col_dist_mat < loop_ub;
                         min_col_dist_mat++) {
                      col_dist_mat->data[ii->data[min_col_dist_mat] +
                        col_dist_mat->size[0] * r1->data[inputs]] =
                        f_inputs->data[min_col_dist_mat + f_inputs->size[0] *
                        inputs];
                    }
                  }

                  nx = col_dist_mat->size[0];
                  inputs = ii->size[0];
                  ii->size[0] = nx;
                  emxEnsureCapacity(sp, (emxArray__common *)ii, inputs, (int32_T)
                                    sizeof(int32_T), &emlrtRTEI);
                  for (inputs = 0; inputs < nx; inputs++) {
                    ii->data[inputs] = inputs;
                  }

                  nx = col_dist_mat->size[1];
                  inputs = r1->size[0];
                  r1->size[0] = nx;
                  emxEnsureCapacity(sp, (emxArray__common *)r1, inputs, (int32_T)
                                    sizeof(int32_T), &emlrtRTEI);
                  for (inputs = 0; inputs < nx; inputs++) {
                    r1->data[inputs] = inputs;
                  }

                  inputs = p->gridMat->size[2];
                  emlrtDynamicBoundsCheckR2012b(2, 1, inputs, (emlrtBCInfo *)
                    &vc_emlrtBCI, sp);
                  nx = p->gridMat->size[0];
                  loop_ub = p->gridMat->size[1];
                  inputs = s_p->size[0] * s_p->size[1];
                  s_p->size[0] = nx;
                  s_p->size[1] = loop_ub;
                  emxEnsureCapacity(sp, (emxArray__common *)s_p, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (inputs = 0; inputs < loop_ub; inputs++) {
                    for (min_col_dist_mat = 0; min_col_dist_mat < nx;
                         min_col_dist_mat++) {
                      s_p->data[min_col_dist_mat + s_p->size[0] * inputs] =
                        p->gridMat->data[(min_col_dist_mat + p->gridMat->size[0]
                                          * inputs) + p->gridMat->size[0] *
                        p->gridMat->size[1]] - win_col;
                    }
                  }

                  b_abs(sp, s_p, f_inputs);
                  g_ii[0] = ii->size[0];
                  g_ii[1] = r1->size[0];
                  emlrtSubAssignSizeCheckR2012b(g_ii, 2, *(int32_T (*)[2])
                    f_inputs->size, 2, (emlrtECInfo *)&q_emlrtECI, sp);
                  nx = f_inputs->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    loop_ub = f_inputs->size[0];
                    for (min_col_dist_mat = 0; min_col_dist_mat < loop_ub;
                         min_col_dist_mat++) {
                      col_dist_mat->data[(ii->data[min_col_dist_mat] +
                                          col_dist_mat->size[0] * r1->
                                          data[inputs]) + col_dist_mat->size[0] *
                        col_dist_mat->size[1]] = p->nRows - f_inputs->
                        data[min_col_dist_mat + f_inputs->size[0] * inputs];
                    }
                  }

                  /* %find the minimum of the two values for row and for col */
                  st.site = &y_emlrtRSI;
                  b_st.site = &ld_emlrtRSI;
                  c_st.site = &rc_emlrtRSI;
                  for (inputs = 0; inputs < 3; inputs++) {
                    outsz[inputs] = row_dist_mat->size[inputs];
                  }

                  inputs = f_inputs->size[0] * f_inputs->size[1];
                  f_inputs->size[0] = (int32_T)outsz[0];
                  f_inputs->size[1] = (int32_T)outsz[1];
                  emxEnsureCapacity(&c_st, (emxArray__common *)f_inputs, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  vstride = 1;
                  for (k = 0; k < 2; k++) {
                    vstride *= row_dist_mat->size[k];
                  }

                  ix = 0;
                  maxdimlen = -1;
                  d_st.site = &qd_emlrtRSI;
                  if (1 > vstride) {
                    b11 = false;
                  } else {
                    b11 = (vstride > 2147483646);
                  }

                  if (b11) {
                    e_st.site = &wb_emlrtRSI;
                    check_forloop_overflow_error(&e_st);
                  }

                  for (j = 1; j <= vstride; j++) {
                    ix++;
                    d_st.site = &nd_emlrtRSI;
                    ixstart = ix;
                    ixstop = ix + vstride;
                    mtmp = row_dist_mat->data[ix - 1];
                    if (muDoubleScalarIsNaN(row_dist_mat->data[ix - 1])) {
                      b_ix = ix + vstride;
                      e_st.site = &uc_emlrtRSI;
                      if ((vstride == 0) || (b_ix > ixstop)) {
                        overflow = false;
                      } else {
                        overflow = (ixstop > MAX_int32_T - vstride);
                      }

                      if (overflow) {
                        f_st.site = &wb_emlrtRSI;
                        check_forloop_overflow_error(&f_st);
                      }

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
                      e_st.site = &tc_emlrtRSI;
                      if ((vstride == 0) || (b_ix > ixstop)) {
                        overflow = false;
                      } else {
                        overflow = (ixstop > MAX_int32_T - vstride);
                      }

                      if (overflow) {
                        f_st.site = &wb_emlrtRSI;
                        check_forloop_overflow_error(&f_st);
                      }

                      while ((vstride > 0) && (b_ix <= ixstop)) {
                        if (row_dist_mat->data[b_ix - 1] < mtmp) {
                          mtmp = row_dist_mat->data[b_ix - 1];
                        }

                        b_ix += vstride;
                      }
                    }

                    maxdimlen++;
                    f_inputs->data[maxdimlen] = mtmp;
                  }

                  st.site = &x_emlrtRSI;
                  b_st.site = &ld_emlrtRSI;
                  c_st.site = &rc_emlrtRSI;
                  for (inputs = 0; inputs < 3; inputs++) {
                    outsz[inputs] = col_dist_mat->size[inputs];
                  }

                  inputs = c_min_col_dist_mat->size[0] *
                    c_min_col_dist_mat->size[1];
                  c_min_col_dist_mat->size[0] = (int32_T)outsz[0];
                  c_min_col_dist_mat->size[1] = (int32_T)outsz[1];
                  emxEnsureCapacity(&c_st, (emxArray__common *)
                                    c_min_col_dist_mat, inputs, (int32_T)sizeof
                                    (real_T), &emlrtRTEI);
                  vstride = 1;
                  for (k = 0; k < 2; k++) {
                    vstride *= col_dist_mat->size[k];
                  }

                  ix = 0;
                  maxdimlen = -1;
                  d_st.site = &qd_emlrtRSI;
                  if (1 > vstride) {
                    b12 = false;
                  } else {
                    b12 = (vstride > 2147483646);
                  }

                  if (b12) {
                    e_st.site = &wb_emlrtRSI;
                    check_forloop_overflow_error(&e_st);
                  }

                  for (j = 1; j <= vstride; j++) {
                    ix++;
                    d_st.site = &nd_emlrtRSI;
                    ixstart = ix;
                    ixstop = ix + vstride;
                    mtmp = col_dist_mat->data[ix - 1];
                    if (muDoubleScalarIsNaN(col_dist_mat->data[ix - 1])) {
                      b_ix = ix + vstride;
                      e_st.site = &uc_emlrtRSI;
                      if ((vstride == 0) || (b_ix > ixstop)) {
                        overflow = false;
                      } else {
                        overflow = (ixstop > MAX_int32_T - vstride);
                      }

                      if (overflow) {
                        f_st.site = &wb_emlrtRSI;
                        check_forloop_overflow_error(&f_st);
                      }

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
                      e_st.site = &tc_emlrtRSI;
                      if ((vstride == 0) || (b_ix > ixstop)) {
                        overflow = false;
                      } else {
                        overflow = (ixstop > MAX_int32_T - vstride);
                      }

                      if (overflow) {
                        f_st.site = &wb_emlrtRSI;
                        check_forloop_overflow_error(&f_st);
                      }

                      while ((vstride > 0) && (b_ix <= ixstop)) {
                        if (col_dist_mat->data[b_ix - 1] < mtmp) {
                          mtmp = col_dist_mat->data[b_ix - 1];
                        }

                        b_ix += vstride;
                      }
                    }

                    maxdimlen++;
                    c_min_col_dist_mat->data[maxdimlen] = mtmp;
                  }

                  /* %Sum the two minimum distances to get the city_block distance */
                  for (inputs = 0; inputs < 2; inputs++) {
                    c_x[inputs] = f_inputs->size[inputs];
                  }

                  for (inputs = 0; inputs < 2; inputs++) {
                    b_featuresToCompare[inputs] = c_min_col_dist_mat->
                      size[inputs];
                  }

                  if ((c_x[0] != b_featuresToCompare[0]) || (c_x[1] !=
                       b_featuresToCompare[1])) {
                    emlrtSizeEqCheckNDR2012b(c_x, b_featuresToCompare,
                      (emlrtECInfo *)&p_emlrtECI, sp);
                  }

                  /*  find how far away each node is from the winner */
                  /*  grid_idx = pdist2(p.idxMat,[win_row,win_col],'cityblock'); */
                  /*  grid_dist = reshape(grid_idx,[p.numRows,p.numRows]); */
                  /*  grid_dist(grid_dist>p.numRows) = grid_dist(grid_dist>p.numRows)-p.numRows; */
                  inputs = g_inputs->size[0] * g_inputs->size[1];
                  g_inputs->size[0] = f_inputs->size[0];
                  g_inputs->size[1] = f_inputs->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)g_inputs, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  nx = f_inputs->size[0] * f_inputs->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    g_inputs->data[inputs] = f_inputs->data[inputs] +
                      c_min_col_dist_mat->data[inputs];
                  }

                  rdivide(sp, g_inputs, p->G_exp, f_inputs);
                  st.site = &w_emlrtRSI;
                  b_power(&st, f_inputs, c_min_col_dist_mat);
                  inputs = c_min_col_dist_mat->size[0] *
                    c_min_col_dist_mat->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)c_min_col_dist_mat,
                                    inputs, (int32_T)sizeof(real_T), &emlrtRTEI);
                  maxdimlen = c_min_col_dist_mat->size[0];
                  min_col_dist_mat = c_min_col_dist_mat->size[1];
                  nx = maxdimlen * min_col_dist_mat;
                  for (inputs = 0; inputs < nx; inputs++) {
                    c_min_col_dist_mat->data[inputs] = -c_min_col_dist_mat->
                      data[inputs];
                  }

                  b_exp(c_min_col_dist_mat);

                  /*  f_out=zeros(p.numRows,p.numRows,nInpDims); */
                  inputs = r_p->size[0] * r_p->size[1];
                  r_p->size[0] = c_min_col_dist_mat->size[0];
                  r_p->size[1] = c_min_col_dist_mat->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)r_p, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  nx = c_min_col_dist_mat->size[0] * c_min_col_dist_mat->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    r_p->data[inputs] = p->etaExp * c_min_col_dist_mat->
                      data[inputs];
                  }

                  dv0[0] = 1.0;
                  dv0[1] = 1.0;
                  dv0[2] = p->numInputDims[layer];
                  st.site = &v_emlrtRSI;
                  c_repmat(&st, r_p, dv0, f);
                  inputs = r6->size[0] * r6->size[1];
                  d18 = p->nRows;
                  if (d18 >= 0.0) {
                  } else {
                    d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)
                      &gg_emlrtDCI, sp);
                  }

                  if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
                    r6->size[0] = (int32_T)d18;
                  } else {
                    r6->size[0] = (int32_T)emlrtIntegerCheckR2012b(d18,
                      (emlrtDCInfo *)&fg_emlrtDCI, sp);
                  }

                  d18 = p->nRows;
                  if (d18 >= 0.0) {
                  } else {
                    d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)
                      &ig_emlrtDCI, sp);
                  }

                  if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
                    r6->size[1] = (int32_T)d18;
                  } else {
                    r6->size[1] = (int32_T)emlrtIntegerCheckR2012b(d18,
                      (emlrtDCInfo *)&hg_emlrtDCI, sp);
                  }

                  emxEnsureCapacity(sp, (emxArray__common *)r6, inputs, (int32_T)
                                    sizeof(real_T), &emlrtRTEI);
                  d18 = p->nRows;
                  if (d18 >= 0.0) {
                  } else {
                    d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)
                      &gg_emlrtDCI, sp);
                  }

                  d21 = p->nRows;
                  if (d21 >= 0.0) {
                  } else {
                    d21 = emlrtNonNegativeCheckR2012b(d21, (emlrtDCInfo *)
                      &ig_emlrtDCI, sp);
                  }

                  if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
                    d44 = d18;
                  } else {
                    d44 = emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)
                      &fg_emlrtDCI, sp);
                  }

                  if (d21 == (int32_T)muDoubleScalarFloor(d21)) {
                    d45 = d21;
                  } else {
                    d45 = emlrtIntegerCheckR2012b(d21, (emlrtDCInfo *)
                      &hg_emlrtDCI, sp);
                  }

                  nx = (int32_T)d44 * (int32_T)d45;
                  for (inputs = 0; inputs < nx; inputs++) {
                    r6->data[inputs] = 1.0;
                  }

                  st.site = &u_emlrtRSI;
                  b_rdivide(&st, r6, dist_mat, f_inputs);
                  st.site = &u_emlrtRSI;
                  b_log(&st, f_inputs);

                  /*  create this ln thing that deals with distance of nodes away from original stimulus vector */
                  /*                                                    (not winning node, because this is used for 'recognition' ratio ((S_samp-S_nov)/(S_samp+S_nov))) */
                  inputs = f_inputs->size[0] * f_inputs->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)f_inputs, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  maxdimlen = f_inputs->size[0];
                  inputs = f_inputs->size[1];
                  nx = maxdimlen * inputs;
                  for (inputs = 0; inputs < nx; inputs++) {
                    f_inputs->data[inputs] = -f_inputs->data[inputs];
                  }

                  b_exp(f_inputs);
                  inputs = r5->size[0] * r5->size[1];
                  r5->size[0] = f_inputs->size[0];
                  r5->size[1] = f_inputs->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)r5, inputs, (int32_T)
                                    sizeof(real_T), &emlrtRTEI);
                  nx = f_inputs->size[0] * f_inputs->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    r5->data[inputs] = 1.0 + f_inputs->data[inputs];
                  }

                  c_rdivide(sp, r5, f_inputs);

                  /* squashing function   (why squash?) */
                  /* may make sense to go back to version where we 'cap' the distance (because then the dynamic range of */
                  /* outputs starts at 0 rather than 0.5) */
                  inputs = winners->size[0] * winners->size[1];
                  d18 = p->sizeOfPeak;
                  if (d18 >= 0.0) {
                  } else {
                    d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)
                      &kg_emlrtDCI, sp);
                  }

                  if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
                    winners->size[0] = (int32_T)d18;
                  } else {
                    winners->size[0] = (int32_T)emlrtIntegerCheckR2012b(d18,
                      (emlrtDCInfo *)&jg_emlrtDCI, sp);
                  }

                  winners->size[1] = 2;
                  emxEnsureCapacity(sp, (emxArray__common *)winners, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  d18 = p->sizeOfPeak;
                  if (d18 >= 0.0) {
                  } else {
                    d18 = emlrtNonNegativeCheckR2012b(d18, (emlrtDCInfo *)
                      &kg_emlrtDCI, sp);
                  }

                  if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
                    d46 = d18;
                  } else {
                    d46 = emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)
                      &jg_emlrtDCI, sp);
                  }

                  nx = (int32_T)d46 << 1;
                  for (inputs = 0; inputs < nx; inputs++) {
                    winners->data[inputs] = 0.0;
                  }

                  inputs = (int32_T)p->sizeOfPeak;
                  emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)
                    &uc_emlrtBCI, sp);
                  winners->data[0] = win_row;
                  winners->data[winners->size[0]] = win_col;

                  /* city block distance 1 neighbours */
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(2, 1, inputs, (emlrtBCInfo *)
                    &tc_emlrtBCI, sp);
                  winners->data[1] = win_row;
                  winners->data[1 + winners->size[0]] = win_col + 1.0;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(3, 1, inputs, (emlrtBCInfo *)
                    &sc_emlrtBCI, sp);
                  winners->data[2] = win_row;
                  winners->data[2 + winners->size[0]] = win_col - 1.0;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(4, 1, inputs, (emlrtBCInfo *)
                    &rc_emlrtBCI, sp);
                  winners->data[3] = win_row + 1.0;
                  winners->data[3 + winners->size[0]] = win_col;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(5, 1, inputs, (emlrtBCInfo *)
                    &qc_emlrtBCI, sp);
                  winners->data[4] = win_row - 1.0;
                  winners->data[4 + winners->size[0]] = win_col;

                  /* city block distance 2 neighbours */
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(6, 1, inputs, (emlrtBCInfo *)
                    &pc_emlrtBCI, sp);
                  winners->data[5] = win_row + 1.0;
                  winners->data[5 + winners->size[0]] = win_col + 1.0;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(7, 1, inputs, (emlrtBCInfo *)
                    &oc_emlrtBCI, sp);
                  winners->data[6] = win_row + 1.0;
                  winners->data[6 + winners->size[0]] = win_col - 1.0;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(8, 1, inputs, (emlrtBCInfo *)
                    &nc_emlrtBCI, sp);
                  winners->data[7] = win_row - 1.0;
                  winners->data[7 + winners->size[0]] = win_col - 1.0;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(9, 1, inputs, (emlrtBCInfo *)
                    &mc_emlrtBCI, sp);
                  winners->data[8] = win_row - 1.0;
                  winners->data[8 + winners->size[0]] = win_col + 1.0;

                  /* city block distance 2-in-a-line neighbours */
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(10, 1, inputs, (emlrtBCInfo *)
                    &lc_emlrtBCI, sp);
                  winners->data[9] = win_row;
                  winners->data[9 + winners->size[0]] = win_col + 2.0;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(11, 1, inputs, (emlrtBCInfo *)
                    &kc_emlrtBCI, sp);
                  winners->data[10] = win_row;
                  winners->data[10 + winners->size[0]] = win_col - 2.0;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(12, 1, inputs, (emlrtBCInfo *)
                    &jc_emlrtBCI, sp);
                  winners->data[11] = win_row + 2.0;
                  winners->data[11 + winners->size[0]] = win_col;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(13, 1, inputs, (emlrtBCInfo *)
                    &ic_emlrtBCI, sp);
                  winners->data[12] = win_row - 2.0;
                  winners->data[12 + winners->size[0]] = win_col;

                  /* city block distance 3 neighbours */
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(14, 1, inputs, (emlrtBCInfo *)
                    &hc_emlrtBCI, sp);
                  winners->data[13] = win_row + 1.0;
                  winners->data[13 + winners->size[0]] = win_col + 2.0;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(15, 1, inputs, (emlrtBCInfo *)
                    &gc_emlrtBCI, sp);
                  winners->data[14] = win_row + 1.0;
                  winners->data[14 + winners->size[0]] = win_col - 2.0;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(16, 1, inputs, (emlrtBCInfo *)
                    &fc_emlrtBCI, sp);
                  winners->data[15] = win_row - 1.0;
                  winners->data[15 + winners->size[0]] = win_col + 2.0;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(17, 1, inputs, (emlrtBCInfo *)
                    &ec_emlrtBCI, sp);
                  winners->data[16] = win_row - 1.0;
                  winners->data[16 + winners->size[0]] = win_col - 2.0;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(18, 1, inputs, (emlrtBCInfo *)
                    &dc_emlrtBCI, sp);
                  winners->data[17] = win_row + 2.0;
                  winners->data[17 + winners->size[0]] = win_col + 1.0;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(19, 1, inputs, (emlrtBCInfo *)
                    &cc_emlrtBCI, sp);
                  winners->data[18] = win_row + 2.0;
                  winners->data[18 + winners->size[0]] = win_col - 1.0;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(20, 1, inputs, (emlrtBCInfo *)
                    &bc_emlrtBCI, sp);
                  winners->data[19] = win_row - 2.0;
                  winners->data[19 + winners->size[0]] = win_col + 1.0;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(21, 1, inputs, (emlrtBCInfo *)
                    &ac_emlrtBCI, sp);
                  winners->data[20] = win_row - 2.0;
                  winners->data[20 + winners->size[0]] = win_col - 1.0;

                  /* city block distance 3-in-a-line neighbours */
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(22, 1, inputs, (emlrtBCInfo *)
                    &yb_emlrtBCI, sp);
                  winners->data[21] = win_row;
                  winners->data[21 + winners->size[0]] = win_col + 3.0;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(23, 1, inputs, (emlrtBCInfo *)
                    &xb_emlrtBCI, sp);
                  winners->data[22] = win_row;
                  winners->data[22 + winners->size[0]] = win_col - 3.0;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(24, 1, inputs, (emlrtBCInfo *)
                    &wb_emlrtBCI, sp);
                  winners->data[23] = win_row + 3.0;
                  winners->data[23 + winners->size[0]] = win_col;
                  inputs = winners->size[0];
                  emlrtDynamicBoundsCheckR2012b(25, 1, inputs, (emlrtBCInfo *)
                    &vb_emlrtBCI, sp);
                  winners->data[24] = win_row - 3.0;
                  winners->data[24 + winners->size[0]] = win_col;
                  emlrtForLoopVectorCheckR2012b(1.0, 1.0, p->sizeOfPeak,
                    mxDOUBLE_CLASS, (int32_T)p->sizeOfPeak, (emlrtRTEInfo *)
                    &pc_emlrtRTEI, sp);
                  maxdimlen = 1;
                  while (maxdimlen - 1 <= (int32_T)p->sizeOfPeak - 1) {
                    /* % however many winners in peak */
                    inputs = winners->size[0];
                    if ((maxdimlen >= 1) && (maxdimlen < inputs)) {
                      c_maxdimlen = maxdimlen;
                    } else {
                      c_maxdimlen = emlrtDynamicBoundsCheckR2012b(maxdimlen, 1,
                        inputs, (emlrtBCInfo *)&xf_emlrtBCI, sp);
                    }

                    if (winners->data[c_maxdimlen - 1] > p->nRows) {
                      inputs = winners->size[0];
                      min_col_dist_mat = winners->size[0];
                      if ((maxdimlen >= 1) && (maxdimlen < inputs)) {
                        d_maxdimlen = maxdimlen;
                      } else {
                        d_maxdimlen = emlrtDynamicBoundsCheckR2012b(maxdimlen, 1,
                          inputs, (emlrtBCInfo *)&cg_emlrtBCI, sp);
                      }

                      if ((maxdimlen >= 1) && (maxdimlen < min_col_dist_mat)) {
                        e_maxdimlen = maxdimlen;
                      } else {
                        e_maxdimlen = emlrtDynamicBoundsCheckR2012b(maxdimlen, 1,
                          min_col_dist_mat, (emlrtBCInfo *)&dg_emlrtBCI, sp);
                      }

                      winners->data[d_maxdimlen - 1] = winners->data[e_maxdimlen
                        - 1] - p->nRows;
                    } else {
                      inputs = winners->size[0];
                      if ((maxdimlen >= 1) && (maxdimlen < inputs)) {
                        f_maxdimlen = maxdimlen;
                      } else {
                        f_maxdimlen = emlrtDynamicBoundsCheckR2012b(maxdimlen, 1,
                          inputs, (emlrtBCInfo *)&yf_emlrtBCI, sp);
                      }

                      if (winners->data[f_maxdimlen - 1] <= 0.0) {
                        inputs = winners->size[0];
                        min_col_dist_mat = winners->size[0];
                        if ((maxdimlen >= 1) && (maxdimlen < inputs)) {
                          g_maxdimlen = maxdimlen;
                        } else {
                          g_maxdimlen = emlrtDynamicBoundsCheckR2012b(maxdimlen,
                            1, inputs, (emlrtBCInfo *)&ag_emlrtBCI, sp);
                        }

                        if ((maxdimlen >= 1) && (maxdimlen < min_col_dist_mat))
                        {
                          h_maxdimlen = maxdimlen;
                        } else {
                          h_maxdimlen = emlrtDynamicBoundsCheckR2012b(maxdimlen,
                            1, min_col_dist_mat, (emlrtBCInfo *)&bg_emlrtBCI, sp);
                        }

                        winners->data[g_maxdimlen - 1] = winners->
                          data[h_maxdimlen - 1] + p->nRows;
                      }
                    }

                    inputs = winners->size[0];
                    if ((maxdimlen >= 1) && (maxdimlen < inputs)) {
                      i_maxdimlen = maxdimlen;
                    } else {
                      i_maxdimlen = emlrtDynamicBoundsCheckR2012b(maxdimlen, 1,
                        inputs, (emlrtBCInfo *)&eg_emlrtBCI, sp);
                    }

                    if (winners->data[(i_maxdimlen + winners->size[0]) - 1] >
                        p->nRows) {
                      inputs = winners->size[0];
                      min_col_dist_mat = winners->size[0];
                      if ((maxdimlen >= 1) && (maxdimlen < inputs)) {
                        j_maxdimlen = maxdimlen;
                      } else {
                        j_maxdimlen = emlrtDynamicBoundsCheckR2012b(maxdimlen, 1,
                          inputs, (emlrtBCInfo *)&ig_emlrtBCI, sp);
                      }

                      if ((maxdimlen >= 1) && (maxdimlen < min_col_dist_mat)) {
                        k_maxdimlen = maxdimlen;
                      } else {
                        k_maxdimlen = emlrtDynamicBoundsCheckR2012b(maxdimlen, 1,
                          min_col_dist_mat, (emlrtBCInfo *)&jg_emlrtBCI, sp);
                      }

                      winners->data[(j_maxdimlen + winners->size[0]) - 1] =
                        winners->data[(k_maxdimlen + winners->size[0]) - 1] -
                        p->nRows;
                    } else {
                      inputs = winners->size[0];
                      if ((maxdimlen >= 1) && (maxdimlen < inputs)) {
                        l_maxdimlen = maxdimlen;
                      } else {
                        l_maxdimlen = emlrtDynamicBoundsCheckR2012b(maxdimlen, 1,
                          inputs, (emlrtBCInfo *)&fg_emlrtBCI, sp);
                      }

                      if (winners->data[(l_maxdimlen + winners->size[0]) - 1] <=
                          0.0) {
                        inputs = winners->size[0];
                        min_col_dist_mat = winners->size[0];
                        if ((maxdimlen >= 1) && (maxdimlen < inputs)) {
                          m_maxdimlen = maxdimlen;
                        } else {
                          m_maxdimlen = emlrtDynamicBoundsCheckR2012b(maxdimlen,
                            1, inputs, (emlrtBCInfo *)&gg_emlrtBCI, sp);
                        }

                        if ((maxdimlen >= 1) && (maxdimlen < min_col_dist_mat))
                        {
                          n_maxdimlen = maxdimlen;
                        } else {
                          n_maxdimlen = emlrtDynamicBoundsCheckR2012b(maxdimlen,
                            1, min_col_dist_mat, (emlrtBCInfo *)&hg_emlrtBCI, sp);
                        }

                        winners->data[(m_maxdimlen + winners->size[0]) - 1] =
                          winners->data[(n_maxdimlen + winners->size[0]) - 1] +
                          p->nRows;
                      }
                    }

                    maxdimlen++;
                    if (*emlrtBreakCheckR2012bFlagVar != 0) {
                      emlrtBreakCheckR2012b(sp);
                    }
                  }

                  /*  if any(isnan(act_out)) */
                  /*     act_out(isnan(act_out))=0; */
                  /*  end */
                  act_peak = 0.0;
                  emlrtForLoopVectorCheckR2012b(1.0, 1.0, p->sizeOfPeak,
                    mxDOUBLE_CLASS, (int32_T)p->sizeOfPeak, (emlrtRTEInfo *)
                    &oc_emlrtRTEI, sp);
                  maxdimlen = 1;
                  while (maxdimlen - 1 <= (int32_T)p->sizeOfPeak - 1) {
                    inputs = f_inputs->size[0];
                    min_col_dist_mat = winners->size[0];
                    if ((maxdimlen >= 1) && (maxdimlen < min_col_dist_mat)) {
                      o_maxdimlen = maxdimlen;
                    } else {
                      o_maxdimlen = emlrtDynamicBoundsCheckR2012b(maxdimlen, 1,
                        min_col_dist_mat, (emlrtBCInfo *)&uf_emlrtBCI, sp);
                    }

                    d18 = winners->data[o_maxdimlen - 1];
                    if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
                      min_col_dist_mat = (int32_T)d18;
                    } else {
                      min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(d18,
                        (emlrtDCInfo *)&hh_emlrtDCI, sp);
                    }

                    idx = f_inputs->size[1];
                    i15 = winners->size[0];
                    if ((maxdimlen >= 1) && (maxdimlen < i15)) {
                      p_maxdimlen = maxdimlen;
                    } else {
                      p_maxdimlen = emlrtDynamicBoundsCheckR2012b(maxdimlen, 1,
                        i15, (emlrtBCInfo *)&wf_emlrtBCI, sp);
                    }

                    d18 = winners->data[(p_maxdimlen + winners->size[0]) - 1];
                    if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
                      i15 = (int32_T)d18;
                    } else {
                      i15 = (int32_T)emlrtIntegerCheckR2012b(d18, (emlrtDCInfo *)
                        &ih_emlrtDCI, sp);
                    }

                    if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs))
                    {
                      g_min_col_dist_mat = min_col_dist_mat;
                    } else {
                      g_min_col_dist_mat = emlrtDynamicBoundsCheckR2012b
                        (min_col_dist_mat, 1, inputs, (emlrtBCInfo *)
                         &tf_emlrtBCI, sp);
                    }

                    if ((i15 >= 1) && (i15 < idx)) {
                      i17 = i15;
                    } else {
                      i17 = emlrtDynamicBoundsCheckR2012b(i15, 1, idx,
                        (emlrtBCInfo *)&vf_emlrtBCI, sp);
                    }

                    act_peak += f_inputs->data[(g_min_col_dist_mat +
                      f_inputs->size[0] * (i17 - 1)) - 1];
                    maxdimlen++;
                    if (*emlrtBreakCheckR2012bFlagVar != 0) {
                      emlrtBreakCheckR2012b(sp);
                    }
                  }

                  /*  p.act_peak(trial,layer) = act_peak; */
                  st.site = &t_emlrtRSI;
                  c_sum(&st, f_inputs, meanSelectivity_caudal_prev);
                  st.site = &t_emlrtRSI;
                  act_total = d_sum(&st, meanSelectivity_caudal_prev);
                  selectivity = act_peak / act_total;

                  /*                     %% */
                  if (1.0 + (real_T)cycle == 1.0) {
                    /* need to compare last set of weights of old grid to */
                    inputs = initial_selec->size[0];
                    min_col_dist_mat = initial_selec->size[1];
                    if ((layer + 1 >= 1) && (layer + 1 < inputs)) {
                      d_layer = layer + 1;
                    } else {
                      d_layer = emlrtDynamicBoundsCheckR2012b(layer + 1, 1,
                        inputs, (emlrtBCInfo *)&rf_emlrtBCI, sp);
                    }

                    if ((grid + 1 >= 1) && (grid + 1 < min_col_dist_mat)) {
                      b_grid = grid + 1;
                    } else {
                      b_grid = emlrtDynamicBoundsCheckR2012b(grid + 1, 1,
                        min_col_dist_mat, (emlrtBCInfo *)&sf_emlrtBCI, sp);
                    }

                    initial_selec->data[(d_layer + initial_selec->size[0] *
                                         (b_grid - 1)) - 1] = selectivity;

                    /*                      pktot.init_act_peak(layer,grid) = act_peak; */
                    /*                      pktot.init_act_total(layer,grid) = act_total; */
                    /*  initial weights of new grid. */
                    inputs = initial_acts->size[0];
                    min_col_dist_mat = layer + 1;
                    emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                      (emlrtBCInfo *)&d_emlrtBCI, sp);
                    nx = initial_acts->size[1];
                    inputs = ii->size[0];
                    ii->size[0] = nx;
                    emxEnsureCapacity(sp, (emxArray__common *)ii, inputs,
                                      (int32_T)sizeof(int32_T), &emlrtRTEI);
                    for (inputs = 0; inputs < nx; inputs++) {
                      ii->data[inputs] = inputs;
                    }

                    nx = initial_acts->size[2];
                    inputs = r1->size[0];
                    r1->size[0] = nx;
                    emxEnsureCapacity(sp, (emxArray__common *)r1, inputs,
                                      (int32_T)sizeof(int32_T), &emlrtRTEI);
                    for (inputs = 0; inputs < nx; inputs++) {
                      r1->data[inputs] = inputs;
                    }

                    inputs = initial_acts->size[3];
                    min_col_dist_mat = grid + 1;
                    emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                      (emlrtBCInfo *)&c_emlrtBCI, sp);
                    iv23[0] = 1;
                    iv23[1] = ii->size[0];
                    iv23[2] = r1->size[0];
                    emlrtSubAssignSizeCheckR2012b(iv23, 3, *(int32_T (*)[2])
                      f_inputs->size, 2, (emlrtECInfo *)&c_emlrtECI, sp);
                    unnamed_idx_1 = ii->size[0];
                    unnamed_idx_2 = r1->size[0];
                    for (inputs = 0; inputs < unnamed_idx_2; inputs++) {
                      for (min_col_dist_mat = 0; min_col_dist_mat <
                           unnamed_idx_1; min_col_dist_mat++) {
                        initial_acts->data[((layer + initial_acts->size[0] *
                                             ii->data[min_col_dist_mat]) +
                                            initial_acts->size[0] *
                                            initial_acts->size[1] * r1->
                                            data[inputs]) + initial_acts->size[0]
                          * initial_acts->size[1] * initial_acts->size[2] * grid]
                          = f_inputs->data[min_col_dist_mat + unnamed_idx_1 *
                          inputs];
                      }
                    }
                  }

                  /* %% Update Weights */
                  nx = input_mat->size[0];
                  loop_ub = input_mat->size[1];
                  b_loop_ub = input_mat->size[2];
                  inputs = c_input_mat->size[0] * c_input_mat->size[1] *
                    c_input_mat->size[2];
                  c_input_mat->size[0] = nx;
                  c_input_mat->size[1] = loop_ub;
                  c_input_mat->size[2] = b_loop_ub;
                  emxEnsureCapacity(sp, (emxArray__common *)c_input_mat, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (inputs = 0; inputs < b_loop_ub; inputs++) {
                    for (min_col_dist_mat = 0; min_col_dist_mat < loop_ub;
                         min_col_dist_mat++) {
                      for (idx = 0; idx < nx; idx++) {
                        c_input_mat->data[(idx + c_input_mat->size[0] *
                                           min_col_dist_mat) + c_input_mat->
                          size[0] * c_input_mat->size[1] * inputs] =
                          input_mat->data[(idx + input_mat->size[0] *
                                           min_col_dist_mat) + input_mat->size[0]
                          * input_mat->size[1] * inputs];
                      }
                    }
                  }

                  for (inputs = 0; inputs < 3; inputs++) {
                    e_input_mat[inputs] = c_input_mat->size[inputs];
                  }

                  for (inputs = 0; inputs < 3; inputs++) {
                    b_weights_child[inputs] = weights_child->size[inputs];
                  }

                  emlrtSizeEqCheckNDR2012b(e_input_mat, b_weights_child,
                    (emlrtECInfo *)&o_emlrtECI, sp);
                  for (inputs = 0; inputs < 3; inputs++) {
                    sz[inputs] = f->size[inputs];
                  }

                  nx = input_mat->size[0];
                  loop_ub = input_mat->size[1];
                  b_loop_ub = input_mat->size[2];
                  inputs = d_input_mat->size[0] * d_input_mat->size[1] *
                    d_input_mat->size[2];
                  d_input_mat->size[0] = nx;
                  d_input_mat->size[1] = loop_ub;
                  d_input_mat->size[2] = b_loop_ub;
                  emxEnsureCapacity(sp, (emxArray__common *)d_input_mat, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (inputs = 0; inputs < b_loop_ub; inputs++) {
                    for (min_col_dist_mat = 0; min_col_dist_mat < loop_ub;
                         min_col_dist_mat++) {
                      for (idx = 0; idx < nx; idx++) {
                        d_input_mat->data[(idx + d_input_mat->size[0] *
                                           min_col_dist_mat) + d_input_mat->
                          size[0] * d_input_mat->size[1] * inputs] =
                          input_mat->data[(idx + input_mat->size[0] *
                                           min_col_dist_mat) + input_mat->size[0]
                          * input_mat->size[1] * inputs];
                      }
                    }
                  }

                  for (inputs = 0; inputs < 3; inputs++) {
                    e_input_mat[inputs] = d_input_mat->size[inputs];
                  }

                  emlrtSizeEqCheckNDR2012b(sz, e_input_mat, (emlrtECInfo *)
                    &n_emlrtECI, sp);
                  inputs = r3->size[0] * r3->size[1] * r3->size[2];
                  r3->size[0] = f->size[0];
                  r3->size[1] = f->size[1];
                  r3->size[2] = f->size[2];
                  emxEnsureCapacity(sp, (emxArray__common *)r3, inputs, (int32_T)
                                    sizeof(real_T), &emlrtRTEI);
                  nx = f->size[2];
                  for (inputs = 0; inputs < nx; inputs++) {
                    loop_ub = f->size[1];
                    for (min_col_dist_mat = 0; min_col_dist_mat < loop_ub;
                         min_col_dist_mat++) {
                      b_loop_ub = f->size[0];
                      for (idx = 0; idx < b_loop_ub; idx++) {
                        r3->data[(idx + r3->size[0] * min_col_dist_mat) +
                          r3->size[0] * r3->size[1] * inputs] = f->data[(idx +
                          f->size[0] * min_col_dist_mat) + f->size[0] * f->size
                          [1] * inputs] * (input_mat->data[(idx +
                          input_mat->size[0] * min_col_dist_mat) +
                                           input_mat->size[0] * input_mat->size
                                           [1] * inputs] - weights_child->data
                                           [(idx + weights_child->size[0] *
                                             min_col_dist_mat) +
                                           weights_child->size[0] *
                                           weights_child->size[1] * inputs]);
                      }
                    }
                  }

                  for (inputs = 0; inputs < 3; inputs++) {
                    b_weights_child[inputs] = weights_child->size[inputs];
                  }

                  for (inputs = 0; inputs < 3; inputs++) {
                    sz[inputs] = r3->size[inputs];
                  }

                  emlrtSizeEqCheckNDR2012b(b_weights_child, sz, (emlrtECInfo *)
                    &m_emlrtECI, sp);
                  inputs = weights_child->size[0] * weights_child->size[1] *
                    weights_child->size[2];
                  emxEnsureCapacity(sp, (emxArray__common *)weights_child,
                                    inputs, (int32_T)sizeof(real_T), &emlrtRTEI);
                  maxdimlen = weights_child->size[0];
                  c_weights_child = weights_child->size[1];
                  d_weights_child = weights_child->size[2];
                  nx = maxdimlen * c_weights_child * d_weights_child;
                  for (inputs = 0; inputs < nx; inputs++) {
                    weights_child->data[inputs] += r3->data[inputs];
                  }

                  /*  update based on spire around winning node */
                  cycle++;
                  if (*emlrtBreakCheckR2012bFlagVar != 0) {
                    emlrtBreakCheckR2012b(sp);
                  }
                }

                /* %% Go to next cycle (if switchRatio is low enough) */
                if (1.0 > p->numInputDims[layer]) {
                  nx = 0;
                } else {
                  inputs = weights->size[3];
                  emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)
                    &tb_emlrtBCI, sp);
                  inputs = weights->size[3];
                  d18 = p->numInputDims[layer];
                  if (d18 == (int32_T)muDoubleScalarFloor(d18)) {
                    min_col_dist_mat = (int32_T)d18;
                  } else {
                    min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(d18,
                      (emlrtDCInfo *)&t_emlrtDCI, sp);
                  }

                  if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
                    nx = min_col_dist_mat;
                  } else {
                    nx = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1,
                      inputs, (emlrtBCInfo *)&tb_emlrtBCI, sp);
                  }
                }

                inputs = weights->size[0];
                min_col_dist_mat = layer + 1;
                emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                  (emlrtBCInfo *)&ub_emlrtBCI, sp);
                loop_ub = weights->size[1];
                inputs = ii->size[0];
                ii->size[0] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)ii, inputs, (int32_T)
                                  sizeof(int32_T), &emlrtRTEI);
                for (inputs = 0; inputs < loop_ub; inputs++) {
                  ii->data[inputs] = inputs;
                }

                loop_ub = weights->size[2];
                inputs = r1->size[0];
                r1->size[0] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)r1, inputs, (int32_T)
                                  sizeof(int32_T), &emlrtRTEI);
                for (inputs = 0; inputs < loop_ub; inputs++) {
                  r1->data[inputs] = inputs;
                }

                inputs = r2->size[0];
                r2->size[0] = nx;
                emxEnsureCapacity(sp, (emxArray__common *)r2, inputs, (int32_T)
                                  sizeof(int32_T), &emlrtRTEI);
                for (inputs = 0; inputs < nx; inputs++) {
                  r2->data[inputs] = inputs;
                }

                inputs = weights->size[4] * weights->size[5];
                min_col_dist_mat = grid + 1;
                emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                  (emlrtBCInfo *)&sb_emlrtBCI, sp);
                iv24[0] = 1;
                iv24[1] = ii->size[0];
                iv24[2] = r1->size[0];
                iv24[3] = r2->size[0];
                emlrtSubAssignSizeCheckR2012b(iv24, 4, *(int32_T (*)[3])
                  weights_child->size, 3, (emlrtECInfo *)&l_emlrtECI, sp);
                maxdimlen = weights->size[0];
                c_weights = weights->size[1];
                d_weights = weights->size[2];
                e_weights = weights->size[3];
                unnamed_idx_1 = ii->size[0];
                unnamed_idx_2 = r1->size[0];
                unnamed_idx_3 = r2->size[0];
                for (inputs = 0; inputs < unnamed_idx_3; inputs++) {
                  for (min_col_dist_mat = 0; min_col_dist_mat < unnamed_idx_2;
                       min_col_dist_mat++) {
                    for (idx = 0; idx < unnamed_idx_1; idx++) {
                      weights->data[(((layer + maxdimlen * ii->data[idx]) +
                                      maxdimlen * c_weights * r1->
                                      data[min_col_dist_mat]) + maxdimlen *
                                     c_weights * d_weights * r2->data[inputs]) +
                        maxdimlen * c_weights * d_weights * e_weights * grid] =
                        weights_child->data[(idx + unnamed_idx_1 *
                        min_col_dist_mat) + unnamed_idx_1 * unnamed_idx_2 *
                        inputs];
                    }
                  }
                }

                /* % Overwrite weight values in the orignial W matrix, for this grid. */
                inputs = activations->size[0];
                min_col_dist_mat = layer + 1;
                emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                  (emlrtBCInfo *)&b_emlrtBCI, sp);
                nx = activations->size[1];
                inputs = ii->size[0];
                ii->size[0] = nx;
                emxEnsureCapacity(sp, (emxArray__common *)ii, inputs, (int32_T)
                                  sizeof(int32_T), &emlrtRTEI);
                for (inputs = 0; inputs < nx; inputs++) {
                  ii->data[inputs] = inputs;
                }

                nx = activations->size[2];
                inputs = r1->size[0];
                r1->size[0] = nx;
                emxEnsureCapacity(sp, (emxArray__common *)r1, inputs, (int32_T)
                                  sizeof(int32_T), &emlrtRTEI);
                for (inputs = 0; inputs < nx; inputs++) {
                  r1->data[inputs] = inputs;
                }

                inputs = activations->size[3];
                min_col_dist_mat = grid + 1;
                emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                  (emlrtBCInfo *)&emlrtBCI, sp);
                iv25[0] = 1;
                iv25[1] = ii->size[0];
                iv25[2] = r1->size[0];
                emlrtSubAssignSizeCheckR2012b(iv25, 3, *(int32_T (*)[2])
                  f_inputs->size, 2, (emlrtECInfo *)&b_emlrtECI, sp);
                unnamed_idx_1 = ii->size[0];
                unnamed_idx_2 = r1->size[0];
                for (inputs = 0; inputs < unnamed_idx_2; inputs++) {
                  for (min_col_dist_mat = 0; min_col_dist_mat < unnamed_idx_1;
                       min_col_dist_mat++) {
                    activations->data[((layer + activations->size[0] * ii->
                                        data[min_col_dist_mat]) +
                                       activations->size[0] * activations->size
                                       [1] * r1->data[inputs]) +
                      activations->size[0] * activations->size[1] *
                      activations->size[2] * grid] = f_inputs->
                      data[min_col_dist_mat + unnamed_idx_1 * inputs];
                  }
                }

                /*  use activations as calculated AFTER final weight update */
                inputs = selec->size[0];
                min_col_dist_mat = selec->size[1];
                if ((layer + 1 >= 1) && (layer + 1 < inputs)) {
                  e_layer = layer + 1;
                } else {
                  e_layer = emlrtDynamicBoundsCheckR2012b(layer + 1, 1, inputs,
                    (emlrtBCInfo *)&pf_emlrtBCI, sp);
                }

                if ((grid + 1 >= 1) && (grid + 1 < min_col_dist_mat)) {
                  c_grid = grid + 1;
                } else {
                  c_grid = emlrtDynamicBoundsCheckR2012b(grid + 1, 1,
                    min_col_dist_mat, (emlrtBCInfo *)&qf_emlrtBCI, sp);
                }

                selec->data[(e_layer + selec->size[0] * (c_grid - 1)) - 1] =
                  selectivity;

                /*              pktot.fin_act_peak(layer,grid) = act_peak; */
                /*              pktot.fin_act_total(layer,grid) = act_total; */
              }

              grid++;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }

            /*  end of loop for each grid */
            layer++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(sp);
            }
          }

          /*  end of layer loop */
          /*         %% */
          /*  after completing within-stimulus fixations, some fixations can land, */
          /*  not on the other stimulus, but outside of both */
          st.site = &s_emlrtRSI;
          nothingRatio = b_rand();
          d0 = p->stimCond;
          if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
            inputs = (int32_T)d0;
          } else {
            inputs = (int32_T)emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)
              &yg_emlrtDCI, sp);
          }

          if ((inputs >= 1) && (inputs < 2)) {
            k_inputs = inputs;
          } else {
            k_inputs = emlrtDynamicBoundsCheckR2012b(inputs, 1, 2, (emlrtBCInfo *)
              &je_emlrtBCI, sp);
          }

          if (nothingRatio > p->outsideRatio[k_inputs - 1]) {
            inputs = p->fixations->size[1];
            min_col_dist_mat = p->fixations->size[1];
            if ((trial >= 1) && (trial < inputs)) {
              j_trial = trial;
            } else {
              j_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                (emlrtBCInfo *)&ke_emlrtBCI, sp);
            }

            if ((trial >= 1) && (trial < min_col_dist_mat)) {
              k_trial = trial;
            } else {
              k_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, min_col_dist_mat,
                (emlrtBCInfo *)&le_emlrtBCI, sp);
            }

            p->fixations->data[j_trial - 1] = p->fixations->data[k_trial - 1] +
              1.0;

            /* % total fixations across both stimuli */
          }

          guard1 = false;
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
            inputs = p->usePRC->size[0];
            min_col_dist_mat = (int32_T)stim;
            idx = p->usePRC->size[1];
            if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
              h_min_col_dist_mat = min_col_dist_mat;
            } else {
              h_min_col_dist_mat = emlrtDynamicBoundsCheckR2012b
                (min_col_dist_mat, 1, inputs, (emlrtBCInfo *)&me_emlrtBCI, sp);
            }

            if ((trial >= 1) && (trial < idx)) {
              l_trial = trial;
            } else {
              l_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, idx,
                (emlrtBCInfo *)&ne_emlrtBCI, sp);
            }

            p->usePRC->data[(h_min_col_dist_mat + p->usePRC->size[0] * (l_trial
              - 1)) - 1] = usePRC;

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
            emxEnsureCapacity(sp, (emxArray__common *)avail_feat, inputs,
                              (int32_T)sizeof(real_T), &emlrtRTEI);
            avail_feat->data[0] = 0.0;

            /*             %% */
            /* -------------------------------------------------------------------------- */
            /*  Decide which features were compared. Only necessary for caudal layer (or) */
            /*  any layer that has more than 1 grid. */
            /* -------------------------------------------------------------------------- */
            inputs = featuresToCompare->size[0] * featuresToCompare->size[1];
            featuresToCompare->size[0] = 1;
            d0 = p->numGrids_Caudal;
            if (d0 >= 0.0) {
            } else {
              d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&eg_emlrtDCI,
                sp);
            }

            if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
              featuresToCompare->size[1] = (int32_T)d0;
            } else {
              featuresToCompare->size[1] = (int32_T)emlrtIntegerCheckR2012b(d0,
                (emlrtDCInfo *)&dg_emlrtDCI, sp);
            }

            emxEnsureCapacity(sp, (emxArray__common *)featuresToCompare, inputs,
                              (int32_T)sizeof(real_T), &emlrtRTEI);
            d0 = p->numGrids_Caudal;
            if (d0 >= 0.0) {
            } else {
              d0 = emlrtNonNegativeCheckR2012b(d0, (emlrtDCInfo *)&eg_emlrtDCI,
                sp);
            }

            if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
              nx = (int32_T)d0;
            } else {
              nx = (int32_T)emlrtIntegerCheckR2012b(d0, (emlrtDCInfo *)
                &dg_emlrtDCI, sp);
            }

            for (inputs = 0; inputs < nx; inputs++) {
              featuresToCompare->data[inputs] = 0.0;
            }

            emlrtForLoopVectorCheckR2012b(1.0, 1.0, p->numGrids_Caudal,
              mxDOUBLE_CLASS, (int32_T)p->numGrids_Caudal, (emlrtRTEInfo *)
              &nc_emlrtRTEI, sp);
            maxdimlen = 0;
            while (maxdimlen <= (int32_T)p->numGrids_Caudal - 1) {
              inputs = c_features_sampled->size[0];
              c_features_sampled->size[0] = features_sampled->size[0];
              emxEnsureCapacity(sp, (emxArray__common *)c_features_sampled,
                                inputs, (int32_T)sizeof(boolean_T), &emlrtRTEI);
              nx = features_sampled->size[0];
              for (inputs = 0; inputs < nx; inputs++) {
                c_features_sampled->data[inputs] = (features_sampled->
                  data[inputs] == 1.0 + (real_T)maxdimlen);
              }

              st.site = &r_emlrtRSI;
              if (b_any(&st, c_features_sampled)) {
                inputs = b_features_sampled_prev->size[0];
                b_features_sampled_prev->size[0] = features_sampled_prev->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)
                                  b_features_sampled_prev, inputs, (int32_T)
                                  sizeof(boolean_T), &emlrtRTEI);
                nx = features_sampled_prev->size[0];
                for (inputs = 0; inputs < nx; inputs++) {
                  b_features_sampled_prev->data[inputs] =
                    (features_sampled_prev->data[inputs] == 1.0 + (real_T)
                     maxdimlen);
                }

                st.site = &r_emlrtRSI;
                if (b_any(&st, b_features_sampled_prev)) {
                  inputs = featuresToCompare->size[1];
                  if ((maxdimlen + 1 >= 1) && (maxdimlen + 1 < inputs)) {
                    q_maxdimlen = maxdimlen + 1;
                  } else {
                    q_maxdimlen = emlrtDynamicBoundsCheckR2012b(maxdimlen + 1, 1,
                      inputs, (emlrtBCInfo *)&lf_emlrtBCI, sp);
                  }

                  featuresToCompare->data[q_maxdimlen - 1] = 1.0;
                }
              }

              maxdimlen++;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }

            st.site = &q_emlrtRSI;
            if (!(d_sum(&st, featuresToCompare) != 0.0)) {
              exitg1 = 2;
            } else {
              inputs = p->comparedFeat->size[0];
              min_col_dist_mat = (trial - 1) + 1;
              emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                (emlrtBCInfo *)&rb_emlrtBCI, sp);
              nx = p->comparedFeat->size[1];
              inputs = ii->size[0];
              ii->size[0] = nx;
              emxEnsureCapacity(sp, (emxArray__common *)ii, inputs, (int32_T)
                                sizeof(int32_T), &emlrtRTEI);
              for (inputs = 0; inputs < nx; inputs++) {
                ii->data[inputs] = inputs;
              }

              iv26[0] = 1;
              iv26[1] = ii->size[0];
              emlrtSubAssignSizeCheckR2012b(iv26, 2, *(int32_T (*)[2])
                featuresToCompare->size, 2, (emlrtECInfo *)&k_emlrtECI, sp);
              nx = featuresToCompare->size[1];
              for (inputs = 0; inputs < nx; inputs++) {
                p->comparedFeat->data[(trial + p->comparedFeat->size[0] *
                  ii->data[inputs]) - 1] = featuresToCompare->
                  data[featuresToCompare->size[0] * inputs];
              }

              /* -------------------------------------------------------------------------- */
              /*  determine which layer is most selective for each stimulus */
              /* -------------------------------------------------------------------------- */
              /* first, look at most recent stim */
              emlrtForLoopVectorCheckR2012b(1.0, 1.0, p->numLayers,
                mxDOUBLE_CLASS, (int32_T)p->numLayers, (emlrtRTEInfo *)
                &mc_emlrtRTEI, sp);
              layer_new = 0;
              while (layer_new <= (int32_T)p->numLayers - 1) {
                if (1.0 + (real_T)layer_new == 1.0) {
                  /*          p.meanSelectivity_caudal_new(trial,:) = judging.initial_selec(layer_new,:).*featuresToCompare; % only look at layers for which features were sampled */
                  inputs = initial_selec->size[0];
                  min_col_dist_mat = layer_new + 1;
                  emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                    (emlrtBCInfo *)&qb_emlrtBCI, sp);
                  nx = initial_selec->size[1];
                  inputs = b_initial_selec->size[0] * b_initial_selec->size[1];
                  b_initial_selec->size[0] = 1;
                  b_initial_selec->size[1] = nx;
                  emxEnsureCapacity(sp, (emxArray__common *)b_initial_selec,
                                    inputs, (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (inputs = 0; inputs < nx; inputs++) {
                    b_initial_selec->data[b_initial_selec->size[0] * inputs] =
                      initial_selec->data[initial_selec->size[0] * inputs];
                  }

                  for (inputs = 0; inputs < 2; inputs++) {
                    c_x[inputs] = b_initial_selec->size[inputs];
                  }

                  for (inputs = 0; inputs < 2; inputs++) {
                    b_featuresToCompare[inputs] = featuresToCompare->size[inputs];
                  }

                  if ((c_x[0] != b_featuresToCompare[0]) || (c_x[1] !=
                       b_featuresToCompare[1])) {
                    emlrtSizeEqCheckNDR2012b(c_x, b_featuresToCompare,
                      (emlrtECInfo *)&j_emlrtECI, sp);
                  }

                  nx = initial_selec->size[1];
                  inputs = avail_feat->size[0] * avail_feat->size[1];
                  avail_feat->size[0] = 1;
                  avail_feat->size[1] = nx;
                  emxEnsureCapacity(sp, (emxArray__common *)avail_feat, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (inputs = 0; inputs < nx; inputs++) {
                    avail_feat->data[avail_feat->size[0] * inputs] =
                      initial_selec->data[initial_selec->size[0] * inputs] *
                      featuresToCompare->data[featuresToCompare->size[0] *
                      inputs];
                  }
                } else {
                  if (1.0 + (real_T)layer_new == 2.0) {
                    nx = p->usePRC->size[0];
                    inputs = p->usePRC->size[1];
                    if ((trial >= 1) && (trial < inputs)) {
                      maxdimlen = trial;
                    } else {
                      maxdimlen = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                        (emlrtBCInfo *)&pb_emlrtBCI, sp);
                    }

                    inputs = p_p->size[0];
                    p_p->size[0] = nx;
                    emxEnsureCapacity(sp, (emxArray__common *)p_p, inputs,
                                      (int32_T)sizeof(real_T), &emlrtRTEI);
                    for (inputs = 0; inputs < nx; inputs++) {
                      p_p->data[inputs] = p->usePRC->data[inputs + p->
                        usePRC->size[0] * (maxdimlen - 1)];
                    }

                    st.site = &p_emlrtRSI;
                    if (sum(&st, p_p) == 2.0) {
                      /*  when plotting, need to make sure that the p.usePRC==(0 || 1) cases aren't */
                      /*  looked at... */
                      inputs = initial_selec->size[0];
                      min_col_dist_mat = layer_new + 1;
                      emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                        (emlrtBCInfo *)&ob_emlrtBCI, sp);
                      inputs = initial_selec->size[1];
                      emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)
                        &nb_emlrtBCI, sp);
                      nx = p->meanSelectivity_PRC_new->size[1];
                      maxdimlen = p->meanSelectivity_PRC_new->size[0];
                      emlrtDynamicBoundsCheckR2012b(trial, 1, maxdimlen,
                        (emlrtBCInfo *)&mb_emlrtBCI, sp);
                      for (inputs = 0; inputs < nx; inputs++) {
                        p->meanSelectivity_PRC_new->data[(trial +
                          p->meanSelectivity_PRC_new->size[0] * inputs) - 1] =
                          initial_selec->data[1];
                      }
                    }
                  }
                }

                layer_new++;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(sp);
                }
              }

              /* now, look at prevoius stim */
              emlrtForLoopVectorCheckR2012b(1.0, 1.0, p->numLayers,
                mxDOUBLE_CLASS, (int32_T)p->numLayers, (emlrtRTEInfo *)
                &lc_emlrtRTEI, sp);
              layer_prev = 0;
              while (layer_prev <= (int32_T)p->numLayers - 1) {
                if (1.0 + (real_T)layer_prev == 1.0) {
                  /*          p.meanSelectivity_caudal_prev(trial,:) = judging.selectivity_prev(layer_prev,:).*featuresToCompare; % only look at grids for which features were sampled */
                  inputs = prevStimSelec->size[0];
                  min_col_dist_mat = layer_prev + 1;
                  emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                    (emlrtBCInfo *)&lb_emlrtBCI, sp);
                  nx = prevStimSelec->size[1];
                  inputs = b_prevStimSelec->size[0] * b_prevStimSelec->size[1];
                  b_prevStimSelec->size[0] = 1;
                  b_prevStimSelec->size[1] = nx;
                  emxEnsureCapacity(sp, (emxArray__common *)b_prevStimSelec,
                                    inputs, (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (inputs = 0; inputs < nx; inputs++) {
                    b_prevStimSelec->data[b_prevStimSelec->size[0] * inputs] =
                      prevStimSelec->data[prevStimSelec->size[0] * inputs];
                  }

                  for (inputs = 0; inputs < 2; inputs++) {
                    c_x[inputs] = b_prevStimSelec->size[inputs];
                  }

                  for (inputs = 0; inputs < 2; inputs++) {
                    b_featuresToCompare[inputs] = featuresToCompare->size[inputs];
                  }

                  if ((c_x[0] != b_featuresToCompare[0]) || (c_x[1] !=
                       b_featuresToCompare[1])) {
                    emlrtSizeEqCheckNDR2012b(c_x, b_featuresToCompare,
                      (emlrtECInfo *)&i_emlrtECI, sp);
                  }

                  nx = prevStimSelec->size[1];
                  inputs = meanSelectivity_caudal_prev->size[0] *
                    meanSelectivity_caudal_prev->size[1];
                  meanSelectivity_caudal_prev->size[0] = 1;
                  meanSelectivity_caudal_prev->size[1] = nx;
                  emxEnsureCapacity(sp, (emxArray__common *)
                                    meanSelectivity_caudal_prev, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (inputs = 0; inputs < nx; inputs++) {
                    meanSelectivity_caudal_prev->
                      data[meanSelectivity_caudal_prev->size[0] * inputs] =
                      prevStimSelec->data[prevStimSelec->size[0] * inputs] *
                      featuresToCompare->data[featuresToCompare->size[0] *
                      inputs];
                  }

                  for (inputs = 0; inputs < 2; inputs++) {
                    c_x[inputs] = meanSelectivity_caudal_prev->size[inputs];
                  }

                  for (inputs = 0; inputs < 2; inputs++) {
                    b_featuresToCompare[inputs] = avail_feat->size[inputs];
                  }

                  if ((c_x[0] != b_featuresToCompare[0]) || (c_x[1] !=
                       b_featuresToCompare[1])) {
                    emlrtSizeEqCheckNDR2012b(c_x, b_featuresToCompare,
                      (emlrtECInfo *)&h_emlrtECI, sp);
                  }

                  inputs = b_meanSelectivity_caudal_prev->size[0] *
                    b_meanSelectivity_caudal_prev->size[1];
                  b_meanSelectivity_caudal_prev->size[0] = 1;
                  b_meanSelectivity_caudal_prev->size[1] =
                    meanSelectivity_caudal_prev->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)
                                    b_meanSelectivity_caudal_prev, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  nx = meanSelectivity_caudal_prev->size[0] *
                    meanSelectivity_caudal_prev->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    b_meanSelectivity_caudal_prev->data[inputs] =
                      meanSelectivity_caudal_prev->data[inputs] -
                      avail_feat->data[inputs];
                  }

                  c_abs(sp, b_meanSelectivity_caudal_prev, familDiff_caudal);

                  /*  determine which grid in caudal layer would be used for judgement */
                  st.site = &o_emlrtRSI;
                  b_st.site = &qc_emlrtRSI;
                  c_st.site = &rc_emlrtRSI;
                  if ((familDiff_caudal->size[1] == 1) ||
                      (familDiff_caudal->size[1] != 1)) {
                    overflow = true;
                  } else {
                    overflow = false;
                  }

                  if (overflow) {
                  } else {
                    emlrtErrorWithMessageIdR2012b(&c_st, &fc_emlrtRTEI,
                      "Coder:toolbox:autoDimIncompatibility", 0);
                  }

                  if (familDiff_caudal->size[1] > 0) {
                  } else {
                    emlrtErrorWithMessageIdR2012b(&c_st, &gc_emlrtRTEI,
                      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
                  }

                  d_st.site = &sc_emlrtRSI;
                  ixstart = 1;
                  n = familDiff_caudal->size[1];
                  mtmp = familDiff_caudal->data[0];
                  if (familDiff_caudal->size[1] > 1) {
                    if (muDoubleScalarIsNaN(familDiff_caudal->data[0])) {
                      e_st.site = &uc_emlrtRSI;
                      overflow = (familDiff_caudal->size[1] > 2147483646);
                      if (overflow) {
                        f_st.site = &wb_emlrtRSI;
                        check_forloop_overflow_error(&f_st);
                      }

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
                      e_st.site = &tc_emlrtRSI;
                      if (ixstart + 1 > familDiff_caudal->size[1]) {
                        overflow = false;
                      } else {
                        overflow = (familDiff_caudal->size[1] > 2147483646);
                      }

                      if (overflow) {
                        f_st.site = &wb_emlrtRSI;
                        check_forloop_overflow_error(&f_st);
                      }

                      while (ixstart + 1 <= n) {
                        if (familDiff_caudal->data[ixstart] > mtmp) {
                          mtmp = familDiff_caudal->data[ixstart];
                        }

                        ixstart++;
                      }
                    }
                  }

                  st.site = &o_emlrtRSI;
                  inputs = b_x->size[0] * b_x->size[1];
                  b_x->size[0] = 1;
                  b_x->size[1] = familDiff_caudal->size[1];
                  emxEnsureCapacity(&st, (emxArray__common *)b_x, inputs,
                                    (int32_T)sizeof(boolean_T), &emlrtRTEI);
                  nx = familDiff_caudal->size[0] * familDiff_caudal->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    b_x->data[inputs] = (familDiff_caudal->data[inputs] == mtmp);
                  }

                  b_st.site = &ic_emlrtRSI;
                  nx = b_x->size[1];
                  idx = 0;
                  inputs = b_ii->size[0] * b_ii->size[1];
                  b_ii->size[0] = 1;
                  b_ii->size[1] = b_x->size[1];
                  emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, inputs,
                                    (int32_T)sizeof(int32_T), &emlrtRTEI);
                  c_st.site = &jc_emlrtRSI;
                  overflow = (b_x->size[1] > 2147483646);
                  if (overflow) {
                    d_st.site = &wb_emlrtRSI;
                    check_forloop_overflow_error(&d_st);
                  }

                  maxdimlen = 1;
                  exitg4 = false;
                  while ((!exitg4) && (maxdimlen <= nx)) {
                    b_guard3 = false;
                    if (b_x->data[maxdimlen - 1]) {
                      idx++;
                      b_ii->data[idx - 1] = maxdimlen;
                      if (idx >= nx) {
                        exitg4 = true;
                      } else {
                        b_guard3 = true;
                      }
                    } else {
                      b_guard3 = true;
                    }

                    if (b_guard3) {
                      maxdimlen++;
                    }
                  }

                  if (idx <= b_x->size[1]) {
                  } else {
                    emlrtErrorWithMessageIdR2012b(&b_st, &uc_emlrtRTEI,
                      "Coder:builtins:AssertionFailed", 0);
                  }

                  if (b_x->size[1] == 1) {
                    if (idx == 0) {
                      inputs = b_ii->size[0] * b_ii->size[1];
                      b_ii->size[0] = 1;
                      b_ii->size[1] = 0;
                      emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, inputs,
                                        (int32_T)sizeof(int32_T), &emlrtRTEI);
                    }
                  } else {
                    inputs = b_ii->size[0] * b_ii->size[1];
                    if (1 > idx) {
                      b_ii->size[1] = 0;
                    } else {
                      b_ii->size[1] = idx;
                    }

                    emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, inputs,
                                      (int32_T)sizeof(int32_T), &r_emlrtRTEI);
                  }

                  inputs = whichCaudal->size[0] * whichCaudal->size[1];
                  whichCaudal->size[0] = 1;
                  whichCaudal->size[1] = b_ii->size[1];
                  emxEnsureCapacity(&st, (emxArray__common *)whichCaudal, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  nx = b_ii->size[0] * b_ii->size[1];
                  for (inputs = 0; inputs < nx; inputs++) {
                    whichCaudal->data[inputs] = b_ii->data[inputs];
                  }

                  /*                  if length(whichCaudal)>1 */
                  inputs = whichCaudal->size[1];
                  emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)
                    &kb_emlrtBCI, sp);

                  /*                  end */
                  inputs = p->meanSelectivity_caudal_prev->size[0] *
                    p->meanSelectivity_caudal_prev->size[1];
                  min_col_dist_mat = meanSelectivity_caudal_prev->size[1];
                  idx = (int32_T)whichCaudal->data[0];
                  if ((trial >= 1) && (trial < inputs)) {
                    m_trial = trial;
                  } else {
                    m_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                      (emlrtBCInfo *)&ff_emlrtBCI, sp);
                  }

                  if ((idx >= 1) && (idx < min_col_dist_mat)) {
                    e_idx = idx;
                  } else {
                    e_idx = emlrtDynamicBoundsCheckR2012b(idx, 1,
                      min_col_dist_mat, (emlrtBCInfo *)&gf_emlrtBCI, sp);
                  }

                  p->meanSelectivity_caudal_prev->data[m_trial - 1] =
                    meanSelectivity_caudal_prev->data[e_idx - 1];
                  inputs = p->meanSelectivity_caudal_new->size[0] *
                    p->meanSelectivity_caudal_new->size[1];
                  min_col_dist_mat = avail_feat->size[1];
                  idx = (int32_T)whichCaudal->data[0];
                  if ((trial >= 1) && (trial < inputs)) {
                    n_trial = trial;
                  } else {
                    n_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                      (emlrtBCInfo *)&hf_emlrtBCI, sp);
                  }

                  if ((idx >= 1) && (idx < min_col_dist_mat)) {
                    f_idx = idx;
                  } else {
                    f_idx = emlrtDynamicBoundsCheckR2012b(idx, 1,
                      min_col_dist_mat, (emlrtBCInfo *)&if_emlrtBCI, sp);
                  }

                  p->meanSelectivity_caudal_new->data[n_trial - 1] =
                    avail_feat->data[f_idx - 1];
                  inputs = p->familDiff_caudal->size[0] * p->
                    familDiff_caudal->size[1];
                  min_col_dist_mat = familDiff_caudal->size[1];
                  idx = (int32_T)whichCaudal->data[0];
                  if ((trial >= 1) && (trial < inputs)) {
                    o_trial = trial;
                  } else {
                    o_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                      (emlrtBCInfo *)&jf_emlrtBCI, sp);
                  }

                  if ((idx >= 1) && (idx < min_col_dist_mat)) {
                    g_idx = idx;
                  } else {
                    g_idx = emlrtDynamicBoundsCheckR2012b(idx, 1,
                      min_col_dist_mat, (emlrtBCInfo *)&kf_emlrtBCI, sp);
                  }

                  p->familDiff_caudal->data[o_trial - 1] =
                    familDiff_caudal->data[g_idx - 1];
                } else {
                  if (1.0 + (real_T)layer_prev == 2.0) {
                    nx = p->usePRC->size[0];
                    inputs = p->usePRC->size[1];
                    if ((trial >= 1) && (trial < inputs)) {
                      maxdimlen = trial;
                    } else {
                      maxdimlen = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                        (emlrtBCInfo *)&jb_emlrtBCI, sp);
                    }

                    inputs = q_p->size[0];
                    q_p->size[0] = nx;
                    emxEnsureCapacity(sp, (emxArray__common *)q_p, inputs,
                                      (int32_T)sizeof(real_T), &emlrtRTEI);
                    for (inputs = 0; inputs < nx; inputs++) {
                      q_p->data[inputs] = p->usePRC->data[inputs + p->
                        usePRC->size[0] * (maxdimlen - 1)];
                    }

                    st.site = &n_emlrtRSI;
                    if (all(&st, q_p)) {
                      inputs = prevStimSelec->size[0];
                      min_col_dist_mat = layer_prev + 1;
                      emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                        (emlrtBCInfo *)&ib_emlrtBCI, sp);
                      inputs = prevStimSelec->size[1];
                      emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)
                        &hb_emlrtBCI, sp);
                      inputs = p->meanSelectivity_PRC_prev->size[0] *
                        p->meanSelectivity_PRC_prev->size[1];
                      if ((trial >= 1) && (trial < inputs)) {
                        p_trial = trial;
                      } else {
                        p_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                          (emlrtBCInfo *)&df_emlrtBCI, sp);
                      }

                      p->meanSelectivity_PRC_prev->data[p_trial - 1] =
                        prevStimSelec->data[1];
                      inputs = p->meanSelectivity_PRC_prev->size[0] *
                        p->meanSelectivity_PRC_prev->size[1];
                      min_col_dist_mat = (trial - 1) + 1;
                      emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                        (emlrtBCInfo *)&gb_emlrtBCI, sp);
                      inputs = p->meanSelectivity_PRC_new->size[0] *
                        p->meanSelectivity_PRC_new->size[1];
                      min_col_dist_mat = (trial - 1) + 1;
                      emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
                        (emlrtBCInfo *)&fb_emlrtBCI, sp);
                      inputs = p->familDiff_PRC->size[0] * p->
                        familDiff_PRC->size[1];
                      if ((trial >= 1) && (trial < inputs)) {
                        q_trial = trial;
                      } else {
                        q_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                          (emlrtBCInfo *)&ef_emlrtBCI, sp);
                      }

                      p->familDiff_PRC->data[q_trial - 1] = muDoubleScalarAbs
                        (p->meanSelectivity_PRC_prev->data[trial - 1] -
                         p->meanSelectivity_PRC_new->data[trial - 1]);
                    }
                  }
                }

                layer_prev++;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(sp);
                }
              }

              if (!(p->diffEncode != 0.0)) {
                /*  only use PRC layer if p.numGrids_Caudal features were sampled for both stimuli */
                nx = p->usePRC->size[0];
                inputs = p->usePRC->size[1];
                if ((trial >= 1) && (trial < inputs)) {
                  maxdimlen = trial;
                } else {
                  maxdimlen = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                    (emlrtBCInfo *)&eb_emlrtBCI, sp);
                }

                inputs = o_p->size[0];
                o_p->size[0] = nx;
                emxEnsureCapacity(sp, (emxArray__common *)o_p, inputs, (int32_T)
                                  sizeof(real_T), &emlrtRTEI);
                for (inputs = 0; inputs < nx; inputs++) {
                  o_p->data[inputs] = p->usePRC->data[inputs + p->usePRC->size[0]
                    * (maxdimlen - 1)];
                }

                st.site = &m_emlrtRSI;
                if (all(&st, o_p) && (p->which_gp_layer == 2.0)) {
                  inputs = p->familDiff_PRC->size[0] * p->familDiff_PRC->size[1];
                  if ((trial >= 1) && (trial < inputs)) {
                    r_trial = trial;
                  } else {
                    r_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                      (emlrtBCInfo *)&ue_emlrtBCI, sp);
                  }

                  familDiff = p->familDiff_PRC->data[r_trial - 1];
                  nx = p->famil_diff_thresh->size[1];
                  inputs = p->famil_diff_thresh->size[0];
                  d0 = p->numThresh;
                  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
                    min_col_dist_mat = (int32_T)d0;
                  } else {
                    min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(d0,
                      (emlrtDCInfo *)&s_emlrtDCI, sp);
                  }

                  if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
                    maxdimlen = min_col_dist_mat;
                  } else {
                    maxdimlen = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat,
                      1, inputs, (emlrtBCInfo *)&db_emlrtBCI, sp);
                  }

                  inputs = avail_feat->size[0] * avail_feat->size[1];
                  avail_feat->size[0] = 1;
                  avail_feat->size[1] = nx;
                  emxEnsureCapacity(sp, (emxArray__common *)avail_feat, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (inputs = 0; inputs < nx; inputs++) {
                    avail_feat->data[avail_feat->size[0] * inputs] =
                      p->famil_diff_thresh->data[(maxdimlen +
                      p->famil_diff_thresh->size[0] * inputs) - 1];
                  }
                } else {
                  inputs = p->familDiff_caudal->size[0] * p->
                    familDiff_caudal->size[1];
                  if ((trial >= 1) && (trial < inputs)) {
                    s_trial = trial;
                  } else {
                    s_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                      (emlrtBCInfo *)&te_emlrtBCI, sp);
                  }

                  familDiff = p->familDiff_caudal->data[s_trial - 1];
                  inputs = p->famil_diff_thresh->size[0];
                  emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)
                    &cb_emlrtBCI, sp);
                  nx = p->famil_diff_thresh->size[1];
                  inputs = avail_feat->size[0] * avail_feat->size[1];
                  avail_feat->size[0] = 1;
                  avail_feat->size[1] = nx;
                  emxEnsureCapacity(sp, (emxArray__common *)avail_feat, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (inputs = 0; inputs < nx; inputs++) {
                    avail_feat->data[avail_feat->size[0] * inputs] =
                      p->famil_diff_thresh->data[p->famil_diff_thresh->size[0] *
                      inputs];
                  }
                }
              } else if (p->layer == 2.0) {
                inputs = p->famil_diff_thresh->size[0];
                emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)
                  &bb_emlrtBCI, sp);
                nx = p->famil_diff_thresh->size[1];
                inputs = m_p->size[0] * m_p->size[1];
                m_p->size[0] = 1;
                m_p->size[1] = nx;
                emxEnsureCapacity(sp, (emxArray__common *)m_p, inputs, (int32_T)
                                  sizeof(real_T), &emlrtRTEI);
                for (inputs = 0; inputs < nx; inputs++) {
                  m_p->data[m_p->size[0] * inputs] = p->famil_diff_thresh->
                    data[p->famil_diff_thresh->size[0] * inputs];
                }

                nx = p->famil_diff_thresh->size[1];
                inputs = p->famil_diff_thresh->size[0];
                d0 = p->numThresh;
                if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
                  min_col_dist_mat = (int32_T)d0;
                } else {
                  min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(d0,
                    (emlrtDCInfo *)&r_emlrtDCI, sp);
                }

                if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
                  maxdimlen = min_col_dist_mat;
                } else {
                  maxdimlen = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1,
                    inputs, (emlrtBCInfo *)&ab_emlrtBCI, sp);
                }

                inputs = n_p->size[0] * n_p->size[1];
                n_p->size[0] = 1;
                n_p->size[1] = nx;
                emxEnsureCapacity(sp, (emxArray__common *)n_p, inputs, (int32_T)
                                  sizeof(real_T), &emlrtRTEI);
                for (inputs = 0; inputs < nx; inputs++) {
                  n_p->data[n_p->size[0] * inputs] = p->famil_diff_thresh->data
                    [(maxdimlen + p->famil_diff_thresh->size[0] * inputs) - 1];
                }

                st.site = &l_emlrtRSI;
                d0 = mean(&st, m_p);
                st.site = &l_emlrtRSI;
                d18 = mean(&st, n_p);
                inputs = p->familDiff_caudal->size[0] * p->
                  familDiff_caudal->size[1];
                if ((trial >= 1) && (trial < inputs)) {
                  t_trial = trial;
                } else {
                  t_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                    (emlrtBCInfo *)&pe_emlrtBCI, sp);
                }

                familDiffs_temp_idx_0 = p->familDiff_caudal->data[t_trial - 1] -
                  d0;
                inputs = p->familDiff_PRC->size[0] * p->familDiff_PRC->size[1];
                if ((trial >= 1) && (trial < inputs)) {
                  u_trial = trial;
                } else {
                  u_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                    (emlrtBCInfo *)&qe_emlrtBCI, sp);
                }

                familDiffs_temp_idx_1 = p->familDiff_PRC->data[u_trial - 1] -
                  d18;
                ixstart = 1;
                mtmp = familDiffs_temp_idx_0;
                maxdimlen = 1;
                if (muDoubleScalarIsNaN(familDiffs_temp_idx_0)) {
                  ix = 2;
                  exitg3 = false;
                  while ((!exitg3) && (ix < 3)) {
                    ixstart = 2;
                    if (!muDoubleScalarIsNaN(familDiffs_temp_idx_1)) {
                      mtmp = familDiffs_temp_idx_1;
                      maxdimlen = 2;
                      exitg3 = true;
                    } else {
                      ix = 3;
                    }
                  }
                }

                if ((ixstart < 2) && (familDiffs_temp_idx_1 > mtmp)) {
                  maxdimlen = 2;
                }

                if (maxdimlen == 2) {
                  inputs = p->familDiff_PRC->size[0] * p->familDiff_PRC->size[1];
                  if ((trial >= 1) && (trial < inputs)) {
                    v_trial = trial;
                  } else {
                    v_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                      (emlrtBCInfo *)&se_emlrtBCI, sp);
                  }

                  familDiff = p->familDiff_PRC->data[v_trial - 1];
                  nx = p->famil_diff_thresh->size[1];
                  inputs = p->famil_diff_thresh->size[0];
                  d0 = p->numThresh;
                  if (d0 == (int32_T)muDoubleScalarFloor(d0)) {
                    min_col_dist_mat = (int32_T)d0;
                  } else {
                    min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(d0,
                      (emlrtDCInfo *)&q_emlrtDCI, sp);
                  }

                  if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
                    maxdimlen = min_col_dist_mat;
                  } else {
                    maxdimlen = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat,
                      1, inputs, (emlrtBCInfo *)&y_emlrtBCI, sp);
                  }

                  inputs = avail_feat->size[0] * avail_feat->size[1];
                  avail_feat->size[0] = 1;
                  avail_feat->size[1] = nx;
                  emxEnsureCapacity(sp, (emxArray__common *)avail_feat, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (inputs = 0; inputs < nx; inputs++) {
                    avail_feat->data[avail_feat->size[0] * inputs] =
                      p->famil_diff_thresh->data[(maxdimlen +
                      p->famil_diff_thresh->size[0] * inputs) - 1];
                  }
                } else {
                  inputs = p->familDiff_caudal->size[0] * p->
                    familDiff_caudal->size[1];
                  if ((trial >= 1) && (trial < inputs)) {
                    w_trial = trial;
                  } else {
                    w_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                      (emlrtBCInfo *)&re_emlrtBCI, sp);
                  }

                  familDiff = p->familDiff_caudal->data[w_trial - 1];
                  inputs = p->famil_diff_thresh->size[0];
                  emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)
                    &x_emlrtBCI, sp);
                  nx = p->famil_diff_thresh->size[1];
                  inputs = avail_feat->size[0] * avail_feat->size[1];
                  avail_feat->size[0] = 1;
                  avail_feat->size[1] = nx;
                  emxEnsureCapacity(sp, (emxArray__common *)avail_feat, inputs,
                                    (int32_T)sizeof(real_T), &emlrtRTEI);
                  for (inputs = 0; inputs < nx; inputs++) {
                    avail_feat->data[avail_feat->size[0] * inputs] =
                      p->famil_diff_thresh->data[p->famil_diff_thresh->size[0] *
                      inputs];
                  }

                  nx = p->usePRC->size[0];
                  maxdimlen = p->usePRC->size[1];
                  emlrtDynamicBoundsCheckR2012b(trial, 1, maxdimlen,
                    (emlrtBCInfo *)&w_emlrtBCI, sp);
                  for (inputs = 0; inputs < nx; inputs++) {
                    p->usePRC->data[inputs + p->usePRC->size[0] * (trial - 1)] =
                      0.0;
                  }
                }
              } else {
                inputs = p->familDiff_caudal->size[0] * p->
                  familDiff_caudal->size[1];
                if ((trial >= 1) && (trial < inputs)) {
                  x_trial = trial;
                } else {
                  x_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                    (emlrtBCInfo *)&oe_emlrtBCI, sp);
                }

                familDiff = p->familDiff_caudal->data[x_trial - 1];
                inputs = p->famil_diff_thresh->size[0];
                emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)
                  &v_emlrtBCI, sp);
                nx = p->famil_diff_thresh->size[1];
                inputs = avail_feat->size[0] * avail_feat->size[1];
                avail_feat->size[0] = 1;
                avail_feat->size[1] = nx;
                emxEnsureCapacity(sp, (emxArray__common *)avail_feat, inputs,
                                  (int32_T)sizeof(real_T), &emlrtRTEI);
                for (inputs = 0; inputs < nx; inputs++) {
                  avail_feat->data[avail_feat->size[0] * inputs] =
                    p->famil_diff_thresh->data[p->famil_diff_thresh->size[0] *
                    inputs];
                }

                nx = p->usePRC->size[0];
                maxdimlen = p->usePRC->size[1];
                emlrtDynamicBoundsCheckR2012b(trial, 1, maxdimlen, (emlrtBCInfo *)
                  &u_emlrtBCI, sp);
                for (inputs = 0; inputs < nx; inputs++) {
                  p->usePRC->data[inputs + p->usePRC->size[0] * (trial - 1)] =
                    0.0;
                }
              }

              /*             %% compare differences in selectivity with threshold */
              /*  p.famil_difference_most(trial) = abs(mostSelectiveLayer_new - mostSelectiveLayer_prev);% /(mostSelectiveLayer_new+mostSelectiveLayer_prev); %+ (rand*2-1)*p.decision_noise; */
              /*  familDiff = p.familDiff_max(trial); */
              /*  noise = p.decision_noise.*rand; */
              inputs = p->familDiff_withNoise->size[1];
              if ((trial >= 1) && (trial < inputs)) {
                y_trial = trial;
              } else {
                y_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                  (emlrtBCInfo *)&ve_emlrtBCI, sp);
              }

              st.site = &k_emlrtRSI;
              p->familDiff_withNoise->data[y_trial - 1] = (familDiff -
                p->decision_noise) + (familDiff - (familDiff - p->decision_noise))
                * b_rand();

              /* familDiff + noise;%  ((rand(1,5)*2-1)*p.decision_noise); */
              /*  p.familDiff_withNoise(trial) = familDiff; */
              /*  thresh = (thresh-noise)+(thresh-(thresh-noise)).*rand; */
              inputs = p->familDiff_withNoise->size[1];
              if ((trial >= 1) && (trial < inputs)) {
                ab_trial = trial;
              } else {
                ab_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                  (emlrtBCInfo *)&we_emlrtBCI, sp);
              }

              st.site = &j_emlrtRSI;
              if (c_any(p->familDiff_withNoise->data[ab_trial - 1] > mean(&st,
                    avail_feat))) {
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
              inputs = p->famil_difference->size[1];
              min_col_dist_mat = p->familDiff_withNoise->size[1];
              if ((trial >= 1) && (trial < inputs)) {
                bb_trial = trial;
              } else {
                bb_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                  (emlrtBCInfo *)&xe_emlrtBCI, sp);
              }

              if ((trial >= 1) && (trial < min_col_dist_mat)) {
                cb_trial = trial;
              } else {
                cb_trial = emlrtDynamicBoundsCheckR2012b(trial, 1,
                  min_col_dist_mat, (emlrtBCInfo *)&ye_emlrtBCI, sp);
              }

              p->famil_difference->data[bb_trial - 1] = p->
                familDiff_withNoise->data[cb_trial - 1];

              /*             %% */
              /* ------------------------------------------------------------------ */
              /* stop sampling if evidence of mismatch acquired */
              /* ------------------------------------------------------------------ */
              if (stopSampling == 1) {
                guard1 = true;
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
            emxEnsureCapacity(sp, (emxArray__common *)features_sampled_prev,
                              inputs, (int32_T)sizeof(real_T), &emlrtRTEI);
            nx = features_sampled->size[0];
            for (inputs = 0; inputs < nx; inputs++) {
              features_sampled_prev->data[inputs] = features_sampled->
                data[inputs];
            }

            inputs = prevStimSelec->size[0] * prevStimSelec->size[1];
            prevStimSelec->size[0] = 1;
            prevStimSelec->size[1] = 1;
            emxEnsureCapacity(sp, (emxArray__common *)prevStimSelec, inputs,
                              (int32_T)sizeof(real_T), &emlrtRTEI);
            prevStimSelec->data[0] = selectivity;

            /*      prevInitialSelec = initial_selec; */
            /*      prevInitialActs = initial_acts; */
            /*      prev_mean_act = mean_act; */
            /*      pktot.prevStimFin_act_peak = pktot.fin_act_peak; */
            /*      pktot.prevStimFin_act_total = pktot.fin_act_total; */
            /*      pktot.prevStimInit_act_peak = pktot.init_act_peak; */
            /*      pktot.prevStimInit_act_total = pktot.init_act_total; */
            /*      prevStimActs = acts; */
            /*  first row is always previous stim */
            inputs = p->usePRC->size[0];
            min_col_dist_mat = (int32_T)stim;
            idx = p->usePRC->size[1];
            if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
              i_min_col_dist_mat = min_col_dist_mat;
            } else {
              i_min_col_dist_mat = emlrtDynamicBoundsCheckR2012b
                (min_col_dist_mat, 1, inputs, (emlrtBCInfo *)&af_emlrtBCI, sp);
            }

            if ((trial >= 1) && (trial < idx)) {
              db_trial = trial;
            } else {
              db_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, idx,
                (emlrtBCInfo *)&bf_emlrtBCI, sp);
            }

            p->usePRC->data[(i_min_col_dist_mat + p->usePRC->size[0] * (db_trial
              - 1)) - 1] = usePRC;

            /* ---------------------------------------------------------------------- */
            /* switch to other stim (last thing you do) */
            /* ---------------------------------------------------------------------- */
            stim = (stim + 2.0) / stim - 1.0;

            /* 1 goes to 2, 2 goes to 1 */
            b_guard1 = false;
            if (first_stim_sampled == 1) {
              inputs = p->fixations->size[1];
              if ((trial >= 1) && (trial < inputs)) {
                eb_trial = trial;
              } else {
                eb_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
                  (emlrtBCInfo *)&cf_emlrtBCI, sp);
              }

              if (p->fixations->data[eb_trial - 1] >= p->maxFix) {
                keepSampling = 1;
              } else {
                b_guard1 = true;
              }
            } else {
              b_guard1 = true;
            }

            if (b_guard1) {
              if (first_stim_sampled == 0) {
                keepSampling = 0;
              }
            }

            first_stim_sampled = 0;

            /* to indicate that we are no longer on the first stim being sampled (so a comparison should be made from now on) */
            guard1 = true;
          }

          if (guard1) {
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(sp);
            }
          }
        } else {
          /*     %% */
          /* ---------------------------------------------------------------------- */
          /* %% Record the discrimination choice */
          /* stop_sampling: 1 = mismatch, 0 = match (note: tType==1 is Mismatch; tType==2 is Match) */
          inputs = p->answer->size[1];
          if ((trial >= 1) && (trial < inputs)) {
            fb_trial = trial;
          } else {
            fb_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
              (emlrtBCInfo *)&yd_emlrtBCI, sp);
          }

          p->answer->data[fb_trial - 1] = 0.0;

          /*  answer=1 is mismatch; answer=0 is match */
          inputs = p->answer->size[1];
          min_col_dist_mat = (trial - 1) + 1;
          emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
            (emlrtBCInfo *)&t_emlrtBCI, sp);
          inputs = p->tType->size[1];
          min_col_dist_mat = (trial - 1) + 1;
          emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
            (emlrtBCInfo *)&s_emlrtBCI, sp);
          inputs = p->correct->size[1];
          if ((trial >= 1) && (trial < inputs)) {
            gb_trial = trial;
          } else {
            gb_trial = emlrtDynamicBoundsCheckR2012b(trial, 1, inputs,
              (emlrtBCInfo *)&ae_emlrtBCI, sp);
          }

          p->correct->data[gb_trial - 1] = muDoubleScalarAbs(p->answer->
            data[trial - 1] - (p->tType->data[trial - 1] - 1.0));

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
          st.site = &i_emlrtRSI;
          determineCriterion(&st, p, 1.0 + (real_T)(trial - 1));
          trial++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
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
        inputs = p->correct->size[1];
        emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)&r_emlrtBCI,
          sp);
        inputs = p->correct->size[1];
        if (y == (int32_T)muDoubleScalarFloor(y)) {
          min_col_dist_mat = (int32_T)y;
        } else {
          min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)
            &p_emlrtDCI, sp);
        }

        if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
          nx = min_col_dist_mat;
        } else {
          nx = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
            (emlrtBCInfo *)&r_emlrtBCI, sp);
        }
      }

      inputs = l_p->size[0] * l_p->size[1];
      l_p->size[0] = 1;
      l_p->size[1] = nx;
      emxEnsureCapacity(sp, (emxArray__common *)l_p, inputs, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (inputs = 0; inputs < nx; inputs++) {
        l_p->data[l_p->size[0] * inputs] = p->correct->data[inputs];
      }

      st.site = &h_emlrtRSI;
      A = d_sum(&st, l_p);
      p->Acc_firstHalf = A / (p->nTrials / 2.0);
      y = p->nTrials / 2.0;
      if (y + 1.0 > p->correct->size[1]) {
        inputs = 0;
        min_col_dist_mat = 0;
      } else {
        inputs = p->correct->size[1];
        if (y + 1.0 == (int32_T)muDoubleScalarFloor(y + 1.0)) {
          min_col_dist_mat = (int32_T)(y + 1.0);
        } else {
          min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(y + 1.0,
            (emlrtDCInfo *)&o_emlrtDCI, sp);
        }

        if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
          j_min_col_dist_mat = min_col_dist_mat;
        } else {
          j_min_col_dist_mat = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1,
            inputs, (emlrtBCInfo *)&q_emlrtBCI, sp);
        }

        inputs = j_min_col_dist_mat - 1;
        min_col_dist_mat = p->correct->size[1];
        idx = p->correct->size[1];
        if ((idx >= 1) && (idx < min_col_dist_mat)) {
          min_col_dist_mat = idx;
        } else {
          min_col_dist_mat = emlrtDynamicBoundsCheckR2012b(idx, 1,
            min_col_dist_mat, (emlrtBCInfo *)&q_emlrtBCI, sp);
        }
      }

      idx = k_p->size[0] * k_p->size[1];
      k_p->size[0] = 1;
      k_p->size[1] = min_col_dist_mat - inputs;
      emxEnsureCapacity(sp, (emxArray__common *)k_p, idx, (int32_T)sizeof(real_T),
                        &emlrtRTEI);
      nx = min_col_dist_mat - inputs;
      for (min_col_dist_mat = 0; min_col_dist_mat < nx; min_col_dist_mat++) {
        k_p->data[k_p->size[0] * min_col_dist_mat] = p->correct->data[inputs +
          min_col_dist_mat];
      }

      st.site = &g_emlrtRSI;
      A = d_sum(&st, k_p);
      p->Acc_secondHalf = A / (p->nTrials / 2.0);
      y = p->nTrials / 2.0;
      if (1.0 > y) {
        nx = 0;
      } else {
        inputs = p->answer->size[1];
        emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)&p_emlrtBCI,
          sp);
        inputs = p->answer->size[1];
        if (y == (int32_T)muDoubleScalarFloor(y)) {
          min_col_dist_mat = (int32_T)y;
        } else {
          min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)
            &n_emlrtDCI, sp);
        }

        if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
          nx = min_col_dist_mat;
        } else {
          nx = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
            (emlrtBCInfo *)&p_emlrtBCI, sp);
        }
      }

      y = p->nTrials / 2.0;
      if (1.0 > y) {
        loop_ub = 0;
      } else {
        inputs = p->tType->size[1];
        emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)&o_emlrtBCI,
          sp);
        inputs = p->tType->size[1];
        if (y == (int32_T)muDoubleScalarFloor(y)) {
          min_col_dist_mat = (int32_T)y;
        } else {
          min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)
            &m_emlrtDCI, sp);
        }

        if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
          loop_ub = min_col_dist_mat;
        } else {
          loop_ub = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
            (emlrtBCInfo *)&o_emlrtBCI, sp);
        }
      }

      inputs = b_x->size[0] * b_x->size[1];
      b_x->size[0] = 1;
      b_x->size[1] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)b_x, inputs, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      for (inputs = 0; inputs < loop_ub; inputs++) {
        b_x->data[b_x->size[0] * inputs] = (p->tType->data[inputs] == 1.0);
      }

      iv27[0] = 1;
      iv27[1] = nx;
      for (inputs = 0; inputs < 2; inputs++) {
        c_x[inputs] = b_x->size[inputs];
      }

      if ((1 != c_x[0]) || (iv27[1] != c_x[1])) {
        emlrtSizeEqCheckNDR2012b(iv27, c_x, (emlrtECInfo *)&g_emlrtECI, sp);
      }

      y = p->nTrials / 2.0;
      if (1.0 > y) {
        loop_ub = 0;
      } else {
        inputs = p->tType->size[1];
        emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)&n_emlrtBCI,
          sp);
        inputs = p->tType->size[1];
        if (y == (int32_T)muDoubleScalarFloor(y)) {
          min_col_dist_mat = (int32_T)y;
        } else {
          min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)
            &l_emlrtDCI, sp);
        }

        if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
          loop_ub = min_col_dist_mat;
        } else {
          loop_ub = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
            (emlrtBCInfo *)&n_emlrtBCI, sp);
        }
      }

      inputs = j_p->size[0] * j_p->size[1];
      j_p->size[0] = 1;
      j_p->size[1] = nx;
      emxEnsureCapacity(sp, (emxArray__common *)j_p, inputs, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (inputs = 0; inputs < nx; inputs++) {
        j_p->data[j_p->size[0] * inputs] = p->answer->data[inputs] * (real_T)
          b_x->data[b_x->size[0] * inputs];
      }

      st.site = &f_emlrtRSI;
      A = d_sum(&st, j_p);
      inputs = i_p->size[0] * i_p->size[1];
      i_p->size[0] = 1;
      i_p->size[1] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)i_p, inputs, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      for (inputs = 0; inputs < loop_ub; inputs++) {
        i_p->data[i_p->size[0] * inputs] = (p->tType->data[inputs] == 1.0);
      }

      st.site = &f_emlrtRSI;
      B = e_sum(&st, i_p);

      /*  a 'yes' (mismatch judgement) on trials that were mismatches (ie, p.tType==1) */
      y = p->nTrials / 2.0;
      if (1.0 > y) {
        nx = 0;
      } else {
        inputs = p->answer->size[1];
        emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)&m_emlrtBCI,
          sp);
        inputs = p->answer->size[1];
        if (y == (int32_T)muDoubleScalarFloor(y)) {
          min_col_dist_mat = (int32_T)y;
        } else {
          min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)
            &k_emlrtDCI, sp);
        }

        if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
          nx = min_col_dist_mat;
        } else {
          nx = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
            (emlrtBCInfo *)&m_emlrtBCI, sp);
        }
      }

      y = p->nTrials / 2.0;
      if (1.0 > y) {
        loop_ub = 0;
      } else {
        inputs = p->tType->size[1];
        emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)&l_emlrtBCI,
          sp);
        inputs = p->tType->size[1];
        if (y == (int32_T)muDoubleScalarFloor(y)) {
          min_col_dist_mat = (int32_T)y;
        } else {
          min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)
            &j_emlrtDCI, sp);
        }

        if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
          loop_ub = min_col_dist_mat;
        } else {
          loop_ub = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
            (emlrtBCInfo *)&l_emlrtBCI, sp);
        }
      }

      inputs = b_x->size[0] * b_x->size[1];
      b_x->size[0] = 1;
      b_x->size[1] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)b_x, inputs, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      for (inputs = 0; inputs < loop_ub; inputs++) {
        b_x->data[b_x->size[0] * inputs] = (p->tType->data[inputs] == 2.0);
      }

      iv28[0] = 1;
      iv28[1] = nx;
      for (inputs = 0; inputs < 2; inputs++) {
        c_x[inputs] = b_x->size[inputs];
      }

      if ((1 != c_x[0]) || (iv28[1] != c_x[1])) {
        emlrtSizeEqCheckNDR2012b(iv28, c_x, (emlrtECInfo *)&f_emlrtECI, sp);
      }

      y = p->nTrials / 2.0;
      if (1.0 > y) {
        loop_ub = 0;
      } else {
        inputs = p->tType->size[1];
        emlrtDynamicBoundsCheckR2012b(1, 1, inputs, (emlrtBCInfo *)&k_emlrtBCI,
          sp);
        inputs = p->tType->size[1];
        if (y == (int32_T)muDoubleScalarFloor(y)) {
          min_col_dist_mat = (int32_T)y;
        } else {
          min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(y, (emlrtDCInfo *)
            &i_emlrtDCI, sp);
        }

        if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
          loop_ub = min_col_dist_mat;
        } else {
          loop_ub = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1, inputs,
            (emlrtBCInfo *)&k_emlrtBCI, sp);
        }
      }

      inputs = h_p->size[0] * h_p->size[1];
      h_p->size[0] = 1;
      h_p->size[1] = nx;
      emxEnsureCapacity(sp, (emxArray__common *)h_p, inputs, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      for (inputs = 0; inputs < nx; inputs++) {
        h_p->data[h_p->size[0] * inputs] = p->answer->data[inputs] * (real_T)
          b_x->data[b_x->size[0] * inputs];
      }

      st.site = &e_emlrtRSI;
      b_A = d_sum(&st, h_p);
      inputs = g_p->size[0] * g_p->size[1];
      g_p->size[0] = 1;
      g_p->size[1] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)g_p, inputs, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      for (inputs = 0; inputs < loop_ub; inputs++) {
        g_p->data[g_p->size[0] * inputs] = (p->tType->data[inputs] == 2.0);
      }

      st.site = &e_emlrtRSI;
      b_B = e_sum(&st, g_p);

      /*  a 'yes' on matching trials */
      y = p->nTrials / 2.0;
      if (y + 1.0 > p->answer->size[1]) {
        inputs = 0;
        min_col_dist_mat = 0;
      } else {
        inputs = p->answer->size[1];
        if (y + 1.0 == (int32_T)muDoubleScalarFloor(y + 1.0)) {
          min_col_dist_mat = (int32_T)(y + 1.0);
        } else {
          min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(y + 1.0,
            (emlrtDCInfo *)&h_emlrtDCI, sp);
        }

        if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
          k_min_col_dist_mat = min_col_dist_mat;
        } else {
          k_min_col_dist_mat = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1,
            inputs, (emlrtBCInfo *)&j_emlrtBCI, sp);
        }

        inputs = k_min_col_dist_mat - 1;
        min_col_dist_mat = p->answer->size[1];
        idx = p->answer->size[1];
        if ((idx >= 1) && (idx < min_col_dist_mat)) {
          min_col_dist_mat = idx;
        } else {
          min_col_dist_mat = emlrtDynamicBoundsCheckR2012b(idx, 1,
            min_col_dist_mat, (emlrtBCInfo *)&j_emlrtBCI, sp);
        }
      }

      y = p->nTrials / 2.0;
      if (y + 1.0 > p->tType->size[1]) {
        idx = 0;
        i15 = 0;
      } else {
        idx = p->tType->size[1];
        if (y + 1.0 == (int32_T)muDoubleScalarFloor(y + 1.0)) {
          i15 = (int32_T)(y + 1.0);
        } else {
          i15 = (int32_T)emlrtIntegerCheckR2012b(y + 1.0, (emlrtDCInfo *)
            &g_emlrtDCI, sp);
        }

        if ((i15 >= 1) && (i15 < idx)) {
          i18 = i15;
        } else {
          i18 = emlrtDynamicBoundsCheckR2012b(i15, 1, idx, (emlrtBCInfo *)
            &i_emlrtBCI, sp);
        }

        idx = i18 - 1;
        i15 = p->tType->size[1];
        maxdimlen = p->tType->size[1];
        if ((maxdimlen >= 1) && (maxdimlen < i15)) {
          i15 = maxdimlen;
        } else {
          i15 = emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i15, (emlrtBCInfo *)
            &i_emlrtBCI, sp);
        }
      }

      maxdimlen = b_x->size[0] * b_x->size[1];
      b_x->size[0] = 1;
      b_x->size[1] = i15 - idx;
      emxEnsureCapacity(sp, (emxArray__common *)b_x, maxdimlen, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      nx = i15 - idx;
      for (i15 = 0; i15 < nx; i15++) {
        b_x->data[b_x->size[0] * i15] = (p->tType->data[idx + i15] == 1.0);
      }

      iv29[0] = 1;
      iv29[1] = min_col_dist_mat - inputs;
      for (idx = 0; idx < 2; idx++) {
        c_x[idx] = b_x->size[idx];
      }

      if ((1 != c_x[0]) || (iv29[1] != c_x[1])) {
        emlrtSizeEqCheckNDR2012b(iv29, c_x, (emlrtECInfo *)&e_emlrtECI, sp);
      }

      y = p->nTrials / 2.0;
      if (y + 1.0 > p->tType->size[1]) {
        idx = 0;
        i15 = 0;
      } else {
        idx = p->tType->size[1];
        if (y + 1.0 == (int32_T)muDoubleScalarFloor(y + 1.0)) {
          i15 = (int32_T)(y + 1.0);
        } else {
          i15 = (int32_T)emlrtIntegerCheckR2012b(y + 1.0, (emlrtDCInfo *)
            &f_emlrtDCI, sp);
        }

        if ((i15 >= 1) && (i15 < idx)) {
          i19 = i15;
        } else {
          i19 = emlrtDynamicBoundsCheckR2012b(i15, 1, idx, (emlrtBCInfo *)
            &h_emlrtBCI, sp);
        }

        idx = i19 - 1;
        i15 = p->tType->size[1];
        maxdimlen = p->tType->size[1];
        if ((maxdimlen >= 1) && (maxdimlen < i15)) {
          i15 = maxdimlen;
        } else {
          i15 = emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i15, (emlrtBCInfo *)
            &h_emlrtBCI, sp);
        }
      }

      maxdimlen = f_p->size[0] * f_p->size[1];
      f_p->size[0] = 1;
      f_p->size[1] = min_col_dist_mat - inputs;
      emxEnsureCapacity(sp, (emxArray__common *)f_p, maxdimlen, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      nx = min_col_dist_mat - inputs;
      for (min_col_dist_mat = 0; min_col_dist_mat < nx; min_col_dist_mat++) {
        f_p->data[f_p->size[0] * min_col_dist_mat] = p->answer->data[inputs +
          min_col_dist_mat] * (real_T)b_x->data[b_x->size[0] * min_col_dist_mat];
      }

      st.site = &d_emlrtRSI;
      c_A = d_sum(&st, f_p);
      inputs = e_p->size[0] * e_p->size[1];
      e_p->size[0] = 1;
      e_p->size[1] = i15 - idx;
      emxEnsureCapacity(sp, (emxArray__common *)e_p, inputs, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      nx = i15 - idx;
      for (inputs = 0; inputs < nx; inputs++) {
        e_p->data[e_p->size[0] * inputs] = (p->tType->data[idx + inputs] == 1.0);
      }

      st.site = &d_emlrtRSI;
      c_B = e_sum(&st, e_p);

      /*  a 'yes' (mismatch judgement) on trials that were mismatches (ie, p.tType==1) */
      y = p->nTrials / 2.0;
      if (y + 1.0 > p->answer->size[1]) {
        inputs = 0;
        min_col_dist_mat = 0;
      } else {
        inputs = p->answer->size[1];
        if (y + 1.0 == (int32_T)muDoubleScalarFloor(y + 1.0)) {
          min_col_dist_mat = (int32_T)(y + 1.0);
        } else {
          min_col_dist_mat = (int32_T)emlrtIntegerCheckR2012b(y + 1.0,
            (emlrtDCInfo *)&e_emlrtDCI, sp);
        }

        if ((min_col_dist_mat >= 1) && (min_col_dist_mat < inputs)) {
          l_min_col_dist_mat = min_col_dist_mat;
        } else {
          l_min_col_dist_mat = emlrtDynamicBoundsCheckR2012b(min_col_dist_mat, 1,
            inputs, (emlrtBCInfo *)&g_emlrtBCI, sp);
        }

        inputs = l_min_col_dist_mat - 1;
        min_col_dist_mat = p->answer->size[1];
        idx = p->answer->size[1];
        if ((idx >= 1) && (idx < min_col_dist_mat)) {
          min_col_dist_mat = idx;
        } else {
          min_col_dist_mat = emlrtDynamicBoundsCheckR2012b(idx, 1,
            min_col_dist_mat, (emlrtBCInfo *)&g_emlrtBCI, sp);
        }
      }

      y = p->nTrials / 2.0;
      if (y + 1.0 > p->tType->size[1]) {
        idx = 0;
        i15 = 0;
      } else {
        idx = p->tType->size[1];
        if (y + 1.0 == (int32_T)muDoubleScalarFloor(y + 1.0)) {
          i15 = (int32_T)(y + 1.0);
        } else {
          i15 = (int32_T)emlrtIntegerCheckR2012b(y + 1.0, (emlrtDCInfo *)
            &d_emlrtDCI, sp);
        }

        if ((i15 >= 1) && (i15 < idx)) {
          i20 = i15;
        } else {
          i20 = emlrtDynamicBoundsCheckR2012b(i15, 1, idx, (emlrtBCInfo *)
            &f_emlrtBCI, sp);
        }

        idx = i20 - 1;
        i15 = p->tType->size[1];
        maxdimlen = p->tType->size[1];
        if ((maxdimlen >= 1) && (maxdimlen < i15)) {
          i15 = maxdimlen;
        } else {
          i15 = emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i15, (emlrtBCInfo *)
            &f_emlrtBCI, sp);
        }
      }

      maxdimlen = b_x->size[0] * b_x->size[1];
      b_x->size[0] = 1;
      b_x->size[1] = i15 - idx;
      emxEnsureCapacity(sp, (emxArray__common *)b_x, maxdimlen, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      nx = i15 - idx;
      for (i15 = 0; i15 < nx; i15++) {
        b_x->data[b_x->size[0] * i15] = (p->tType->data[idx + i15] == 2.0);
      }

      iv30[0] = 1;
      iv30[1] = min_col_dist_mat - inputs;
      for (idx = 0; idx < 2; idx++) {
        c_x[idx] = b_x->size[idx];
      }

      if ((1 != c_x[0]) || (iv30[1] != c_x[1])) {
        emlrtSizeEqCheckNDR2012b(iv30, c_x, (emlrtECInfo *)&d_emlrtECI, sp);
      }

      y = p->nTrials / 2.0;
      if (y + 1.0 > p->tType->size[1]) {
        idx = 0;
        i15 = 0;
      } else {
        idx = p->tType->size[1];
        if (y + 1.0 == (int32_T)muDoubleScalarFloor(y + 1.0)) {
          i15 = (int32_T)(y + 1.0);
        } else {
          i15 = (int32_T)emlrtIntegerCheckR2012b(y + 1.0, (emlrtDCInfo *)
            &c_emlrtDCI, sp);
        }

        if ((i15 >= 1) && (i15 < idx)) {
          i21 = i15;
        } else {
          i21 = emlrtDynamicBoundsCheckR2012b(i15, 1, idx, (emlrtBCInfo *)
            &e_emlrtBCI, sp);
        }

        idx = i21 - 1;
        i15 = p->tType->size[1];
        maxdimlen = p->tType->size[1];
        if ((maxdimlen >= 1) && (maxdimlen < i15)) {
          i15 = maxdimlen;
        } else {
          i15 = emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i15, (emlrtBCInfo *)
            &e_emlrtBCI, sp);
        }
      }

      maxdimlen = d_p->size[0] * d_p->size[1];
      d_p->size[0] = 1;
      d_p->size[1] = min_col_dist_mat - inputs;
      emxEnsureCapacity(sp, (emxArray__common *)d_p, maxdimlen, (int32_T)sizeof
                        (real_T), &emlrtRTEI);
      nx = min_col_dist_mat - inputs;
      for (min_col_dist_mat = 0; min_col_dist_mat < nx; min_col_dist_mat++) {
        d_p->data[d_p->size[0] * min_col_dist_mat] = p->answer->data[inputs +
          min_col_dist_mat] * (real_T)b_x->data[b_x->size[0] * min_col_dist_mat];
      }

      st.site = &c_emlrtRSI;
      d_A = d_sum(&st, d_p);
      inputs = c_p->size[0] * c_p->size[1];
      c_p->size[0] = 1;
      c_p->size[1] = i15 - idx;
      emxEnsureCapacity(sp, (emxArray__common *)c_p, inputs, (int32_T)sizeof
                        (boolean_T), &emlrtRTEI);
      nx = i15 - idx;
      for (inputs = 0; inputs < nx; inputs++) {
        c_p->data[c_p->size[0] * inputs] = (p->tType->data[idx + inputs] == 2.0);
      }

      st.site = &c_emlrtRSI;
      d_B = e_sum(&st, c_p);

      /*  a 'yes' on matching trials */
      /* -------------------------------------------------------------------------- */
      /*  d' was measure of decreased performance for patients (should drastically */
      /*  drop during second half of trials on rats lacking PRC layer, but not be */
      /*  affected by controls */
      st.site = &b_emlrtRSI;
      p->dPrime_first = norminv(&st, A / B) - norminv(&st, b_A / b_B);
      st.site = &emlrtRSI;
      p->dPrime_second = norminv(&st, c_A / c_B) - norminv(&st, d_A / d_B);
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  emxFree_real_T(&c_avail_feat);
  emxFree_real_T(&b_avail_feat);
  emxFree_real_T(&d_input_mat);
  emxFree_real_T(&c_input_mat);
  emxFree_real_T(&c_stimuli);
  emxFree_real_T(&b_initial_selec);
  emxFree_real_T(&b_prevStimSelec);
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
  emxFree_real_T(&g_inputs);
  emxFree_real_T(&r_p);
  emxFree_real_T(&r6);
  emxFree_real_T(&r5);
  emxFree_real_T(&b_input_mat);
  emxFree_real_T(&b_meanSelectivity_caudal_prev);
  emxFree_real_T(&q_p);
  emxFree_real_T(&p_p);
  emxFree_real_T(&o_p);
  emxFree_real_T(&n_p);
  emxFree_real_T(&m_p);
  emxFree_real_T(&b_stimuli);
  emxFree_real_T(&d_sample_feat);
  emxFree_real_T(&c_sample_feat);
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
  emxFree_int32_T(&ii);
  emxFree_boolean_T(&x);
  emxFree_real_T(&r4);
  emxFree_real_T(&r3);
  emxFree_int32_T(&r2);
  emxFree_int32_T(&r1);
  emxFree_int32_T(&r0);
  emxFree_real_T(&weights_child);
  emxFree_real_T(&whichCaudal);
  emxFree_real_T(&f_inputs);
  emxFree_real_T(&dist_mat);
  emxFree_real_T(&familDiff_caudal);
  emxFree_real_T(&meanSelectivity_caudal_prev);
  emxFree_real_T(&featuresToCompare);
  emxFree_real_T(&winners);
  emxFree_real_T(&f);
  emxFree_real_T(&c_min_col_dist_mat);
  emxFree_real_T(&input_mat);
  emxFree_real_T(&col_dist_mat);
  emxFree_real_T(&row_dist_mat);
  emxFree_real_T(&initial_selec);
  emxFree_real_T(&selec);
  emxFree_real_T(&initial_acts);
  emxFree_real_T(&activations);
  emxFree_real_T(&stimulus);
  emxFree_real_T(&features_sampled);
  emxFree_real_T(&avail_feat);
  emxFree_real_T(&sample_feat);
  emxFree_real_T(&features_sampled_prev);
  emxFree_real_T(&prevStimSelec);
  emxFree_real_T(&stimPair);
  emxFree_real_T(&stimuli);
  emxFree_real_T(&weights);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (visDiscrimModel.cpp) */
