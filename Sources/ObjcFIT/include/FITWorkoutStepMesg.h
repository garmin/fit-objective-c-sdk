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

@interface FITWorkoutStepMesg : FITMessage
- (id)init;
// MessageIndex 
- (BOOL)isMessageIndexValid;
- (FITMessageIndex)getMessageIndex;
- (void)setMessageIndex:(FITMessageIndex)messageIndex;
// WktStepName 
- (BOOL)isWktStepNameValid;
- (NSString *)getWktStepName;
- (void)setWktStepName:(NSString *)wktStepName;
// DurationType 
- (BOOL)isDurationTypeValid;
- (FITWktStepDuration)getDurationType;
- (void)setDurationType:(FITWktStepDuration)durationType;
// DurationValue 
- (BOOL)isDurationValueValid;
- (FITUInt32)getDurationValue;
- (void)setDurationValue:(FITUInt32)durationValue;
// DurationValue Sub Fields
- (BOOL)isDurationTimeValid;
- (FITFloat32) getDurationTime;
- (void)setDurationTime:(FITFloat32)durationTime;
- (BOOL)isDurationDistanceValid;
- (FITFloat32) getDurationDistance;
- (void)setDurationDistance:(FITFloat32)durationDistance;
- (BOOL)isDurationHrValid;
- (FITWorkoutHr) getDurationHr;
- (void)setDurationHr:(FITWorkoutHr)durationHr;
- (BOOL)isDurationCaloriesValid;
- (FITUInt32) getDurationCalories;
- (void)setDurationCalories:(FITUInt32)durationCalories;
- (BOOL)isDurationStepValid;
- (FITUInt32) getDurationStep;
- (void)setDurationStep:(FITUInt32)durationStep;
- (BOOL)isDurationPowerValid;
- (FITWorkoutPower) getDurationPower;
- (void)setDurationPower:(FITWorkoutPower)durationPower;
- (BOOL)isDurationRepsValid;
- (FITUInt32) getDurationReps;
- (void)setDurationReps:(FITUInt32)durationReps;
// TargetType 
- (BOOL)isTargetTypeValid;
- (FITWktStepTarget)getTargetType;
- (void)setTargetType:(FITWktStepTarget)targetType;
// TargetValue 
- (BOOL)isTargetValueValid;
- (FITUInt32)getTargetValue;
- (void)setTargetValue:(FITUInt32)targetValue;
// TargetValue Sub Fields
- (BOOL)isTargetSpeedZoneValid;
- (FITUInt32) getTargetSpeedZone;
- (void)setTargetSpeedZone:(FITUInt32)targetSpeedZone;
- (BOOL)isTargetHrZoneValid;
- (FITUInt32) getTargetHrZone;
- (void)setTargetHrZone:(FITUInt32)targetHrZone;
- (BOOL)isTargetCadenceZoneValid;
- (FITUInt32) getTargetCadenceZone;
- (void)setTargetCadenceZone:(FITUInt32)targetCadenceZone;
- (BOOL)isTargetPowerZoneValid;
- (FITUInt32) getTargetPowerZone;
- (void)setTargetPowerZone:(FITUInt32)targetPowerZone;
- (BOOL)isRepeatStepsValid;
- (FITUInt32) getRepeatSteps;
- (void)setRepeatSteps:(FITUInt32)repeatSteps;
- (BOOL)isRepeatTimeValid;
- (FITFloat32) getRepeatTime;
- (void)setRepeatTime:(FITFloat32)repeatTime;
- (BOOL)isRepeatDistanceValid;
- (FITFloat32) getRepeatDistance;
- (void)setRepeatDistance:(FITFloat32)repeatDistance;
- (BOOL)isRepeatCaloriesValid;
- (FITUInt32) getRepeatCalories;
- (void)setRepeatCalories:(FITUInt32)repeatCalories;
- (BOOL)isRepeatHrValid;
- (FITWorkoutHr) getRepeatHr;
- (void)setRepeatHr:(FITWorkoutHr)repeatHr;
- (BOOL)isRepeatPowerValid;
- (FITWorkoutPower) getRepeatPower;
- (void)setRepeatPower:(FITWorkoutPower)repeatPower;
- (BOOL)isTargetStrokeTypeValid;
- (FITSwimStroke) getTargetStrokeType;
- (void)setTargetStrokeType:(FITSwimStroke)targetStrokeType;
// CustomTargetValueLow 
- (BOOL)isCustomTargetValueLowValid;
- (FITUInt32)getCustomTargetValueLow;
- (void)setCustomTargetValueLow:(FITUInt32)customTargetValueLow;
// CustomTargetValueLow Sub Fields
- (BOOL)isCustomTargetSpeedLowValid;
- (FITFloat32) getCustomTargetSpeedLow;
- (void)setCustomTargetSpeedLow:(FITFloat32)customTargetSpeedLow;
- (BOOL)isCustomTargetHeartRateLowValid;
- (FITWorkoutHr) getCustomTargetHeartRateLow;
- (void)setCustomTargetHeartRateLow:(FITWorkoutHr)customTargetHeartRateLow;
- (BOOL)isCustomTargetCadenceLowValid;
- (FITUInt32) getCustomTargetCadenceLow;
- (void)setCustomTargetCadenceLow:(FITUInt32)customTargetCadenceLow;
- (BOOL)isCustomTargetPowerLowValid;
- (FITWorkoutPower) getCustomTargetPowerLow;
- (void)setCustomTargetPowerLow:(FITWorkoutPower)customTargetPowerLow;
// CustomTargetValueHigh 
- (BOOL)isCustomTargetValueHighValid;
- (FITUInt32)getCustomTargetValueHigh;
- (void)setCustomTargetValueHigh:(FITUInt32)customTargetValueHigh;
// CustomTargetValueHigh Sub Fields
- (BOOL)isCustomTargetSpeedHighValid;
- (FITFloat32) getCustomTargetSpeedHigh;
- (void)setCustomTargetSpeedHigh:(FITFloat32)customTargetSpeedHigh;
- (BOOL)isCustomTargetHeartRateHighValid;
- (FITWorkoutHr) getCustomTargetHeartRateHigh;
- (void)setCustomTargetHeartRateHigh:(FITWorkoutHr)customTargetHeartRateHigh;
- (BOOL)isCustomTargetCadenceHighValid;
- (FITUInt32) getCustomTargetCadenceHigh;
- (void)setCustomTargetCadenceHigh:(FITUInt32)customTargetCadenceHigh;
- (BOOL)isCustomTargetPowerHighValid;
- (FITWorkoutPower) getCustomTargetPowerHigh;
- (void)setCustomTargetPowerHigh:(FITWorkoutPower)customTargetPowerHigh;
// Intensity 
- (BOOL)isIntensityValid;
- (FITIntensity)getIntensity;
- (void)setIntensity:(FITIntensity)intensity;
// Notes 
- (BOOL)isNotesValid;
- (NSString *)getNotes;
- (void)setNotes:(NSString *)notes;
// Equipment 
- (BOOL)isEquipmentValid;
- (FITWorkoutEquipment)getEquipment;
- (void)setEquipment:(FITWorkoutEquipment)equipment;
// ExerciseCategory 
- (BOOL)isExerciseCategoryValid;
- (FITExerciseCategory)getExerciseCategory;
- (void)setExerciseCategory:(FITExerciseCategory)exerciseCategory;
// ExerciseName 
- (BOOL)isExerciseNameValid;
- (FITUInt16)getExerciseName;
- (void)setExerciseName:(FITUInt16)exerciseName;
// ExerciseWeight 
- (BOOL)isExerciseWeightValid;
- (FITFloat32)getExerciseWeight;
- (void)setExerciseWeight:(FITFloat32)exerciseWeight;
// WeightDisplayUnit 
- (BOOL)isWeightDisplayUnitValid;
- (FITFitBaseUnit)getWeightDisplayUnit;
- (void)setWeightDisplayUnit:(FITFitBaseUnit)weightDisplayUnit;
// SecondaryTargetType 
- (BOOL)isSecondaryTargetTypeValid;
- (FITWktStepTarget)getSecondaryTargetType;
- (void)setSecondaryTargetType:(FITWktStepTarget)secondaryTargetType;
// SecondaryTargetValue 
- (BOOL)isSecondaryTargetValueValid;
- (FITUInt32)getSecondaryTargetValue;
- (void)setSecondaryTargetValue:(FITUInt32)secondaryTargetValue;
// SecondaryTargetValue Sub Fields
- (BOOL)isSecondaryTargetSpeedZoneValid;
- (FITUInt32) getSecondaryTargetSpeedZone;
- (void)setSecondaryTargetSpeedZone:(FITUInt32)secondaryTargetSpeedZone;
- (BOOL)isSecondaryTargetHrZoneValid;
- (FITUInt32) getSecondaryTargetHrZone;
- (void)setSecondaryTargetHrZone:(FITUInt32)secondaryTargetHrZone;
- (BOOL)isSecondaryTargetCadenceZoneValid;
- (FITUInt32) getSecondaryTargetCadenceZone;
- (void)setSecondaryTargetCadenceZone:(FITUInt32)secondaryTargetCadenceZone;
- (BOOL)isSecondaryTargetPowerZoneValid;
- (FITUInt32) getSecondaryTargetPowerZone;
- (void)setSecondaryTargetPowerZone:(FITUInt32)secondaryTargetPowerZone;
- (BOOL)isSecondaryTargetStrokeTypeValid;
- (FITSwimStroke) getSecondaryTargetStrokeType;
- (void)setSecondaryTargetStrokeType:(FITSwimStroke)secondaryTargetStrokeType;
// SecondaryCustomTargetValueLow 
- (BOOL)isSecondaryCustomTargetValueLowValid;
- (FITUInt32)getSecondaryCustomTargetValueLow;
- (void)setSecondaryCustomTargetValueLow:(FITUInt32)secondaryCustomTargetValueLow;
// SecondaryCustomTargetValueLow Sub Fields
- (BOOL)isSecondaryCustomTargetSpeedLowValid;
- (FITFloat32) getSecondaryCustomTargetSpeedLow;
- (void)setSecondaryCustomTargetSpeedLow:(FITFloat32)secondaryCustomTargetSpeedLow;
- (BOOL)isSecondaryCustomTargetHeartRateLowValid;
- (FITWorkoutHr) getSecondaryCustomTargetHeartRateLow;
- (void)setSecondaryCustomTargetHeartRateLow:(FITWorkoutHr)secondaryCustomTargetHeartRateLow;
- (BOOL)isSecondaryCustomTargetCadenceLowValid;
- (FITUInt32) getSecondaryCustomTargetCadenceLow;
- (void)setSecondaryCustomTargetCadenceLow:(FITUInt32)secondaryCustomTargetCadenceLow;
- (BOOL)isSecondaryCustomTargetPowerLowValid;
- (FITWorkoutPower) getSecondaryCustomTargetPowerLow;
- (void)setSecondaryCustomTargetPowerLow:(FITWorkoutPower)secondaryCustomTargetPowerLow;
// SecondaryCustomTargetValueHigh 
- (BOOL)isSecondaryCustomTargetValueHighValid;
- (FITUInt32)getSecondaryCustomTargetValueHigh;
- (void)setSecondaryCustomTargetValueHigh:(FITUInt32)secondaryCustomTargetValueHigh;
// SecondaryCustomTargetValueHigh Sub Fields
- (BOOL)isSecondaryCustomTargetSpeedHighValid;
- (FITFloat32) getSecondaryCustomTargetSpeedHigh;
- (void)setSecondaryCustomTargetSpeedHigh:(FITFloat32)secondaryCustomTargetSpeedHigh;
- (BOOL)isSecondaryCustomTargetHeartRateHighValid;
- (FITWorkoutHr) getSecondaryCustomTargetHeartRateHigh;
- (void)setSecondaryCustomTargetHeartRateHigh:(FITWorkoutHr)secondaryCustomTargetHeartRateHigh;
- (BOOL)isSecondaryCustomTargetCadenceHighValid;
- (FITUInt32) getSecondaryCustomTargetCadenceHigh;
- (void)setSecondaryCustomTargetCadenceHigh:(FITUInt32)secondaryCustomTargetCadenceHigh;
- (BOOL)isSecondaryCustomTargetPowerHighValid;
- (FITWorkoutPower) getSecondaryCustomTargetPowerHigh;
- (void)setSecondaryCustomTargetPowerHigh:(FITWorkoutPower)secondaryCustomTargetPowerHigh;

@end

NS_ASSUME_NONNULL_END
