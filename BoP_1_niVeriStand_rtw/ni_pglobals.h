/*========================================================================*
 * NI VeriStand Model Framework code generation
 *
 * Model : BoP_1
 * Model version : 1.7
 * VeriStand Model Framework version : 2017.0.1.0 (2017 f1)
 * Source generated on : Tue Dec 04 13:28:27 2018
 *========================================================================*/

/*
 * Note:
 *   This file was generated by the main model, BoP_1.
 *   This file redirects parameter references to the NI VeriStand rtParameter buffer.
 *
 *   In a model reference configuration, this file defines the globally shared parameter structure
 *   across all model references. All models must share the same type definition for proper execution.
 *
 */
#if !defined(_DEFINED_TYPEDEF_FOR_niUrtParametersTypeDef_)
#define _DEFINED_TYPEDEF_FOR_niUrtParametersTypeDef_

/* Parameters typedef identifier */
#define NI_PARAM_TYPEDEF               P_BoP_1_T
#endif

#if defined(_NI_DEFINE_PARAMS_DBL_BUFFER_)
#undef _NI_DEFINE_PARAMS_DBL_BUFFER_
#ifdef MULTITASKING
#define NI_PARAM_BUFF                  (*param_lookup[tid][READSIDE])
#else
#define NI_PARAM_BUFF                  rtParameter[READSIDE]
#endif

#define BoP_1_P                        NI_PARAM_BUFF
#elif defined(_NI_UNDEFINE_PARAMS_DBL_BUFFER_)
#undef _NI_UNDEFINE_PARAMS_DBL_BUFFER_
#undef BoP_1_P
#endif
