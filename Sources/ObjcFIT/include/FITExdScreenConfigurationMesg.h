/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2025 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.171.0Release
// Tag = production/release/21.171.0-0-g57fed75
/////////////////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>

#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITExdScreenConfigurationMesg : FITMessage
- (id)init;
// ScreenIndex 
- (BOOL)isScreenIndexValid;
- (FITUInt8)getScreenIndex;
- (void)setScreenIndex:(FITUInt8)screenIndex;
// FieldCount 
- (BOOL)isFieldCountValid;
- (FITUInt8)getFieldCount;
- (void)setFieldCount:(FITUInt8)fieldCount;
// Layout 
- (BOOL)isLayoutValid;
- (FITExdLayout)getLayout;
- (void)setLayout:(FITExdLayout)layout;
// ScreenEnabled 
- (BOOL)isScreenEnabledValid;
- (FITBool)getScreenEnabled;
- (void)setScreenEnabled:(FITBool)screenEnabled;

@end

NS_ASSUME_NONNULL_END
