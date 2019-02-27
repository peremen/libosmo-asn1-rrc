/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_E_AGCH_InactivityMonitorThreshold_TDD128_H_
#define	_E_AGCH_InactivityMonitorThreshold_TDD128_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E_AGCH_InactivityMonitorThreshold_TDD128 {
	E_AGCH_InactivityMonitorThreshold_TDD128_radio_frames_0	= 0,
	E_AGCH_InactivityMonitorThreshold_TDD128_radio_frames_1	= 1,
	E_AGCH_InactivityMonitorThreshold_TDD128_radio_frames_2	= 2,
	E_AGCH_InactivityMonitorThreshold_TDD128_radio_frames_4	= 3,
	E_AGCH_InactivityMonitorThreshold_TDD128_radio_frames_8	= 4,
	E_AGCH_InactivityMonitorThreshold_TDD128_radio_frames_16	= 5,
	E_AGCH_InactivityMonitorThreshold_TDD128_radio_frames_32	= 6,
	E_AGCH_InactivityMonitorThreshold_TDD128_radio_frames_64	= 7,
	E_AGCH_InactivityMonitorThreshold_TDD128_radio_frames_128	= 8,
	E_AGCH_InactivityMonitorThreshold_TDD128_radio_frames_256	= 9,
	E_AGCH_InactivityMonitorThreshold_TDD128_radio_frames_512	= 10,
	E_AGCH_InactivityMonitorThreshold_TDD128_spare5	= 11,
	E_AGCH_InactivityMonitorThreshold_TDD128_spare4	= 12,
	E_AGCH_InactivityMonitorThreshold_TDD128_spare3	= 13,
	E_AGCH_InactivityMonitorThreshold_TDD128_spare2	= 14,
	E_AGCH_InactivityMonitorThreshold_TDD128_infinity	= 15
} e_E_AGCH_InactivityMonitorThreshold_TDD128;

/* E-AGCH-InactivityMonitorThreshold-TDD128 */
typedef long	 E_AGCH_InactivityMonitorThreshold_TDD128_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_AGCH_InactivityMonitorThreshold_TDD128;
asn_struct_free_f E_AGCH_InactivityMonitorThreshold_TDD128_free;
asn_struct_print_f E_AGCH_InactivityMonitorThreshold_TDD128_print;
asn_constr_check_f E_AGCH_InactivityMonitorThreshold_TDD128_constraint;
ber_type_decoder_f E_AGCH_InactivityMonitorThreshold_TDD128_decode_ber;
der_type_encoder_f E_AGCH_InactivityMonitorThreshold_TDD128_encode_der;
xer_type_decoder_f E_AGCH_InactivityMonitorThreshold_TDD128_decode_xer;
xer_type_encoder_f E_AGCH_InactivityMonitorThreshold_TDD128_encode_xer;
per_type_decoder_f E_AGCH_InactivityMonitorThreshold_TDD128_decode_uper;
per_type_encoder_f E_AGCH_InactivityMonitorThreshold_TDD128_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _E_AGCH_InactivityMonitorThreshold_TDD128_H_ */
#include <asn_internal.h>