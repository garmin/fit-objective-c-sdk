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
