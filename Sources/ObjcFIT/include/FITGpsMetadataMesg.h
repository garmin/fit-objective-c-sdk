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

@interface FITGpsMetadataMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// TimestampMs 
- (BOOL)isTimestampMsValid;
- (FITUInt16)getTimestampMs;
- (void)setTimestampMs:(FITUInt16)timestampMs;
// PositionLat 
- (BOOL)isPositionLatValid;
- (FITSInt32)getPositionLat;
- (void)setPositionLat:(FITSInt32)positionLat;
// PositionLong 
- (BOOL)isPositionLongValid;
- (FITSInt32)getPositionLong;
- (void)setPositionLong:(FITSInt32)positionLong;
// EnhancedAltitude 
- (BOOL)isEnhancedAltitudeValid;
- (FITFloat32)getEnhancedAltitude;
- (void)setEnhancedAltitude:(FITFloat32)enhancedAltitude;
// EnhancedSpeed 
- (BOOL)isEnhancedSpeedValid;
- (FITFloat32)getEnhancedSpeed;
- (void)setEnhancedSpeed:(FITFloat32)enhancedSpeed;
// Heading 
- (BOOL)isHeadingValid;
- (FITFloat32)getHeading;
- (void)setHeading:(FITFloat32)heading;
// UtcTimestamp 
- (BOOL)isUtcTimestampValid;
- (FITDate *)getUtcTimestamp;
- (void)setUtcTimestamp:(FITDate *)utcTimestamp;
// Velocity 
@property(readonly,nonatomic) uint8_t numVelocityValues;
- (BOOL)isVelocityValidforIndex : (uint8_t)index;
- (FITFloat32)getVelocityforIndex : (uint8_t)index;
- (void)setVelocity:(FITFloat32)velocity forIndex:(uint8_t)index;

@end

NS_ASSUME_NONNULL_END
