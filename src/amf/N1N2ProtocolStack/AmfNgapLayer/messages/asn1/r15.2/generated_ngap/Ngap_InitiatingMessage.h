/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Descriptions"
 * 	found in "asn.1/Elementary Procedure Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#ifndef	_Ngap_InitiatingMessage_H_
#define	_Ngap_InitiatingMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_ProcedureCode.h"
#include "Ngap_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "Ngap_AMFConfigurationUpdate.h"
#include "Ngap_AMFConfigurationUpdateAcknowledge.h"
#include "Ngap_AMFConfigurationUpdateFailure.h"
#include "Ngap_HandoverCancel.h"
#include "Ngap_HandoverCancelAcknowledge.h"
#include "Ngap_HandoverRequired.h"
#include "Ngap_HandoverCommand.h"
#include "Ngap_HandoverPreparationFailure.h"
#include "Ngap_HandoverRequest.h"
#include "Ngap_HandoverRequestAcknowledge.h"
#include "Ngap_HandoverFailure.h"
#include "Ngap_InitialContextSetupRequest.h"
#include "Ngap_InitialContextSetupResponse.h"
#include "Ngap_InitialContextSetupFailure.h"
#include "Ngap_NGReset.h"
#include "Ngap_NGResetAcknowledge.h"
#include "Ngap_NGSetupRequest.h"
#include "Ngap_NGSetupResponse.h"
#include "Ngap_NGSetupFailure.h"
#include "Ngap_PathSwitchRequest.h"
#include "Ngap_PathSwitchRequestAcknowledge.h"
#include "Ngap_PathSwitchRequestFailure.h"
#include "Ngap_PDUSessionResourceModifyRequest.h"
#include "Ngap_PDUSessionResourceModifyResponse.h"
#include "Ngap_PDUSessionResourceModifyIndication.h"
#include "Ngap_PDUSessionResourceModifyConfirm.h"
#include "Ngap_PDUSessionResourceReleaseCommand.h"
#include "Ngap_PDUSessionResourceReleaseResponse.h"
#include "Ngap_PDUSessionResourceSetupRequest.h"
#include "Ngap_PDUSessionResourceSetupResponse.h"
#include "Ngap_PWSCancelRequest.h"
#include "Ngap_PWSCancelResponse.h"
#include "Ngap_RANConfigurationUpdate.h"
#include "Ngap_RANConfigurationUpdateAcknowledge.h"
#include "Ngap_RANConfigurationUpdateFailure.h"
#include "Ngap_UEContextModificationRequest.h"
#include "Ngap_UEContextModificationResponse.h"
#include "Ngap_UEContextModificationFailure.h"
#include "Ngap_UEContextReleaseCommand.h"
#include "Ngap_UEContextReleaseComplete.h"
#include "Ngap_UERadioCapabilityCheckRequest.h"
#include "Ngap_UERadioCapabilityCheckResponse.h"
#include "Ngap_WriteReplaceWarningRequest.h"
#include "Ngap_WriteReplaceWarningResponse.h"
#include "Ngap_AMFStatusIndication.h"
#include "Ngap_CellTrafficTrace.h"
#include "Ngap_DeactivateTrace.h"
#include "Ngap_DownlinkNASTransport.h"
#include "Ngap_DownlinkNonUEAssociatedNRPPaTransport.h"
#include "Ngap_DownlinkRANConfigurationTransfer.h"
#include "Ngap_DownlinkRANStatusTransfer.h"
#include "Ngap_DownlinkUEAssociatedNRPPaTransport.h"
#include "Ngap_ErrorIndication.h"
#include "Ngap_HandoverNotify.h"
#include "Ngap_InitialUEMessage.h"
#include "Ngap_LocationReport.h"
#include "Ngap_LocationReportingControl.h"
#include "Ngap_LocationReportingFailureIndication.h"
#include "Ngap_NASNonDeliveryIndication.h"
#include "Ngap_OverloadStart.h"
#include "Ngap_OverloadStop.h"
#include "Ngap_Paging.h"
#include "Ngap_PDUSessionResourceNotify.h"
#include "Ngap_PrivateMessage.h"
#include "Ngap_PWSFailureIndication.h"
#include "Ngap_PWSRestartIndication.h"
#include "Ngap_RerouteNASRequest.h"
#include "Ngap_RRCInactiveTransitionReport.h"
#include "Ngap_TraceFailureIndication.h"
#include "Ngap_TraceStart.h"
#include "Ngap_UEContextReleaseRequest.h"
#include "Ngap_UERadioCapabilityInfoIndication.h"
#include "Ngap_UETNLABindingReleaseRequest.h"
#include "Ngap_UplinkNASTransport.h"
#include "Ngap_UplinkNonUEAssociatedNRPPaTransport.h"
#include "Ngap_UplinkRANConfigurationTransfer.h"
#include "Ngap_UplinkRANStatusTransfer.h"
#include "Ngap_UplinkUEAssociatedNRPPaTransport.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_InitiatingMessage__value_PR {
	Ngap_InitiatingMessage__value_PR_NOTHING,	/* No components present */
	Ngap_InitiatingMessage__value_PR_AMFConfigurationUpdate,
	Ngap_InitiatingMessage__value_PR_HandoverCancel,
	Ngap_InitiatingMessage__value_PR_HandoverRequired,
	Ngap_InitiatingMessage__value_PR_HandoverRequest,
	Ngap_InitiatingMessage__value_PR_InitialContextSetupRequest,
	Ngap_InitiatingMessage__value_PR_NGReset,
	Ngap_InitiatingMessage__value_PR_NGSetupRequest,
	Ngap_InitiatingMessage__value_PR_PathSwitchRequest,
	Ngap_InitiatingMessage__value_PR_PDUSessionResourceModifyRequest,
	Ngap_InitiatingMessage__value_PR_PDUSessionResourceModifyIndication,
	Ngap_InitiatingMessage__value_PR_PDUSessionResourceReleaseCommand,
	Ngap_InitiatingMessage__value_PR_PDUSessionResourceSetupRequest,
	Ngap_InitiatingMessage__value_PR_PWSCancelRequest,
	Ngap_InitiatingMessage__value_PR_RANConfigurationUpdate,
	Ngap_InitiatingMessage__value_PR_UEContextModificationRequest,
	Ngap_InitiatingMessage__value_PR_UEContextReleaseCommand,
	Ngap_InitiatingMessage__value_PR_UERadioCapabilityCheckRequest,
	Ngap_InitiatingMessage__value_PR_WriteReplaceWarningRequest,
	Ngap_InitiatingMessage__value_PR_AMFStatusIndication,
	Ngap_InitiatingMessage__value_PR_CellTrafficTrace,
	Ngap_InitiatingMessage__value_PR_DeactivateTrace,
	Ngap_InitiatingMessage__value_PR_DownlinkNASTransport,
	Ngap_InitiatingMessage__value_PR_DownlinkNonUEAssociatedNRPPaTransport,
	Ngap_InitiatingMessage__value_PR_DownlinkRANConfigurationTransfer,
	Ngap_InitiatingMessage__value_PR_DownlinkRANStatusTransfer,
	Ngap_InitiatingMessage__value_PR_DownlinkUEAssociatedNRPPaTransport,
	Ngap_InitiatingMessage__value_PR_ErrorIndication,
	Ngap_InitiatingMessage__value_PR_HandoverNotify,
	Ngap_InitiatingMessage__value_PR_InitialUEMessage,
	Ngap_InitiatingMessage__value_PR_LocationReport,
	Ngap_InitiatingMessage__value_PR_LocationReportingControl,
	Ngap_InitiatingMessage__value_PR_LocationReportingFailureIndication,
	Ngap_InitiatingMessage__value_PR_NASNonDeliveryIndication,
	Ngap_InitiatingMessage__value_PR_OverloadStart,
	Ngap_InitiatingMessage__value_PR_OverloadStop,
	Ngap_InitiatingMessage__value_PR_Paging,
	Ngap_InitiatingMessage__value_PR_PDUSessionResourceNotify,
	Ngap_InitiatingMessage__value_PR_PrivateMessage,
	Ngap_InitiatingMessage__value_PR_PWSFailureIndication,
	Ngap_InitiatingMessage__value_PR_PWSRestartIndication,
	Ngap_InitiatingMessage__value_PR_RerouteNASRequest,
	Ngap_InitiatingMessage__value_PR_RRCInactiveTransitionReport,
	Ngap_InitiatingMessage__value_PR_TraceFailureIndication,
	Ngap_InitiatingMessage__value_PR_TraceStart,
	Ngap_InitiatingMessage__value_PR_UEContextReleaseRequest,
	Ngap_InitiatingMessage__value_PR_UERadioCapabilityInfoIndication,
	Ngap_InitiatingMessage__value_PR_UETNLABindingReleaseRequest,
	Ngap_InitiatingMessage__value_PR_UplinkNASTransport,
	Ngap_InitiatingMessage__value_PR_UplinkNonUEAssociatedNRPPaTransport,
	Ngap_InitiatingMessage__value_PR_UplinkRANConfigurationTransfer,
	Ngap_InitiatingMessage__value_PR_UplinkRANStatusTransfer,
	Ngap_InitiatingMessage__value_PR_UplinkUEAssociatedNRPPaTransport
} Ngap_InitiatingMessage__value_PR;

/* Ngap_InitiatingMessage */
typedef struct Ngap_InitiatingMessage {
	Ngap_ProcedureCode_t	 procedureCode;
	Ngap_Criticality_t	 criticality;
	struct Ngap_InitiatingMessage__value {
		Ngap_InitiatingMessage__value_PR present;
		union Ngap_InitiatingMessage__Ngap_value_u {
			Ngap_AMFConfigurationUpdate_t	 AMFConfigurationUpdate;
			Ngap_HandoverCancel_t	 HandoverCancel;
			Ngap_HandoverRequired_t	 HandoverRequired;
			Ngap_HandoverRequest_t	 HandoverRequest;
			Ngap_InitialContextSetupRequest_t	 InitialContextSetupRequest;
			Ngap_NGReset_t	 NGReset;
			Ngap_NGSetupRequest_t	 NGSetupRequest;
			Ngap_NGSetupFailure_t	 NGSetupFailure;
			Ngap_PathSwitchRequest_t	 PathSwitchRequest;
			Ngap_PDUSessionResourceModifyRequest_t	 PDUSessionResourceModifyRequest;
			Ngap_PDUSessionResourceModifyIndication_t	 PDUSessionResourceModifyIndication;
			Ngap_PDUSessionResourceReleaseCommand_t	 PDUSessionResourceReleaseCommand;
			Ngap_PDUSessionResourceSetupRequest_t	 PDUSessionResourceSetupRequest;
			Ngap_PWSCancelRequest_t	 PWSCancelRequest;
			Ngap_RANConfigurationUpdate_t	 RANConfigurationUpdate;
			Ngap_UEContextModificationRequest_t	 UEContextModificationRequest;
			Ngap_UEContextReleaseCommand_t	 UEContextReleaseCommand;
			Ngap_UERadioCapabilityCheckRequest_t	 UERadioCapabilityCheckRequest;
			Ngap_WriteReplaceWarningRequest_t	 WriteReplaceWarningRequest;
			Ngap_AMFStatusIndication_t	 AMFStatusIndication;
			Ngap_CellTrafficTrace_t	 CellTrafficTrace;
			Ngap_DeactivateTrace_t	 DeactivateTrace;
			Ngap_DownlinkNASTransport_t	 DownlinkNASTransport;
			Ngap_DownlinkNonUEAssociatedNRPPaTransport_t	 DownlinkNonUEAssociatedNRPPaTransport;
			Ngap_DownlinkRANConfigurationTransfer_t	 DownlinkRANConfigurationTransfer;
			Ngap_DownlinkRANStatusTransfer_t	 DownlinkRANStatusTransfer;
			Ngap_DownlinkUEAssociatedNRPPaTransport_t	 DownlinkUEAssociatedNRPPaTransport;
			Ngap_ErrorIndication_t	 ErrorIndication;
			Ngap_HandoverNotify_t	 HandoverNotify;
			Ngap_InitialUEMessage_t	 InitialUEMessage;
			Ngap_LocationReport_t	 LocationReport;
			Ngap_LocationReportingControl_t	 LocationReportingControl;
			Ngap_LocationReportingFailureIndication_t	 LocationReportingFailureIndication;
			Ngap_NASNonDeliveryIndication_t	 NASNonDeliveryIndication;
			Ngap_OverloadStart_t	 OverloadStart;
			Ngap_OverloadStop_t	 OverloadStop;
			Ngap_Paging_t	 Paging;
			Ngap_PDUSessionResourceNotify_t	 PDUSessionResourceNotify;
			Ngap_PrivateMessage_t	 PrivateMessage;
			Ngap_PWSFailureIndication_t	 PWSFailureIndication;
			Ngap_PWSRestartIndication_t	 PWSRestartIndication;
			Ngap_RerouteNASRequest_t	 RerouteNASRequest;
			Ngap_RRCInactiveTransitionReport_t	 RRCInactiveTransitionReport;
			Ngap_TraceFailureIndication_t	 TraceFailureIndication;
			Ngap_TraceStart_t	 TraceStart;
			Ngap_UEContextReleaseRequest_t	 UEContextReleaseRequest;
			Ngap_UERadioCapabilityInfoIndication_t	 UERadioCapabilityInfoIndication;
			Ngap_UETNLABindingReleaseRequest_t	 UETNLABindingReleaseRequest;
			Ngap_UplinkNASTransport_t	 UplinkNASTransport;
			Ngap_UplinkNonUEAssociatedNRPPaTransport_t	 UplinkNonUEAssociatedNRPPaTransport;
			Ngap_UplinkRANConfigurationTransfer_t	 UplinkRANConfigurationTransfer;
			Ngap_UplinkRANStatusTransfer_t	 UplinkRANStatusTransfer;
			Ngap_UplinkUEAssociatedNRPPaTransport_t	 UplinkUEAssociatedNRPPaTransport;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_InitiatingMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_InitiatingMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_InitiatingMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_InitiatingMessage_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_InitiatingMessage_H_ */
#include <asn_internal.h>