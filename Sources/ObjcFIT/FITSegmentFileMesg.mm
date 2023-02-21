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


#import "FITMessage+Internal.h"

#import "FITString.h"

#import "FITSegmentFileMesg.h"

@implementation FITSegmentFileMesg

- (instancetype)init {
    self = [super initWithFitMesgIndex:fit::Profile::MESG_SEGMENT_FILE];

    return self;
}

// MessageIndex 
- (BOOL)isMessageIndexValid {
	const fit::Field* field = [super getField:254];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITMessageIndex)getMessageIndex {
    return ([super getFieldUINT16ValueForField:254 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setMessageIndex:(FITMessageIndex)messageIndex {
    [super setFieldUINT16ValueForField:254 andValue:(messageIndex) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// FileUuid 
- (BOOL)isFileUuidValid {
	const fit::Field* field = [super getField:1];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (NSString *)getFileUuid {
    return ([super getFieldSTRINGValueForField:1 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setFileUuid:(NSString *)fileUuid {
    [super setFieldSTRINGValueForField:1 andValue:(fileUuid) forIndex:0];
} 

// Enabled 
- (BOOL)isEnabledValid {
	const fit::Field* field = [super getField:3];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITBool)getEnabled {
    return ([super getFieldENUMValueForField:3 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setEnabled:(FITBool)enabled {
    [super setFieldENUMValueForField:3 andValue:(enabled) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// UserProfilePrimaryKey 
- (BOOL)isUserProfilePrimaryKeyValid {
	const fit::Field* field = [super getField:4];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt32)getUserProfilePrimaryKey {
    return ([super getFieldUINT32ValueForField:4 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setUserProfilePrimaryKey:(FITUInt32)userProfilePrimaryKey {
    [super setFieldUINT32ValueForField:4 andValue:(userProfilePrimaryKey) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// LeaderType 
- (uint8_t)numLeaderTypeValues {
    return [super getFieldNumValuesForField:7 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isLeaderTypeValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:7];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITSegmentLeaderboardType)getLeaderTypeforIndex:(uint8_t)index {
    return ([super getFieldENUMValueForField:7 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setLeaderType:(FITSegmentLeaderboardType)leaderType forIndex:(uint8_t)index {
    [super setFieldENUMValueForField:7 andValue:(leaderType) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// LeaderGroupPrimaryKey 
- (uint8_t)numLeaderGroupPrimaryKeyValues {
    return [super getFieldNumValuesForField:8 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isLeaderGroupPrimaryKeyValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:8];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt32)getLeaderGroupPrimaryKeyforIndex:(uint8_t)index {
    return ([super getFieldUINT32ValueForField:8 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setLeaderGroupPrimaryKey:(FITUInt32)leaderGroupPrimaryKey forIndex:(uint8_t)index {
    [super setFieldUINT32ValueForField:8 andValue:(leaderGroupPrimaryKey) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// LeaderActivityId 
- (uint8_t)numLeaderActivityIdValues {
    return [super getFieldNumValuesForField:9 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isLeaderActivityIdValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:9];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt32)getLeaderActivityIdforIndex:(uint8_t)index {
    return ([super getFieldUINT32ValueForField:9 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setLeaderActivityId:(FITUInt32)leaderActivityId forIndex:(uint8_t)index {
    [super setFieldUINT32ValueForField:9 andValue:(leaderActivityId) forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

// LeaderActivityIdString 
- (uint8_t)numLeaderActivityIdStringValues {
    return [super getFieldNumValuesForField:10 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
}

- (BOOL)isLeaderActivityIdStringValidforIndex:(uint8_t)index {
	const fit::Field* field = [super getField:10];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid(index) == FIT_TRUE ? TRUE : FALSE;
}

- (NSString *)getLeaderActivityIdStringforIndex:(uint8_t)index {
    return ([super getFieldSTRINGValueForField:10 forIndex:index andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setLeaderActivityIdString:(NSString *)leaderActivityIdString forIndex:(uint8_t)index {
    [super setFieldSTRINGValueForField:10 andValue:(leaderActivityIdString) forIndex:index];
} 

// DefaultRaceLeader 
- (BOOL)isDefaultRaceLeaderValid {
	const fit::Field* field = [super getField:11];
	if( FIT_NULL == field ) {
		return FALSE;
	}

	return field->IsValueValid() == FIT_TRUE ? TRUE : FALSE;
}

- (FITUInt8)getDefaultRaceLeader {
    return ([super getFieldUINT8ValueForField:11 forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD]);
}

- (void)setDefaultRaceLeader:(FITUInt8)defaultRaceLeader {
    [super setFieldUINT8ValueForField:11 andValue:(defaultRaceLeader) forIndex:0 andSubFieldIndex:FIT_SUBFIELD_INDEX_MAIN_FIELD];
} 

@end
