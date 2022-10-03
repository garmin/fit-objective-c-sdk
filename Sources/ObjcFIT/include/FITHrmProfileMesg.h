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

@interface FITHrmProfileMesg : FITMessage
- (id)init;
// MessageIndex 
- (BOOL)isMessageIndexValid;
- (FITMessageIndex)getMessageIndex;
- (void)setMessageIndex:(FITMessageIndex)messageIndex;
// Enabled 
- (BOOL)isEnabledValid;
- (FITBool)getEnabled;
- (void)setEnabled:(FITBool)enabled;
// HrmAntId 
- (BOOL)isHrmAntIdValid;
- (FITUInt16z)getHrmAntId;
- (void)setHrmAntId:(FITUInt16z)hrmAntId;
// LogHrv 
- (BOOL)isLogHrvValid;
- (FITBool)getLogHrv;
- (void)setLogHrv:(FITBool)logHrv;
// HrmAntIdTransType 
- (BOOL)isHrmAntIdTransTypeValid;
- (FITUInt8z)getHrmAntIdTransType;
- (void)setHrmAntIdTransType:(FITUInt8z)hrmAntIdTransType;

@end

NS_ASSUME_NONNULL_END
