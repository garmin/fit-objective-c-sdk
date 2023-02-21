/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2023 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.107Release
// Tag = production/release/21.107.00-0-geade151
/////////////////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>

#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITExdDataFieldConfigurationMesg : FITMessage
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
// ConceptCount 
- (BOOL)isConceptCountValid;
- (FITUInt8)getConceptCount;
- (void)setConceptCount:(FITUInt8)conceptCount;
// DisplayType 
- (BOOL)isDisplayTypeValid;
- (FITExdDisplayType)getDisplayType;
- (void)setDisplayType:(FITExdDisplayType)displayType;
// Title 
@property(readonly,nonatomic) uint8_t numTitleValues;
- (BOOL)isTitleValidforIndex : (uint8_t)index;
- (NSString *)getTitleforIndex : (uint8_t)index;
- (void)setTitle:(NSString *)title forIndex:(uint8_t)index;

@end

NS_ASSUME_NONNULL_END
