/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_E_AGCH_Set_Config_H_
#define	_E_AGCH_Set_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E_AGCH_Individual;

/* E-AGCH-Set-Config */
typedef struct E_AGCH_Set_Config {
	A_SEQUENCE_OF(struct E_AGCH_Individual) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_AGCH_Set_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_AGCH_Set_Config;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "E-AGCH-Individual.h"

#endif	/* _E_AGCH_Set_Config_H_ */
#include <asn_internal.h>
