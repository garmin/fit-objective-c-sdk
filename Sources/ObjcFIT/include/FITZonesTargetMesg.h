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

@interface FITZonesTargetMesg : FITMessage
- (id)init;
// MaxHeartRate 
- (BOOL)isMaxHeartRateValid;
- (FITUInt8)getMaxHeartRate;
- (void)setMaxHeartRate:(FITUInt8)maxHeartRate;
// ThresholdHeartRate 
- (BOOL)isThresholdHeartRateValid;
- (FITUInt8)getThresholdHeartRate;
- (void)setThresholdHeartRate:(FITUInt8)thresholdHeartRate;
// FunctionalThresholdPower 
- (BOOL)isFunctionalThresholdPowerValid;
- (FITUInt16)getFunctionalThresholdPower;
- (void)setFunctionalThresholdPower:(FITUInt16)functionalThresholdPower;
// HrCalcType 
- (BOOL)isHrCalcTypeValid;
- (FITHrZoneCalc)getHrCalcType;
- (void)setHrCalcType:(FITHrZoneCalc)hrCalcType;
// PwrCalcType 
- (BOOL)isPwrCalcTypeValid;
- (FITPwrZoneCalc)getPwrCalcType;
- (void)setPwrCalcType:(FITPwrZoneCalc)pwrCalcType;

@end

NS_ASSUME_NONNULL_END