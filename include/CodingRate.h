/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_CodingRate_H_
#define	_CodingRate_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CodingRate {
	CodingRate_half	= 0,
	CodingRate_third	= 1
} e_CodingRate;

/* CodingRate */
typedef long	 CodingRate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CodingRate;
asn_struct_free_f CodingRate_free;
asn_struct_print_f CodingRate_print;
asn_constr_check_f CodingRate_constraint;
ber_type_decoder_f CodingRate_decode_ber;
der_type_encoder_f CodingRate_encode_der;
xer_type_decoder_f CodingRate_decode_xer;
xer_type_encoder_f CodingRate_encode_xer;
per_type_decoder_f CodingRate_decode_uper;
per_type_encoder_f CodingRate_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CodingRate_H_ */
#include <asn_internal.h>