/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "asn1/TS102894-2v131-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R -D vanetza/asn1/its`
 */

#ifndef	_PtActivation_H_
#define	_PtActivation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PtActivationType.h"
#include "PtActivationData.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PtActivation */
typedef struct PtActivation {
	PtActivationType_t	 ptActivationType;
	PtActivationData_t	 ptActivationData;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PtActivation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PtActivation;

#ifdef __cplusplus
}
#endif

#endif	/* _PtActivation_H_ */
#include "asn_internal.h"
