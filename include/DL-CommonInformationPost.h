/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DL_CommonInformationPost_H_
#define	_DL_CommonInformationPost_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-DPCH-InfoCommonPost.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-CommonInformationPost */
typedef struct DL_CommonInformationPost {
	DL_DPCH_InfoCommonPost_t	 dl_DPCH_InfoCommon;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_CommonInformationPost_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_CommonInformationPost;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_CommonInformationPost_H_ */
#include <asn_internal.h>