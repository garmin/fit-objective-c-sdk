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


#import <Foundation/Foundation.h>

#import "FITDate.h"
#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITSkinTempOvernightMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// LocalTimestamp 
- (BOOL)isLocalTimestampValid;
- (FITLocalDateTime)getLocalTimestamp;
- (void)setLocalTimestamp:(FITLocalDateTime)localTimestamp;
// AverageDeviation 
- (BOOL)isAverageDeviationValid;
- (FITFloat32)getAverageDeviation;
- (void)setAverageDeviation:(FITFloat32)averageDeviation;
// Average7DayDeviation 
- (BOOL)isAverage7DayDeviationValid;
- (FITFloat32)getAverage7DayDeviation;
- (void)setAverage7DayDeviation:(FITFloat32)average7DayDeviation;
// NightlyValue 
- (BOOL)isNightlyValueValid;
- (FITFloat32)getNightlyValue;
- (void)setNightlyValue:(FITFloat32)nightlyValue;

@end

NS_ASSUME_NONNULL_END
