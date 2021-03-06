#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#include "assertions.h"
#include "ngap_common.h"
#include "ngap_ies_defs.h"
#include "ngap_amf_handlers.h"
#include "dynamic_memory_check.h"
#include "ngap_amf_decoder.h"
#include "common_defs.h"
#include "log.h"

static int
ngap_amf_decode_initiating (
    ngap_message * message,
    InitiatingMessage_t * initiating_p,
    MessagesIds *message_id){
    int ret = RETURNerror;
    MessageDef * message_p = NULL;
    char *message_string = NULL;
    size_t message_string_size;

    OAILOG_FUNC_IN (LOG_S1AP);
    
    DevAssert (initiating_p != NULL);
    message_string = calloc(10000,sizeof(char));
    ngap_string_total_size = 0;
    message->procedureCode = initiating_p->procedureCode;
    message->criticality = initiating_p->criticality;
    
    switch(initiating_p->procedureCode){
      case Ngap_ProcedureCode_id_UplinkNASTransport:{
          ret = ngap_decode_uplinknastransport_ies(&message->msg.uplinkNASTransport_IEs,&initiating_p->value);
          ngap_xer_print_uplinknastransport_(ngap_xer__print2fp,message_string,message);
          *message_id = NGAP_UPLINK_NAS_LOG;
        } 
        break;
      case Ngap_ProcedureCode_id_NGSetup:{
          ret = ngap_decode_ngsetuprequesties(&message->msg.ngSetupRequestIEs,&initiating_p->value);
          ngap_xer_print_ngsetuprequest(ngap_xer__print2fp,message_string,message);
          *message_id = NGAP_NG_SETUP_LOG;
        }
        break;
      case Ngap_ProcedureCode_id_InitialUEMessage:{
          ret = ngap_decode_initialuemessage_ies(&message->msg.initialUEMessage_IEs,&initiating_p->value);
          ngap_xer_print_initialuemessage_(ngap_xer__print2fp,message_string,message);
          *message_id = NGAP_INITIAL_UE_MESSAGE_LOG;
        }
        break;
      case Ngap_ProcedureCode_id_UEContextReleaseRequest:{
          ret = ngap_decode_uecontextreleaserequest_ies(&message->msg.ueContextReleaseRequest_IEs,&initiating_p->value);
          ngap_xer_print_uecontextreleaserequest_(ngap_xer__print2fp,message_string,message);
          *message_id = NGAP_UE_CONTEXT_RELEASE_REQ_LOG;
        }
        break;
      case Ngap_ProcedureCode_id_UERadioCapabilityInfoIndication:{
          ret = ngap_decode_ueradiocapabilityinfoindicationies(&message->msg.ueRadioCapabilityInfoIndicationIEs,&initiating_p->value);
          ngap_xer_print_ueradiocapabilityinfoindication(ngap_xer__print2fp,message_string,message);
          *message_id = NGAP_UE_RADIO_CAPABILITY_INFO_INDICATION_LOG; 
        }
        break;
      case Ngap_ProcedureCode_id_NASNonDeliveryIndication:{
          ret = ngap_decode_nasnondeliveryindication_ies(&message->msg.nasNonDeliveryIndication_IEs,&initiating_p->value);
          ngap_xer_print_nasnondeliveryindication_(ngap_xer__print2fp,message_string,message);
          *message_id = NGAP_NAS_NON_DELIVERY_INDICATION_LOG;
        }
        break;
      case Ngap_ProcedureCode_id_ErrorIndication:{
          OAILOG_ERROR (LOG_S1AP, "Error Indication is received. Ignoring it. Procedure code = %d\n", (int)initiating_p->procedureCode);
          ret = ngap_decode_errorindicationies(&message->msg.errorIndicationIEs,&initiating_p->value);
          if(ret!=-1){
            ret = free_errorindication(&message->msg.errorIndicationIEs);
          }
          OAILOG_FUNC_RETURN (LOG_S1AP, ret);
        }
        break;
      case Ngap_ProcedureCode_id_NGReset:{
          OAILOG_ERROR (LOG_S1AP, "RESET is received. Ignoring it. Procedure code = %d\n", (int)initiating_p->procedureCode);
          OAILOG_FUNC_RETURN (LOG_S1AP, ret);
        }
        break;
      default :{
          OAILOG_ERROR (LOG_S1AP, "Unknown procedure ID (%d) for initiating message\n", (int)initiating_p->procedureCode);
          OAILOG_FUNC_RETURN (LOG_S1AP, ret);
        }
        break;
    }

    //message_string_size = strlen(message_string); 
    //message_p = itti_alloc_new_message_sized(TASK_NGAP, *message_id, message_string_size + sizeof(IttiMsgText));
    
}

static int 
ngap_amf_decode_successful_outcome(
    ngap_message *message,
    SuccessfulOutcome_t * successfulOutcome_p,
    MessagesIds * message_id ){
    int ret = RETURNerror;
    MessageDef * message_p = NULL;
    char *message_string = NULL;
    size_t message_string_size;
                
    OAILOG_FUNC_IN (LOG_S1AP);
                
    DevAssert (successfulOutcome_p != NULL);
    message_string = calloc(10000,sizeof(char));
    ngap_string_total_size = 0;
    message->procedureCode = successfulOutcome_p->procedureCode;
    message->criticality = successfulOutcome_p->criticality;

    switch (successfulOutcome_p->procedureCode){
      case Ngap_ProcedureCode_id_InitialContextSetup:{
          ret = ngap_decode_initialcontextsetupresponseies(&message->msg.initialContextSetupResponseIEs,&successfulOutcome_p->value);
          ngap_xer_print_initialcontextsetupresponse(ngap_xer__print2fp,message_string,message);
          *message_id = NGAP_INITIAL_CONTEXT_SETUP_RSP_LOG;
        }
        break;
      case Ngap_ProcedureCode_id_UEContextRelease:{
          ret = ngap_decode_uecontextreleasecomplete_ies(&message->msg.ueContextReleaseComplete_IEs,&successfulOutcome_p->value);
          ngap_xer_print_uecontextreleasecomplete_(ngap_xer__print2fp,message_string,message);
          *message_id = NGAP_UE_CONTEXT_RELEASE_LOG;
        }
        break;
      default:{
          OAILOG_ERROR (LOG_S1AP, "Unknown procedure ID (%ld) for successfull outcome message\n", successfullOutcome_p->procedureCode);
        }
        break;
    }
}

static int 
ngap_amf_decode_unsuccessful_outcome(
    ngap_message *message,
    UnsuccessfulOutcome_t * unSuccessfulOutcome_p,
    MessagesIds * message_id ){
    int ret = RETURNerror;
    MessageDef * message_p = NULL;
    char *message_string = NULL;
    size_t message_string_size;

    OAILOG_FUNC_IN (LOG_S1AP);

    DevAssert (unSuccessfulOutcome_p != NULL);
    message_string = calloc(10000,sizeof(char));
    ngap_string_total_size = 0;
    message->procedureCode = unSuccessfulOutcome_p->procedureCode;
    message->criticality = unSuccessfulOutcome_p->criticality;

    switch (unSuccessfulOutcome_p->procedureCode) {
      case Ngap_ProcedureCode_id_InitialContextSetup:{
          ret = ngap_decode_initialcontextsetupfailureies(&message->msg.initialContextSetupFailureIEs,&unSuccessfulOutcome_p->value);
          ngap_xer_print_initialcontextsetupfailure(ngap_xer__print2fp,message_string,message);
          *message_id = NGAP_INITIAL_CONTEXT_SETUP_FAILURE_LOG;
        }
        break;
      default:{
          OAILOG_ERROR (LOG_S1AP, "Unknown procedure ID (%d) for unsuccessfull outcome message\n", (int)unSuccessfulOutcome_p->procedureCode);
        }
        break;
    }
}

int ngap_free_amf_decode_pdu(      
    ngap_message *message, MessagesIds message_id) {

    switch(message_id){
      case NGAP_UPLINK_NAS_LOG:
        return free_uplinknastransport_(&message->msg.uplinkNASTransport_IEs);
      default:
        DevAssert(false);
    }

} 


int ngap_amf_decode_pdu(
  ngap_message *message,
  const_bstring const raw,
  MessagesIds *message_id) {
  NGAP_PDU_t                              pdu = {(NGAP_PDU_PR_NOTHING)};
  NGAP_PDU_t                             *pdu_p = &pdu;
  asn_dec_rval_t                          dec_ret = {(RC_OK)};
  DevAssert (raw != NULL);
  memset ((void *)pdu_p, 0, sizeof (NGAP_PDU_t));
  dec_ret = uper_decode (NULL, &asn_DEF_NGAP_PDU, (void **)&pdu_p, bdata(raw), blength(raw), 0, 0);
        
  if (dec_ret.code != RC_OK) {
    OAILOG_ERROR (LOG_S1AP, "Failed to decode PDU\n");
    return -1;
  }
        
  message->direction = pdu_p->present;
      
  switch (pdu_p->present) {
    case NGAP_PDU_PR_initiatingMessage:
      return ngap_amf_decode_initiating (message, &pdu_p->choice.initiatingMessage, message_id);
      
    case NGAP_PDU_PR_successfulOutcome:
      return ngap_amf_decode_successful_outcome (message, &pdu_p->choice.successfulOutcome, message_id);

    case NGAP_PDU_PR_unsuccessfulOutcome:
      return ngap_amf_decode_unsuccessful_outcome (message, &pdu_p->choice.unsuccessfulOutcome, message_id);
        
    default:
      OAILOG_ERROR (LOG_S1AP, "Unknown message outcome (%d) or not implemented", (int)pdu_p->present);
      break;
  }
  ASN_STRUCT_FREE(asn_DEF_NGAP_PDU, pdu_p);

  return -1;

}

