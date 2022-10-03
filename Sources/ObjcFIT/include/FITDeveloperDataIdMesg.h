/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2022 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.94Release
// Tag = production/akw/21.94.00-0-g0f668193
/////////////////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>

#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITDeveloperDataIdMesg : FITMessage
- (id)init;
// DeveloperId 
@property(readonly,nonatomic) uint8_t numDeveloperIdValues;
- (BOOL)isDeveloperIdValidforIndex : (uint8_t)index;
- (FITByte)getDeveloperIdforIndex : (uint8_t)index;
- (void)setDeveloperId:(FITByte)developerId forIndex:(uint8_t)index;
// ApplicationId 
@property(readonly,nonatomic) uint8_t numApplicationIdValues;
- (BOOL)isApplicationIdValidforIndex : (uint8_t)index;
- (FITByte)getApplicationIdforIndex : (uint8_t)index;
- (void)setApplicationId:(FITByte)applicationId forIndex:(uint8_t)index;
// ManufacturerId 
- (BOOL)isManufacturerIdValid;
- (FITManufacturer)getManufacturerId;
- (void)setManufacturerId:(FITManufacturer)manufacturerId;
// DeveloperDataIndex 
- (BOOL)isDeveloperDataIndexValid;
- (FITUInt8)getDeveloperDataIndex;
- (void)setDeveloperDataIndex:(FITUInt8)developerDataIndex;
// ApplicationVersion 
- (BOOL)isApplicationVersionValid;
- (FITUInt32)getApplicationVersion;
- (void)setApplicationVersion:(FITUInt32)applicationVersion;

@end

NS_ASSUME_NONNULL_END
