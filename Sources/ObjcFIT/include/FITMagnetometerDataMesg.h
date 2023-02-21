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

@interface FITMagnetometerDataMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// TimestampMs 
- (BOOL)isTimestampMsValid;
- (FITUInt16)getTimestampMs;
- (void)setTimestampMs:(FITUInt16)timestampMs;
// SampleTimeOffset 
@property(readonly,nonatomic) uint8_t numSampleTimeOffsetValues;
- (BOOL)isSampleTimeOffsetValidforIndex : (uint8_t)index;
- (FITUInt16)getSampleTimeOffsetforIndex : (uint8_t)index;
- (void)setSampleTimeOffset:(FITUInt16)sampleTimeOffset forIndex:(uint8_t)index;
// MagX 
@property(readonly,nonatomic) uint8_t numMagXValues;
- (BOOL)isMagXValidforIndex : (uint8_t)index;
- (FITUInt16)getMagXforIndex : (uint8_t)index;
- (void)setMagX:(FITUInt16)magX forIndex:(uint8_t)index;
// MagY 
@property(readonly,nonatomic) uint8_t numMagYValues;
- (BOOL)isMagYValidforIndex : (uint8_t)index;
- (FITUInt16)getMagYforIndex : (uint8_t)index;
- (void)setMagY:(FITUInt16)magY forIndex:(uint8_t)index;
// MagZ 
@property(readonly,nonatomic) uint8_t numMagZValues;
- (BOOL)isMagZValidforIndex : (uint8_t)index;
- (FITUInt16)getMagZforIndex : (uint8_t)index;
- (void)setMagZ:(FITUInt16)magZ forIndex:(uint8_t)index;
// CalibratedMagX 
@property(readonly,nonatomic) uint8_t numCalibratedMagXValues;
- (BOOL)isCalibratedMagXValidforIndex : (uint8_t)index;
- (FITFloat32)getCalibratedMagXforIndex : (uint8_t)index;
- (void)setCalibratedMagX:(FITFloat32)calibratedMagX forIndex:(uint8_t)index;
// CalibratedMagY 
@property(readonly,nonatomic) uint8_t numCalibratedMagYValues;
- (BOOL)isCalibratedMagYValidforIndex : (uint8_t)index;
- (FITFloat32)getCalibratedMagYforIndex : (uint8_t)index;
- (void)setCalibratedMagY:(FITFloat32)calibratedMagY forIndex:(uint8_t)index;
// CalibratedMagZ 
@property(readonly,nonatomic) uint8_t numCalibratedMagZValues;
- (BOOL)isCalibratedMagZValidforIndex : (uint8_t)index;
- (FITFloat32)getCalibratedMagZforIndex : (uint8_t)index;
- (void)setCalibratedMagZ:(FITFloat32)calibratedMagZ forIndex:(uint8_t)index;

@end

NS_ASSUME_NONNULL_END
