/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "E-HICH-Information-TDD384-768.h"

static int
burst_Type_7_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
burst_Type_7_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
burst_Type_7_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	burst_Type_7_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
burst_Type_7_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	burst_Type_7_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
burst_Type_7_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	burst_Type_7_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
burst_Type_7_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	burst_Type_7_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
burst_Type_7_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	burst_Type_7_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
burst_Type_7_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	burst_Type_7_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
burst_Type_7_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	burst_Type_7_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
burst_Type_7_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	burst_Type_7_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
midamble_Allocation_Mode_10_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
midamble_Allocation_Mode_10_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
midamble_Allocation_Mode_10_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	midamble_Allocation_Mode_10_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
midamble_Allocation_Mode_10_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	midamble_Allocation_Mode_10_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
midamble_Allocation_Mode_10_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	midamble_Allocation_Mode_10_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
midamble_Allocation_Mode_10_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	midamble_Allocation_Mode_10_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
midamble_Allocation_Mode_10_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	midamble_Allocation_Mode_10_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
midamble_Allocation_Mode_10_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	midamble_Allocation_Mode_10_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
midamble_Allocation_Mode_10_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	midamble_Allocation_Mode_10_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
midamble_Allocation_Mode_10_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	midamble_Allocation_Mode_10_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_n_E_HICH_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 4 && value <= 44)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_tS_Number_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 14)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_4 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_burst_Type_constr_7 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_midamble_Allocation_Mode_constr_10 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_n_E_HICH_constr_2 = {
	{ APC_CONSTRAINED,	 6,  6,  4,  44 }	/* (4..44) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_tS_Number_constr_3 = {
	{ APC_CONSTRAINED,	 4,  4,  0,  14 }	/* (0..14) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_modeSpecificInfo_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E_HICH_Information_TDD384_768__modeSpecificInfo, choice.tdd384),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_TS_ChannelisationCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd384"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_HICH_Information_TDD384_768__modeSpecificInfo, choice.tdd768),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_TS_ChannelisationCode_VHCR,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd768"
		},
};
static asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd384 at 8427 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd768 at 8429 */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_4 = {
	sizeof(struct E_HICH_Information_TDD384_768__modeSpecificInfo),
	offsetof(struct E_HICH_Information_TDD384_768__modeSpecificInfo, _asn_ctx),
	offsetof(struct E_HICH_Information_TDD384_768__modeSpecificInfo, present),
	sizeof(((struct E_HICH_Information_TDD384_768__modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_4 = {
	"modeSpecificInfo",
	"modeSpecificInfo",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_modeSpecificInfo_constr_4,
	asn_MBR_modeSpecificInfo_4,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_4	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_burst_Type_value2enum_7[] = {
	{ 0,	5,	"type1" },
	{ 1,	5,	"type2" }
};
static unsigned int asn_MAP_burst_Type_enum2value_7[] = {
	0,	/* type1(0) */
	1	/* type2(1) */
};
static asn_INTEGER_specifics_t asn_SPC_burst_Type_specs_7 = {
	asn_MAP_burst_Type_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_burst_Type_enum2value_7,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_burst_Type_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_burst_Type_7 = {
	"burst-Type",
	"burst-Type",
	burst_Type_7_free,
	burst_Type_7_print,
	burst_Type_7_constraint,
	burst_Type_7_decode_ber,
	burst_Type_7_encode_der,
	burst_Type_7_decode_xer,
	burst_Type_7_encode_xer,
	burst_Type_7_decode_uper,
	burst_Type_7_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_burst_Type_tags_7,
	sizeof(asn_DEF_burst_Type_tags_7)
		/sizeof(asn_DEF_burst_Type_tags_7[0]) - 1, /* 1 */
	asn_DEF_burst_Type_tags_7,	/* Same as above */
	sizeof(asn_DEF_burst_Type_tags_7)
		/sizeof(asn_DEF_burst_Type_tags_7[0]), /* 2 */
	&asn_PER_type_burst_Type_constr_7,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_burst_Type_specs_7	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_midamble_Allocation_Mode_value2enum_10[] = {
	{ 0,	7,	"default" },
	{ 1,	6,	"common" }
};
static unsigned int asn_MAP_midamble_Allocation_Mode_enum2value_10[] = {
	1,	/* common(1) */
	0	/* default(0) */
};
static asn_INTEGER_specifics_t asn_SPC_midamble_Allocation_Mode_specs_10 = {
	asn_MAP_midamble_Allocation_Mode_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_midamble_Allocation_Mode_enum2value_10,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_midamble_Allocation_Mode_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_midamble_Allocation_Mode_10 = {
	"midamble-Allocation-Mode",
	"midamble-Allocation-Mode",
	midamble_Allocation_Mode_10_free,
	midamble_Allocation_Mode_10_print,
	midamble_Allocation_Mode_10_constraint,
	midamble_Allocation_Mode_10_decode_ber,
	midamble_Allocation_Mode_10_encode_der,
	midamble_Allocation_Mode_10_decode_xer,
	midamble_Allocation_Mode_10_encode_xer,
	midamble_Allocation_Mode_10_decode_uper,
	midamble_Allocation_Mode_10_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_midamble_Allocation_Mode_tags_10,
	sizeof(asn_DEF_midamble_Allocation_Mode_tags_10)
		/sizeof(asn_DEF_midamble_Allocation_Mode_tags_10[0]) - 1, /* 1 */
	asn_DEF_midamble_Allocation_Mode_tags_10,	/* Same as above */
	sizeof(asn_DEF_midamble_Allocation_Mode_tags_10)
		/sizeof(asn_DEF_midamble_Allocation_Mode_tags_10[0]), /* 2 */
	&asn_PER_type_midamble_Allocation_Mode_constr_10,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_midamble_Allocation_Mode_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_E_HICH_Information_TDD384_768_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E_HICH_Information_TDD384_768, n_E_HICH),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_n_E_HICH_constraint_1,
		&asn_PER_memb_n_E_HICH_constr_2,
		0,
		"n-E-HICH"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_HICH_Information_TDD384_768, tS_Number),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_tS_Number_constraint_1,
		&asn_PER_memb_tS_Number_constr_3,
		0,
		"tS-Number"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_HICH_Information_TDD384_768, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_HICH_Information_TDD384_768, burst_Type),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_burst_Type_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"burst-Type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_HICH_Information_TDD384_768, midamble_Allocation_Mode),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_midamble_Allocation_Mode_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"midamble-Allocation-Mode"
		},
};
static ber_tlv_tag_t asn_DEF_E_HICH_Information_TDD384_768_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_E_HICH_Information_TDD384_768_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n-E-HICH at 8424 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tS-Number at 8425 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* modeSpecificInfo at 8427 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* burst-Type at 8430 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* midamble-Allocation-Mode at 8431 */
};
static asn_SEQUENCE_specifics_t asn_SPC_E_HICH_Information_TDD384_768_specs_1 = {
	sizeof(struct E_HICH_Information_TDD384_768),
	offsetof(struct E_HICH_Information_TDD384_768, _asn_ctx),
	asn_MAP_E_HICH_Information_TDD384_768_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_E_HICH_Information_TDD384_768 = {
	"E-HICH-Information-TDD384-768",
	"E-HICH-Information-TDD384-768",
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
	asn_DEF_E_HICH_Information_TDD384_768_tags_1,
	sizeof(asn_DEF_E_HICH_Information_TDD384_768_tags_1)
		/sizeof(asn_DEF_E_HICH_Information_TDD384_768_tags_1[0]), /* 1 */
	asn_DEF_E_HICH_Information_TDD384_768_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_HICH_Information_TDD384_768_tags_1)
		/sizeof(asn_DEF_E_HICH_Information_TDD384_768_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_E_HICH_Information_TDD384_768_1,
	5,	/* Elements count */
	&asn_SPC_E_HICH_Information_TDD384_768_specs_1	/* Additional specs */
};
