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


#import "FITScheduleMesg.h"

@implementation FITScheduleMesg

- (instancetype)init {
    self = [super initWithFitMesgIndex:fit::Profile::MESG_SCHEDULE];

    return self;
}

// Manufacturer 
- (BOOL)isManufacturerValid {
	const fit::Field* field = [super getField:0];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITManufacturer)getManufacturer {
    return ([super getFieldUINT16ValueForField:0 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setManufacturer:(FITManufacturer)manufacturer {
    [super setFieldUINT16ValueForField:0 andValue:(manufacturer) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// Product 
- (BOOL)isProductValid {
	const fit::Field* field = [super getField:1];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt16)getProduct {
    return ([super getFieldUINT16ValueForField:1 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setProduct:(FITUInt16)product {
    [super setFieldUINT16ValueForField:1 andValue:(product) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 
// Product - Sub Fields
// FaveroProduct - Product Field - Sub Field 
- (BOOL)isFaveroProductValid
{
    const fit::Field* field = [super getField:1];
    if( FIT_NULL == field ) {
        return FIT_FALSE;
    }

    if(![super canField:1 supportSubField:(FITUInt16)FITScheduleMesgProductFieldFaveroProductSubField]) {
        return FIT_FALSE;
    }

    return field->IsValueValid(0, FITScheduleMesgProductFieldFaveroProductSubField) == FIT_TRUE ? TRUE : FALSE;
}

- (FITFaveroProduct)getFaveroProduct
{
    return ([super getFieldUINT16ValueForField:1 forIndex:0 andSubFieldIndex:FITScheduleMesgProductFieldFaveroProductSubField]);
}

- (void)setFaveroProduct:(FITFaveroProduct)faveroProduct
{
    [super setFieldUINT16ValueForField:1 andValue:(faveroProduct) forIndex:0 andSubFieldIndex:FITScheduleMesgProductFieldFaveroProductSubField];
} 
// GarminProduct - Product Field - Sub Field 
- (BOOL)isGarminProductValid
{
    const fit::Field* field = [super getField:1];
    if( FIT_NULL == field ) {
        return FIT_FALSE;
    }

    if(![super canField:1 supportSubField:(FITUInt16)FITScheduleMesgProductFieldGarminProductSubField]) {
        return FIT_FALSE;
    }

    return field->IsValueValid(0, FITScheduleMesgProductFieldGarminProductSubField) == FIT_TRUE ? TRUE : FALSE;
}

- (FITGarminProduct)getGarminProduct
{
    return ([super getFieldUINT16ValueForField:1 forIndex:0 andSubFieldIndex:FITScheduleMesgProductFieldGarminProductSubField]);
}

- (void)setGarminProduct:(FITGarminProduct)garminProduct
{
    [super setFieldUINT16ValueForField:1 andValue:(garminProduct) forIndex:0 andSubFieldIndex:FITScheduleMesgProductFieldGarminProductSubField];
} 

// SerialNumber 
- (BOOL)isSerialNumberValid {
	const fit::Field* field = [super getField:2];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt32z)getSerialNumber {
    return ([super getFieldUINT32ZValueForField:2 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setSerialNumber:(FITUInt32z)serialNumber {
    [super setFieldUINT32ZValueForField:2 andValue:(serialNumber) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// TimeCreated 
- (BOOL)isTimeCreatedValid {
	const fit::Field* field = [super getField:3];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITDate *)getTimeCreated {
    return FITDateFromTimestamp([super getFieldUINT32ValueForField:3 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setTimeCreated:(FITDate *)timeCreated {
    [super setFieldUINT32ValueForField:3 andValue:TimestampFromFITDate(timeCreated) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// Completed 
- (BOOL)isCompletedValid {
	const fit::Field* field = [super getField:4];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getCompleted {
    return ([super getFieldENUMValueForField:4 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setCompleted:(FITBool)completed {
    [super setFieldENUMValueForField:4 andValue:(completed) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// Type 
- (BOOL)isTypeValid {
	const fit::Field* field = [super getField:5];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITSchedule)getType {
    return ([super getFieldENUMValueForField:5 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setType:(FITSchedule)type {
    [super setFieldENUMValueForField:5 andValue:(type) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// ScheduledTime 
- (BOOL)isScheduledTimeValid {
	const fit::Field* field = [super getField:6];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITLocalDateTime)getScheduledTime {
    return ([super getFieldUINT32ValueForField:6 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setScheduledTime:(FITLocalDateTime)scheduledTime {
    [super setFieldUINT32ValueForField:6 andValue:(scheduledTime) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

@end
