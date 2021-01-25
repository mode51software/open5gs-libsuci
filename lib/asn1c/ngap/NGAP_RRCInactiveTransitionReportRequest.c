/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.4.0/38413-g40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#include "NGAP_RRCInactiveTransitionReportRequest.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_NGAP_RRCInactiveTransitionReportRequest_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_NGAP_RRCInactiveTransitionReportRequest_value2enum_1[] = {
	{ 0,	34,	"subsequent-state-transition-report" },
	{ 1,	33,	"single-rrc-connected-state-report" },
	{ 2,	13,	"cancel-report" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_NGAP_RRCInactiveTransitionReportRequest_enum2value_1[] = {
	2,	/* cancel-report(2) */
	1,	/* single-rrc-connected-state-report(1) */
	0	/* subsequent-state-transition-report(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_NGAP_RRCInactiveTransitionReportRequest_specs_1 = {
	asn_MAP_NGAP_RRCInactiveTransitionReportRequest_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NGAP_RRCInactiveTransitionReportRequest_enum2value_1,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NGAP_RRCInactiveTransitionReportRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_RRCInactiveTransitionReportRequest = {
	"RRCInactiveTransitionReportRequest",
	"RRCInactiveTransitionReportRequest",
	&asn_OP_NativeEnumerated,
	asn_DEF_NGAP_RRCInactiveTransitionReportRequest_tags_1,
	sizeof(asn_DEF_NGAP_RRCInactiveTransitionReportRequest_tags_1)
		/sizeof(asn_DEF_NGAP_RRCInactiveTransitionReportRequest_tags_1[0]), /* 1 */
	asn_DEF_NGAP_RRCInactiveTransitionReportRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_RRCInactiveTransitionReportRequest_tags_1)
		/sizeof(asn_DEF_NGAP_RRCInactiveTransitionReportRequest_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NGAP_RRCInactiveTransitionReportRequest_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NGAP_RRCInactiveTransitionReportRequest_specs_1	/* Additional specs */
};

