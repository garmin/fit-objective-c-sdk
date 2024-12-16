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

@interface FITVideoClipMesg : FITMessage
- (id)init;
// ClipNumber 
- (BOOL)isClipNumberValid;
- (FITUInt16)getClipNumber;
- (void)setClipNumber:(FITUInt16)clipNumber;
// StartTimestamp 
- (BOOL)isStartTimestampValid;
- (FITDate *)getStartTimestamp;
- (void)setStartTimestamp:(FITDate *)startTimestamp;
// StartTimestampMs 
- (BOOL)isStartTimestampMsValid;
- (FITUInt16)getStartTimestampMs;
- (void)setStartTimestampMs:(FITUInt16)startTimestampMs;
// EndTimestamp 
- (BOOL)isEndTimestampValid;
- (FITDate *)getEndTimestamp;
- (void)setEndTimestamp:(FITDate *)endTimestamp;
// EndTimestampMs 
- (BOOL)isEndTimestampMsValid;
- (FITUInt16)getEndTimestampMs;
- (void)setEndTimestampMs:(FITUInt16)endTimestampMs;
// ClipStart 
- (BOOL)isClipStartValid;
- (FITUInt32)getClipStart;
- (void)setClipStart:(FITUInt32)clipStart;
// ClipEnd 
- (BOOL)isClipEndValid;
- (FITUInt32)getClipEnd;
- (void)setClipEnd:(FITUInt32)clipEnd;

@end

NS_ASSUME_NONNULL_END
