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

@interface FITEventMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// Event 
- (BOOL)isEventValid;
- (FITEvent)getEvent;
- (void)setEvent:(FITEvent)event;
// EventType 
- (BOOL)isEventTypeValid;
- (FITEventType)getEventType;
- (void)setEventType:(FITEventType)eventType;
// Data16 
- (BOOL)isData16Valid;
- (FITUInt16)getData16;
- (void)setData16:(FITUInt16)data16;
// Data 
- (BOOL)isDataValid;
- (FITUInt32)getData;
- (void)setData:(FITUInt32)data;
// Data Sub Fields
- (BOOL)isTimerTriggerValid;
- (FITTimerTrigger) getTimerTrigger;
- (void)setTimerTrigger:(FITTimerTrigger)timerTrigger;
- (BOOL)isCoursePointIndexValid;
- (FITMessageIndex) getCoursePointIndex;
- (void)setCoursePointIndex:(FITMessageIndex)coursePointIndex;
- (BOOL)isBatteryLevelValid;
- (FITFloat32) getBatteryLevel;
- (void)setBatteryLevel:(FITFloat32)batteryLevel;
- (BOOL)isVirtualPartnerSpeedValid;
- (FITFloat32) getVirtualPartnerSpeed;
- (void)setVirtualPartnerSpeed:(FITFloat32)virtualPartnerSpeed;
- (BOOL)isHrHighAlertValid;
- (FITUInt8) getHrHighAlert;
- (void)setHrHighAlert:(FITUInt8)hrHighAlert;
- (BOOL)isHrLowAlertValid;
- (FITUInt8) getHrLowAlert;
- (void)setHrLowAlert:(FITUInt8)hrLowAlert;
- (BOOL)isSpeedHighAlertValid;
- (FITFloat32) getSpeedHighAlert;
- (void)setSpeedHighAlert:(FITFloat32)speedHighAlert;
- (BOOL)isSpeedLowAlertValid;
- (FITFloat32) getSpeedLowAlert;
- (void)setSpeedLowAlert:(FITFloat32)speedLowAlert;
- (BOOL)isCadHighAlertValid;
- (FITUInt16) getCadHighAlert;
- (void)setCadHighAlert:(FITUInt16)cadHighAlert;
- (BOOL)isCadLowAlertValid;
- (FITUInt16) getCadLowAlert;
- (void)setCadLowAlert:(FITUInt16)cadLowAlert;
- (BOOL)isPowerHighAlertValid;
- (FITUInt16) getPowerHighAlert;
- (void)setPowerHighAlert:(FITUInt16)powerHighAlert;
- (BOOL)isPowerLowAlertValid;
- (FITUInt16) getPowerLowAlert;
- (void)setPowerLowAlert:(FITUInt16)powerLowAlert;
- (BOOL)isTimeDurationAlertValid;
- (FITFloat32) getTimeDurationAlert;
- (void)setTimeDurationAlert:(FITFloat32)timeDurationAlert;
- (BOOL)isDistanceDurationAlertValid;
- (FITFloat32) getDistanceDurationAlert;
- (void)setDistanceDurationAlert:(FITFloat32)distanceDurationAlert;
- (BOOL)isCalorieDurationAlertValid;
- (FITUInt32) getCalorieDurationAlert;
- (void)setCalorieDurationAlert:(FITUInt32)calorieDurationAlert;
- (BOOL)isFitnessEquipmentStateValid;
- (FITFitnessEquipmentState) getFitnessEquipmentState;
- (void)setFitnessEquipmentState:(FITFitnessEquipmentState)fitnessEquipmentState;
- (BOOL)isSportPointValid;
- (FITUInt32) getSportPoint;
- (void)setSportPoint:(FITUInt32)sportPoint;
- (BOOL)isGearChangeDataValid;
- (FITUInt32) getGearChangeData;
- (void)setGearChangeData:(FITUInt32)gearChangeData;
- (BOOL)isRiderPositionValid;
- (FITRiderPositionType) getRiderPosition;
- (void)setRiderPosition:(FITRiderPositionType)riderPosition;
- (BOOL)isCommTimeoutValid;
- (FITCommTimeoutType) getCommTimeout;
- (void)setCommTimeout:(FITCommTimeoutType)commTimeout;
- (BOOL)isDiveAlertValid;
- (FITDiveAlert) getDiveAlert;
- (void)setDiveAlert:(FITDiveAlert)diveAlert;
- (BOOL)isRadarThreatAlertValid;
- (FITUInt32) getRadarThreatAlert;
- (void)setRadarThreatAlert:(FITUInt32)radarThreatAlert;
// EventGroup 
- (BOOL)isEventGroupValid;
- (FITUInt8)getEventGroup;
- (void)setEventGroup:(FITUInt8)eventGroup;
// Score 
- (BOOL)isScoreValid;
- (FITUInt16)getScore;
- (void)setScore:(FITUInt16)score;
// OpponentScore 
- (BOOL)isOpponentScoreValid;
- (FITUInt16)getOpponentScore;
- (void)setOpponentScore:(FITUInt16)opponentScore;
// FrontGearNum 
- (BOOL)isFrontGearNumValid;
- (FITUInt8z)getFrontGearNum;
- (void)setFrontGearNum:(FITUInt8z)frontGearNum;
// FrontGear 
- (BOOL)isFrontGearValid;
- (FITUInt8z)getFrontGear;
- (void)setFrontGear:(FITUInt8z)frontGear;
// RearGearNum 
- (BOOL)isRearGearNumValid;
- (FITUInt8z)getRearGearNum;
- (void)setRearGearNum:(FITUInt8z)rearGearNum;
// RearGear 
- (BOOL)isRearGearValid;
- (FITUInt8z)getRearGear;
- (void)setRearGear:(FITUInt8z)rearGear;
// DeviceIndex 
- (BOOL)isDeviceIndexValid;
- (FITDeviceIndex)getDeviceIndex;
- (void)setDeviceIndex:(FITDeviceIndex)deviceIndex;
// RadarThreatLevelMax 
- (BOOL)isRadarThreatLevelMaxValid;
- (FITRadarThreatLevelType)getRadarThreatLevelMax;
- (void)setRadarThreatLevelMax:(FITRadarThreatLevelType)radarThreatLevelMax;
// RadarThreatCount 
- (BOOL)isRadarThreatCountValid;
- (FITUInt8)getRadarThreatCount;
- (void)setRadarThreatCount:(FITUInt8)radarThreatCount;
// RadarThreatAvgApproachSpeed 
- (BOOL)isRadarThreatAvgApproachSpeedValid;
- (FITFloat32)getRadarThreatAvgApproachSpeed;
- (void)setRadarThreatAvgApproachSpeed:(FITFloat32)radarThreatAvgApproachSpeed;
// RadarThreatMaxApproachSpeed 
- (BOOL)isRadarThreatMaxApproachSpeedValid;
- (FITFloat32)getRadarThreatMaxApproachSpeed;
- (void)setRadarThreatMaxApproachSpeed:(FITFloat32)radarThreatMaxApproachSpeed;

@end

NS_ASSUME_NONNULL_END
