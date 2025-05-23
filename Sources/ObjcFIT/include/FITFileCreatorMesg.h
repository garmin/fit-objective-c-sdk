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

@interface FITFileCreatorMesg : FITMessage
- (id)init;
// SoftwareVersion 
- (BOOL)isSoftwareVersionValid;
- (FITUInt16)getSoftwareVersion;
- (void)setSoftwareVersion:(FITUInt16)softwareVersion;
// HardwareVersion 
- (BOOL)isHardwareVersionValid;
- (FITUInt8)getHardwareVersion;
- (void)setHardwareVersion:(FITUInt8)hardwareVersion;

@end

NS_ASSUME_NONNULL_END
