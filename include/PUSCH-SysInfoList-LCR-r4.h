/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_PUSCH_SysInfoList_LCR_r4_H_
#define	_PUSCH_SysInfoList_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PUSCH_SysInfo_LCR_r4;

/* PUSCH-SysInfoList-LCR-r4 */
typedef struct PUSCH_SysInfoList_LCR_r4 {
	A_SEQUENCE_OF(struct PUSCH_SysInfo_LCR_r4) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_SysInfoList_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_SysInfoList_LCR_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PUSCH-SysInfo-LCR-r4.h"

#endif	/* _PUSCH_SysInfoList_LCR_r4_H_ */
#include <asn_internal.h>
