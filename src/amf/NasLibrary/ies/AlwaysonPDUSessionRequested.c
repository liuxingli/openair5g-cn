#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

#include "TLVEncoder.h"
#include "TLVDecoder.h"
#include "AlwaysonPDUSessionRequested.h"

int encode_alwayson_pdu_session_requested ( AlwaysonPDUSessionRequested alwaysonpdusessionrequested, uint8_t iei, uint8_t * buffer, uint32_t len  ) 
{
    uint32_t encoded = 0;
	uint8_t bitStream = 0;
	
    CHECK_PDU_POINTER_AND_LENGTH_ENCODER (buffer,ALWAYSON_PDU_SESSION_REQUESTED_MINIMUM_LENGTH , len);
   
 	if(iei > 0){
      bitStream |= (iei & 0xf0);
    }

	if(alwaysonpdusessionrequested.apsr_requested)
		bitStream |= 0x01;
	
    ENCODE_U8(buffer+encoded,bitStream,encoded);

    return encoded;
}

int decode_alwayson_pdu_session_requested ( AlwaysonPDUSessionRequested * alwaysonpdusessionrequested, uint8_t iei, uint8_t * buffer, uint32_t len  ) 
{
	int decoded=0;
	uint8_t bitStream = 0;




	DECODE_U8(buffer+decoded,bitStream,decoded);

	if(iei != bitStream&0xf0){
      return -1;
    }
	   
	if(iei > 0){
		bitStream = (bitStream & 0x01);
	}

	if(bitStream)
		alwaysonpdusessionrequested->apsr_requested = true;
	else
		alwaysonpdusessionrequested->apsr_requested = false;
	
    return decoded;
}

