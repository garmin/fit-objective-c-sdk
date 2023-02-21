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


#import "FITSlaveDeviceMesg.h"

@implementation FITSlaveDeviceMesg

- (instancetype)init {
    self = [super initWithFitMesgIndex:fit::Profile::MESG_SLAVE_DEVICE];

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

    if(![super canField:1 supportSubField:(FITUInt16)FITSlaveDeviceMesgProductFieldFaveroProductSubField]) {
        return FIT_FALSE;
    }

    return field->IsValueValid(0, FITSlaveDeviceMesgProductFieldFaveroProductSubField) == FIT_TRUE ? TRUE : FALSE;
}

- (FITFaveroProduct)getFaveroProduct
{
    return ([super getFieldUINT16ValueForField:1 forIndex:0 andSubFieldIndex:FITSlaveDeviceMesgProductFieldFaveroProductSubField]);
}

- (void)setFaveroProduct:(FITFaveroProduct)faveroProduct
{
    [super setFieldUINT16ValueForField:1 andValue:(faveroProduct) forIndex:0 andSubFieldIndex:FITSlaveDeviceMesgProductFieldFaveroProductSubField];
} 
// GarminProduct - Product Field - Sub Field 
- (BOOL)isGarminProductValid
{
    const fit::Field* field = [super getField:1];
    if( FIT_NULL == field ) {
        return FIT_FALSE;
    }

    if(![super canField:1 supportSubField:(FITUInt16)FITSlaveDeviceMesgProductFieldGarminProductSubField]) {
        return FIT_FALSE;
    }

    return field->IsValueValid(0, FITSlaveDeviceMesgProductFieldGarminProductSubField) == FIT_TRUE ? TRUE : FALSE;
}

- (FITGarminProduct)getGarminProduct
{
    return ([super getFieldUINT16ValueForField:1 forIndex:0 andSubFieldIndex:FITSlaveDeviceMesgProductFieldGarminProductSubField]);
}

- (void)setGarminProduct:(FITGarminProduct)garminProduct
{
    [super setFieldUINT16ValueForField:1 andValue:(garminProduct) forIndex:0 andSubFieldIndex:FITSlaveDeviceMesgProductFieldGarminProductSubField];
} 

@end
