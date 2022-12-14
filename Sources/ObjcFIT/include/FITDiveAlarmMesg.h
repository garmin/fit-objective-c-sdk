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

@interface FITDiveAlarmMesg : FITMessage
- (id)init;
// MessageIndex 
- (BOOL)isMessageIndexValid;
- (FITMessageIndex)getMessageIndex;
- (void)setMessageIndex:(FITMessageIndex)messageIndex;
// Depth 
- (BOOL)isDepthValid;
- (FITFloat32)getDepth;
- (void)setDepth:(FITFloat32)depth;
// Time 
- (BOOL)isTimeValid;
- (FITSInt32)getTime;
- (void)setTime:(FITSInt32)time;
// Enabled 
- (BOOL)isEnabledValid;
- (FITBool)getEnabled;
- (void)setEnabled:(FITBool)enabled;
// AlarmType 
- (BOOL)isAlarmTypeValid;
- (FITDiveAlarmType)getAlarmType;
- (void)setAlarmType:(FITDiveAlarmType)alarmType;
// Sound 
- (BOOL)isSoundValid;
- (FITTone)getSound;
- (void)setSound:(FITTone)sound;
// DiveTypes 
@property(readonly,nonatomic) uint8_t numDiveTypesValues;
- (BOOL)isDiveTypesValidforIndex : (uint8_t)index;
- (FITSubSport)getDiveTypesforIndex : (uint8_t)index;
- (void)setDiveTypes:(FITSubSport)diveTypes forIndex:(uint8_t)index;

@end

NS_ASSUME_NONNULL_END
