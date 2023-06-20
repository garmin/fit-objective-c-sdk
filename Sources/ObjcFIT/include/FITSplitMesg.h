/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2023 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.115Release
// Tag = production/release/21.115.00-0-gfe0a7f8
/////////////////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>

#import "FITDate.h"
#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITSplitMesg : FITMessage
- (id)init;
// SplitType 
- (BOOL)isSplitTypeValid;
- (FITSplitType)getSplitType;
- (void)setSplitType:(FITSplitType)splitType;
// TotalElapsedTime 
- (BOOL)isTotalElapsedTimeValid;
- (FITFloat32)getTotalElapsedTime;
- (void)setTotalElapsedTime:(FITFloat32)totalElapsedTime;
// TotalTimerTime 
- (BOOL)isTotalTimerTimeValid;
- (FITFloat32)getTotalTimerTime;
- (void)setTotalTimerTime:(FITFloat32)totalTimerTime;
// TotalDistance 
- (BOOL)isTotalDistanceValid;
- (FITFloat32)getTotalDistance;
- (void)setTotalDistance:(FITFloat32)totalDistance;
// StartTime 
- (BOOL)isStartTimeValid;
- (FITDate *)getStartTime;
- (void)setStartTime:(FITDate *)startTime;

@end

NS_ASSUME_NONNULL_END