/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "SCCPCH-SystemInformation-LCR-r4-ext.h"

static asn_TYPE_member_t asn_MBR_SCCPCH_SystemInformation_LCR_r4_ext_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SCCPCH_SystemInformation_LCR_r4_ext, secondaryCCPCH_LCR_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecondaryCCPCH_Info_LCR_r4_ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"secondaryCCPCH-LCR-Extensions"
		},
	{ ATF_POINTER, 1, offsetof(struct SCCPCH_SystemInformation_LCR_r4_ext, pich_Info),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PICH_Info_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pich-Info"
		},
};
static int asn_MAP_SCCPCH_SystemInformation_LCR_r4_ext_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_SCCPCH_SystemInformation_LCR_r4_ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SCCPCH_SystemInformation_LCR_r4_ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* secondaryCCPCH-LCR-Extensions at 10965 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pich-Info at 10968 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SCCPCH_SystemInformation_LCR_r4_ext_specs_1 = {
	sizeof(struct SCCPCH_SystemInformation_LCR_r4_ext),
	offsetof(struct SCCPCH_SystemInformation_LCR_r4_ext, _asn_ctx),
	asn_MAP_SCCPCH_SystemInformation_LCR_r4_ext_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SCCPCH_SystemInformation_LCR_r4_ext_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SCCPCH_SystemInformation_LCR_r4_ext = {
	"SCCPCH-SystemInformation-LCR-r4-ext",
	"SCCPCH-SystemInformation-LCR-r4-ext",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SCCPCH_SystemInformation_LCR_r4_ext_tags_1,
	sizeof(asn_DEF_SCCPCH_SystemInformation_LCR_r4_ext_tags_1)
		/sizeof(asn_DEF_SCCPCH_SystemInformation_LCR_r4_ext_tags_1[0]), /* 1 */
	asn_DEF_SCCPCH_SystemInformation_LCR_r4_ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_SCCPCH_SystemInformation_LCR_r4_ext_tags_1)
		/sizeof(asn_DEF_SCCPCH_SystemInformation_LCR_r4_ext_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SCCPCH_SystemInformation_LCR_r4_ext_1,
	2,	/* Elements count */
	&asn_SPC_SCCPCH_SystemInformation_LCR_r4_ext_specs_1	/* Additional specs */
};
