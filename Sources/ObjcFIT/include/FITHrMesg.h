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

@interface FITHrMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// FractionalTimestamp 
- (BOOL)isFractionalTimestampValid;
- (FITFloat32)getFractionalTimestamp;
- (void)setFractionalTimestamp:(FITFloat32)fractionalTimestamp;
// Time256 
- (BOOL)isTime256Valid;
- (FITFloat32)getTime256;
- (void)setTime256:(FITFloat32)time256;
// FilteredBpm 
@property(readonly,nonatomic) uint8_t numFilteredBpmValues;
- (BOOL)isFilteredBpmValidforIndex : (uint8_t)index;
- (FITUInt8)getFilteredBpmforIndex : (uint8_t)index;
- (void)setFilteredBpm:(FITUInt8)filteredBpm forIndex:(uint8_t)index;
// EventTimestamp 
@property(readonly,nonatomic) uint8_t numEventTimestampValues;
- (BOOL)isEventTimestampValidforIndex : (uint8_t)index;
- (FITFloat32)getEventTimestampforIndex : (uint8_t)index;
- (void)setEventTimestamp:(FITFloat32)eventTimestamp forIndex:(uint8_t)index;
// EventTimestamp12 
@property(readonly,nonatomic) uint8_t numEventTimestamp12Values;
- (BOOL)isEventTimestamp12ValidforIndex : (uint8_t)index;
- (FITByte)getEventTimestamp12forIndex : (uint8_t)index;
- (void)setEventTimestamp12:(FITByte)eventTimestamp12 forIndex:(uint8_t)index;

@end

NS_ASSUME_NONNULL_END
