/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2024 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.158.0Release
// Tag = production/release/21.158.0-0-gc9428aa
/////////////////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>

#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITExdDataConceptConfigurationMesg : FITMessage
- (id)init;
// ScreenIndex 
- (BOOL)isScreenIndexValid;
- (FITUInt8)getScreenIndex;
- (void)setScreenIndex:(FITUInt8)screenIndex;
// ConceptField 
- (BOOL)isConceptFieldValid;
- (FITByte)getConceptField;
- (void)setConceptField:(FITByte)conceptField;
// FieldId 
- (BOOL)isFieldIdValid;
- (FITUInt8)getFieldId;
- (void)setFieldId:(FITUInt8)fieldId;
// ConceptIndex 
- (BOOL)isConceptIndexValid;
- (FITUInt8)getConceptIndex;
- (void)setConceptIndex:(FITUInt8)conceptIndex;
// DataPage 
- (BOOL)isDataPageValid;
- (FITUInt8)getDataPage;
- (void)setDataPage:(FITUInt8)dataPage;
// ConceptKey 
- (BOOL)isConceptKeyValid;
- (FITUInt8)getConceptKey;
- (void)setConceptKey:(FITUInt8)conceptKey;
// Scaling 
- (BOOL)isScalingValid;
- (FITUInt8)getScaling;
- (void)setScaling:(FITUInt8)scaling;
// DataUnits 
- (BOOL)isDataUnitsValid;
- (FITExdDataUnits)getDataUnits;
- (void)setDataUnits:(FITExdDataUnits)dataUnits;
// Qualifier 
- (BOOL)isQualifierValid;
- (FITExdQualifiers)getQualifier;
- (void)setQualifier:(FITExdQualifiers)qualifier;
// Descriptor 
- (BOOL)isDescriptorValid;
- (FITExdDescriptors)getDescriptor;
- (void)setDescriptor:(FITExdDescriptors)descriptor;
// IsSigned 
- (BOOL)isIsSignedValid;
- (FITBool)getIsSigned;
- (void)setIsSigned:(FITBool)isSigned;

@end

NS_ASSUME_NONNULL_END
