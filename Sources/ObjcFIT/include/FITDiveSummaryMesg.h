/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2024 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.141.0Release
// Tag = production/release/21.141.0-0-g2aa27e1
/////////////////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>

#import "FITDate.h"
#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITDiveSummaryMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// ReferenceMesg 
- (BOOL)isReferenceMesgValid;
- (FITMesgNum)getReferenceMesg;
- (void)setReferenceMesg:(FITMesgNum)referenceMesg;
// ReferenceIndex 
- (BOOL)isReferenceIndexValid;
- (FITMessageIndex)getReferenceIndex;
- (void)setReferenceIndex:(FITMessageIndex)referenceIndex;
// AvgDepth 
- (BOOL)isAvgDepthValid;
- (FITFloat32)getAvgDepth;
- (void)setAvgDepth:(FITFloat32)avgDepth;
// MaxDepth 
- (BOOL)isMaxDepthValid;
- (FITFloat32)getMaxDepth;
- (void)setMaxDepth:(FITFloat32)maxDepth;
// SurfaceInterval 
- (BOOL)isSurfaceIntervalValid;
- (FITUInt32)getSurfaceInterval;
- (void)setSurfaceInterval:(FITUInt32)surfaceInterval;
// StartCns 
- (BOOL)isStartCnsValid;
- (FITUInt8)getStartCns;
- (void)setStartCns:(FITUInt8)startCns;
// EndCns 
- (BOOL)isEndCnsValid;
- (FITUInt8)getEndCns;
- (void)setEndCns:(FITUInt8)endCns;
// StartN2 
- (BOOL)isStartN2Valid;
- (FITUInt16)getStartN2;
- (void)setStartN2:(FITUInt16)startN2;
// EndN2 
- (BOOL)isEndN2Valid;
- (FITUInt16)getEndN2;
- (void)setEndN2:(FITUInt16)endN2;
// O2Toxicity 
- (BOOL)isO2ToxicityValid;
- (FITUInt16)getO2Toxicity;
- (void)setO2Toxicity:(FITUInt16)o2Toxicity;
// DiveNumber 
- (BOOL)isDiveNumberValid;
- (FITUInt32)getDiveNumber;
- (void)setDiveNumber:(FITUInt32)diveNumber;
// BottomTime 
- (BOOL)isBottomTimeValid;
- (FITFloat32)getBottomTime;
- (void)setBottomTime:(FITFloat32)bottomTime;
// AvgPressureSac 
- (BOOL)isAvgPressureSacValid;
- (FITFloat32)getAvgPressureSac;
- (void)setAvgPressureSac:(FITFloat32)avgPressureSac;
// AvgVolumeSac 
- (BOOL)isAvgVolumeSacValid;
- (FITFloat32)getAvgVolumeSac;
- (void)setAvgVolumeSac:(FITFloat32)avgVolumeSac;
// AvgRmv 
- (BOOL)isAvgRmvValid;
- (FITFloat32)getAvgRmv;
- (void)setAvgRmv:(FITFloat32)avgRmv;
// DescentTime 
- (BOOL)isDescentTimeValid;
- (FITFloat32)getDescentTime;
- (void)setDescentTime:(FITFloat32)descentTime;
// AscentTime 
- (BOOL)isAscentTimeValid;
- (FITFloat32)getAscentTime;
- (void)setAscentTime:(FITFloat32)ascentTime;
// AvgAscentRate 
- (BOOL)isAvgAscentRateValid;
- (FITFloat32)getAvgAscentRate;
- (void)setAvgAscentRate:(FITFloat32)avgAscentRate;
// AvgDescentRate 
- (BOOL)isAvgDescentRateValid;
- (FITFloat32)getAvgDescentRate;
- (void)setAvgDescentRate:(FITFloat32)avgDescentRate;
// MaxAscentRate 
- (BOOL)isMaxAscentRateValid;
- (FITFloat32)getMaxAscentRate;
- (void)setMaxAscentRate:(FITFloat32)maxAscentRate;
// MaxDescentRate 
- (BOOL)isMaxDescentRateValid;
- (FITFloat32)getMaxDescentRate;
- (void)setMaxDescentRate:(FITFloat32)maxDescentRate;
// HangTime 
- (BOOL)isHangTimeValid;
- (FITFloat32)getHangTime;
- (void)setHangTime:(FITFloat32)hangTime;

@end

NS_ASSUME_NONNULL_END
