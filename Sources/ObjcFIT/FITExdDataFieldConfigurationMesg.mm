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


#import "FITMessage+Internal.h"

#import "FITString.h"

#import "FITExdDataFieldConfigurationMesg.h"

@implementation FITExdDataFieldConfigurationMesg

- (instancetype)init {
    self = [super initWithFitMesgIndex:fit::Profile::MESG_EXD_DATA_FIELD_CONFIGURATION];

    return self;
}

// ScreenIndex 
- (BOOL)isScreenIndexValid {
	const fit::Field* field = [super getField:0];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getScreenIndex {
    return ([super getFieldUINT8ValueForField:0 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setScreenIndex:(FITUInt8)screenIndex {
    [super setFieldUINT8ValueForField:0 andValue:(screenIndex) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// ConceptField 
- (BOOL)isConceptFieldValid {
	const fit::Field* field = [super getField:1];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITByte)getConceptField {
    return ([super getFieldBYTEValueForField:1 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setConceptField:(FITByte)conceptField {
    [super setFieldBYTEValueForField:1 andValue:(conceptField) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// FieldId 
- (BOOL)isFieldIdValid {
	const fit::Field* field = [super getField:2];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getFieldId {
    return ([super getFieldUINT8ValueForField:2 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setFieldId:(FITUInt8)fieldId {
    [super setFieldUINT8ValueForField:2 andValue:(fieldId) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// ConceptCount 
- (BOOL)isConceptCountValid {
	const fit::Field* field = [super getField:3];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getConceptCount {
    return ([super getFieldUINT8ValueForField:3 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setConceptCount:(FITUInt8)conceptCount {
    [super setFieldUINT8ValueForField:3 andValue:(conceptCount) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// DisplayType 
- (BOOL)isDisplayTypeValid {
	const fit::Field* field = [super getField:4];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITExdDisplayType)getDisplayType {
    return ([super getFieldENUMValueForField:4 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setDisplayType:(FITExdDisplayType)displayType {
    [super setFieldENUMValueForField:4 andValue:(displayType) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// Title 
- (uint8_t)numTitleValues {
    return [super getFieldNumValuesForField:5 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isTitleValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:5];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (NSString *)getTitleforIndex:(uint8_t)index {
    return ([super getFieldSTRINGValueForField:5 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setTitle:(NSString *)title forIndex:(uint8_t)index {
    [super setFieldSTRINGValueForField:5 andValue:(title) forIndex:index];
} 

@end
