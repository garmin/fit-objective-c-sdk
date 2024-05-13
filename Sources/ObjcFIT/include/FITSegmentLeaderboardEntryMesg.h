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

#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITSegmentLeaderboardEntryMesg : FITMessage
- (id)init;
// MessageIndex 
- (BOOL)isMessageIndexValid;
- (FITMessageIndex)getMessageIndex;
- (void)setMessageIndex:(FITMessageIndex)messageIndex;
// Name 
- (BOOL)isNameValid;
- (NSString *)getName;
- (void)setName:(NSString *)name;
// Type 
- (BOOL)isTypeValid;
- (FITSegmentLeaderboardType)getType;
- (void)setType:(FITSegmentLeaderboardType)type;
// GroupPrimaryKey 
- (BOOL)isGroupPrimaryKeyValid;
- (FITUInt32)getGroupPrimaryKey;
- (void)setGroupPrimaryKey:(FITUInt32)groupPrimaryKey;
// ActivityId 
- (BOOL)isActivityIdValid;
- (FITUInt32)getActivityId;
- (void)setActivityId:(FITUInt32)activityId;
// SegmentTime 
- (BOOL)isSegmentTimeValid;
- (FITFloat32)getSegmentTime;
- (void)setSegmentTime:(FITFloat32)segmentTime;
// ActivityIdString 
- (BOOL)isActivityIdStringValid;
- (NSString *)getActivityIdString;
- (void)setActivityIdString:(NSString *)activityIdString;

@end

NS_ASSUME_NONNULL_END
