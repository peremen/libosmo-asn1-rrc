/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "UE-Positioning-ReportingQuantity-r7.h"

static int
velocityRequested_9_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
velocityRequested_9_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
velocityRequested_9_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	velocityRequested_9_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
velocityRequested_9_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	velocityRequested_9_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
velocityRequested_9_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	velocityRequested_9_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
velocityRequested_9_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	velocityRequested_9_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
velocityRequested_9_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	velocityRequested_9_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
velocityRequested_9_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	velocityRequested_9_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
velocityRequested_9_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	velocityRequested_9_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
velocityRequested_9_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	velocityRequested_9_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_gANSSPositioningMethods_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
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
memb_gANSSTimingOfCellWanted_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8)) {
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
memb_gANSSCarrierPhaseMeasurementRequested_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_velocityRequested_constr_9 = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_gANSSPositioningMethods_constr_11 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_gANSSTimingOfCellWanted_constr_12 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_gANSSCarrierPhaseMeasurementRequested_constr_13 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_velocityRequested_value2enum_9[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_velocityRequested_enum2value_9[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_velocityRequested_specs_9 = {
	asn_MAP_velocityRequested_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_velocityRequested_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_velocityRequested_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_velocityRequested_9 = {
	"velocityRequested",
	"velocityRequested",
	velocityRequested_9_free,
	velocityRequested_9_print,
	velocityRequested_9_constraint,
	velocityRequested_9_decode_ber,
	velocityRequested_9_encode_der,
	velocityRequested_9_decode_xer,
	velocityRequested_9_encode_xer,
	velocityRequested_9_decode_uper,
	velocityRequested_9_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_velocityRequested_tags_9,
	sizeof(asn_DEF_velocityRequested_tags_9)
		/sizeof(asn_DEF_velocityRequested_tags_9[0]) - 1, /* 1 */
	asn_DEF_velocityRequested_tags_9,	/* Same as above */
	sizeof(asn_DEF_velocityRequested_tags_9)
		/sizeof(asn_DEF_velocityRequested_tags_9[0]), /* 2 */
	&asn_PER_type_velocityRequested_constr_9,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_velocityRequested_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UE_Positioning_ReportingQuantity_r7_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_ReportingQuantity_r7, methodType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_MethodType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"methodType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_ReportingQuantity_r7, positioningMethod),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PositioningMethod,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"positioningMethod"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_Positioning_ReportingQuantity_r7, horizontalAccuracy),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_Accuracy,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"horizontalAccuracy"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_ReportingQuantity_r7, verticalAccuracy),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_Accuracy,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"verticalAccuracy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_ReportingQuantity_r7, gps_TimingOfCellWanted),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gps-TimingOfCellWanted"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_ReportingQuantity_r7, additionalAssistanceDataReq),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"additionalAssistanceDataReq"
		},
	{ ATF_POINTER, 5, offsetof(struct UE_Positioning_ReportingQuantity_r7, environmentCharacterisation),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EnvironmentCharacterisation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"environmentCharacterisation"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_Positioning_ReportingQuantity_r7, velocityRequested),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_velocityRequested_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"velocityRequested"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_Positioning_ReportingQuantity_r7, gANSSPositioningMethods),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_gANSSPositioningMethods_constraint_1,
		&asn_PER_memb_gANSSPositioningMethods_constr_11,
		0,
		"gANSSPositioningMethods"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_Positioning_ReportingQuantity_r7, gANSSTimingOfCellWanted),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_gANSSTimingOfCellWanted_constraint_1,
		&asn_PER_memb_gANSSTimingOfCellWanted_constr_12,
		0,
		"gANSSTimingOfCellWanted"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_ReportingQuantity_r7, gANSSCarrierPhaseMeasurementRequested),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_gANSSCarrierPhaseMeasurementRequested_constraint_1,
		&asn_PER_memb_gANSSCarrierPhaseMeasurementRequested_constr_13,
		0,
		"gANSSCarrierPhaseMeasurementRequested"
		},
};
static int asn_MAP_UE_Positioning_ReportingQuantity_r7_oms_1[] = { 2, 3, 6, 7, 8, 9, 10 };
static ber_tlv_tag_t asn_DEF_UE_Positioning_ReportingQuantity_r7_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_Positioning_ReportingQuantity_r7_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* methodType at 19849 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* positioningMethod at 19850 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* horizontalAccuracy at 19851 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* verticalAccuracy at 19852 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* gps-TimingOfCellWanted at 19853 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* additionalAssistanceDataReq at 19854 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* environmentCharacterisation at 19855 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* velocityRequested at 19856 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* gANSSPositioningMethods at 19857 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* gANSSTimingOfCellWanted at 19858 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* gANSSCarrierPhaseMeasurementRequested at 19860 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_ReportingQuantity_r7_specs_1 = {
	sizeof(struct UE_Positioning_ReportingQuantity_r7),
	offsetof(struct UE_Positioning_ReportingQuantity_r7, _asn_ctx),
	asn_MAP_UE_Positioning_ReportingQuantity_r7_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_UE_Positioning_ReportingQuantity_r7_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_Positioning_ReportingQuantity_r7 = {
	"UE-Positioning-ReportingQuantity-r7",
	"UE-Positioning-ReportingQuantity-r7",
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
	asn_DEF_UE_Positioning_ReportingQuantity_r7_tags_1,
	sizeof(asn_DEF_UE_Positioning_ReportingQuantity_r7_tags_1)
		/sizeof(asn_DEF_UE_Positioning_ReportingQuantity_r7_tags_1[0]), /* 1 */
	asn_DEF_UE_Positioning_ReportingQuantity_r7_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_Positioning_ReportingQuantity_r7_tags_1)
		/sizeof(asn_DEF_UE_Positioning_ReportingQuantity_r7_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_Positioning_ReportingQuantity_r7_1,
	11,	/* Elements count */
	&asn_SPC_UE_Positioning_ReportingQuantity_r7_specs_1	/* Additional specs */
};
