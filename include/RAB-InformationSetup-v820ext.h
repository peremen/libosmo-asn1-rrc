/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RAB_InformationSetup_v820ext_H_
#define	_RAB_InformationSetup_v820ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CS_HSPA_Information;

/* RAB-InformationSetup-v820ext */
typedef struct RAB_InformationSetup_v820ext {
	struct CS_HSPA_Information	*cs_HSPA_Information	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAB_InformationSetup_v820ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAB_InformationSetup_v820ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CS-HSPA-Information.h"

#endif	/* _RAB_InformationSetup_v820ext_H_ */
#include <asn_internal.h>
