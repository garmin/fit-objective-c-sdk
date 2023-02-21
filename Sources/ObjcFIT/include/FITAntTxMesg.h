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


#import <Foundation/Foundation.h>

#import "FITDate.h"
#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITAntTxMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// FractionalTimestamp 
- (BOOL)isFractionalTimestampValid;
- (FITFloat32)getFractionalTimestamp;
- (void)setFractionalTimestamp:(FITFloat32)fractionalTimestamp;
// MesgId 
- (BOOL)isMesgIdValid;
- (FITByte)getMesgId;
- (void)setMesgId:(FITByte)mesgId;
// MesgData 
@property(readonly,nonatomic) uint8_t numMesgDataValues;
- (BOOL)isMesgDataValidforIndex : (uint8_t)index;
- (FITByte)getMesgDataforIndex : (uint8_t)index;
- (void)setMesgData:(FITByte)mesgData forIndex:(uint8_t)index;
// ChannelNumber 
- (BOOL)isChannelNumberValid;
- (FITUInt8)getChannelNumber;
- (void)setChannelNumber:(FITUInt8)channelNumber;
// Data 
@property(readonly,nonatomic) uint8_t numDataValues;
- (BOOL)isDataValidforIndex : (uint8_t)index;
- (FITByte)getDataforIndex : (uint8_t)index;
- (void)setData:(FITByte)data forIndex:(uint8_t)index;

@end

NS_ASSUME_NONNULL_END
