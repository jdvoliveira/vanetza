/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "asn1/TS102894-2v131-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R -D vanetza/asn1/its`
 */

#ifndef	_SlowVehicleSubCauseCode_H_
#define	_SlowVehicleSubCauseCode_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SlowVehicleSubCauseCode {
	SlowVehicleSubCauseCode_unavailable	= 0,
	SlowVehicleSubCauseCode_maintenanceVehicle	= 1,
	SlowVehicleSubCauseCode_vehiclesSlowingToLookAtAccident	= 2,
	SlowVehicleSubCauseCode_abnormalLoad	= 3,
	SlowVehicleSubCauseCode_abnormalWideLoad	= 4,
	SlowVehicleSubCauseCode_convoy	= 5,
	SlowVehicleSubCauseCode_snowplough	= 6,
	SlowVehicleSubCauseCode_deicing	= 7,
	SlowVehicleSubCauseCode_saltingVehicles	= 8
} e_SlowVehicleSubCauseCode;

/* SlowVehicleSubCauseCode */
typedef long	 SlowVehicleSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SlowVehicleSubCauseCode;
asn_struct_free_f SlowVehicleSubCauseCode_free;
asn_struct_print_f SlowVehicleSubCauseCode_print;
asn_constr_check_f SlowVehicleSubCauseCode_constraint;
ber_type_decoder_f SlowVehicleSubCauseCode_decode_ber;
der_type_encoder_f SlowVehicleSubCauseCode_encode_der;
xer_type_decoder_f SlowVehicleSubCauseCode_decode_xer;
xer_type_encoder_f SlowVehicleSubCauseCode_encode_xer;
oer_type_decoder_f SlowVehicleSubCauseCode_decode_oer;
oer_type_encoder_f SlowVehicleSubCauseCode_encode_oer;
per_type_decoder_f SlowVehicleSubCauseCode_decode_uper;
per_type_encoder_f SlowVehicleSubCauseCode_encode_uper;
per_type_decoder_f SlowVehicleSubCauseCode_decode_aper;
per_type_encoder_f SlowVehicleSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SlowVehicleSubCauseCode_H_ */
#include "asn_internal.h"
