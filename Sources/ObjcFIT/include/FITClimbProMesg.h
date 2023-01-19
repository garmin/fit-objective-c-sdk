/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2023 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.101Release
// Tag = production/release/21.101.00-0-gceb92d5
/////////////////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>

#import "FITDate.h"
#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITClimbProMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// PositionLat 
- (BOOL)isPositionLatValid;
- (FITSInt32)getPositionLat;
- (void)setPositionLat:(FITSInt32)positionLat;
// PositionLong 
- (BOOL)isPositionLongValid;
- (FITSInt32)getPositionLong;
- (void)setPositionLong:(FITSInt32)positionLong;
// ClimbProEvent 
- (BOOL)isClimbProEventValid;
- (FITClimbProEvent)getClimbProEvent;
- (void)setClimbProEvent:(FITClimbProEvent)climbProEvent;
// ClimbNumber 
- (BOOL)isClimbNumberValid;
- (FITUInt16)getClimbNumber;
- (void)setClimbNumber:(FITUInt16)climbNumber;
// ClimbCategory 
- (BOOL)isClimbCategoryValid;
- (FITUInt8)getClimbCategory;
- (void)setClimbCategory:(FITUInt8)climbCategory;
// CurrentDist 
- (BOOL)isCurrentDistValid;
- (FITFloat32)getCurrentDist;
- (void)setCurrentDist:(FITFloat32)currentDist;

@end

NS_ASSUME_NONNULL_END
