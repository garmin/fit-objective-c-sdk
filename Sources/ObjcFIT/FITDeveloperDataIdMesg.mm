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


#import "FITDeveloperDataIdMesg.h"

@implementation FITDeveloperDataIdMesg

- (instancetype)init {
    self = [super initWithFitMesgIndex:fit::Profile::MESG_DEVELOPER_DATA_ID];

    return self;
}

// DeveloperId 
- (uint8_t)numDeveloperIdValues {
    return [super getFieldNumValuesForField:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isDeveloperIdValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:0];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITByte)getDeveloperIdforIndex:(uint8_t)index {
    return ([super getFieldBYTEValueForField:0 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setDeveloperId:(FITByte)developerId forIndex:(uint8_t)index {
    [super setFieldBYTEValueForField:0 andValue:(developerId) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// ApplicationId 
- (uint8_t)numApplicationIdValues {
    return [super getFieldNumValuesForField:1 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isApplicationIdValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:1];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITByte)getApplicationIdforIndex:(uint8_t)index {
    return ([super getFieldBYTEValueForField:1 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setApplicationId:(FITByte)applicationId forIndex:(uint8_t)index {
    [super setFieldBYTEValueForField:1 andValue:(applicationId) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// ManufacturerId 
- (BOOL)isManufacturerIdValid {
	const fit::Field* field = [super getField:2];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITManufacturer)getManufacturerId {
    return ([super getFieldUINT16ValueForField:2 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setManufacturerId:(FITManufacturer)manufacturerId {
    [super setFieldUINT16ValueForField:2 andValue:(manufacturerId) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// DeveloperDataIndex 
- (BOOL)isDeveloperDataIndexValid {
	const fit::Field* field = [super getField:3];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getDeveloperDataIndex {
    return ([super getFieldUINT8ValueForField:3 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setDeveloperDataIndex:(FITUInt8)developerDataIndex {
    [super setFieldUINT8ValueForField:3 andValue:(developerDataIndex) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// ApplicationVersion 
- (BOOL)isApplicationVersionValid {
	const fit::Field* field = [super getField:4];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt32)getApplicationVersion {
    return ([super getFieldUINT32ValueForField:4 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setApplicationVersion:(FITUInt32)applicationVersion {
    [super setFieldUINT32ValueForField:4 andValue:(applicationVersion) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

@end
