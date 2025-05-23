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


#import "FITDeveloperFieldDef.h"
#import "FITDeveloperFieldDef+Internal.h"
#import "FITString.h"

@interface FITDeveloperField ()

@property(nonatomic, assign) fit::DeveloperField *fit_developer_field;
@property(nonatomic, strong) FITFieldDescriptionMesg* definition;
@property(nonatomic, strong) FITDeveloperDataIdMesg* developer;

@end

@implementation FITDeveloperField

- (id)initWithFieldDescriptionMesg: (FITFieldDescriptionMesg*) definition andDeveloperDataIdMesg: (FITDeveloperDataIdMesg*) developer {

    if (self = [super init]) {
        self.definition = definition;
        self.developer = developer;
        self.fit_developer_field = [FITDeveloperField createFieldDescriptionMesgFromDefinition:definition andDeveloperDataIdMesg:developer];
    }
    return self;
}

- (void)dealloc {
    delete _fit_developer_field;
    _fit_developer_field = nullptr;
}


- (fit::DeveloperField *)fit_developer_field {
    return _fit_developer_field;
}

- (void)addValue:(NSNumber*)value forIndex:(uint8_t)index {
    _fit_developer_field->AddValue([value doubleValue],index);
}

- (NSNumber*)getValueForIndex:(uint8_t)index {
    FITFloat64 rawValue = _fit_developer_field->GetRawValue(index);

    if(rawValue == FITFloat64Invalid) {
        return nil;
    }

    return [NSNumber numberWithDouble:rawValue];
}

- (void)addStringValue:(NSString*)value forIndex:(uint8_t)index {
    _fit_developer_field->SetSTRINGValue(FITStringFromString(value));
}

- (NSString*)getStringValueForIndex:(uint8_t)index {
    return StringFromFITString(_fit_developer_field->GetSTRINGValue());
}

+ (fit::DeveloperField *)createFieldDescriptionMesgFromDefinition:(FITFieldDescriptionMesg*) fitFieldDescriptionMesg andDeveloperDataIdMesg: (FITDeveloperDataIdMesg*) fitDeveloperDataIdMesg {
    fit::FieldDescriptionMesg definition;

    if(fitFieldDescriptionMesg.isDeveloperDataIndexValid) {
        definition.SetDeveloperDataIndex(fitFieldDescriptionMesg.getDeveloperDataIndex);
    }

    if([fitFieldDescriptionMesg isFieldDefinitionNumberValid]) {
        definition.SetFieldDefinitionNumber(fitFieldDescriptionMesg.getFieldDefinitionNumber);
    }

    if([fitFieldDescriptionMesg isFitBaseTypeIdValid]) {
        definition.SetFitBaseTypeId(fitFieldDescriptionMesg.getFitBaseTypeId);
    }

    if([fitFieldDescriptionMesg isNativeFieldNumValid]) {
        definition.SetNativeFieldNum(fitFieldDescriptionMesg.getNativeFieldNum);
    }

    if([fitFieldDescriptionMesg isNativeMesgNumValid]) {
        definition.SetNativeMesgNum(fitFieldDescriptionMesg.getNativeMesgNum);
    }

    uint8_t numFieldNameValues = fitFieldDescriptionMesg.numFieldNameValues;
    for(uint8_t i=0; i<numFieldNameValues; i++ ) {
        if([fitFieldDescriptionMesg isFieldNameValidforIndex:i]){
            definition.SetFieldName(i, FITStringFromString([fitFieldDescriptionMesg getFieldNameforIndex:i]));
        }
    }

    uint8_t numUnitsValues = fitFieldDescriptionMesg.numUnitsValues;
    for(uint8_t i=0; i<numUnitsValues; i++ ) {
        if([fitFieldDescriptionMesg isUnitsValidforIndex:i]){
            definition.SetUnits(i, FITStringFromString([fitFieldDescriptionMesg getUnitsforIndex:i]));
        }
    }

    fit::DeveloperDataIdMesg developer;

    uint8_t numDeveloperIdValues = fitDeveloperDataIdMesg.numDeveloperIdValues;
    for(uint8_t i=0; i<numDeveloperIdValues; i++ ) {
        if([fitDeveloperDataIdMesg isDeveloperIdValidforIndex:i]){
            developer.SetDeveloperId(i, [fitDeveloperDataIdMesg getDeveloperIdforIndex:i]);
        }
    }

    uint8_t numApplicationIdValues = fitDeveloperDataIdMesg.numApplicationIdValues;
    for(uint8_t i=0; i<numApplicationIdValues; i++ ) {
        if([fitDeveloperDataIdMesg isApplicationIdValidforIndex:i]){
            developer.SetApplicationId(i, [fitDeveloperDataIdMesg getApplicationIdforIndex:i]);
        }
    }

    if(fitDeveloperDataIdMesg.isManufacturerIdValid) {
        developer.SetManufacturerId(fitDeveloperDataIdMesg.getManufacturerId);
    }

    if(fitDeveloperDataIdMesg.isDeveloperDataIndexValid) {
        developer.SetDeveloperDataIndex(fitDeveloperDataIdMesg.getDeveloperDataIndex);
    }

    if(fitDeveloperDataIdMesg.isApplicationVersionValid) {
        developer.SetApplicationVersion(fitDeveloperDataIdMesg.getApplicationVersion);
    }

    fit::DeveloperField *developerField = new fit::DeveloperField(definition,developer);

    return developerField;
}

@end
