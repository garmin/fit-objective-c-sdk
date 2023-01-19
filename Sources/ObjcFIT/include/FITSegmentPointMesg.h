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

#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITSegmentPointMesg : FITMessage
- (id)init;
// MessageIndex 
- (BOOL)isMessageIndexValid;
- (FITMessageIndex)getMessageIndex;
- (void)setMessageIndex:(FITMessageIndex)messageIndex;
// PositionLat 
- (BOOL)isPositionLatValid;
- (FITSInt32)getPositionLat;
- (void)setPositionLat:(FITSInt32)positionLat;
// PositionLong 
- (BOOL)isPositionLongValid;
- (FITSInt32)getPositionLong;
- (void)setPositionLong:(FITSInt32)positionLong;
// Distance 
- (BOOL)isDistanceValid;
- (FITFloat32)getDistance;
- (void)setDistance:(FITFloat32)distance;
// Altitude 
- (BOOL)isAltitudeValid;
- (FITFloat32)getAltitude;
- (void)setAltitude:(FITFloat32)altitude;
// LeaderTime 
@property(readonly,nonatomic) uint8_t numLeaderTimeValues;
- (BOOL)isLeaderTimeValidforIndex : (uint8_t)index;
- (FITFloat32)getLeaderTimeforIndex : (uint8_t)index;
- (void)setLeaderTime:(FITFloat32)leaderTime forIndex:(uint8_t)index;
// EnhancedAltitude 
- (BOOL)isEnhancedAltitudeValid;
- (FITFloat32)getEnhancedAltitude;
- (void)setEnhancedAltitude:(FITFloat32)enhancedAltitude;

@end

NS_ASSUME_NONNULL_END
