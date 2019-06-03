/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#include "Ngap_N3IWF-ID.h"

#include "Ngap_ProtocolIE-SingleContainer.h"
static int
memb_Ngap_n3IWF_ID_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
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
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_Ngap_n3IWF_ID_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	16	/* (SIZE(16..16)) */};
static asn_per_constraints_t asn_PER_memb_Ngap_n3IWF_ID_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_Ngap_N3IWF_ID_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_Ngap_N3IWF_ID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_Ngap_N3IWF_ID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_N3IWF_ID, choice.n3IWF_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_Ngap_n3IWF_ID_constr_2, &asn_PER_memb_Ngap_n3IWF_ID_constr_2,  memb_Ngap_n3IWF_ID_constraint_1 },
		0, 0, /* No default value */
		"n3IWF-ID"
		},
	{ ATF_POINTER, 0, offsetof(struct Ngap_N3IWF_ID, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolIE_SingleContainer_127P11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_N3IWF_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n3IWF-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_Ngap_N3IWF_ID_specs_1 = {
	sizeof(struct Ngap_N3IWF_ID),
	offsetof(struct Ngap_N3IWF_ID, _asn_ctx),
	offsetof(struct Ngap_N3IWF_ID, present),
	sizeof(((struct Ngap_N3IWF_ID *)0)->present),
	asn_MAP_Ngap_N3IWF_ID_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_N3IWF_ID = {
	"N3IWF-ID",
	"N3IWF-ID",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_Ngap_N3IWF_ID_constr_1, &asn_PER_type_Ngap_N3IWF_ID_constr_1, CHOICE_constraint },
	asn_MBR_Ngap_N3IWF_ID_1,
	2,	/* Elements count */
	&asn_SPC_Ngap_N3IWF_ID_specs_1	/* Additional specs */
};

