#ifndef _NGAP_AMF_UPLINK_NAS_TRANSPORT_H_
#define _NGAP_AMF_UPLINK_NAS_TRANSPORT_H_

typedef enum UPLINK_NAS_TRANSPORT_WITH_NAS_MSG_TYPE
{  
   UPLINK_NAS_TRANSPORT_WITH_AUTHENTICATION_RESPONSE = 0,
   UPLINK_NAS_TRANSPORT_WITH_SECUTIRY_MODE_COMPLETE,
   UPLINK_NAS_TRANSPORT_WITH_SECUTIRY_MODE_REJECT
   	
}UPLINK_NAS_TRANSPORT_WITH_NAS_MSG_TYPE_t;


#include "Ngap_NGAP-PDU.h"
Ngap_NGAP_PDU_t *make_NGAP_UplinkNasTransport();
#endif