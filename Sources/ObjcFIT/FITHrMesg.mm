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


#import "FITHrMesg.h"

@implementation FITHrMesg

- (instancetype)init {
    self = [super initWithFitMesgIndex:fit::Profile::MESG_HR];

    return self;
}

// Timestamp 
- (BOOL)isTimestampValid {
	const fit::Field* field = [super getField:253];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITDate *)getTimestamp {
    return FITDateFromTimestamp([super getFieldUINT32ValueForField:253 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setTimestamp:(FITDate *)timestamp {
    [super setFieldUINT32ValueForField:253 andValue:TimestampFromFITDate(timestamp) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// FractionalTimestamp 
- (BOOL)isFractionalTimestampValid {
	const fit::Field* field = [super getField:0];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getFractionalTimestamp {
    return ([super getFieldFLOAT32ValueForField:0 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setFractionalTimestamp:(FITFloat32)fractionalTimestamp {
    [super setFieldFLOAT32ValueForField:0 andValue:(fractionalTimestamp) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// Time256 
- (BOOL)isTime256Valid {
	const fit::Field* field = [super getField:1];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getTime256 {
    return ([super getFieldFLOAT32ValueForField:1 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setTime256:(FITFloat32)time256 {
    [super setFieldFLOAT32ValueForField:1 andValue:(time256) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// FilteredBpm 
- (uint8_t)numFilteredBpmValues {
    return [super getFieldNumValuesForField:6 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isFilteredBpmValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:6];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getFilteredBpmforIndex:(uint8_t)index {
    return ([super getFieldUINT8ValueForField:6 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setFilteredBpm:(FITUInt8)filteredBpm forIndex:(uint8_t)index {
    [super setFieldUINT8ValueForField:6 andValue:(filteredBpm) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// EventTimestamp 
- (uint8_t)numEventTimestampValues {
    return [super getFieldNumValuesForField:9 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isEventTimestampValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:9];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getEventTimestampforIndex:(uint8_t)index {
    return ([super getFieldFLOAT32ValueForField:9 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setEventTimestamp:(FITFloat32)eventTimestamp forIndex:(uint8_t)index {
    [super setFieldFLOAT32ValueForField:9 andValue:(eventTimestamp) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// EventTimestamp12 
- (uint8_t)numEventTimestamp12Values {
    return [super getFieldNumValuesForField:10 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isEventTimestamp12ValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:10];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITByte)getEventTimestamp12forIndex:(uint8_t)index {
    return ([super getFieldBYTEValueForField:10 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setEventTimestamp12:(FITByte)eventTimestamp12 forIndex:(uint8_t)index {
    [super setFieldBYTEValueForField:10 andValue:(eventTimestamp12) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

@end
