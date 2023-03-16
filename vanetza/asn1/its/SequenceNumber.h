/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "asn1/TS102894-2v131-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R -D vanetza/asn1/its`
 */

#ifndef	_SequenceNumber_H_
#define	_SequenceNumber_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SequenceNumber */
typedef long	 SequenceNumber_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SequenceNumber_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SequenceNumber;
asn_struct_free_f SequenceNumber_free;
asn_struct_print_f SequenceNumber_print;
asn_constr_check_f SequenceNumber_constraint;
ber_type_decoder_f SequenceNumber_decode_ber;
der_type_encoder_f SequenceNumber_encode_der;
xer_type_decoder_f SequenceNumber_decode_xer;
xer_type_encoder_f SequenceNumber_encode_xer;
oer_type_decoder_f SequenceNumber_decode_oer;
oer_type_encoder_f SequenceNumber_encode_oer;
per_type_decoder_f SequenceNumber_decode_uper;
per_type_encoder_f SequenceNumber_encode_uper;
per_type_decoder_f SequenceNumber_decode_aper;
per_type_encoder_f SequenceNumber_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SequenceNumber_H_ */
#include "asn_internal.h"
