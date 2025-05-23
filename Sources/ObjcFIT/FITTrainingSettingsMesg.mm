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


#import "FITMessage+Internal.h"


#import "FITTrainingSettingsMesg.h"

@implementation FITTrainingSettingsMesg

- (instancetype)init {
    self = [super initWithFitMesgIndex:fit::Profile::MESG_TRAINING_SETTINGS];

    return self;
}

// TargetDistance 
- (BOOL)isTargetDistanceValid {
	const fit::Field* field = [super getField:31];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getTargetDistance {
    return ([super getFieldFLOAT32ValueForField:31 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setTargetDistance:(FITFloat32)targetDistance {
    [super setFieldFLOAT32ValueForField:31 andValue:(targetDistance) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// TargetSpeed 
- (BOOL)isTargetSpeedValid {
	const fit::Field* field = [super getField:32];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getTargetSpeed {
    return ([super getFieldFLOAT32ValueForField:32 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setTargetSpeed:(FITFloat32)targetSpeed {
    [super setFieldFLOAT32ValueForField:32 andValue:(targetSpeed) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// TargetTime 
- (BOOL)isTargetTimeValid {
	const fit::Field* field = [super getField:33];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt32)getTargetTime {
    return ([super getFieldUINT32ValueForField:33 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setTargetTime:(FITUInt32)targetTime {
    [super setFieldUINT32ValueForField:33 andValue:(targetTime) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// PreciseTargetSpeed 
- (BOOL)isPreciseTargetSpeedValid {
	const fit::Field* field = [super getField:153];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITFloat32)getPreciseTargetSpeed {
    return ([super getFieldFLOAT32ValueForField:153 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setPreciseTargetSpeed:(FITFloat32)preciseTargetSpeed {
    [super setFieldFLOAT32ValueForField:153 andValue:(preciseTargetSpeed) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

@end
