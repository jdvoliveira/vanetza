/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MCM-PDU-Descriptions"
 * 	found in "asn1/EN-MCM.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R -D vanetza/asn1/its`
 */

#include "VehicleManoeuvreContainer.h"

static int
memb_mcmTrajectories_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 16UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_mcmTrajectories_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_mcmTrajectories_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_memb_mcmTrajectories_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_mcmTrajectories_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_mcmTrajectories_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_McmTrajectory,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_mcmTrajectories_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_mcmTrajectories_specs_3 = {
	sizeof(struct VehicleManoeuvreContainer__mcmTrajectories),
	offsetof(struct VehicleManoeuvreContainer__mcmTrajectories, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mcmTrajectories_3 = {
	"mcmTrajectories",
	"mcmTrajectories",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_mcmTrajectories_tags_3,
	sizeof(asn_DEF_mcmTrajectories_tags_3)
		/sizeof(asn_DEF_mcmTrajectories_tags_3[0]) - 1, /* 1 */
	asn_DEF_mcmTrajectories_tags_3,	/* Same as above */
	sizeof(asn_DEF_mcmTrajectories_tags_3)
		/sizeof(asn_DEF_mcmTrajectories_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_mcmTrajectories_constr_3,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mcmTrajectories_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_mcmTrajectories_3,
	1,	/* Single element */
	&asn_SPC_mcmTrajectories_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_VehicleManoeuvreContainer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleManoeuvreContainer, currentPoint),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_McmStartPoint,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"currentPoint"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VehicleManoeuvreContainer, mcmTrajectories),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_mcmTrajectories_3,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_mcmTrajectories_constr_3,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_mcmTrajectories_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_mcmTrajectories_constraint_1
		},
		0, 0, /* No default value */
		"mcmTrajectories"
		},
	{ ATF_POINTER, 1, offsetof(struct VehicleManoeuvreContainer, automationState),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_McmAutomationState,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"automationState"
		},
};
static const int asn_MAP_VehicleManoeuvreContainer_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_VehicleManoeuvreContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_VehicleManoeuvreContainer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* currentPoint */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mcmTrajectories */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* automationState */
};
asn_SEQUENCE_specifics_t asn_SPC_VehicleManoeuvreContainer_specs_1 = {
	sizeof(struct VehicleManoeuvreContainer),
	offsetof(struct VehicleManoeuvreContainer, _asn_ctx),
	asn_MAP_VehicleManoeuvreContainer_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_VehicleManoeuvreContainer_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_VehicleManoeuvreContainer = {
	"VehicleManoeuvreContainer",
	"VehicleManoeuvreContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_VehicleManoeuvreContainer_tags_1,
	sizeof(asn_DEF_VehicleManoeuvreContainer_tags_1)
		/sizeof(asn_DEF_VehicleManoeuvreContainer_tags_1[0]), /* 1 */
	asn_DEF_VehicleManoeuvreContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_VehicleManoeuvreContainer_tags_1)
		/sizeof(asn_DEF_VehicleManoeuvreContainer_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_VehicleManoeuvreContainer_1,
	3,	/* Elements count */
	&asn_SPC_VehicleManoeuvreContainer_specs_1	/* Additional specs */
};

