/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2024 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.133.0Release
// Tag = production/release/21.133.0-0-g6002091
/////////////////////////////////////////////////////////////////////////////////////////////


#import "FITMessage+Internal.h"


#import "FITHsaSpo2DataMesg.h"

@implementation FITHsaSpo2DataMesg

- (instancetype)init {
    self = [super initWithFitMesgIndex:fit::Profile::MESG_HSA_SPO2_DATA];

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

// ProcessingInterval 
- (BOOL)isProcessingIntervalValid {
	const fit::Field* field = [super getField:0];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt16)getProcessingInterval {
    return ([super getFieldUINT16ValueForField:0 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setProcessingInterval:(FITUInt16)processingInterval {
    [super setFieldUINT16ValueForField:0 andValue:(processingInterval) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// ReadingSpo2 
- (uint8_t)numReadingSpo2Values {
    return [super getFieldNumValuesForField:1 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isReadingSpo2ValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:1];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getReadingSpo2forIndex:(uint8_t)index {
    return ([super getFieldUINT8ValueForField:1 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setReadingSpo2:(FITUInt8)readingSpo2 forIndex:(uint8_t)index {
    [super setFieldUINT8ValueForField:1 andValue:(readingSpo2) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// Confidence 
- (uint8_t)numConfidenceValues {
    return [super getFieldNumValuesForField:2 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isConfidenceValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:2];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getConfidenceforIndex:(uint8_t)index {
    return ([super getFieldUINT8ValueForField:2 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setConfidence:(FITUInt8)confidence forIndex:(uint8_t)index {
    [super setFieldUINT8ValueForField:2 andValue:(confidence) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

@end