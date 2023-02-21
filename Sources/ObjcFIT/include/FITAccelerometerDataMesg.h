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

@interface FITAccelerometerDataMesg : FITMessage
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
// AccelX 
@property(readonly,nonatomic) uint8_t numAccelXValues;
- (BOOL)isAccelXValidforIndex : (uint8_t)index;
- (FITUInt16)getAccelXforIndex : (uint8_t)index;
- (void)setAccelX:(FITUInt16)accelX forIndex:(uint8_t)index;
// AccelY 
@property(readonly,nonatomic) uint8_t numAccelYValues;
- (BOOL)isAccelYValidforIndex : (uint8_t)index;
- (FITUInt16)getAccelYforIndex : (uint8_t)index;
- (void)setAccelY:(FITUInt16)accelY forIndex:(uint8_t)index;
// AccelZ 
@property(readonly,nonatomic) uint8_t numAccelZValues;
- (BOOL)isAccelZValidforIndex : (uint8_t)index;
- (FITUInt16)getAccelZforIndex : (uint8_t)index;
- (void)setAccelZ:(FITUInt16)accelZ forIndex:(uint8_t)index;
// CalibratedAccelX 
@property(readonly,nonatomic) uint8_t numCalibratedAccelXValues;
- (BOOL)isCalibratedAccelXValidforIndex : (uint8_t)index;
- (FITFloat32)getCalibratedAccelXforIndex : (uint8_t)index;
- (void)setCalibratedAccelX:(FITFloat32)calibratedAccelX forIndex:(uint8_t)index;
// CalibratedAccelY 
@property(readonly,nonatomic) uint8_t numCalibratedAccelYValues;
- (BOOL)isCalibratedAccelYValidforIndex : (uint8_t)index;
- (FITFloat32)getCalibratedAccelYforIndex : (uint8_t)index;
- (void)setCalibratedAccelY:(FITFloat32)calibratedAccelY forIndex:(uint8_t)index;
// CalibratedAccelZ 
@property(readonly,nonatomic) uint8_t numCalibratedAccelZValues;
- (BOOL)isCalibratedAccelZValidforIndex : (uint8_t)index;
- (FITFloat32)getCalibratedAccelZforIndex : (uint8_t)index;
- (void)setCalibratedAccelZ:(FITFloat32)calibratedAccelZ forIndex:(uint8_t)index;
// CompressedCalibratedAccelX 
@property(readonly,nonatomic) uint8_t numCompressedCalibratedAccelXValues;
- (BOOL)isCompressedCalibratedAccelXValidforIndex : (uint8_t)index;
- (FITSInt16)getCompressedCalibratedAccelXforIndex : (uint8_t)index;
- (void)setCompressedCalibratedAccelX:(FITSInt16)compressedCalibratedAccelX forIndex:(uint8_t)index;
// CompressedCalibratedAccelY 
@property(readonly,nonatomic) uint8_t numCompressedCalibratedAccelYValues;
- (BOOL)isCompressedCalibratedAccelYValidforIndex : (uint8_t)index;
- (FITSInt16)getCompressedCalibratedAccelYforIndex : (uint8_t)index;
- (void)setCompressedCalibratedAccelY:(FITSInt16)compressedCalibratedAccelY forIndex:(uint8_t)index;
// CompressedCalibratedAccelZ 
@property(readonly,nonatomic) uint8_t numCompressedCalibratedAccelZValues;
- (BOOL)isCompressedCalibratedAccelZValidforIndex : (uint8_t)index;
- (FITSInt16)getCompressedCalibratedAccelZforIndex : (uint8_t)index;
- (void)setCompressedCalibratedAccelZ:(FITSInt16)compressedCalibratedAccelZ forIndex:(uint8_t)index;

@end

NS_ASSUME_NONNULL_END
