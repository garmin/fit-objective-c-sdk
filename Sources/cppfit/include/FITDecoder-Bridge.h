/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2025 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.171.0Release
// Tag = production/release/21.171.0-0-g57fed75
/////////////////////////////////////////////////////////////////////////////////////////////


#ifndef __FIT_DECODER_BRIDGE_H__
#define __FIT_DECODER_BRIDGE_H__

void OnMesgFromDecoder(void *decoder, void *mesg);
void OnMesgDefinitionFromDecoder(void *decoder, void *mesgDefinition);
void OnDeveloperFieldDefinitionFromDecoder(void *decoder, void *fieldDescriptionMesg, void *developerDataIdMesg);


#endif //__FIT_DECODER_BRIDGE_H__
