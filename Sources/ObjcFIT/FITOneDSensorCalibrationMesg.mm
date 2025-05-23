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


#import "FITOneDSensorCalibrationMesg.h"

@implementation FITOneDSensorCalibrationMesg

- (instancetype)init {
    self = [super initWithFitMesgIndex:fit::Profile::MESG_ONE_D_SENSOR_CALIBRATION];

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

// SensorType 
- (BOOL)isSensorTypeValid {
	const fit::Field* field = [super getField:0];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITSensorType)getSensorType {
    return ([super getFieldENUMValueForField:0 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setSensorType:(FITSensorType)sensorType {
    [super setFieldENUMValueForField:0 andValue:(sensorType) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// CalibrationFactor 
- (BOOL)isCalibrationFactorValid {
	const fit::Field* field = [super getField:1];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt32)getCalibrationFactor {
    return ([super getFieldUINT32ValueForField:1 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setCalibrationFactor:(FITUInt32)calibrationFactor {
    [super setFieldUINT32ValueForField:1 andValue:(calibrationFactor) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 
// CalibrationFactor - Sub Fields
// BaroCalFactor - CalibrationFactor Field - Sub Field 
- (BOOL)isBaroCalFactorValid
{
    const fit::Field* field = [super getField:1];
    if( FIT_NULL == field ) {
        return FIT_FALSE;
    }

    if(![super canField:1 supportSubField:(FITUInt16)FITOneDSensorCalibrationMesgCalibrationFactorFieldBaroCalFactorSubField]) {
        return FIT_FALSE;
    }

    return field->IsValueValid(0, FITOneDSensorCalibrationMesgCalibrationFactorFieldBaroCalFactorSubField) == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt32)getBaroCalFactor
{
    return ([super getFieldUINT32ValueForField:1 forIndex:0 andSubFieldIndex:FITOneDSensorCalibrationMesgCalibrationFactorFieldBaroCalFactorSubField]);
}

- (void)setBaroCalFactor:(FITUInt32)baroCalFactor
{
    [super setFieldUINT32ValueForField:1 andValue:(baroCalFactor) forIndex:0 andSubFieldIndex:FITOneDSensorCalibrationMesgCalibrationFactorFieldBaroCalFactorSubField];
} 

// CalibrationDivisor 
- (BOOL)isCalibrationDivisorValid {
	const fit::Field* field = [super getField:2];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt32)getCalibrationDivisor {
    return ([super getFieldUINT32ValueForField:2 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setCalibrationDivisor:(FITUInt32)calibrationDivisor {
    [super setFieldUINT32ValueForField:2 andValue:(calibrationDivisor) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// LevelShift 
- (BOOL)isLevelShiftValid {
	const fit::Field* field = [super getField:3];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt32)getLevelShift {
    return ([super getFieldUINT32ValueForField:3 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setLevelShift:(FITUInt32)levelShift {
    [super setFieldUINT32ValueForField:3 andValue:(levelShift) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// OffsetCal 
- (BOOL)isOffsetCalValid {
	const fit::Field* field = [super getField:4];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITSInt32)getOffsetCal {
    return ([super getFieldSINT32ValueForField:4 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setOffsetCal:(FITSInt32)offsetCal {
    [super setFieldSINT32ValueForField:4 andValue:(offsetCal) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

@end
