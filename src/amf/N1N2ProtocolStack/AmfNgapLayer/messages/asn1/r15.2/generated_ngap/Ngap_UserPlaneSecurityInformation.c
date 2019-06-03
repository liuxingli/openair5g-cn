/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#include "Ngap_UserPlaneSecurityInformation.h"

#include "Ngap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Ngap_UserPlaneSecurityInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_UserPlaneSecurityInformation, securityResult),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_SecurityResult,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"securityResult"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_UserPlaneSecurityInformation, securityIndication),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_SecurityIndication,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"securityIndication"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_UserPlaneSecurityInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_175P182,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Ngap_UserPlaneSecurityInformation_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_Ngap_UserPlaneSecurityInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_UserPlaneSecurityInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* securityResult */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* securityIndication */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_UserPlaneSecurityInformation_specs_1 = {
	sizeof(struct Ngap_UserPlaneSecurityInformation),
	offsetof(struct Ngap_UserPlaneSecurityInformation, _asn_ctx),
	asn_MAP_Ngap_UserPlaneSecurityInformation_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_Ngap_UserPlaneSecurityInformation_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_UserPlaneSecurityInformation = {
	"UserPlaneSecurityInformation",
	"UserPlaneSecurityInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_UserPlaneSecurityInformation_tags_1,
	sizeof(asn_DEF_Ngap_UserPlaneSecurityInformation_tags_1)
		/sizeof(asn_DEF_Ngap_UserPlaneSecurityInformation_tags_1[0]), /* 1 */
	asn_DEF_Ngap_UserPlaneSecurityInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_UserPlaneSecurityInformation_tags_1)
		/sizeof(asn_DEF_Ngap_UserPlaneSecurityInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Ngap_UserPlaneSecurityInformation_1,
	3,	/* Elements count */
	&asn_SPC_Ngap_UserPlaneSecurityInformation_specs_1	/* Additional specs */
};

