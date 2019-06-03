/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#ifndef	_Ngap_UEPagingIdentity_H_
#define	_Ngap_UEPagingIdentity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_UEPagingIdentity_PR {
	Ngap_UEPagingIdentity_PR_NOTHING,	/* No components present */
	Ngap_UEPagingIdentity_PR_fiveG_S_TMSI,
	Ngap_UEPagingIdentity_PR_choice_Extensions
} Ngap_UEPagingIdentity_PR;

/* Forward declarations */
struct Ngap_FiveG_S_TMSI;
struct Ngap_ProtocolIE_SingleContainer;

/* Ngap_UEPagingIdentity */
typedef struct Ngap_UEPagingIdentity {
	Ngap_UEPagingIdentity_PR present;
	union Ngap_UEPagingIdentity_u {
		struct Ngap_FiveG_S_TMSI	*fiveG_S_TMSI;
		struct Ngap_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_UEPagingIdentity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_UEPagingIdentity;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_UEPagingIdentity_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_UEPagingIdentity_1[2];
extern asn_per_constraints_t asn_PER_type_Ngap_UEPagingIdentity_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_UEPagingIdentity_H_ */
#include <asn_internal.h>
