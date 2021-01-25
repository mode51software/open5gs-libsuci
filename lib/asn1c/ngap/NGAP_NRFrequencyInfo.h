/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.4.0/38413-g40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_NRFrequencyInfo_H_
#define	_NGAP_NRFrequencyInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_NRARFCN.h"
#include "NGAP_NRFrequencyBand-List.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_NRFrequencyInfo */
typedef struct NGAP_NRFrequencyInfo {
	NGAP_NRARFCN_t	 nrARFCN;
	NGAP_NRFrequencyBand_List_t	 frequencyBand_List;
	struct NGAP_ProtocolExtensionContainer	*iE_Extension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_NRFrequencyInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_NRFrequencyInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_NRFrequencyInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_NRFrequencyInfo_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_NRFrequencyInfo_H_ */
#include <asn_internal.h>
