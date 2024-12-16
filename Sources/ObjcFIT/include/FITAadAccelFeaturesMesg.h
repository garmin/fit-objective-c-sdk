/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2024 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.158.0Release
// Tag = production/release/21.158.0-0-gc9428aa
/////////////////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>

#import "FITDate.h"
#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITAadAccelFeaturesMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// Time 
- (BOOL)isTimeValid;
- (FITUInt16)getTime;
- (void)setTime:(FITUInt16)time;
// EnergyTotal 
- (BOOL)isEnergyTotalValid;
- (FITUInt32)getEnergyTotal;
- (void)setEnergyTotal:(FITUInt32)energyTotal;
// ZeroCrossCnt 
- (BOOL)isZeroCrossCntValid;
- (FITUInt16)getZeroCrossCnt;
- (void)setZeroCrossCnt:(FITUInt16)zeroCrossCnt;
// Instance 
- (BOOL)isInstanceValid;
- (FITUInt8)getInstance;
- (void)setInstance:(FITUInt8)instance;
// TimeAboveThreshold 
- (BOOL)isTimeAboveThresholdValid;
- (FITFloat32)getTimeAboveThreshold;
- (void)setTimeAboveThreshold:(FITFloat32)timeAboveThreshold;

@end

NS_ASSUME_NONNULL_END
