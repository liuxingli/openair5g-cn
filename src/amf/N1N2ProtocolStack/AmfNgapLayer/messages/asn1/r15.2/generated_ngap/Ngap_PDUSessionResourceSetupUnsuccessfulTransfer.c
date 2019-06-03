/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#include "Ngap_PDUSessionResourceSetupUnsuccessfulTransfer.h"

#include "Ngap_CriticalityDiagnostics.h"
#include "Ngap_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_Ngap_PDUSessionResourceSetupUnsuccessfulTransfer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_PDUSessionResourceSetupUnsuccessfulTransfer, cause),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Ngap_Cause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cause"
		},
	{ ATF_POINTER, 2, offsetof(struct Ngap_PDUSessionResourceSetupUnsuccessfulTransfer, criticalityDiagnostics),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_CriticalityDiagnostics,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"criticalityDiagnostics"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_PDUSessionResourceSetupUnsuccessfulTransfer, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_175P118,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Ngap_PDUSessionResourceSetupUnsuccessfulTransfer_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_Ngap_PDUSessionResourceSetupUnsuccessfulTransfer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_PDUSessionResourceSetupUnsuccessfulTransfer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cause */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* criticalityDiagnostics */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_Ngap_PDUSessionResourceSetupUnsuccessfulTransfer_specs_1 = {
	sizeof(struct Ngap_PDUSessionResourceSetupUnsuccessfulTransfer),
	offsetof(struct Ngap_PDUSessionResourceSetupUnsuccessfulTransfer, _asn_ctx),
	asn_MAP_Ngap_PDUSessionResourceSetupUnsuccessfulTransfer_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_Ngap_PDUSessionResourceSetupUnsuccessfulTransfer_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_PDUSessionResourceSetupUnsuccessfulTransfer = {
	"PDUSessionResourceSetupUnsuccessfulTransfer",
	"PDUSessionResourceSetupUnsuccessfulTransfer",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_PDUSessionResourceSetupUnsuccessfulTransfer_tags_1,
	sizeof(asn_DEF_Ngap_PDUSessionResourceSetupUnsuccessfulTransfer_tags_1)
		/sizeof(asn_DEF_Ngap_PDUSessionResourceSetupUnsuccessfulTransfer_tags_1[0]), /* 1 */
	asn_DEF_Ngap_PDUSessionResourceSetupUnsuccessfulTransfer_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_PDUSessionResourceSetupUnsuccessfulTransfer_tags_1)
		/sizeof(asn_DEF_Ngap_PDUSessionResourceSetupUnsuccessfulTransfer_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Ngap_PDUSessionResourceSetupUnsuccessfulTransfer_1,
	3,	/* Elements count */
	&asn_SPC_Ngap_PDUSessionResourceSetupUnsuccessfulTransfer_specs_1	/* Additional specs */
};

