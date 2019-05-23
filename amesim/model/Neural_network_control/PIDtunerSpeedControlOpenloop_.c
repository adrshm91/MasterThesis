/************** -*-C-*- *********************************************
 * $Id: ame_model.ctemp 78997 2019-02-01 09:12:42Z jandre $
 *                                                                  *
 *       AMESim C code for cosimulation written by code generator.  *
 
                                 PIDtunerSpeedControlOpenloop_
 *
 *******************************************************************/

#include "PIDtunerSpeedControlOpenloop_.h"
#include "ame_interfaces.h"

#include <assert.h>
#include <stdio.h>

#if !defined(AME_DS1005) && !defined(AME_DS1006)
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#endif

#ifndef AME_DS1006
#include <fcntl.h>
#endif

#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <setjmp.h>

#ifdef _WIN32
#ifndef WIN32
#define WIN32
#endif
#endif

#include "ameutils.h"
#include "codegen_ameutils_public.h"

#if defined (WIN32) || defined(XPCMSVISUALC)
#include <io.h>
#elif !defined(AME_DS1005) && !defined(AME_DS1006)
#include <unistd.h>
#endif

#if defined(_WINDOWS) || defined(_WIN32) || defined(WIN32)
#define DLLEXPORTDEF __declspec(dllexport)
#else
#define DLLEXPORTDEF
#endif

#if defined (RTLAB) || defined(AME_DS1005) || defined(AME_DS1006) || defined(LABCAR) || defined(AME_ADX) || defined(AME_HWA) || defined(RT) ||defined(AMEVERISTAND)
#ifdef DLLEXPORTDEF
#undef DLLEXPORTDEF
#endif
#define DLLEXPORTDEF
#endif

/* If we are in Simulink we should set things up for a AMEMULTIDLL (only static symbols) */
#if defined(AME_CS_SIMULINK) || defined(AME_ME_SIMULINK)
#ifndef AMEMULTIDLL
#define AMEMULTIDLL
#endif
#endif

/* If we are in Veristand we should set things up for a AMEMULTIDLL (only static symbols) */
#ifdef AMEVERISTAND
#ifndef AMEMULTIDLL
#define AMEMULTIDLL
#endif
#endif

/* avoid globally exported functions - required for exporting several models in one executable */
#if defined AMEMULTIDLL
#define DLLEXPORTDEF_OR_STATIC static
#else
#define DLLEXPORTDEF_OR_STATIC DLLEXPORTDEF
#endif

#if defined CREATING_STATIC_LIB
#define DLLEXPORTDEF_OR_EXTERN extern 
#else
#define DLLEXPORTDEF_OR_EXTERN DLLEXPORTDEF
#endif

#define TIME_ROUNDOFF 1.0e-10
#define TLAST_MIN     -1E30

#if defined(FMICS1) || defined(FMICS2) || defined(FMIME1) || defined(FMIME2)
#ifdef FMIX
#undef FMIX
#endif
#define FMI
#define MODEL_IDENTIFIER         PIDtunerSpeedControlOpenloop_
#define MODEL_IDENTIFIER_STRING "PIDtunerSpeedControlOpenloop_"
#endif

/* ***************************************************************** 

   code inserted by AMESim
   
   *****************************************************************/

#define AMEVERSION                  20190100
#define SUB_LENGTH                  63

static const char soldToId[] = "6103157";

/**** Model structure definition ****/
/* Structural definition of the model */
#define AME_MODEL_ISEXPLICIT        1

/* Number of explicit declared states  */
#define AME_NBOF_EXPLICIT_STATE     4

/* Number of implicit declared states  */
#define AME_NBOF_IMPLICIT_STATE_DECLARED  0
#define AME_NBOF_IMPLICIT_STATE_GENERATED 0
#define AME_NBOF_IMPLICIT_STATE           0

/* Number of discrete declared states  */
#define AME_NBOF_DISCRETE_STATE     3

/* Total number of states manipulated by the Amesim solver including generated states */
#define AME_NBOF_SOLVER_STATES      4

#define AME_NBOF_PARAMS             72
#define AME_NBOF_REAL_PARAMS        50
#define AME_NBOF_INT_PARAMS         8
#define AME_NBOF_TEXT_PARAMS        1
#define AME_NBOF_CSTATE_PARAMS      4
#define AME_NBOF_DSTATE_PARAMS      3
#define AME_NBOF_FIXED_VAR_PARAMS   6

#define AME_NBOF_VARS               61
#define AME_NBOF_INPUTS             0
#define AME_NBOF_OUTPUTS            0

#define AME_NBOF_REAL_STORES        14
#define AME_NBOF_INT_STORES         19
#define AME_NBOF_POINTER_STORES     2

#define AME_HAS_ENABLED_SUBMODEL    0

#define AME_SIZEOF_DBWORK_ARRAY     5

#define AME_NB_VAR_INFO            61

static const S_AMEModelDef GmodelDef = {
   AME_MODEL_ISEXPLICIT,
   AME_NBOF_EXPLICIT_STATE,
   AME_NBOF_IMPLICIT_STATE_DECLARED,
   AME_NBOF_IMPLICIT_STATE_GENERATED,
   AME_NBOF_DISCRETE_STATE,
   AME_NBOF_VARS,
   AME_NBOF_PARAMS,
   AME_NBOF_REAL_PARAMS,
   AME_NBOF_INT_PARAMS,
   AME_NBOF_TEXT_PARAMS,
   AME_NBOF_CSTATE_PARAMS,
   AME_NBOF_DSTATE_PARAMS,
   AME_NBOF_FIXED_VAR_PARAMS,
   AME_NBOF_INPUTS,
   AME_NBOF_OUTPUTS,
   AME_NBOF_REAL_STORES,
   AME_NBOF_INT_STORES,
   AME_NBOF_POINTER_STORES,
   AME_SIZEOF_DBWORK_ARRAY,
   AME_NB_VAR_INFO
};


static const char **GinputVarTitles = NULL;
static const char **GoutputVarTitles = NULL;

/**** Parameters structure definition ****/

#define NB_SUBMODELNAME       15
static const char* GsubmodelNameArray[NB_SUBMODELNAME] = {
     "W000 instance 1"
   , "THTS1 instance 1"
   , "EBZV01 instance 1"
   , "EMDPMDC01 instance 1"
   , "EBZV01 instance 2"
   , "RN001 instance 1"
   , "MECRSS0B instance 1"
   , "CONS00 instance 1"
   , "MECRL0 instance 1"
   , "MECRL0 instance 2"
   , "RSD00 instance 1"
   , "UD00 instance 1"
   , "EBCT00 instance 1"
   , "MECTS0B instance 1"
   , "DYNCOSIMSHM01 instance 1"
};

static const S_AMEParamInfo GParamInfo[72] = {
     {E_FixedVar_Param       , E_Expression_Param, 0, 1, 0, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 1, 2, 0, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 2, 4, 1, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 3, 6, 2, 0}
   , {E_Real_Param           , E_Expression_Param, 0, -1, 3, 0}
   , {E_Real_Param           , E_Expression_Param, 1, -1, 3, 0}
   , {E_Real_Param           , E_Expression_Param, 2, -1, 3, 0}
   , {E_Real_Param           , E_Expression_Param, 3, -1, 3, 0}
   , {E_Real_Param           , E_Expression_Param, 4, -1, 3, 0}
   , {E_Real_Param           , E_Expression_Param, 5, -1, 3, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 0, 12, 3, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 4, 20, 4, 0}
   , {E_Real_Param           , E_Expression_Param, 6, -1, 5, 0}
   , {E_Real_Param           , E_Expression_Param, 7, -1, 6, 0}
   , {E_Real_Param           , E_Expression_Param, 8, -1, 6, 0}
   , {E_Int_Param            , E_Expression_Param, 0, -1, 6, 0}
   , {E_Real_Param           , E_Expression_Param, 9, -1, 7, 1}
   , {E_DiscreteState_Param  , E_Expression_Param, 0, 34, 7, 0}
   , {E_Real_Param           , E_Expression_Param, 10, -1, 8, 0}
   , {E_Real_Param           , E_Expression_Param, 11, -1, 8, 0}
   , {E_Real_Param           , E_Expression_Param, 12, -1, 8, 0}
   , {E_Real_Param           , E_Expression_Param, 13, -1, 8, 0}
   , {E_Int_Param            , E_Expression_Param, 1, -1, 8, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 2, 36, 8, 0}
   , {E_Real_Param           , E_Expression_Param, 14, -1, 9, 0}
   , {E_Real_Param           , E_Expression_Param, 15, -1, 9, 0}
   , {E_Real_Param           , E_Expression_Param, 16, -1, 9, 0}
   , {E_Real_Param           , E_Expression_Param, 17, -1, 9, 0}
   , {E_Int_Param            , E_Expression_Param, 2, -1, 9, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 1, 29, 9, 0}
   , {E_Real_Param           , E_Expression_Param, 18, -1, 10, 0}
   , {E_Real_Param           , E_Expression_Param, 19, -1, 10, 0}
   , {E_ContinuousState_Param, E_Expression_Param, 3, 47, 10, 0}
   , {E_Real_Param           , E_Expression_Param, 20, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 21, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 22, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 23, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 24, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 25, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 26, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 27, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 28, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 29, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 30, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 31, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 32, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 33, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 34, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 35, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 36, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 37, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 38, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 39, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 40, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 41, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 42, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 43, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 44, -1, 11, 0}
   , {E_Int_Param            , E_Expression_Param, 3, -1, 11, 0}
   , {E_Int_Param            , E_Expression_Param, 4, -1, 11, 0}
   , {E_Real_Param           , E_Expression_Param, 45, -1, 12, 0}
   , {E_Real_Param           , E_Expression_Param, 46, -1, 12, 0}
   , {E_Int_Param            , E_Expression_Param, 5, -1, 12, 0}
   , {E_FixedVar_Param       , E_Expression_Param, 5, 56, 12, 0}
   , {E_Real_Param           , E_Expression_Param, 47, -1, 13, 0}
   , {E_Real_Param           , E_Expression_Param, 48, -1, 13, 0}
   , {E_Int_Param            , E_Expression_Param, 6, -1, 13, 0}
   , {E_Real_Param           , E_Expression_Param, 49, -1, 14, 0}
   , {E_Int_Param            , E_Expression_Param, 7, -1, 14, 0}
   , {E_Text_Param           , E_Expression_Param, 0, -1, 14, 0}
   , {E_DiscreteState_Param  , E_Expression_Param, 1, 58, 14, 0}
   , {E_DiscreteState_Param  , E_Expression_Param, 2, 60, 14, 0}
};

static const int GcontStateVarNum[AME_NBOF_EXPLICIT_STATE] = {
     12, 29, 36, 47
};

static const int GdiscStateVarNum[AME_NBOF_DSTATE_PARAMS] = {
     34, 58, 60
};

static const int *GInputVarNum = NULL;

static const int *GOutputVarNum = NULL;

static const int GFixedVarNum[AME_NBOF_FIXED_VAR_PARAMS] = {
     1, 2, 4, 6, 20, 56
};

#define IS3 (&amesys->pModel->intStoreArray[0])
#define RP3 (&amesys->pModel->realParamArray[0])
#define RP6 (&amesys->pModel->realParamArray[6])
#define RS7 (&amesys->pModel->realStoreArray[0])
#define RP7 (&amesys->pModel->realParamArray[7])
#define IP7 (&amesys->pModel->integerParamArray[0])
#define RP8 (&amesys->pModel->realParamArray[9])
#define IS9 (&amesys->pModel->intStoreArray[2])
#define RP9 (&amesys->pModel->realParamArray[10])
#define IP9 (&amesys->pModel->integerParamArray[1])
#define IS10 (&amesys->pModel->intStoreArray[7])
#define RP10 (&amesys->pModel->realParamArray[14])
#define IP10 (&amesys->pModel->integerParamArray[2])
#define IS11 (&amesys->pModel->intStoreArray[12])
#define RP11 (&amesys->pModel->realParamArray[18])
#define RS13 (&amesys->pModel->realStoreArray[1])
#define IS13 (&amesys->pModel->intStoreArray[16])
#define RP13 (&amesys->pModel->realParamArray[20])
#define IP13 (&amesys->pModel->integerParamArray[3])
#define RS14 (&amesys->pModel->realStoreArray[10])
#define RP14 (&amesys->pModel->realParamArray[45])
#define IP14 (&amesys->pModel->integerParamArray[5])
#define RS16 (&amesys->pModel->realStoreArray[11])
#define RP16 (&amesys->pModel->realParamArray[47])
#define IP16 (&amesys->pModel->integerParamArray[6])
#define RS17 (&amesys->pModel->realStoreArray[12])
#define PS17 (&amesys->pModel->pointerStoreArray[0])
#define RP17 (&amesys->pModel->realParamArray[49])
#define IP17 (&amesys->pModel->integerParamArray[7])
#define TP17 (&amesys->pModel->textParamArray[0])

static int SP17[2] = {2, 3};

static const S_AMEVariableInfo GVarInfo[AME_NB_VAR_INFO] = {
   { 0, 1, 1, 1, "EMDPMDC01", "torqstat" }
  ,{ 1, 1, 1, 1, "W000", "wzero" }
  ,{ 2, 1, 1, 1, "W000", "theta" }
  ,{ 3, 1, 1, 1, "EMDPMDC01", "dh" }
  ,{ 4, 1, 1, 1, "THTS1", "t1" }
  ,{ 5, 0, 1, 1, "EMDPMDC01", "I3" }
  ,{ 6, 1, 1, 1, "EBZV01", "V1" }
  ,{ 7, 1, 1, 1, "RN001", "w1" }
  ,{ 8, 1, 1, 1, "EMDPMDC01", "torqrot" }
  ,{ 9, 1, 1, 1, "EBCT00", "V3" }
  ,{ 10, 1, 1, 1, "EMDPMDC01", "I2" }
  ,{ 11, 1, 1, 1, "EMDPMDC01", "Ua" }
  ,{ 12, 1, 1, 1, "EMDPMDC01", "Ia" }
  ,{ 13, 1, 1, 1, "EMDPMDC01", "wdif" }
  ,{ 14, 1, 1, 1, "EMDPMDC01", "Tem" }
  ,{ 15, 1, 1, 1, "EMDPMDC01", "bemf" }
  ,{ 16, 1, 1, 1, "EMDPMDC01", "Ra" }
  ,{ 17, 1, 1, 1, "EMDPMDC01", "Kt" }
  ,{ 18, 0, 1, 1, "EMDPMDC01", "powerRSelec" }
  ,{ 19, 0, 1, 1, "EMDPMDC01", "powerIelec" }
  ,{ 20, 1, 1, 2, "EBZV01", "V1" }
  ,{ 21, 1, 1, 1, "EBVS01", "I1" }
  ,{ 22, 1, 1, 1, "EBCT00", "I1" }
  ,{ 23, 1, 1, 1, "EBVS01", "V2" }
  ,{ 24, 1, 1, 1, "CONS00", "out" }
  ,{ 25, 1, 1, 1, "EBVS01", "U" }
  ,{ 26, 1, 1, 1, "EBVS01", "I" }
  ,{ 27, 1, 1, 1, "MECRL0", "wdup" }
  ,{ 28, 1, 1, 1, "RN001", "t2" }
  ,{ 29, 1, 1, 2, "MECRL0", "w" }
  ,{ 30, 1, 1, 1, "MECRSS0B", "tordup" }
  ,{ 31, 1, 1, 1, "MECRSS0B", "wsig" }
  ,{ 32, 1, 1, 1, "MECTS0B", "tordup" }
  ,{ 33, 1, 1, 1, "MECRSS0B", "wdup" }
  ,{ 34, 1, 1, 1, "CONS00", "k0GEN" }
  ,{ 35, 1, 1, 1, "RSD00", "to1" }
  ,{ 36, 1, 1, 1, "MECRL0", "w" }
  ,{ 37, 1, 1, 1, "MECRL0", "accel" }
  ,{ 38, 1, 1, 1, "MECRL0", "Tvisc" }
  ,{ 39, 0, 1, 1, "MECRL0", "powerRfrict" }
  ,{ 40, 0, 1, 1, "MECRL0", "powerIrmass" }
  ,{ 41, 1, 1, 1, "RSD00", "t2" }
  ,{ 42, 1, 1, 2, "MECRL0", "wdup" }
  ,{ 43, 1, 1, 2, "MECRL0", "accel" }
  ,{ 44, 1, 1, 2, "MECRL0", "Tvisc" }
  ,{ 45, 0, 1, 2, "MECRL0", "powerRfrict" }
  ,{ 46, 0, 1, 2, "MECRL0", "powerIrmass" }
  ,{ 47, 1, 1, 1, "RSD00", "are" }
  ,{ 48, 0, 1, 1, "RSD00", "powerCrspring" }
  ,{ 49, 0, 1, 1, "RSD00", "powerRrdamp" }
  ,{ 50, 1, 1, 1, "RSD00", "tspring" }
  ,{ 51, 1, 1, 1, "RSD00", "tdamper" }
  ,{ 52, 1, 1, 1, "UD00", "output" }
  ,{ 53, 1, 1, 1, "MECTS0B", "wdup" }
  ,{ 54, 1, 1, 1, "TORQC", "torque" }
  ,{ 55, 1, 1, 1, "EBCT00", "vsig" }
  ,{ 56, 1, 1, 1, "EBCT00", "U" }
  ,{ 57, 1, 1, 1, "EBCT00", "I" }
  ,{ 58, 1, 1, 1, "DYNCOSIMSHM01", "p1__outputs" }
  ,{ 59, 1, 1, 1, "MECTS0B", "torsig" }
  ,{ 60, 1, 1, 1, "DYNCOSIMSHM01", "p2__outputs" }
};

/* For memory access in case of RT target such as dSpace targets */
#ifdef AME_MEMORY_ACCESS_RT_EXPORT
#if(AME_NBOF_VARS>0)
static double RT_Export_Vars[AME_NBOF_VARS];
#endif
#if(AME_NBOF_REAL_PARAMS>0)
static double RT_Export_RealParam[AME_NBOF_REAL_PARAMS];
#endif
#if(AME_NBOF_INT_PARAMS>0)
static int RT_Export_IntParam[AME_NBOF_INT_PARAMS];
#endif
#endif


#if !defined(AME_IMPLICIT_MODEL_ACCEPTED) && (AME_MODEL_ISEXPLICIT == 0)
#error "Implicit model not supported for the current interface."
#endif


/* ============================================================== */
/* If the interface needs linearisation (cosim and Amesim) */

#ifndef AME_NO_LA
#ifndef AME_NEED_LINEAR_ANALYSIS
#define AME_NEED_LINEAR_ANALYSIS
#endif
#endif

#if( AME_MODEL_ISEXPLICIT == 1)
#define AMEfuncPerturb LPerturbIfNecessary
#else
#define AMEfuncPerturb DPerturbIfNecessary
#endif

#ifdef AME_ADVANCEDDEBUG
static void AME_POST_SUBMODCALL_WITH_DISCON(AMESIMSYSTEM *amesys, int *flag, int *sflag, int *oflag, int *panic, char *submodelname, int instancenum)
{
   if(*sflag < 3)*sflag = getnfg_();
#ifdef AME_NEED_LINEAR_ANALYSIS
   if(*flag == 5)
   {
      AMEfuncPerturb(amesys, flag);
   }
   else if(*oflag != 5)
   {
      resdis(amesys, flag, sflag, oflag, submodelname, instancenum, panic);
   }
#else
   resdis(amesys, flag, sflag, oflag, submodelname, instancenum, panic);
#endif
}

static void AME_POST_SUBMODCALL_NO_DISCON(AMESIMSYSTEM *amesys, int *flag)
{
#ifdef AME_NEED_LINEAR_ANALYSIS
   if(*flag == 5)
   {
      AMEfuncPerturb(amesys, flag);
   }
#endif
}
#endif


#ifndef AME_ADVANCEDDEBUG
#ifdef AME_NEED_LINEAR_ANALYSIS
/* Typically for normal runs and cosim */
#define AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,sflag,oflag,panic,submodelname,instancenum) if(*sflag < 3)*sflag = getnfg_(); if(*flag == 5) AMEfuncPerturb(amesys, flag); else if(*oflag != 5) resdis(amesys, flag, sflag, oflag, submodelname, instancenum, panic)
#define AME_POST_SUBMODCALL_NO_DISCON(amesys,flag) if(*flag == 5) AMEfuncPerturb(amesys, flag)
#else
/* Typically for code exchange (simulink for instance) */
#define AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,sflag,oflag,panic,submodelname,instancenum) if(*sflag < 3)*sflag = getnfg_(); resdis(amesys, flag, sflag, oflag,submodelname,instancenum,panic)
#define AME_POST_SUBMODCALL_NO_DISCON(amesys,flag)
#endif
#endif

#ifdef AMERT
/* We dont need LA nor resdis for real-time - so set them to (almost) empty macros. (set sflag=0) */
#undef AME_POST_SUBMODCALL_WITH_DISCON
#undef AME_POST_SUBMODCALL_NO_DISCON
#define AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,sflag,oflag,panic,submodelname,instancenum) *sflag = 0
#define AME_POST_SUBMODCALL_NO_DISCON(amesys,flag) 
#endif

/* ============================================================== */

#ifdef AMERT
double IL_PIDtunerSpeedControlOpenloop_step_ratio=0;
#endif

#ifdef AME_MEMORY_ACCESS_RT_EXPORT
#include "PIDtunerSpeedControlOpenloop_.export.h"
#endif

#ifdef AME_INPUT_IN_MEMORY
#include "PIDtunerSpeedControlOpenloop_.sim.h"
#endif

#if( AME_MODEL_ISEXPLICIT == 0 )
#define LRW (40+9*AME_NBOF_SOLVER_STATES+AME_NBOF_SOLVER_STATES*AME_NBOF_SOLVER_STATES)
#define LIW (21+AME_NBOF_SOLVER_STATES)
#endif

/* *******************  Function prototypes ************ */


extern void w000in_(int *n, double *y0, double *y1);
extern void thts1in_(int *n, double *y0);
extern void ebzv01in_(int *n, double *y0);
extern void emdpmdc01in_(int *n, double *RP, int *IS, double *y0
                   , double *y1, double *y2, double *y3, double *y4
                   );
extern void emdpmdc01_(int *n, double *ve0, double *ve1, double *ve2
                   , double *ve3, double *ve4, double *vi5, double *vi6
                   , double *vidot6, double *vi7, double *vi8
                   , double *vi9, double *vi10, double *vi11, double *vi12
                   , double *vidot12, double *vi13, double *vi14
                   , double *vidot14, double *vi15, double *vidot15
                   , double *vi16, double *vi17, double *vidot17
                   , double *RP, int *IS);
extern double emdpmdc01_macro0_(int *n, double *m0, double *m1
              , double *RP, int *IS);
extern void ebvs01in_(int *n);
extern void ebvs01_(int *n, double *ve0, double *ve1, double *ve2
                   , double *vi3, double *vi4);
extern void rn001in_(int *n, double *RP);
extern void mecrss0bin_(int *n, double *RP, int *IP, double *RS
                 );
extern void cons00in_(int *n, double *RP, double *y0);
extern void cons00_(int *n, double *ve0, double *vi1, double *RP
                 , int *flag);
extern void mecrl0in_(int *n, double *RP, int *IP, int *IS, double *y0
                   , double *y1, double *y2, double *y3, double *y4
                   );
extern void mecrl0_(int *n, double *ve0, double *ve1, double *vedot1
                   , double *ve2, double *vi3, double *vi4, double *vi5
                   , double *vidot5, double *vi6, double *vi7
                   , double *vidot7, double *vi8, double *vidot8
                   , double *vi9, double *vi10, double *vidot10
                   , double *RP, int *IP, int *IS);
extern void rsd00in_(int *n, double *RP, int *IS, double *y0, double *y1
                   , double *y2, double *y3, double *y4);
extern void rsd00_(int *n, double *ve0, double *ve1, double *ve2
                   , double *vi3, double *vidot3, double *vi4
                   , double *vidot4, double *vi5, double *vi6
                   , double *vidot6, double *vi7, double *vidot7
                   , double *vi8, double *vi9, double *vidot9
                   , double *vi10, double *vi11, double *RP, int *IS
                 );
extern void torqcin_(int *n);
extern void ud00in_(int *n, double *RP, int *IP, double *RS, int *IS
                 );
extern void ud00_(int *n, double *ve0, double *RP, int *IP, double *RS
                 , int *IS, int *flag, double *t);
extern void ebct00in_(int *n, double *RP, int *IP, double *RS
                 , double *y0);
extern void ebct00_(int *n, double *ve0, double *ve1, double *vi2
                   , double *RP, int *IP, double *RS);
extern void ssinkin_(int *n);
extern void mects0bin_(int *n, double *RP, int *IP, double *RS
                 );
extern void dyncosimshm01in_(int *n, int *SP_1, int *SP_2, double *RP
                 , int *IP, char **TP, double *RS, void **PS, double *y0
                   );
extern void dyncosimshm01_(int *n, int *SP_1, int *SP_2, double *port_1_v1
                   , double *port_2_v1, double *RP, int *IP, char **TP
                 , double *RS, void **PS, int *flag, double *t
                   );
extern void dyncosimshm01end_(int *n, int *SP_1, int *SP_2, double *RP
                 , int *IP, char **TP, double *RS, void **PS, double *y0
                   );



/* ******************    Here comes the functions ************ */
static void PreInitialize(AMESIMSYSTEM *amesys, double *y)
{
   int n = 0;
   double *v = amesys->v;
   double *Z = amesys->discrete_states;
   double *dbk_wk = amesys->pModel->dbk_wk;


}

static void Initialize(AMESIMSYSTEM *amesys, double *y)
{
   int n;
   double *v = amesys->v;
   double *Z = amesys->discrete_states;
   double *dbk_wk = amesys->pModel->dbk_wk;


   n = 1;
   w000in_(&n, &v[1], &v[2]);

   n = 1;
   thts1in_(&n, &v[4]);

   n = 1;
   ebzv01in_(&n, &v[6]);

   n = 2;
   ebzv01in_(&n, &v[20]);

   n = 1;
   cons00in_(&n, RP8, &Z[0]);

   n = 1;
   ud00in_(&n, RP13, IP13, RS13, IS13);

   n = 1;
   ebvs01in_(&n);

   n = 1;
   torqcin_(&n);

   n = 1;
   ebct00in_(&n, RP14, IP14, RS14, &v[56]);

   n = 1;
   mecrss0bin_(&n, RP7, IP7, RS7);

   n = 1;
   rsd00in_(&n, RP11, IS11, &y[3], NULL, NULL, NULL, NULL);

   n = 1;
   mects0bin_(&n, RP16, IP16, RS16);

   n = 1;
   {
      double *port_1_v1 = &(dbk_wk[0]);

      port_1_v1[0] 	= Z[1];
      port_1_v1[1] 	= Z[2];

      dyncosimshm01in_(&n, &SP17[0], &SP17[1], RP17, IP17, TP17
         , RS17, PS17, port_1_v1);
      Z[1] 	= port_1_v1[0];
      Z[2] 	= port_1_v1[1];
   }

   n = 2;
   ssinkin_(&n);

   n = 2;
   mecrl0in_(&n, RP10, IP10, IS10, &y[1], NULL, NULL, NULL, NULL
      );

   n = 1;
   ssinkin_(&n);

   n = 1;
   emdpmdc01in_(&n, RP3, IS3, &y[0], NULL, NULL, NULL, NULL);

   n = 1;
   rn001in_(&n, RP6);

   n = 1;
   mecrl0in_(&n, RP9, IP9, IS9, &y[2], NULL, NULL, NULL, NULL
      );

}

static void localFuncEval(AMESIMSYSTEM *amesys, double t, double *y, double *yprime, double *delta, int *flag)
{
   int sflag, oflag, n, panic, i=0;
   int *oldflag, *newflag;
   double *v = amesys->v;
   double *Z = amesys->discrete_states;
   double *input = amesys->inputs;
   double *output = amesys->outputs;
   double *dbk_wk = amesys->pModel->dbk_wk;
   
#if(AME_MODEL_ISEXPLICIT == 1)
   double *dot = yprime;
   
#if(AME_HAS_ENABLED_SUBMODEL == 1)
   memset(dot,0,AME_NBOF_SOLVER_STATES*sizeof(double));
#elif (AME_NBOF_EXPLICIT_STATE == 0)
   dot[0] = 0.0;
#endif

#elif( AME_NBOF_EXPLICIT_STATE > 0 )  
   double dot[AME_NBOF_EXPLICIT_STATE];
   
   /* Initialize the dot vector to the yprime vector. */
   memcpy((void *)dot, (void *)yprime, AME_NBOF_EXPLICIT_STATE*sizeof(double));  
#endif    
   
   SetGlobalSystem(amesys);

#if(defined(AME_COSIM) && (AME_NBOF_INPUTS > 0))
   if(amesys->doInterpol) {
      if( getInputsCosimSlave(amesys->csSlave, t, input) != AME_NO_ERROR ) {
         AmeExit(1);
      }
   }
#endif
   
#if(AME_MODEL_ISEXPLICIT == 0)
   /* Initialize the residuals for the implicits to the derivatives of the implicits. */
   for(i=AME_NBOF_EXPLICIT_STATE;i<AME_NBOF_SOLVER_STATES;i++)
   {
      delta[i] = yprime[i];
   }
#endif
   
   /* Record old value of flag (oflag) and set 
      flag value for use in submodels (sflag).
      Also get addresses of main discontinuity flags. */

   oflag = *flag;
   sflag = *flag;

   if(amesys->first_call)
   {
      GetFlagAddresses(&amesys->oldflag, &amesys->newflag);
   }
   oldflag = amesys->oldflag;
   newflag = amesys->newflag;

   /* Initialize everything ready for potential calls to stepdn
      in submodels. */

   panic = 0;
   getredstep();

   if(isstabrun_())
   {
      t = amesys->simOptions->fixedTime;
   }
   else if(*flag == 2)
   {
      /* Record current simulation time for message passing. */
 
      SetSimTime(t);
   }
   /* Record current simulation time for ametim_(). */

   SetTimeAtThisStep(t);

   if (holdinputs_())
   {
      /* We reset artificially the time to the initial value
         to give the illusion of held inputs. */

      t = getstarttime_();
   }
   /* Assign the state variables y[] calculated by the integrator 
      to the appropriate variables v[]. */

   /* Assign continuous state variables calculated by the integrator */
#if( (AME_MODEL_ISEXPLICIT == 0) && (AME_NBOF_SOLVER_STATES > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_SOLVER_STATES; idxState++) {
         v[GcontStateVarNum[idxState]] = y[idxState];
      }
   }
#elif( (AME_MODEL_ISEXPLICIT == 1) && (AME_NBOF_EXPLICIT_STATE > 0) )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_EXPLICIT_STATE; idxState++) {
         v[GcontStateVarNum[idxState]] = y[idxState];
      }
   }
#endif

   /* Assign discrete state variables */
#if( AME_NBOF_DISCRETE_STATE > 0 )
   {
      int idxState;
      for(idxState = 0; idxState < AME_NBOF_DISCRETE_STATE; idxState++) {
         v[GdiscStateVarNum[idxState]] = Z[idxState];
      }
   }
#endif
   
   /* Assign the interface input variables to the appropriate variable v(). */
#if(AME_NBOF_INPUTS > 0)
   {
      int idxInput;
      for(idxInput = 0; idxInput < AME_NBOF_INPUTS; idxInput++) {
         v[GInputVarNum[idxInput]] = input[idxInput];
      }
   }
#endif

#if(AME_MODEL_ISEXPLICIT == 1)
  /* The following call ensures that lsoda does not integrate past
      time amesys->t_end_of_time_slice. This does not matter in a standard AMESim run but is
      very important with cosimulation. */
  
#ifdef AME_COSIM  
   *oldflag = *newflag = sflag;
   sdistim_(&amesys->t_end_of_time_slice);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys, flag,&sflag,&oflag,&panic,"_Cosimulation",1);
#endif

#else
   if(*flag == 5)
   {
      DPerturbIfNecessary(amesys, flag);
   }
#endif   
	 
   /* Call submodel calculation subroutine in the order 
      that ensures the input requirements of each submodel
      are satisfied. */

   v[10] = -v[12];
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   v[5] = v[12];
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   v[3] = RP3[1]*(1+RP3[2]*(v[4]-RP3[0]))*v[12]*v[12];
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   n = 1;
   *oldflag = *newflag = sflag;
   cons00_(&n, &v[24], &v[34], RP8, &sflag);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"CONS00",1);

   n = 1;
   *oldflag = *newflag = sflag;
   ud00_(&n, &v[52], RP13, IP13, RS13, IS13, &sflag, &t);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"UD00",1);

   v[22] = v[10] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   v[55] = -RP14[1]*(RS14[0]*v[10]-RP14[0]);
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   n = 1;
   *oldflag = *newflag = sflag;
   ebvs01_(&n, &v[20], &v[22], &v[24], &v[25], &v[26]);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"EBVS01",1);

   v[21] = v[22] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   v[23] = v[24]+v[20];
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   v[54] = v[52];
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   n = 1;
   *oldflag = *newflag = sflag;
   ebct00_(&n, &v[23], &v[10], &v[57], RP14, IP14, RS14);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"EBCT00",1);

   v[9] = v[23] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   v[32] = v[54];
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   v[59] = RP16[1]*(RS16[0]*v[54]-RP16[0]);
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   v[30] = v[32];
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   v[31] = RP7[1]*(RS7[0]*v[29]-RP7[0]);
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   v[33] = v[29];
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   v[27] = -v[36] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   v[42] = -v[29] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   n = 1;
   *oldflag = *newflag = sflag;
   rsd00_(&n, &v[35], &v[36], &v[42], &v[47], &dot[3], NULL, NULL
      , &v[48], NULL, NULL, NULL, NULL, &v[49], NULL, NULL, &v[50]
      , &v[51], RP11, IS11);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"RSD00",1);

   v[41] = v[35] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   v[53] = v[33];
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   n = 1;
   *oldflag = *newflag = sflag;
   {  /* DBK specific start. */
      double *port_1_v1 = &(dbk_wk[0]);
      double *port_2_v1 = &(dbk_wk[2]);

      port_1_v1[0] 	= v[58];
      port_1_v1[1] 	= v[60];
      port_2_v1[0] 	= v[55];
      port_2_v1[1] 	= v[31];
      port_2_v1[2] 	= v[59];

      dyncosimshm01_(&n, &SP17[0], &SP17[1], port_1_v1, port_2_v1
      , RP17, IP17, TP17, RS17, PS17, &sflag, &t);
      v[58] 	= port_1_v1[0];
      v[60] 	= port_1_v1[1];
   }
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"DYNCOSIMSHM01",1);

   v[7] = RP6[0]*v[27];
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   n = 2;
   *oldflag = *newflag = sflag;
   mecrl0_(&n, &v[41], &v[29], &dot[1], &v[30], &v[43], &v[44]
      , NULL, NULL, &v[45], NULL, NULL, NULL, NULL, &v[46], NULL
      , NULL, RP10, IP10, IS10);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"MECRL0",2);

   n = 1;
   *oldflag = *newflag = sflag;
   v[13] = emdpmdc01_macro0_(&n, &v[7], &v[1], RP3, IS3);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"EMDPMDC01",1);

   n = 1;
   *oldflag = *newflag = sflag;
   emdpmdc01_(&n, &v[7], &v[9], &v[6], &v[4], &v[1], &v[11], &v[12]
      , &dot[0], &v[13], &v[14], &v[15], &v[16], &v[17], NULL
      , NULL, &v[18], NULL, NULL, NULL, NULL, &v[19], NULL, NULL
      , RP3, IS3);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"EMDPMDC01",1);

   v[8] = v[14];
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   v[0] = v[8] /* Duplicate variable. */;
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   v[28] = RP6[0]*v[8];
   AME_POST_SUBMODCALL_NO_DISCON(amesys,flag);

   n = 1;
   *oldflag = *newflag = sflag;
   mecrl0_(&n, &v[28], &v[36], &dot[2], &v[35], &v[37], &v[38]
      , NULL, NULL, &v[39], NULL, NULL, NULL, NULL, &v[40], NULL
      , NULL, RP9, IP9, IS9);
   AME_POST_SUBMODCALL_WITH_DISCON(amesys,flag,&sflag,&oflag,&panic,"MECRL0",1);


   /* Set interface outputs here. */
#if(AME_NBOF_OUTPUTS > 0)
   {
      int idxOutput;
      for(idxOutput = 0; idxOutput < AME_NBOF_OUTPUTS; idxOutput++) {
         output[idxOutput] = v[GOutputVarNum[idxOutput]];
      }
   }
#endif

#if(AME_MODEL_ISEXPLICIT == 1)
   applyStateStatus(dot,AME_NBOF_SOLVER_STATES);
#elif( AME_NBOF_EXPLICIT_STATE > 0)
   applyStateStatus(dot,AME_NBOF_EXPLICIT_STATE);

   for(i=0;i<AME_NBOF_EXPLICIT_STATE;i++)
   {
      delta[i] = dot[i] - yprime[i];
   }
#endif

   if(*flag == 0)
   {
      /* It is an initialization call and the user
         is permitted to change the state variables
         and discrete variables. */
      updateStatesFromModel(amesys, y, AME_CONTINUOUS_STATE|AME_DISCRETE_STATE);
   }

#if( AME_NBOF_DISCRETE_STATE > 0)
   if(is_sample_time()) {
      /* Change discrete variables */
      updateStatesFromModel(amesys, y, AME_DISCRETE_STATE);
   }
#endif

   UpFECount(amesys);

   amesys->first_call = 0;
}

static void localJFuncEval_0(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;

   v[12] = y[col];
   v[10] = -v[12];
   v[5] = v[12];
   v[3] = RP3[1]*(1+RP3[2]*(v[4]-RP3[0]))*v[12]*v[12];
   v[22] = v[10] /* Duplicate variable. */;
   v[55] = -RP14[1]*(RS14[0]*v[10]-RP14[0]);
   n = 1;
   ebvs01_(&n, &v[20], &v[22], &v[24], &v[25], &v[26]);
   v[21] = v[22] /* Duplicate variable. */;
   n = 1;
   ebct00_(&n, &v[23], &v[10], &v[57], RP14, IP14, RS14);
   n = 1;
   {  /* DBK specific start. */
      double *port_1_v1 = &(dbk_wk[0]);
      double *port_2_v1 = &(dbk_wk[2]);

      port_1_v1[0] 	= v[58];
      port_1_v1[1] 	= v[60];
      port_2_v1[0] 	= v[55];
      port_2_v1[1] 	= v[31];
      port_2_v1[2] 	= v[59];

      dyncosimshm01_(&n, &SP17[0], &SP17[1], port_1_v1, port_2_v1
      , RP17, IP17, TP17, RS17, PS17, &sflag, &t);
      v[58] 	= port_1_v1[0];
      v[60] 	= port_1_v1[1];
   }
   n = 1;
   emdpmdc01_(&n, &v[7], &v[9], &v[6], &v[4], &v[1], &v[11], &v[12]
      , &dot[0], &v[13], &v[14], &v[15], &v[16], &v[17], NULL
      , NULL, &v[18], NULL, NULL, NULL, NULL, &v[19], NULL, NULL
      , RP3, IS3);
   v[8] = v[14];
   v[0] = v[8] /* Duplicate variable. */;
   v[28] = RP6[0]*v[8];
   n = 1;
   mecrl0_(&n, &v[28], &v[36], &dot[2], &v[35], &v[37], &v[38]
      , NULL, NULL, &v[39], NULL, NULL, NULL, NULL, &v[40], NULL
      , NULL, RP9, IP9, IS9);
}


static void localJFuncEval_1(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;

   v[29] = y[col];
   v[31] = RP7[1]*(RS7[0]*v[29]-RP7[0]);
   v[33] = v[29];
   v[42] = -v[29] /* Duplicate variable. */;
   n = 1;
   rsd00_(&n, &v[35], &v[36], &v[42], &v[47], &dot[3], NULL, NULL
      , &v[48], NULL, NULL, NULL, NULL, &v[49], NULL, NULL, &v[50]
      , &v[51], RP11, IS11);
   v[41] = v[35] /* Duplicate variable. */;
   v[53] = v[33];
   n = 1;
   {  /* DBK specific start. */
      double *port_1_v1 = &(dbk_wk[0]);
      double *port_2_v1 = &(dbk_wk[2]);

      port_1_v1[0] 	= v[58];
      port_1_v1[1] 	= v[60];
      port_2_v1[0] 	= v[55];
      port_2_v1[1] 	= v[31];
      port_2_v1[2] 	= v[59];

      dyncosimshm01_(&n, &SP17[0], &SP17[1], port_1_v1, port_2_v1
      , RP17, IP17, TP17, RS17, PS17, &sflag, &t);
      v[58] 	= port_1_v1[0];
      v[60] 	= port_1_v1[1];
   }
   n = 2;
   mecrl0_(&n, &v[41], &v[29], &dot[1], &v[30], &v[43], &v[44]
      , NULL, NULL, &v[45], NULL, NULL, NULL, NULL, &v[46], NULL
      , NULL, RP10, IP10, IS10);
   n = 1;
   mecrl0_(&n, &v[28], &v[36], &dot[2], &v[35], &v[37], &v[38]
      , NULL, NULL, &v[39], NULL, NULL, NULL, NULL, &v[40], NULL
      , NULL, RP9, IP9, IS9);
}


static void localJFuncEval_2(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;

   v[36] = y[col];
   v[27] = -v[36] /* Duplicate variable. */;
   n = 1;
   rsd00_(&n, &v[35], &v[36], &v[42], &v[47], &dot[3], NULL, NULL
      , &v[48], NULL, NULL, NULL, NULL, &v[49], NULL, NULL, &v[50]
      , &v[51], RP11, IS11);
   v[41] = v[35] /* Duplicate variable. */;
   v[7] = RP6[0]*v[27];
   n = 2;
   mecrl0_(&n, &v[41], &v[29], &dot[1], &v[30], &v[43], &v[44]
      , NULL, NULL, &v[45], NULL, NULL, NULL, NULL, &v[46], NULL
      , NULL, RP10, IP10, IS10);
   n = 1;
   v[13] = emdpmdc01_macro0_(&n, &v[7], &v[1], RP3, IS3);
   n = 1;
   emdpmdc01_(&n, &v[7], &v[9], &v[6], &v[4], &v[1], &v[11], &v[12]
      , &dot[0], &v[13], &v[14], &v[15], &v[16], &v[17], NULL
      , NULL, &v[18], NULL, NULL, NULL, NULL, &v[19], NULL, NULL
      , RP3, IS3);
   v[8] = v[14];
   v[0] = v[8] /* Duplicate variable. */;
   v[28] = RP6[0]*v[8];
   n = 1;
   mecrl0_(&n, &v[28], &v[36], &dot[2], &v[35], &v[37], &v[38]
      , NULL, NULL, &v[39], NULL, NULL, NULL, NULL, &v[40], NULL
      , NULL, RP9, IP9, IS9);
}


static void localJFuncEval_3(AMESIMSYSTEM * amesys, double t, double * y, double * dot, double * v, double * yprime, double * delta, int col)
{
   int sflag = 1;
   int n;
   double *dbk_wk = amesys->pModel->dbk_wk;

   v[47] = y[col];
   n = 1;
   rsd00_(&n, &v[35], &v[36], &v[42], &v[47], &dot[3], NULL, NULL
      , &v[48], NULL, NULL, NULL, NULL, &v[49], NULL, NULL, &v[50]
      , &v[51], RP11, IS11);
   v[41] = v[35] /* Duplicate variable. */;
   n = 2;
   mecrl0_(&n, &v[41], &v[29], &dot[1], &v[30], &v[43], &v[44]
      , NULL, NULL, &v[45], NULL, NULL, NULL, NULL, &v[46], NULL
      , NULL, RP10, IP10, IS10);
   n = 1;
   mecrl0_(&n, &v[28], &v[36], &dot[2], &v[35], &v[37], &v[38]
      , NULL, NULL, &v[39], NULL, NULL, NULL, NULL, &v[40], NULL
      , NULL, RP9, IP9, IS9);
}


static void (*jfunc_table[])(AMESIMSYSTEM *, double, double *, double *, double *, double *, double *, int) = {
      localJFuncEval_0, localJFuncEval_1, localJFuncEval_2, localJFuncEval_3
};



static void localJFuncEval(AMESIMSYSTEM *amesys, double t, double *y, double *yprime, double *delta, int col)
{
   int sflag=1; /* Only one flag value is required. */
   int n=1, i=0;
   double *v = amesys->v;
   double *vcopy = amesys->vcopy;
   double *input = amesys->inputs;
   double *output = amesys->outputs;
   double *Z = amesys->discrete_states;
   double *dbk_wk = amesys->pModel->dbk_wk;
   
#if(AME_MODEL_ISEXPLICIT == 1)
   double *dot = yprime;
   
#elif( AME_NBOF_EXPLICIT_STATE > 0 )  
   double dot[AME_NBOF_EXPLICIT_STATE];
   
   /* Initialize the dot vector to the yprime vector. */
   memcpy((void *)dot, (void *)yprime, AME_NBOF_EXPLICIT_STATE*sizeof(double));  
#else
   double *dot = NULL;
#endif    
   
#if(AME_MODEL_ISEXPLICIT == 0)
   /* Initialize everything ready for potential calls to stepdn
      in submodels. */

#if(defined(AME_COSIM) && (AME_NBOF_INPUTS > 0))
   if(amesys->doInterpol) {
      if( getInputsCosimSlave(amesys->csSlave, t, input) != AME_NO_ERROR ) {
         AmeExit(1);
      }
   }
#endif
      
   if(isstabrun_())
   {
      t = amesys->simOptions->fixedTime;
   }
#endif
   
   /* Record current simulation time for ametim_(). */

   SetTimeAtThisStep(t);

   if (holdinputs_())
   {
      /* We reset artificially the time to the initial value
         to give the illusion of held inputs. */

      t = getstarttime_();
   }
   memcpy((void *)vcopy, (void *)v, (size_t)(AME_NBOF_VARS*sizeof(double)));

   /* Assign the state variables y[] calculated by the integrator 
      to the appropriate variables v[] and right calls necessary
      for that state in a case of a switch. */

   (*jfunc_table[col])(amesys, t, y, dot, v, yprime, delta, col);
   
   memcpy((void *)v, (void *)vcopy, (size_t)(AME_NBOF_VARS*sizeof(double)));

   UpFECount(amesys);
}

static void EndOfSimulation(AMESIMSYSTEM *amesys)
{
   int n=1;
   double *y = amesys->states;
   double *v = amesys->v;
   double *Z = amesys->discrete_states;
   double *dbk_wk = amesys->pModel->dbk_wk;


   n = 1;
   {
      double *port_1_v1 = &(dbk_wk[0]);

      port_1_v1[0] 	= Z[1];
      port_1_v1[1] 	= Z[2];

      dyncosimshm01end_(&n, &SP17[0], &SP17[1], RP17, IP17, TP17
         , RS17, PS17, port_1_v1);
      Z[1] 	= port_1_v1[0];
      Z[2] 	= port_1_v1[1];
   }

}

static void ameTerminate(AMESIMSYSTEM *amesys)
{
#ifdef AME_WRITE_RUNSTAT
   if(amesys->simOptions ) {
      if(amesys->simOptions->statistics)
      {
         WriteRunStats(amesys);
      }
   }
#endif
#ifdef AME_PROCESS_TIME
   ProcessTime(2);
#endif
      
   /* Save state count, discontinuities and finalize the Performance Analyzer */
#ifdef AME_PERFORMANCE_ANALYZER
   if(!isfixedstepsolver_()){
      PerfAnalyzer_SaveStateCount (amesys);
      PerfAnalyzer_SaveDiscontinuities(amesys);
      PerfAnalyzer_Close(amesys);   
   }
#endif

#ifdef AME_RESULT_FILE
   amesys->CloseResultFile(amesys);
#endif

   EndOfSimulation(amesys);
   AmeCallAtEnd(amesys->ameExitStatus);
   modelCleanStore(amesys->pModel);
}

#ifdef AME_EXPOSE_JACOBIAN
static int getPartialDerivatives(double *A, double *B, double *C, double *D)
{
   int res;
   AMESIMSYSTEM  *amesys = GetGlobalSystem();
   
   SPARSE_MATRIX *Amat, *Bmat, *Cmat, *Dmat;
   
#if(AME_MODEL_ISEXPLICIT == 1)
   if (amesys->tlast > TLAST_MIN)
      res = LDoLinearAnalysisOnDemand(amesys, amesys->numstates,
                                       amesys->tlast, amesys->states,
                                       &Amat, &Bmat, &Cmat, &Dmat);
#else
   if (amesys->tlast > TLAST_MIN)
      res = DDoLinearAnalysisOnDemand(amesys, amesys->neq,
                                       amesys->tlast,
                                       amesys->states, amesys->dotstates,
                                       &Amat, &Bmat, &Cmat, &Dmat);
#endif
   else
      res = 0;  /* failed: system probably not initialized */
   
   if(res != 0) {
      if(Amat) {
         GetMatAsDense(Amat,A);
      }
      if(Bmat) {
         GetMatAsDense(Bmat,B);
      }
      if(Cmat) {
         GetMatAsDense(Cmat,C);
      }
      if(Dmat) {
         GetMatAsDense(Dmat,D);
      }
      FreeSparseMatrix(Amat);
      FreeSparseMatrix(Bmat);
      FreeSparseMatrix(Cmat);
      FreeSparseMatrix(Dmat);
   }
   
   return res;
} /* getPartialDerivatives */

static int setLADetailsFromIO(int num_input_index, int num_output_index,
                              int *input_index, int *output_index, int *nbState)
{
   *nbState = AME_NBOF_EXPLICIT_STATE + AME_NBOF_IMPLICIT_STATE;

   return SetLADetailsFromIO(AME_NBOF_EXPLICIT_STATE, AME_NBOF_IMPLICIT_STATE,
                              AME_NBOF_INPUTS, AME_NBOF_OUTPUTS,
                              num_input_index, num_output_index, input_index, output_index,
                              GInputVarNum, GOutputVarNum, 0.0, 1.0, 1.0, 0.1);
}
#endif

/* ============================================================== */

static void ModelAmeExit(AMESIMSYSTEM *amesys, int status)
{
   /* Will be catch by the state machine */
   amesys->ameExitStatus = status;
   longjmp(amesys->jump_env, status);
}

#ifdef AME_INPUT_IN_MEMORY
#include "PIDtunerSpeedControlOpenloop_.ssf.h"
static char **getssflist(int *num_items)
{
   *num_items = savestatusflags_length;
   return savestatusflags;
}
#endif

/**************************************************************
*                                                             *
* Function load_subdata_tables reads data for lookuptables    *
* mostly/only used for realtime                               *
*                                                             *
* 0106429                                                     *
* Move the include outside of function. The include now       *
* contains one function per table and a function that calls   *
* them all. This reduces the risk that a compiler crashes due *
* to a huge function.                                         *
**************************************************************/
#ifdef AME_TABLES_IN_MEMORY
#include "PIDtunerSpeedControlOpenloop_.subdata.h"
#endif

static void load_subdata_tables(void)
{
#ifdef AME_TABLES_IN_MEMORY
   add_all_tables_to_memory();
#endif
}

/***********************************************************
   Purpose  :  Return Simcenter Amesim version used to generate the model C code
               It allows the client to update interface management for
               backward compatibility.
   Author	:  J.Andre
   Creation :  2016 - 09 - 05
   Inputs   :  None 
   Outputs  :  Simcenter Amesim version
   Revision :
************************************************************/
static unsigned int AmesysGetVersion() 
{
	/* Returned number indicates 10000* main verion + 100* SL version + minor */
   /* Eg. Rev15     (15.0.0)  => 150000 */
   /* Eg. Rev15SL1  (15.1.0)  => 150100 */
   /* Eg. Rev15.0.1 (15.0.1)  => 150001 */

   return AMEVERSION;
}

/***********************************************************
   Purpose  :  Return SoldTo ID which Simcenter Amesim model has been generated.
   Author	:  J.Andre
   Creation :  2017 - 02 - 13
   Inputs   :  None 
   Outputs  :  SoldToID
   Revision :
************************************************************/
static const char* getSoldToID()
{
   return "6103157";
}

#ifdef AME_INPUT_IN_MEMORY
#include "PIDtunerSpeedControlOpenloop_.globalparams.h"
#endif

/***********************************************************
   Purpose  : Load and evaluate model parameters from files
   Author   : J.Andre
   Created  : 2016 - 09 - 08
   Inputs   :
      amesys  : system
      errmsg  : error message
   Outputs  : Error code
   Revision :
************************************************************/
static AMESystemError loadModelParamFromDisk(AMESIMSYSTEM *amesys, AMESystemError *gpError,  AMESystemError *lpError, char *errmsg)
{
   AMESystemError ret;
   *gpError = AME_NO_ERROR;
   *lpError = AME_NO_ERROR;
   
   ret = AmeReadGPFile(amesys);
   
   if(ret == AME_NO_ERROR) {
      *gpError = AmeEvalGlobalParamList(amesys, 1, errmsg);
      *lpError = loadParameterFromFile(amesys->pModel, GetDataFileName(), errmsg);
   }
   return ret;
}

#ifdef AME_INPUT_IN_MEMORY

/***********************************************************
   Purpose    : Load and evaluate model parameters from memory
   Author	  : J.Andre
   Created on : 2016 - 09 - 08
   Inputs	  :
      amesys  : system
      errmsg  : error message
   Outputs	  : Parameter error code
   Revision   :
************************************************************/
static AMESystemError loadModelParamFromMemory(AMESIMSYSTEM *amesys, AMESystemError *gpError,  AMESystemError *lpError, char * errmsg)
{  
#include "PIDtunerSpeedControlOpenloop_.data.h"
   
   ameAddGlobalParamsFromMemory(amesys,errmsg);
   
   *gpError = AmeEvalGlobalParamList(amesys, 1, errmsg);
   *lpError = loadParameterFromDataTable(amesys->pModel, allparams, errmsg);

   return AME_NO_ERROR;
}

#endif

/***********************************************************
   Purpose    : Load and evaluate model parameters
   Author	  : J.Andre
   Created on : 2016 - 09 - 08
   Inputs	  :
      amesys  : system
      errmsg  : error message
   Outputs	  : Parameter error code
   Revision   :
************************************************************/
static AMESystemError loadModelParameters(AMESIMSYSTEM *amesys)
{
   AMESystemError res = AME_PARAMETER_ERROR;
   char errmsg[PATH_MAX+128];
   AMESystemError ret_gp = AME_NO_ERROR;
   AMESystemError ret_lp = AME_NO_ERROR;
   
   errmsg[0] = '\0';
   
#ifdef AME_INPUT_IN_MEMORY
#ifdef AME_RT_CAN_READ_FILE
   res = loadModelParamFromDisk(amesys, &ret_gp, &ret_lp, errmsg);

   if (res != AME_NO_ERROR) {
      /* If the file is not there - we say nothing */
      if (res != AME_PARAM_FILE_OPEN_ERROR) {
         amefprintf(stderr,"%s",errmsg);
         amefprintf(stderr,"loadParameterFromFile> %s\n",errmsg);
         ClearGPs();
      }
   }
   else {
      amefprintf(stderr,"Using data from disk (%s)\n",GetDataFileName());
   }
#endif
   if(res != AME_NO_ERROR) {
      /* Read all from memory */
      res = loadModelParamFromMemory(amesys, &ret_gp, &ret_lp, errmsg);
      SetGlobalParamReadFile(0);
   }
#else
   /* Read all from disk */
   res = loadModelParamFromDisk(amesys, &ret_gp, &ret_lp, errmsg);
#endif

   if( (res != AME_NO_ERROR) || (ret_gp != AME_NO_ERROR) || (ret_lp != AME_NO_ERROR) ) {
      amefprintf(stderr,"%s",errmsg);
      
      if( (res != AME_NO_ERROR) || (ret_lp != AME_NO_ERROR) ) {
         res = AME_GLOBAL_PARAMETER_ERROR;
      }
   }
   return res;
}

static AMESystemError Input(AMESIMSYSTEM *amesys)
{
   /* Load data files for submodels */
   load_subdata_tables();
   
   /* Load parameters for submodels */
   return loadModelParameters(amesys);
}

static int ameSetOptions(AMESIMSYSTEM *amesys,
                         double tsaveinc, 
                         double maxstepsize,
                         double tolerance,
                         int errorcontrol,
                         int writelevel,
                         int extradisconprint,
                         int runstats,
                         int theruntype,
                         int thesolvertype)
{
   amesys->simOptions->errorType = errorcontrol;
   amesys->simOptions->tol = tolerance;
   amesys->simOptions->rStrtp = extradisconprint;
   amesys->simOptions->statistics = runstats;
   amesys->simOptions->solverType = thesolvertype;
   amesys->simOptions->runType = theruntype;
   amesys->simOptions->iWrite = writelevel;
   amesys->simOptions->tInc = tsaveinc;
   amesys->simOptions->hMax = maxstepsize;   
   
   /* Copy sim option to share with libraries before to modify it */
   memcpy(amesys->sharedSimOptions, amesys->simOptions, sizeof(SIMOptions));
   
   if(amesys->simOptions->solverType) {
      /* It is the cautious option. The maximum time step
         should not exceed the print interval. */
      setmaxstep_(&amesys->simOptions->tInc);
   }
   
#if( AME_MODEL_ISEXPLICIT == 1) && (AME_NBOF_EXPLICIT_STATE == 0 )
   if(maxstepsize > tsaveinc) {
      amefprintf(stderr, "Since the model has no state variable,\n");
      amefprintf(stderr, "the maximum time step has been reduced to %gs.\n", tsaveinc);
      setmaxstep_(&amesys->simOptions->tInc);
   }
#endif
   
   recordtinc_(amesys->simOptions->tInc);
   
   ValidateRuntype(theruntype);

   ameSetupTolerance(amesys->simOptions);

   return 1;
}
                   
static int ameSetOptionsFixed(AMESIMSYSTEM *amesys,
                              double printinterval,
                              int fixed_type,
                              int fixedOrder,
                              double fixed_h,
                              int run_type)
{
   amesys->simOptions->iWrite = 2;
   
   ValidateRuntype(run_type);
   
	/* Ensure that runflag StabilizingRun=0. It might have been set to true */
	/* due to a previous selection for the variable step integrator. */
   ClearStabilizingRun();
   
   amesys->simOptions->fixedOrder = fixedOrder;
   amesys->simOptions->fixedStep  = 1; /* Yes - fixed step */
   amesys->simOptions->fixedH     = fixed_h;

   amesys->simOptions->tInc =  printinterval;

   amesys->simOptions->fixedType  = fixed_type;
   SetIsUsingFixedSolver(( fixed_type == 1)*100 +  (fixed_type != 1)*200 + fixedOrder);

   SetFixedTimeStep(fixed_h);

   return 1;
}

static int ameInputs(AMESIMSYSTEM *amesys, int numInputs, const double *inputARG)
{
   if(numInputs != amesys->numinputs)
   {
      char error_message[256];
      sprintf(error_message, "AMEInputs> Expected %d inputs but got %d\n", amesys->numinputs, numInputs);      
      DisplayMessage(error_message);
      return 0;
   }
#if (AME_NBOF_INPUTS > 0)
   memcpy(amesys->inputs, inputARG, amesys->numinputs*sizeof(double) );
#endif
   return 1;
}

static void doAssembly(AMESIMSYSTEM *amesys)
{
   if (IsAssemblyNecessary_())
   {
      double time = getstarttime_();
      double tmp[AME_NBOF_SOLVER_STATES];
      int local_flag;

      /* Perform the assembly. */
      amesys->consflag = 1;
      local_flag = 0;
#if(AME_MODEL_ISEXPLICIT == 1)
      amesys->FuncEval(amesys, time, amesys->states, tmp, NULL, &local_flag);
#else
      amesys->res(amesys, time, amesys->states, amesys->dotstates, tmp, &local_flag);
#endif
      amesys->first_call = 1;
   
      amesys->consflag = 2;
      local_flag = 0;
#if(AME_MODEL_ISEXPLICIT == 1)
      amesys->FuncEval(amesys, time, amesys->states, tmp, NULL, &local_flag);
#else
      amesys->res(amesys, time, amesys->states, amesys->dotstates, tmp, &local_flag);
#endif
      amesys->first_call = 1;
      amesys->consflag = 0;
   }
}

static int ameEvalTstart(AMESIMSYSTEM *amesys, const double *modelInputs, double *modelOutputs)
{
#ifndef AMERT
   double time = getstarttime_();
   
   ameInputs(amesys, AME_NBOF_INPUTS, modelInputs);
   
   doAssembly(amesys);

   /* Initialize, maybe perform an initialising run */

   if(isstabrun_())
   {
      amesys->simOptions->fixedTime = time;
   }
   amesys->simOptions->stabilOption += 4*amesys->simOptions->solverType;

#if(AME_MODEL_ISEXPLICIT == 1)

   if(!IntegrateInit(amesys, time, time))
   {
      return 0;
   }
#else
   amesys->needrestart = 1;

   DIntegrateInit(amesys, AME_NBOF_EXPLICIT_STATE, time, getfinaltime_(), amesys->simOptions->tInc, amesys->states,
                  amesys->dotstates, amesys->simOptions->hMax, AME_NBOF_SOLVER_STATES, amesys->iwork, amesys->simOptions->reltol, amesys->simOptions->abstol, amesys->simOptions->rStrtp, LIW, LRW, amesys->simOptions->statistics,amesys->simOptions->stabilOption, amesys->simOptions->iWrite, amesys->simOptions->minimalDiscont, Gis_constraint);

   if(isstabrun_())
   {
      /* HELP !!!! */
   }
#endif
  
#if (AME_NBOF_OUTPUTS > 0)
   memcpy(modelOutputs, amesys->outputs, amesys->numoutputs*sizeof(double) );
#endif
   amesys->tlast = time;
   
   return 1;
#else
   char error_message[256];
   sprintf(error_message, "ameEvalTstart> Should never be called for real-time simulation\n");      
   DisplayMessage(error_message);
   return 0;
#endif
}

static int ameSetUpLockedStatus(AMESIMSYSTEM *amesys)
{
#ifdef AME_INPUT_IN_MEMORY
#include "PIDtunerSpeedControlOpenloop_.lock.h"
   if(0 != SetUpLockedStatesFromMemory(amesys, lockedstates_length, lockedstates_array))
   {
      amefprintf(stderr,"Failed to set the locked states status.\n");
   }
#else
   SetUpLockedStates(GetCircuitName());
#endif
   return 0;
}

static int ameInitializeConditions(AMESIMSYSTEM *amesys)
{
#ifdef AME_VSOLVER_ACCEPTED
   double time = amesys->simOptions->tStart;

   /* Initialise some static variables */
   setfinaltime_(amesys->simOptions->tFinal);

   amesys->first_call=1;  /* should this be done or not ?*/
   amesys->needrestart = 1;

   amesys->tlast = TLAST_MIN;

   memset(amesys->ecount,0,amesys->numstates*sizeof(int));
   memset(amesys->dotstates,0,amesys->numstates*sizeof(double));

#if(AME_MODEL_ISEXPLICIT == 0)
   memset(amesys->iwork,0,LIW*sizeof(int));
#endif
   /*  The following statement covers the case where there are
       no state variables y. */
#if( AME_NBOF_EXPLICIT_STATE == 0 )
   amesys->states[0] = 0.0;
#endif
   
   /* Call Input to read submodel and simulation parameters. */
   if(Input(amesys) != AME_NO_ERROR) return 0;
   modelSetInitValues(amesys->pModel, amesys->states, amesys->discrete_states);
	
   /* Register print interval that maybe used bys some submodels */
   recordtinc_(amesys->simOptions->tInc);
  
   setstarttime_(time);
  
   /* Call pre-initialize function */

   PreInitialize(amesys,amesys->states);

#ifndef AME_INPUT_IN_MEMORY
   if( NeedReloadInputFiles() != 0 )
   {
      ClearGPs();
      if(Input(amesys) != AME_NO_ERROR) return 0;
      modelSetInitValues(amesys->pModel, amesys->states, amesys->discrete_states);
      ClearReloadedFiles();
   }
#endif
   
   /* Call initialize subroutine to set con and icon array members */
   
   Initialize(amesys,amesys->states);

   /* Overwriting initial state values with requests emitted by */
   /* submodels that have a more global view (cf. register.c mechanism) */
   /* Can also fire some callbacks to 'fix' float and integer store */
   OverloadStatesWithRegister(amesys, amesys->states, SVREGISTER_DEFAULT);

   CheckSimParams(amesys, &amesys->simOptions->abstol,
                  &amesys->simOptions->reltol,
                  &amesys->simOptions->hMax); 
   
#ifdef AME_RESULT_FILE
   /*  Open file for results. */
   amesys->AmeReadFile(amesys, &time, amesys->states);
#endif
   
   if(isconrun_() || isusefinval_())
   {
      updateStatesFromModel(amesys, amesys->states, AME_CONTINUOUS_STATE|AME_DISCRETE_STATE);
   }

   /* Read linear analysis specification. */
#ifndef FMI
   SetLADetails(GetLAFileName(), amesys->numstates, amesys->numvars, time,  amesys->simOptions->reltol, amesys->simOptions->abstol, getfinaltime_()-time);

   /* Remove old err file */
   
   remove(GetErrorFileName());
   
   /* Initialize the Performance analyzer */
   if(!isfixedstepsolver_()) {
      PerfAnalyzer_Init(amesys, time, getfinaltime_() );
   }
#endif
   if(isconrun_())
      setstarttime_(time);

   /* Set the locked states info */
   ameSetUpLockedStatus(amesys);   
   
   return 1;
#else
   char error_message[256];
   sprintf(error_message, "AMEInitializeConditions> Should never be called for real-time simulation\n");      
   DisplayMessage(error_message);
   return 0;
#endif
}

#if(AME_MODEL_ISEXPLICIT == 1)
static int ameEvalTstartFixed(AMESIMSYSTEM *amesys, const double *modelInputs, double *modelOutputs)
{
   double time = getstarttime_();
   
   ameInputs(amesys, AME_NBOF_INPUTS, modelInputs);

   doAssembly(amesys);

   amesys->tlast = time;

   /* Evaluation of the model at tStart */
   {
      int local_flag = 0;
      SetIsPrinting(amesys);
      amesys->FuncEval(amesys, time, amesys->states, amesys->yh, NULL, &local_flag);
      ClearIsPrinting(amesys);

#if defined(AME_RESULT_FILE) && !defined(STANDALONESIMULATOR)
      amesys->OutputResults(amesys, amesys->tlast);
      amesys->resultFileStructPtr->lastprinttime = amesys->tlast;
#endif
   
      /* Now, amesys->first_call == 0 (set at the end of FunctionEval) */
   }

#if (AME_NBOF_OUTPUTS > 0)
   memcpy(modelOutputs, amesys->outputs,amesys->numoutputs*sizeof(double) );
#endif
   amesys->tlast = time;
   
#ifdef AME_PROCESS_TIME
   /* Initialization of time timers */
   ProcessTime(0);
#endif
   
   return 1;
}

static int ameInitializeConditionsFixed(AMESIMSYSTEM *amesys)
{
   double start_time = amesys->simOptions->tStart;
   
   assert(amesys);

   {
   static int num_fixed = 6;
   static int FIXED[6] = {1, 2, 4, 6, 20, 56};

      SetGlobalSystemFixed(amesys, num_fixed, FIXED);
   }
   
   
   amesys->first_call=1;  /* should this be done or not ?*/

   amesys->tlast=TLAST_MIN;
   
   /* Init solver */   
   memset(amesys->yh,0,(AME_NBOF_SOLVER_STATES*13)*sizeof(double));

   InitFixedStepIntegrate(amesys);

   setfinaltime_(amesys->simOptions->tFinal);

   /* Call Input to read submodel and simulation parameters. */
   if(Input(amesys) != AME_NO_ERROR) return 0;
   modelSetInitValues(amesys->pModel, amesys->states, amesys->discrete_states);

   recordtinc_(amesys->simOptions->tInc);

   setstarttime_(start_time);
   
   /* Call pre-initialize function */

   PreInitialize(amesys,amesys->states);

#ifndef AME_INPUT_IN_MEMORY
   if( NeedReloadInputFiles() != 0 )
   {
      ClearGPs();
      if(Input(amesys) != AME_NO_ERROR) return 0;
      modelSetInitValues(amesys->pModel, amesys->states, amesys->discrete_states);
      ClearReloadedFiles();
   }
#endif

   /* Call initialize subroutine to set con and icon array members */
   
   Initialize(amesys,amesys->states);

   /* Overwriting initial state values with requests emitted by */
   /* submodels that have a more global view (cf. register.c mechanism) */
   /* Can also fire some callbacks to 'fix' float and integer store */
   OverloadStatesWithRegister(amesys, amesys->states, SVREGISTER_DEFAULT);

#ifdef AME_RESULT_FILE
   /*  Open file for results. */
   amesys->AmeReadFile(amesys, &start_time, amesys->states);
#endif
   
   if(isconrun_() || isusefinval_())
   {
      updateStatesFromModel(amesys, amesys->states, AME_CONTINUOUS_STATE|AME_DISCRETE_STATE);
   }

   /* Set the locked states info */
   ameSetUpLockedStatus(amesys);
   
   if(isconrun_()) {
      setstarttime_(start_time);
   }
   
   return 1;
}
#endif

/*=============================================================================*/

/*=============================================================================*/

/***********************************************************
   Purpose    : Test request acceptance
   Author	  : J.Andre
   Created on : 2016 - 09 - 05
   Inputs	  : 
      event   : entry event
   Outputs	  :
      AME_NO_ERROR : event accepted
      AME_SEQUENCE_ERROR : event refused
   Revision   :
************************************************************/
static AMESystemError AmesysControlRequest(AMESIMSYSTEM *amesys, AMESystemCmd event)
{
   AMESystemError res = AME_NO_ERROR;
   
   if(!amesys) {
      if(event == AME_CMD_GET_MODEL_INFO) {
         return AME_NO_ERROR;
      }
      return AME_SEQUENCE_ERROR;
   }
   
   switch(event) {
      case AME_CMD_RELEASE: {
         if( !(amesys->systemState & (AMESTATE_TERMINATED | AMESTATE_FATAL | AMESTATE_INSTANTIATED)) ) {
            res = AME_SEQUENCE_ERROR;
         }         
      }
      break;
      case AME_CMD_SETUP: {
         if( !(amesys->systemState & AMESTATE_INSTANTIATED) ) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_INITIALIZE: {
         if(amesys->systemState != AMESTATE_READY) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_TERMINATE: {
         if( !(amesys->systemState & (AMESTATE_RUN | AMESTATE_READY | AMESTATE_ERROR)) ) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_TSTART: {
         if( !(amesys->systemState & AMESTATE_INITIALIZED) ) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_STEP: {
         if( !(amesys->systemState & AMESTATE_RUNNING) ) {
            res = AME_SEQUENCE_ERROR;
         }
         else {
            amesys->systemState |= AMESTATE_STEP_IN_PROGRESS;
         }
      }
      break;
      case AME_CMD_RESTART: {
         /* At this time, it is not still implemented */
         /* Depends of clean-up in terminated state and static variables */
         res = AME_SEQUENCE_ERROR;
      }
      break;
      case AME_CMD_GET_MODEL_INFO: {
         res = AME_NO_ERROR;
      }
      break;
      case AME_CMD_SET_MODEL_PARAM_TUNABLE: {
         if( !(amesys->systemState & (AMESTATE_READY | AMESTATE_RUN)) ) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_SET_MODEL_PARAM:
      case AME_CMD_SET_RUN_PARAM:
      case AME_CMD_SET_SOLVER_PARAM: {
         if(amesys->systemState != AMESTATE_READY) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_GET_MODEL_PARAM:
      case AME_CMD_GET_SOLVER_PARAM:
      case AME_CMD_GET_RUN_PARAM: {
         if( !(amesys->systemState & (AMESTATE_READY | AMESTATE_RUN | AMESTATE_ERROR)) ) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_REQ_RUN_INTERRUPT: {
         if( !(amesys->systemState & (AMESTATE_INSTANTIATED | AMESTATE_READY | AMESTATE_INITIALIZED | AMESTATE_RUNNING)) ) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_SET_ENV: {
         if( !(amesys->systemState & AMESTATE_INSTANTIATED) ) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      case AME_CMD_FUNCEVAL: {
         if( !(amesys->systemState & AMESTATE_RUNNING) ) {
            res = AME_SEQUENCE_ERROR;
         }
      }
      break;
      default:
         res = AME_SEQUENCE_ERROR;
      break;
   }
   
   return res;
}  

/***********************************************************
   Purpose    : Update state and manage result of request
   Author	  : J.Andre
   Created on : 2016 - 09 - 05
   Inputs	  : 
      event   : entry event
      reqResult : result of request achievement
   Outputs	  :
      AME_NO_ERROR : event accepted
      AME_SEQUENCE_ERROR : event refused
   Revision   :
************************************************************/
static AMESystemError AmesysUpdateState(AMESIMSYSTEM *amesys, AMESystemCmd event, AMESystemError reqResult)
{
   unsigned int newState;
   AMESystemError res;

   if(!amesys) {
      return AME_SEQUENCE_ERROR;
   }
   
   newState = amesys->systemState;   /* Default: no change in state */
   res = reqResult;                  /* Default: no change in result */
   
   switch(event) {
      case AME_CMD_INSTANTIATE: {
         if(reqResult != AME_NO_ERROR) {
            newState = AMESTATE_FATAL;
         }
         else {
            newState = AMESTATE_INSTANTIATED;
         }
      }
      break;
      case AME_CMD_SETUP: {
         if(reqResult != AME_NO_ERROR) {
            newState = AMESTATE_FATAL;
         }
         else {
            newState = AMESTATE_READY;
         }
      }
      break;
      case AME_CMD_INITIALIZE: {
         if(reqResult != AME_NO_ERROR) {
            newState = AMESTATE_ERROR;
         }
         else {
            newState = AMESTATE_INITIALIZED;
         }
      }
      break;
      case AME_CMD_TERMINATE: {
         if(reqResult != AME_NO_ERROR) {
            amesys->systemState = AMESTATE_TERMINATED; /* Avoid automatic call to ameterminate */
            newState = AMESTATE_FATAL;
         }
         else {
            newState = AMESTATE_TERMINATED;
         }
      }
      break;
      case AME_CMD_TSTART: {
         if(reqResult != AME_NO_ERROR) {
            newState = AMESTATE_ERROR;
         }
         else {
            newState = AMESTATE_RUNNING;
         }
      }
      break;
      case AME_CMD_STEP: {
         if(reqResult != AME_NO_ERROR) {
            /* test ameExitStatus */
            if(reqResult == AME_EXIT_ERROR) {
               if(amesys->ameExitStatus == 0) {
                  /* Simulation stopped early but normally */
                  amesys->requestinterrupt = 0;
                  newState = AMESTATE_STOPPED;
                  res = AME_NO_ERROR;
               }
            }
            else {
               newState = AMESTATE_ERROR;
            }
         }
         else if(amesys->requestinterrupt) {
            amesys->requestinterrupt = 0;
            newState = AMESTATE_STOPPED;
         }
         newState &= ~AMESTATE_STEP_IN_PROGRESS;
      }
      break;
      case AME_CMD_REQ_RUN_INTERRUPT:
      break;
      case AME_CMD_FUNCEVAL: {
         if(reqResult != AME_NO_ERROR) {
            /* test ameExitStatus */            
            if(reqResult == AME_EXIT_ERROR) {
               if(amesys->ameExitStatus == 0) {
                  /* Simulation stopped early but normally */
                  newState = AMESTATE_STOPPED;
                  res = AME_NO_ERROR;
               }
            }
            else {
               newState = AMESTATE_ERROR;
            }
         }
      }
      break;
      default:
      /* No state change, no exception to catch, just pass result */
      break;
   }
      
   if(amesys->systemState != newState) {
      if(newState == AMESTATE_FATAL) {
         if(amesys->systemState & (AMESTATE_RUN | AMESTATE_READY | AMESTATE_ERROR)) {
            /* Terminating the simulation */
            ameTerminate(amesys);
         }
      }
      
#if !defined(STANDALONESIMULATOR)
      if(newState & (AMESTATE_FATAL | AMESTATE_ERROR)) {
         if(amesys->systemState & AMESTATE_RUN) {
            amefprintf(stderr, "Simcenter Amesim model: simulation failed.\n");
         }
         else if(amesys->systemState & AMESTATE_IDLE) {
            amefprintf(stderr, "Simcenter Amesim model: instantiation failed.\n");
         }
         else if(amesys->systemState & AMESTATE_READY) {
            amefprintf(stderr, "Simcenter Amesim model: initialization failed.\n");
         }
      }
      else if(newState & AMESTATE_INITIALIZED) {
         amefprintf(stdout, "Simcenter Amesim model: initialization done.\n");
      }
      else if(newState & AMESTATE_TERMINATED) {
         amefprintf(stdout, "Simcenter Amesim model: simulation terminated.\n");
      }
      else if((newState & AMESTATE_RUNNING) && (amesys->systemState & AMESTATE_INITIALIZED)) {
         amefprintf(stdout, "Simcenter Amesim model: simulation started.\n");
      }
#endif      
      
      /* Update state */
      amesys->systemState = newState;
   }
   
   if(amesys->systemState == AMESTATE_FATAL) {
      /* Greedy error */
      res = AME_FATAL_ERROR;
   }

   return res;
}
 
/***********************************************************
   Purpose    : Instantiate the system
   Author	  : J.Andre
   Created on : 2016 - 09 - 08
   Inputs	  : None
   Outputs	  : Error code
   Revision   :
************************************************************/
static AMESystemError AmesysInstantiate(AMESIMSYSTEM **amesysPtr)
{
   int jump_ret;
   AMESIMSYSTEM *amesys;
   AMESystemError result = AME_FATAL_ERROR;
   
   S_AME_Model *pModel;
   
   if(*amesysPtr != NULL) {
      return AME_SEQUENCE_ERROR;
   }
   
   result = createModel(&pModel, &GmodelDef, GParamInfo, GVarInfo, GsubmodelNameArray,
                        GcontStateVarNum, GdiscStateVarNum);
   
   if(result == AME_NO_ERROR) {
#if(AME_MODEL_ISEXPLICIT == 1)
      amefprintf(stdout, "Instantiating a system with %d unknowns.\n", AME_NBOF_EXPLICIT_STATE);
#else
      amefprintf(stdout, "Instantiating a system with %d unknowns.\n", AME_NBOF_SOLVER_STATES);
#endif
      if (strcmp(soldToId,"not available") != 0)
         amefprintf(stdout, "Simcenter Amesim version: %s (%s).\n", "2019.1", soldToId);
      else
         amefprintf(stdout, "Simcenter Amesim version: %s.\n", "2019.1");
      result = createAMESystem(&amesys, pModel, AME_NBOF_SOLVER_STATES, AMEVERSION);
   }

   if(result == AME_NO_ERROR) {
      if( (jump_ret = setjmp(amesys->jump_env)) == 0) { /* ~try */ 
         SetGlobalSystem(amesys);
         
         SetGlobalSystemFixed(amesys, AME_NBOF_FIXED_VAR_PARAMS, GFixedVarNum);

#ifdef AME_INPUT_IN_MEMORY
         amesys->getssflist = getssflist;
#endif
         amesys->consflag = 0;

#if(AME_MODEL_ISEXPLICIT == 1)
         amesys->FuncEval = localFuncEval;
         amesys->JFuncEval = localJFuncEval;
#else
         amesys->res = localFuncEval;
         amesys->Jres = localJFuncEval;
#endif
         amesys->AmeExit = ModelAmeExit;

         amesys->ameExitStatus = 0;
  
         /* Set input directory to current directory */
         AmeSetInputDir(amesys,NULL);

         /* Set output directory to current directory */
         AmeSetOutputDir(amesys,NULL);
            
         /* Set base name of input files, no extension */
         AmeSetModelBaseName(amesys,"PIDtunerSpeedControlOpenloop_", NULL);
         
         result = AME_NO_ERROR;
      }
      else { /* Catch AmeExit */
         result = AME_EXIT_ERROR;
      }
   }

   if(result == AME_NO_ERROR) {
      /* Update state and result */
      result =  AmesysUpdateState(amesys, AME_CMD_INSTANTIATE, result);
   }
   
   if(result != AME_NO_ERROR) {
      deleteAMESystem(&amesys);
      SetGlobalSystem(NULL);
   }
   else {
      *amesysPtr = amesys;
   }

   return result;
}

static AMESystemError AmesysTerminate(AMESIMSYSTEM *amesys)
{
   int jump_ret;
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_TERMINATE);
   if(res != AME_NO_ERROR) {
      /* Request not accepted */
      return res;
   }

   if(res == AME_NO_ERROR) { /* Request accepted */  
      if( (jump_ret = setjmp(amesys->jump_env)) == 0) { /* ~try */ 
         ameTerminate(amesys);
      }
      else { /* Catch AmeExit */
         res = AME_EXIT_ERROR;
      }
   }
   
   /* Update state and result */
   res =  AmesysUpdateState(amesys, AME_CMD_TERMINATE, res);
   
   return res;
}

static AMESystemError AmesysRelease(AMESIMSYSTEM **amesysPtr)
{
   AMESystemError res = AME_NO_ERROR;
   if(*amesysPtr) {
      SetGlobalSystem(*amesysPtr);
      res = AmesysControlRequest(*amesysPtr, AME_CMD_RELEASE);
   
      if(res == AME_NO_ERROR) { /* Request accepted */
         AmeSignalModelUnload();
         res = deleteAMESystem(amesysPtr);
         SetGlobalSystem(NULL);
      }
   }
   return res;
}

/***********************************************************
   Purpose    : Go in Ready state to be able receive external
                initialization of model and simulation
   Author	  : J.Andre
   Created on : 2016 - 09 - 08
   Inputs	  : loadParam: if true, model parameters are read 
   Outputs	  : Error code
   Revision   :
************************************************************/
static AMESystemError AmesysSetUp(AMESIMSYSTEM *amesys, const int loadParam)
{
   int jump_ret;   
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SETUP);
   
   if(res != AME_NO_ERROR) {
      /* Request not accepted */
      return res;
   }
   
   if( (jump_ret = setjmp(amesys->jump_env)) == 0) { /* ~try */     
      amesys->ameExitStatus = 0;

      /* Construct file names */
      AmeConstructFileName(amesys);
      
      /* Read sim file */
      {
         SIMOptions opts;

#ifndef AME_INPUT_IN_MEMORY
         char errMsg[PATH_MAX+128];
         int result = readsimfile(&opts, GetSimFileName(), errMsg);
#else
         int result = readsimfromchararrays(&opts, simparams, simparams_length);
#endif
         
         if(result != 0) {
            
            /* Initialyze Amesystem SIMOptions */
            memcpy(amesys->simOptions,&opts,sizeof(SIMOptions));

#ifdef AME_RESULT_FILE
            amesys->simOptions->outoff = 0;
#else
            amesys->simOptions->outoff = 1;
#endif
            
#ifdef AME_PERFORMANCE_ANALYZER
            ALA_Setparam(opts.autoLA, 1, opts.autoLAstep);
            DISCLOG_SetParam(1);
#endif
         }
         else {
            res = AME_SETUP_ERROR;
         }
      }
   
      if(loadParam) {
         /* Load parameters */
         loadModelParameters(amesys);
      }

   }
   else { /* Catch AmeExit */
      res = AME_EXIT_ERROR;
   }
   
   /* Update state and result */
   res =  AmesysUpdateState(amesys, AME_CMD_SETUP, res);

   return res;
}

/***********************************************************
   Purpose    : Initialize the model
   Author	  : J.Andre
   Created on : 2016 - 09 - 08
   Inputs	  : None 
   Outputs	  : Error code
   Revision   :
************************************************************/
static AMESystemError AmesysInitialize(AMESIMSYSTEM *amesys)
{
   int jump_ret;
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_INITIALIZE);
   
   if(res != AME_NO_ERROR) {
      /* Request not accepted */
      return res;
   }

   if( (jump_ret = setjmp(amesys->jump_env)) == 0) { /* try */   
      if(amesys->simOptions->runType & 0x20) {
         /* fixed step initialization */
#if(AME_MODEL_ISEXPLICIT == 1)
         ameSetOptionsFixed(amesys, amesys->simOptions->tInc, amesys->simOptions->fixedType,
            amesys->simOptions->fixedOrder, amesys->simOptions->fixedH, amesys->simOptions->runType);
            
         if(!ameInitializeConditionsFixed(amesys)) {
            res = AME_INITIALIZE_ERROR;
         }
#else
         amefprintf(stderr,"It is not possible to use a fixed step solver\nfor implicit systems.\n");
         res = AME_INITIALIZE_ERROR;
#endif
      }
      else {
#ifdef AME_VSOLVER_ACCEPTED
         /* variable step initialization */
         ameSetOptions(amesys, amesys->simOptions->tInc, amesys->simOptions->hMax, amesys->simOptions->tol,
            amesys->simOptions->errorType, amesys->simOptions->iWrite, amesys->simOptions->rStrtp,
            amesys->simOptions->statistics, amesys->simOptions->runType, amesys->simOptions->solverType);
            
         if(!ameInitializeConditions(amesys)) {
            res = AME_INITIALIZE_ERROR;
         }
#else
         amefprintf(stderr,"It is not possible to use a variable step solver\nfor this interface.\n");
         res = AME_INITIALIZE_ERROR;
#endif
      }
      
#if defined(AME_MEMORY_ACCESS_RT_EXPORT) && (AME_NBOF_REAL_PARAMS>0)
      memcpy(RT_Export_RealParam, amesys->pModel->realParamArray, sizeof(double)*AME_NBOF_REAL_PARAMS);
#endif
#if defined(AME_MEMORY_ACCESS_RT_EXPORT) && (AME_NBOF_INT_PARAMS>0)
      memcpy(RT_Export_IntParam, amesys->pModel->integerParamArray, sizeof(int)*AME_NBOF_INT_PARAMS);
#endif
      
   }
   else { /* Catch AmeExit */
      res = AME_EXIT_ERROR;
   }

   /* Update state and result */
   res =  AmesysUpdateState(amesys, AME_CMD_INITIALIZE, res);
   
   return res;
}

#if(AME_MODEL_ISEXPLICIT == 1)
static void doAFixedStep(AMESIMSYSTEM *amesys, double time)
{
   double timerange;
   double actual_timestep;
   int stepratio;
   int stepratio_ceil;
   int stepratio_floor;
   int i=0;
   int zero=0;
   double tinc;
   int isTimeForPrint=0;
   double next_print_time;

   if (amesys->first_call)
   {
      SetIsPrinting(amesys);
      amesys->FuncEval(amesys, amesys->tlast, amesys->states, amesys->yh, NULL, &zero);
      ClearIsPrinting(amesys);
  
#if defined(AME_RESULT_FILE) && !defined(STANDALONESIMULATOR)
      amesys->OutputResults(amesys, amesys->tlast);
      amesys->resultFileStructPtr->lastprinttime = amesys->tlast;
#endif
   }

   timerange = time - amesys->tlast;
   
   if(timerange <= 0.0)
   {
      return;
   }
   if(amesys->simOptions->fixedH > 0.0)
   {
      stepratio = stepratio_ceil = (int)ceil(timerange/amesys->simOptions->fixedH);
      stepratio_floor = (int)floor(timerange/amesys->simOptions->fixedH);
      
      actual_timestep = timerange/(double)stepratio_ceil;

      if(fabs(actual_timestep-amesys->simOptions->fixedH) > 0.001*amesys->simOptions->fixedH)
      {
         if(stepratio_floor == 0)
         {
#ifdef AMEDEBUG
            amefprintf(stdout,"skipping %14.8e  range= %14.8e  actual_timestep=%14.8e stepratio_ceil=%d   stepratio_floor=%d\n",time, timerange, actual_timestep, stepratio_ceil,stepratio_floor);
#endif
            return;
         }
      
#ifdef AMEDEBUGw
         amefprintf(stdout,"using floor\n");
         amefprintf(stdout,"timerange=%14.8e\n", timerange);
         amefprintf(stdout,"actual_timestep=%14.8e\n", actual_timestep);
         amefprintf(stdout,"amesys->simOptions->fixedH=%14.8e\n", amesys->simOptions->fixedH);
         amefprintf(stdout,"fabs(actual_timestep-amesys->simOptions->fixedH)=%14.8e\n", fabs(actual_timestep-amesys->simOptions->fixedH));
         amefprintf(stdout,"stepratio_floor=%d\n", stepratio_floor);
         amefprintf(stdout,"stepratio_ceil=%d\n", stepratio_ceil);
#endif
         actual_timestep = timerange/(double)stepratio_floor;
         stepratio = stepratio_floor;
      }
      
      if(fabs(actual_timestep-amesys->simOptions->fixedH) > 0.001*amesys->simOptions->fixedH)
      {
#ifdef AMEDEBUGw
         amefprintf(stdout,"Adjusting time step %14.8e => %14.8e\n", amesys->simOptions->fixedH, actual_timestep);
         amefprintf(stdout,"stepratio_floor=%d\n", stepratio_floor);
         amefprintf(stdout,"stepratio_ceil=%d\n", stepratio_ceil);
         amefprintf(stdout,"stepratio=%d\n", stepratio);
         amefprintf(stdout,"timerange=%14.8e\n", timerange);
#endif
      }
   }
   else
   {
      /* just single step from the last point in time when we were called */
      stepratio=1;
      actual_timestep = timerange;
   }

#if defined(AME_RESULT_FILE) && !defined(STANDALONESIMULATOR)
   if(amesys->resultFileStructPtr && !amesys->resultFileStructPtr->outoff)
   {
      next_print_time = GetNextPrintTime(&tinc, amesys->resultFileStructPtr->lastprinttime, amesys->simOptions->tFinal, amesys->simOptions->tInc, actual_timestep);
   }
#endif

#ifdef AMERT
   /* Allow changes of the stepratio - typically on RT platforms. */
   {
      double localstepratio=floor(IL_PIDtunerSpeedControlOpenloop_step_ratio);
      if (localstepratio >= 1) 
      {
         actual_timestep=timerange/localstepratio;
         stepratio = (int)localstepratio;
      }   
   }
#endif
#ifdef STANDALONESIMULATOR
   FixedStepIntegrate(amesys,AME_NBOF_SOLVER_STATES,amesys->tlast,time,amesys->simOptions->tInc,amesys->states,
         amesys->yh,amesys->simOptions->fixedType,amesys->simOptions->fixedOrder,actual_timestep);
#else 
	for (i=0; (i<stepratio) && (amesys->requestinterrupt == 0);i++)
   {
      /*Integrate one step */
	  if ( amesys->simOptions->fixedType == 1)
	  {
		DoAnABStep(amesys, amesys->numstates, amesys->simOptions->fixedOrder, &amesys->tlast, actual_timestep, amesys->states, amesys->yh);
	  }
	  else
	  {
		DoAnRKStep(amesys, amesys->numstates, amesys->simOptions->fixedOrder, &amesys->tlast, actual_timestep, amesys->states, amesys->yh);
	  }
      
#ifndef AMERT   
      isTimeForPrint = amesys->resultFileStructPtr && (!amesys->resultFileStructPtr->outoff && ((amesys->tlast >= next_print_time) || ((next_print_time-amesys->tlast)/tinc < TIME_ROUNDOFF)));
      if(isTimeForPrint)
      {
#ifdef AME_PROCESS_TIME
         ProcessTime(1);
#endif
         SetIsPrinting(amesys);
         amesys->FuncEval(amesys, amesys->tlast, amesys->states, amesys->yh, NULL, &zero);
         ClearIsPrinting(amesys);
         amesys->OutputResults(amesys,amesys->tlast);
         next_print_time = GetNextPrintTime(&tinc, amesys->tlast, amesys->simOptions->tFinal, amesys->simOptions->tInc, actual_timestep);
      }
      else
#endif
      {
         amesys->FuncEval(amesys, amesys->tlast, amesys->states, amesys->yh, NULL, &zero);
      }
   }
#endif  
   amesys->tlast = time;
}
#endif

static int ameOutputs(AMESIMSYSTEM *amesys, double timeARG, int numOutputs, double *outputARG)
{
   int theprintflag=1;
   double *dot;
   double *v;
   
   assert(amesys);

   v = amesys->v;
   dot = amesys->dotstates;

   if(numOutputs != amesys->numoutputs)
   {
      char error_message[256];
      sprintf(error_message, "AMEOutputs> Expected %d outputs but got %d\n", amesys->numoutputs, numOutputs);
      DisplayMessage(error_message);
      AmeExit(1);
   }

   if (amesys->simOptions->runType == 4)
	{
		/* stabilizing has already been processed during Init.*/
		/*Exit */
		return 1;
	}

   if(timeARG < amesys->tlast)
   {
      DisplayMessage("trying to integrate backwards\n");
      return 0;
   }
#if(AME_MODEL_ISEXPLICIT == 1)
   amesys->t_end_of_time_slice = timeARG;
#ifndef AMERT
   if(!isfixedstepsolver_())
   {
      if(!IntegrateStep(amesys, amesys->tlast, timeARG))
      {
         DisplayMessage("IntegrateStep failed");
         return 0;
      }
      amesys->tlast = timeARG;
   }
   else
   {
      doAFixedStep(amesys, timeARG);
   }
#else
   doAFixedStep(amesys, timeARG);
#endif

#else
   if(!DIntegrateStep(amesys, AME_NBOF_EXPLICIT_STATE, amesys->tlast, timeARG, amesys->simOptions->tInc, amesys->states,
      amesys->dotstates, amesys->simOptions->hMax, AME_NBOF_SOLVER_STATES, amesys->iwork, amesys->simOptions->reltol,
      amesys->simOptions->abstol, amesys->simOptions->rStrtp, LIW, LRW, amesys->simOptions->statistics,
      amesys->simOptions->stabilOption, amesys->simOptions->iWrite, amesys->simOptions->minimalDiscont,
      amesys->needrestart, Gis_constraint, &amesys->requestinterrupt))
   {
      DisplayMessage("DIntegrateStep failed");
      return 0;
   }

   amesys->tlast = timeARG;
#endif

#if (AME_NBOF_OUTPUTS > 0)
   memcpy(outputARG, amesys->outputs, amesys->numoutputs*sizeof(double) );
#endif

   return 1;
}

static AMESystemError AmesysComputeAtTstart(AMESIMSYSTEM *amesys, const double *theInputs, double *theOutputs)
{
   int jump_ret;
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_TSTART);
   
   if(res != AME_NO_ERROR) {
      /* Request not accepted */
      return res;
   }

   if( (jump_ret = setjmp(amesys->jump_env)) == 0) { /* try */
      if(amesys->simOptions->runType & 0x20) {
         /* fixed step solver */
#if(AME_MODEL_ISEXPLICIT == 1)
         if(!ameEvalTstartFixed(amesys, theInputs, theOutputs)) {
            res = AME_INITIALIZE_ERROR;
         }
#else
         amefprintf(stderr,"It is not possible to use a fixed step solver\nfor implicit systems.\n");
         res = AME_INITIALIZE_ERROR;
#endif
      }
      else {
         /* variable step solver */
         if(!ameEvalTstart(amesys, theInputs, theOutputs)) {
            res = AME_INITIALIZE_ERROR;
         }
      }
      
   }
   else { /* Catch AmeExit */
      res = AME_EXIT_ERROR;
   }

   /* Update state and result */
   res =  AmesysUpdateState(amesys, AME_CMD_TSTART, res);
   
   return res;
}

/***********************************************************
   Purpose    : Do a co-simulation step
   Author	  : J.Andre
   Created on : 2016 - 09 - 12
   Inputs	  : None 
   Outputs	  : Error code
   Revision   :
************************************************************/
static AMESystemError AmesysStep(AMESIMSYSTEM *amesys, int stepType, const double t, const double *theInputs, double *theOutputs, int doInterpol, const unsigned int *orderTab, const double **polyTab)
{
   int jump_ret;
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_STEP);
   
   if(res != AME_NO_ERROR) {
      /* Request not accepted */
      return res;
   }
   
   if( (jump_ret = setjmp(amesys->jump_env)) == 0) { /* try */
   
#if defined(AME_MEMORY_ACCESS_RT_EXPORT) && (AME_NBOF_REAL_PARAMS>0)
      memcpy(amesys->pModel->realParamArray, RT_Export_RealParam, sizeof(double)*AME_NBOF_REAL_PARAMS);
#endif
#if defined(AME_MEMORY_ACCESS_RT_EXPORT) && (AME_NBOF_INT_PARAMS>0)
      memcpy(amesys->pModel->integerParamArray, RT_Export_IntParam, sizeof(int)*AME_NBOF_INT_PARAMS);
#endif

#if defined(AME_COSIM) && (AME_NBOF_INPUTS > 0)
      amesys->doInterpol = doInterpol;
   
      if(amesys->doInterpol) {
         stepType = 1;
         res = setPolyCosimSlave(amesys->csSlave, orderTab, polyTab);
      }
#else
      amesys->doInterpol = 0;
#endif
      if(res == AME_NO_ERROR) {
         if(stepType == 0) {  /* Do a step */
            CheckIfColdStartNeed(amesys->inputs, theInputs, AME_NBOF_INPUTS, amesys->num_steps_taken, &amesys->needrestart);
            
            if(!ameOutputs(amesys, t, AME_NBOF_OUTPUTS, theOutputs)) {
               res = AME_STEP_ERROR;
            }
            if(!ameInputs(amesys, AME_NBOF_INPUTS, theInputs)) {
               res = AME_STEP_ERROR;
            }
         }
         else {  /* Do a step 2 */
            if(amesys->doInterpol == 0) {   
               if(!ameInputs(amesys, AME_NBOF_INPUTS, theInputs)) {
                  res = AME_STEP_ERROR;
               }
            }
            if(!ameOutputs(amesys, t, AME_NBOF_OUTPUTS, theOutputs)) {
               res = AME_STEP_ERROR;
            }
         }
         amesys->num_steps_taken++;
         res |= setTciCosimSlave(amesys->csSlave, t);
      }
      
#if defined(AME_MEMORY_ACCESS_RT_EXPORT) && (AME_NBOF_VARS>0)
      memcpy(RT_Export_Vars, amesys->pModel->varArray, sizeof(double)*AME_NBOF_VARS);
#endif
   }
   else { /* Catch AmeExit */
      res = AME_EXIT_ERROR;
   }

   /* Update state and result */
   res =  AmesysUpdateState(amesys, AME_CMD_STEP, res);
   
   return res;
}

/***********************************************************
   Purpose    : Set solver parameters
   Author	  : J.Andre
   Created on : 2016 - 09 - 09
   Inputs	  : None
   Outputs	  : 
   Revision   :
************************************************************/
static AMESystemError AmesysSetSolverParam(AMESIMSYSTEM *amesys, const solverSettings *solver)
{
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_SOLVER_PARAM);
   
   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Initialyze Amesystem solver parameters */
      simOptSetSolverParam(amesys->simOptions,solver);
   }
   
   return res;
}

/***********************************************************
   Purpose    : Get solver parameters
   Author	  : J.Andre
   Created on : 2016 - 09 - 09
   Inputs	  : None
   Outputs	  : 
   Revision   :
************************************************************/
static AMESystemError AmesysGetSolverParam(AMESIMSYSTEM *amesys, solverSettings *solver)
{
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_SOLVER_PARAM);
   
   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Initialyze Amesystem solver parameters */
      simOptGetSolverParam(amesys->simOptions,solver);
   }
   
   return res;
}

/***********************************************************
   Purpose    : Set run parameters
   Author	  : J.Andre
   Created on : 2016 - 09 - 09
   Inputs	  : None
   Outputs	  : 
   Revision   :
************************************************************/
static AMESystemError AmesysSetSimParam(AMESIMSYSTEM *amesys, const simSettings *simOpt)
{
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);
   
   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Initialyze Amesystem solver parameters */
      simOptSetSimParam(amesys->simOptions,simOpt);
   }

   return res;
}

static AMESystemError AmesysGetSimParam(AMESIMSYSTEM *amesys, simSettings *simOpt)
{
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_RUN_PARAM);
   
   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Initialyze Amesystem solver parameters */
      simOptGetSimParam(amesys->simOptions, simOpt);
   }
   
   return res;
}

static AMESystemError AmesysSetSimItem(AMESIMSYSTEM *amesys, const int Id, const int enabled)
{
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);
   
   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Initialyze Amesystem solver parameters */
      if(simOptSetOneOfSimParam(amesys->simOptions, Id, enabled) != 0) {
         res = AME_SETTINGS_ERROR;
      }
   }
   
   return res;
}

/***********************************************************
   Purpose    : Set run parameters
   Author	  : J.Andre
   Created on : 2016 - 09 - 09
   Inputs	  : None
   Outputs	  : 
   Revision   :
************************************************************/
static AMESystemError AmesysSetStdOptions(AMESIMSYSTEM *amesys, const stdOptions *stdOpt)
{   
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);
   
   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Initialyze Amesystem solver parameters */
      simOptSetStdParam(amesys->simOptions,stdOpt);
   }

   return res;
} 

static AMESystemError AmesysGetStdOptions(AMESIMSYSTEM *amesys, stdOptions *stdOpt)
{
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_RUN_PARAM);
   
   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Initialyze Amesystem solver parameters */
      simOptGetStdParam(amesys->simOptions, stdOpt);
   }
   
   return res;
}

static AMESystemError AmesysSetStdItem(AMESIMSYSTEM *amesys, const int Id, const int enabled)
{
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);
   
   if(res == AME_NO_ERROR) { /* Request accepted */
      /* Initialyze Amesystem solver parameters */
      if(simOptSetOneOfStdParam(amesys->simOptions, Id, enabled) != 0) {
         res = AME_SETTINGS_ERROR;
      }
   }
   
   return res;
}

/***********************************************************
   Purpose     : Turn off/on results
   Author	   : J.Andre
   Created on  : 2016 - 09 - 09
   Inputs	   : 
      outoff   :  0 : result file off
                  1 : result file on
   Outputs	   :
   Revision    :
************************************************************/
static AMESystemError AmesysEnableResult(AMESIMSYSTEM *amesys, const int out)
{
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);
   
   if(res == AME_NO_ERROR) { /* Request accepted */
      if(out) {
         amesys->simOptions->outoff = 0;
      }
      else {
         amesys->simOptions->outoff = 1;
      }
   }
   
   return res;
}

/***********************************************************
   Purpose     : Return the state of Amesystem
   Author	   : J.Andre
   Created     : 2016 - 09 - 05
   Inputs	   : None
   Outputs	   :
      state    : machine state
   Revision    :
************************************************************/
static unsigned int AmesysGetState(AMESIMSYSTEM *amesys)
{
   if(amesys) {
      return amesys->systemState;
   }
   else {
      return AMESTATE_IDLE;
   }
}

static AMESystemError AmesysGetModelInfo(unsigned int *numinputs, unsigned int *numoutputs, unsigned int *numstates, unsigned int *numimplicits)
{
   *numinputs = AME_NBOF_INPUTS;
   *numoutputs = AME_NBOF_OUTPUTS;
   *numstates = AME_NBOF_EXPLICIT_STATE;
   *numimplicits = AME_NBOF_IMPLICIT_STATE;
   
   return AME_NO_ERROR; 
}

static AMESystemError AmesysGetModelPortName(const char **inputName[], const char **outputName[])
{
   *inputName = GinputVarTitles;
   *outputName = GoutputVarTitles;
      
   return AME_NO_ERROR; 
}

static AMESystemError AmesysGetModelNumParam(unsigned int *numParam)
{
   *numParam = AME_NBOF_PARAMS;
   
   return AME_NO_ERROR; 
}

static AMESystemError AmesysGetParamType(const int nbParam, const int idx[], E_ParamCType paramType[])
{
   AMESystemError res = AME_NO_ERROR;
   int i;
   
   for(i = 0; (i < nbParam) && (res == AME_NO_ERROR); i++) {
      if(i < AME_NBOF_PARAMS) {
         switch(GParamInfo[idx[i]].category) {
            case E_Int_Param:
               paramType[i] = E_CType_IntParam;
            break;
            case E_Text_Param:
               paramType[i] = E_CType_StringParam;
            break;
            default:
               paramType[i] = E_CType_DoubleParam;
            break;
         }
         return AME_NO_ERROR;
      }
      else {
         res = AME_PARAM_IDX_ERROR;
      }
   }
   
   return res;
}

static AMESystemError AmesysFindParamFromVar(const int nbParam, const int varIdx[], int paramIdx[], E_ParamCategory category[])
{
   AMESystemError res = AME_NO_ERROR;
   int idx, i;
   
   for(idx = 0; (idx < nbParam) && (res == AME_NO_ERROR); idx++) {
      res = AME_PARAM_IDX_ERROR;
      for(i = 0; i < AME_NBOF_PARAMS; i++) {
         if(GParamInfo[i].varIdx == varIdx[idx]) {
            paramIdx[idx] = i;
            category[idx] = GParamInfo[i].category;
            res = AME_NO_ERROR;
         }
      }
   }
  
   return res;
}

static AMESystemError AmesysGetIntParamValue(AMESIMSYSTEM *amesys, const int nbParam, const int idx[], int value[])
{
   AMESystemError res;
   int i;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_MODEL_PARAM);
      
   for(i = 0; (i < nbParam) && (res == AME_NO_ERROR); i++) {
      res = getIntParameter(amesys->pModel, idx[i], &value[i]);
   }
   
   return res;
}

static AMESystemError AmesysGetDoubleParamValue(AMESIMSYSTEM *amesys, const int nbParam, const int idx[], double value[])
{
   AMESystemError res;
   int i;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_MODEL_PARAM);
   
   for(i = 0; (i < nbParam) && (res == AME_NO_ERROR); i++) {
      res = getDoubleParameter(amesys->pModel, idx[i], &value[i]);
   }
   
   return res;
}

static AMESystemError AmesysGetStringParamValue(AMESIMSYSTEM *amesys, const int nbParam, const int idx[], const char* value[])
{
   AMESystemError res;
   int i;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_MODEL_PARAM);
   
   for(i = 0; (i < nbParam) && (res == AME_NO_ERROR); i++) {
      res = getStringParameter(amesys->pModel, idx[i], &value[i]);
   }
   
   return res;
}

static AMESystemError AmesysSetIntParamValue(AMESIMSYSTEM *amesys, const int nbParam, const int idx[], const int value[])
{
   AMESystemError res;
   int i;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM_TUNABLE);
   
   for(i = 0; (i < nbParam) && (res == AME_NO_ERROR); i++) {
      int isTunable;
      res = isParamTunable(amesys->pModel, idx[i], &isTunable);
      
      if(res ==  AME_NO_ERROR) {
         if(isTunable) {
            res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM_TUNABLE);
         }
         else {
            res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM);
         }
      }
      if(res ==  AME_NO_ERROR) {
         res = setIntParameter(amesys->pModel, idx[i], value[i]);
      }
      if(res == AME_NO_ERROR) {
         SignalInputChange();
         res = setParamAsUserDefined(amesys->pModel, idx[i]);
      }
   }
   
   return res;
}

static AMESystemError AmesysSetDoubleParamValue(AMESIMSYSTEM *amesys, const int nbParam, const int idx[], const double value[])
{
   AMESystemError res;
   int i;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM_TUNABLE);
      
   for(i = 0; (i < nbParam) && (res == AME_NO_ERROR); i++) {
      int isTunable;
      res = isParamTunable(amesys->pModel, idx[i], &isTunable);
      
      if(res ==  AME_NO_ERROR) {
         if(isTunable) {
            res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM_TUNABLE);
         }
         else {
            res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM);
         }
      }
      if(res ==  AME_NO_ERROR) {
         res = setDoubleParameter(amesys->pModel, idx[i], value[i]);
      }
      if(res == AME_NO_ERROR) {
         SignalInputChange();
         res = setParamAsUserDefined(amesys->pModel, idx[i]);
      }
   }
   
   return res;
}

static AMESystemError AmesysSetStringParamValue(AMESIMSYSTEM *amesys, const int nbParam, const int idx[], const char* value[])
{
   AMESystemError res;
   int i;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM_TUNABLE);
   
   for(i = 0; (i < nbParam) && (res == AME_NO_ERROR); i++) {
      int isTunable;
      res = isParamTunable(amesys->pModel, idx[i], &isTunable);
      
      if(res ==  AME_NO_ERROR) {
         if(isTunable) {
            res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM_TUNABLE);
         }
         else {
            res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM);
         }
      }
      if(res ==  AME_NO_ERROR) {
         res = setStringParameter(amesys->pModel,idx[i], value[i]);
      }
      if(res == AME_NO_ERROR) {
         res = setParamAsUserDefined(amesys->pModel, idx[i]);
      }
   }
   
   return res;
}

static AMESystemError AmesysGetDoubleGlobalParamValue(AMESIMSYSTEM *amesys, const int nbParam, const char* name[], double value[])
{
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_MODEL_PARAM);
   
   if(res == AME_NO_ERROR) { /* Request accepted */
      int i;
      for(i = 0; i<nbParam; i++) {
         if(getGlobalParamValueByName(name[i], &value[i]) != no_error) {
            res = AME_GLOBAL_PARAMETER_ERROR;
            break;
         }
      }
   }
   
   return res;
}

static AMESystemError AmesysGetStringGlobalParamValue(AMESIMSYSTEM *amesys, const int nbParam, const char* name[], const char* value[])
{
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_GET_MODEL_PARAM);
   
   if(res == AME_NO_ERROR) { /* Request accepted */
      int i;
      for(i = 0; i<nbParam; i++) {
         if(getTextGlobalParamValueByName(name[i], &value[i]) != no_error) {
            res = AME_GLOBAL_PARAMETER_ERROR;
            break;
         }
      }
   }
   
   return res;
}

static AMESystemError AmesysSetIntGlobalParamValue(AMESIMSYSTEM *amesys, const int nbParam, const char* name[], const int value[])
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      int i;
      for(i = 0; i<nbParam; i++) {
         if(ChangeOrAddIntGlobalParamValue(name[i], value[i], 1) != AME_NO_ERROR) {
            res = AME_GLOBAL_PARAMETER_ERROR;
            break;
         }
      }
   }
   
   return res;
}

static AMESystemError AmesysSetDoubleGlobalParamValue(AMESIMSYSTEM *amesys, const int nbParam, const char* name[], const double value[])
{
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM);
   
   if(res == AME_NO_ERROR) { /* Request accepted */
      int i;
      for(i = 0; i<nbParam; i++) {
         if(ChangeOrAddRealGlobalParamValue(name[i], value[i], 1) != AME_NO_ERROR) {
            res = AME_GLOBAL_PARAMETER_ERROR;
            break;
         }
      }
   }

   return res;
}

static AMESystemError AmesysSetStringGlobalParamValue(AMESIMSYSTEM *amesys, const int nbParam, const char* name[], const char* value[])
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_MODEL_PARAM);
   
   if(res == AME_NO_ERROR) { /* Request accepted */
      int i;
      for(i = 0; i<nbParam; i++) {
         if(ChangeOrAddTextGlobalParamValue(name[i], value[i], 1) != AME_NO_ERROR) {
            res = AME_GLOBAL_PARAMETER_ERROR;
            break;
         }
      }
   }

   return res;
}

static AMESystemError AmesysRequestRunInterrupt(AMESIMSYSTEM *amesys)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_REQ_RUN_INTERRUPT);

   if(res == AME_NO_ERROR) { /* Request accepted */
      amesys->requestinterrupt = 1;

	   /* Update state and result */
	   res =  AmesysUpdateState(amesys, AME_CMD_REQ_RUN_INTERRUPT, res);
   }

   return res;
}

static AMESystemError AmesysSetFinalTime(AMESIMSYSTEM *amesys, const double finaltime)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      amesys->simOptions->tFinal = finaltime;
   }

   return res;
}

static AMESystemError AmesysSetInitTime(AMESIMSYSTEM *amesys, const double inittime)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      amesys->simOptions->tStart = inittime;
   }

   return res;
}

static AMESystemError AmesysSetPrintInterval(AMESIMSYSTEM *amesys, const double tInc)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      amesys->simOptions->tInc = tInc;
   }

   return res;
}

static AMESystemError AmesysSetLogger( int (*newameInternalfprintf)(FILE *fp, const char *fmt, va_list ap) )
{
   ameInstallFprintf(newameInternalfprintf);
   return AME_NO_ERROR;
}

static AMESystemError AmesysSetInputDir(AMESIMSYSTEM *amesys, const char *inputDir)
{
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_ENV);

   if(res == AME_NO_ERROR) { /* Request accepted */
      AmeSetInputDir(amesys, inputDir);
   }

   return res;
}

static AMESystemError AmesysSetOutputDir(AMESIMSYSTEM *amesys, const char *outputDir)
{
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_ENV);

   if(res == AME_NO_ERROR) { /* Request accepted */
      AmeSetOutputDir(amesys, outputDir);
   }

   return res;
}

static AMESystemError AmesysSetBaseFilesName(AMESIMSYSTEM *amesys, const char *baseName, const char* extension)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_ENV);

   if(res == AME_NO_ERROR) { /* Request accepted */
      AmeSetModelBaseName(amesys, baseName, extension);
   }

   return res;
}

static AMESystemError AmesysSetResultFilesName(AMESIMSYSTEM *amesys, const char *outName)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_ENV);
   
   if(res == AME_NO_ERROR) { /* Request accepted */
      AmeSetResultFileName(amesys, outName);
   }

   return res;
}

/* To ensure compliancy with old template and entry points */
static AMESystemError AmesysSetParamAsInitModel(AMESIMSYSTEM *amesys,
                  double time,
                  double PrintInterval, 
                  double MaxTimeStep,
                  double tolerance,
                  int errCtrl,
                  int writeLevel,
                  int extraDisconPrints,
                  int runStats,
                  int runType,
                  int thesolvertype)
{
   AMESystemError res;

   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);
   res |= AmesysControlRequest(amesys, AME_CMD_SET_SOLVER_PARAM);

   if(res == AME_NO_ERROR) { /* Request accepted */
      SIMOptions *sim_options = amesys->simOptions;   

      solverSettings solver;
      simSettings sim;
      stdOptions std;

      solver.integType =  0; /* Variable solver */
      solver.settings.variable.hMax = MaxTimeStep;
      solver.settings.variable.tol = tolerance;
      solver.settings.variable.errorType = errCtrl;

      simOptSetSolverParam(amesys->simOptions, &solver);

      sim.tStart = time;
      sim.tFinal = amesys->simOptions->tFinal;
      sim.simOpt = 0;

      if(runType & 0x01) {
         sim.simOpt |= SIMOPT_SIM_CONTINUATION_RUN;
      }
      if(runType & 0x02) {
         sim.simOpt |= SIMOPT_SIM_USE_FINAL_VALUES;
      }
      if(writeLevel != 2) {
         sim.simOpt |= SIMOPT_SIM_MONITOR_TIME;
      }
      if(runStats) {
         sim.simOpt |= SIMOPT_SIM_STATISTICS;
      }

      if(PrintInterval <= 0) {
         sim.tInc = -PrintInterval;
         amesys->simOptions->outoff = 1;
      }
      else {
         sim.tInc = PrintInterval;
         amesys->simOptions->outoff = 0;
      }

      simOptSetSimParam(amesys->simOptions, &sim);
   
      std.simMode = ((runType & 0x0c) >> 2);
      std.stdOpt = 0;
   
      if(extraDisconPrints) {
         std.stdOpt |= SIMOPT_STD_DISC_PRINTOUT;
      }
      if(runType & 0x10) {
         std.stdOpt |= SIMOPT_STD_HOLD_INPUTS;
      }
      if(amesys->simOptions->stabilOption & 0x01) {
         std.stdOpt |= SIMOPT_STD_LOCK_STATES;
      }
      if(amesys->simOptions->stabilOption & 0x02) {
         std.stdOpt |= SIMOPT_STD_DIAGNOSTICS;
      }
      if(thesolvertype) {
         std.stdOpt |= SIMOPT_STD_CAUTIOUS;
      }
      if(amesys->simOptions->minimalDiscont) {
         std.stdOpt |= SIMOPT_STD_MIN_DISC_HANDLING;
      }
      if(runType & 0x100) {
         std.stdOpt |= SIMOPT_STD_DISABLE_OPTIMAZED;
      }
      if(sim_options->activityIndex & 0x01) {
         std.stdOpt |= SIMOPT_STD_ACTIVITY;
      }
      if(sim_options->activityIndex & 0x02) {
         std.stdOpt |= SIMOPT_STD_POWER;
      }
      if(sim_options->activityIndex & 0x04) {
         std.stdOpt |= SIMOPT_STD_ENERGY;
      }
      simOptSetStdParam(amesys->simOptions, &std);
   }
   return res;
}

/* To ensure compliancy with old template and entry points */
static AMESystemError AmesysSetParamAsFixedStep(AMESIMSYSTEM *amesys,
                                       double start_time, int run_type, int solver_type,
                                       int runge_kutta_order, double fixed_h, double printinterval)
{
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_SET_RUN_PARAM);
   res |= AmesysControlRequest(amesys, AME_CMD_SET_SOLVER_PARAM);
   
   if(res == AME_NO_ERROR) { /* Request accepted */
      solverSettings solver;
      
      res = AME_NO_ERROR;

      solver.integType = 1; /* Fixed solver */
      solver.settings.fixed.fixedH = fixed_h;
      solver.settings.fixed.fixedOrder = runge_kutta_order;
      solver.settings.fixed.fixedType = solver_type;
      
      simOptSetSolverParam(amesys->simOptions, &solver);
      amesys->simOptions->tStart = start_time;
      
      if(printinterval <= 0) {
         amesys->simOptions->outoff = 1;
         amesys->simOptions->tInc = -printinterval;
      }
      else {
         amesys->simOptions->outoff = 0;
         amesys->simOptions->tInc = printinterval;
      }
      simOptSetOneOfSimParam(amesys->simOptions, SIMOPT_SIM_CONTINUATION_RUN, run_type & 0x01);
      simOptSetOneOfSimParam(amesys->simOptions, SIMOPT_SIM_USE_FINAL_VALUES, (run_type & 0x02)>>1);
   }
   return res;
}

#ifndef AME_COSIM

static AMESystemError AmesysInitME(AMESIMSYSTEM *amesys, int withAssembly)
{
   AMESystemError res = AME_NO_ERROR;
   int jump_ret;
   
   res = AmesysControlRequest(amesys, AME_CMD_INITIALIZE);
   
   if(res != AME_NO_ERROR) {
      /* Request not accepted */
      return res;
   }
   
   /* Load parameters */
   res = Input(amesys);
   
   /* Set initial values */
   modelSetInitValues(amesys->pModel, amesys->states, amesys->discrete_states);
   
   if(res == AME_NO_ERROR) {
      if( (jump_ret = setjmp(amesys->jump_env)) == 0) { /* try */
         
         setstarttime_(amesys->simOptions->tStart);
         setfinaltime_(amesys->simOptions->tFinal);

         amesys->first_call = 1;  /* should this be done or not ?*/
         amesys->needrestart = 1;

         amesys->tlast = TLAST_MIN;

         memset(amesys->ecount,0,amesys->numstates*sizeof(int));
         memset(amesys->dotstates,0,amesys->numstates*sizeof(double));
         
         PreInitialize(amesys,amesys->states);
         
#ifndef AME_INPUT_IN_MEMORY
         if( NeedReloadInputFiles() != 0 )
         {
            ClearGPs();
            Input(amesys);
            /* Set initial values */
            modelSetInitValues(amesys->pModel, amesys->states, amesys->discrete_states);
            ClearReloadedFiles();
         }
#endif

         Initialize(amesys,amesys->states);
         
         OverloadStatesWithRegister(amesys, amesys->states, SVREGISTER_DEFAULT);
         
         if(withAssembly) {
            doAssembly(amesys);
         }
         amesys->tlast = getstarttime_();
#ifdef AME_PROCESS_TIME
         /* Initialization of time timers */
         ProcessTime(0);
#endif
      }
      else { /* Catch AmeExit */
         res = AME_EXIT_ERROR;
      }
   }
   
   /* Update state and result */
   res =  AmesysUpdateState(amesys, AME_CMD_INITIALIZE, res);
   
   if(res == AME_NO_ERROR) {
      /* Go in Run state: simulate acknowledgment of evaluation at t start command */
      res =  AmesysUpdateState(amesys, AME_CMD_TSTART, res);
      
#if defined(AME_MEMORY_ACCESS_RT_EXPORT) && (AME_NBOF_REAL_PARAMS>0)
      memcpy(RT_Export_RealParam, amesys->pModel->realParamArray, sizeof(double)*AME_NBOF_REAL_PARAMS);
#endif
#if defined(AME_MEMORY_ACCESS_RT_EXPORT) && (AME_NBOF_INT_PARAMS>0)
      memcpy(RT_Export_IntParam, amesys->pModel->integerParamArray, sizeof(int)*AME_NBOF_INT_PARAMS);
#endif
   }
   
   return res;
}

static AMESystemError AmesysFuncEvalME(AMESIMSYSTEM *amesys, double t, double *y, double *yprime, double *delta, int *flag)
{
   int jump_ret;
   AMESystemError res;
   
   SetGlobalSystem(amesys);
   res = AmesysControlRequest(amesys, AME_CMD_FUNCEVAL);
   
   if(res != AME_NO_ERROR) {
      /* Request not accepted */
      return res;
   }
   
   if( (jump_ret = setjmp(amesys->jump_env)) == 0) { /* try */
      amesys->doInterpol = 0;
      localFuncEval(amesys, t, y, yprime, delta, flag);
   }
   else { /* Catch AmeExit */
      res = AME_EXIT_ERROR;
   }

   /* Update state and result */
   res =  AmesysUpdateState(amesys, AME_CMD_FUNCEVAL, res);   
   return res;
}

#endif

/****************************/

#define SYSNME PIDtunerSpeedControlOpenloop_

#if defined(STANDALONESIMULATOR)
#include "ame_standalone_simulator.h"

#elif defined(FMICS1)
#include "ame_fmics1.h"
#elif defined(FMICS2)
#include "ame_fmics2.h"
#elif defined(FMIME1) || defined(FMIME2)
#if(AME_MODEL_ISEXPLICIT == 0)
#error "FMI for model exchange is not allowed for implicit model."
#elif defined(AMERT)
#error "FMU for real-time is not allowed for model exchange."
#elif defined(FMIME1)
#include "ame_fmime1.h"
#else
#include "ame_fmime2.h"
#endif
#elif defined(FMIX)
#include "ame_user_cosim.h"

#elif defined(AMEUSERCOSIM)
#include "ame_user_cosim.h"

#elif defined(AME_CS_SIMULINK)
#include "ame_simulink_cosim.h"

#elif defined(AME_ME_SIMULINK)
#include "ame_simulink_me.h"

#elif defined(LABVIEWCOSIM)
#include "labview_cosim.h"

#elif defined(AMEVERISTAND)
#if(AME_MODEL_ISEXPLICIT == 0)
#error "VeriStand interface is not allowed for implicit model."
#else
#include "AME_NIVERISTAND_API.c"
#define AMEVERISTAND_LOG_FILE "c:\\temp\\NIV_PIDtunerSpeedControlOpenloop_.log"
#include "NIV_model.c"
#endif

#elif defined(AME_CS_ADAMS)
#include "ame_adams_cosim.h"

#elif defined(AME_ME_ADAMS)
#include "adams_cont.h"

#elif defined(AME_CS_MOTION)
#include "ame_motion_cosim.h"

#elif defined(AME_ME_MOTION)
#include "ame_motion_me.h"

#elif defined(DISCRETEPART)
#include "ame_discrete_part.h"

#elif defined(GEN_COSIM)
#include "gen_cosim.h"

#else
#error "Unknown interface defined. Cannot generate Amesim model code."
#endif
