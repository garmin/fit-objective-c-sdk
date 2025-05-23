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

#import "FITDate.h"
#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITSessionMesg : FITMessage
- (id)init;
// MessageIndex 
- (BOOL)isMessageIndexValid;
- (FITMessageIndex)getMessageIndex;
- (void)setMessageIndex:(FITMessageIndex)messageIndex;
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
// StartTime 
- (BOOL)isStartTimeValid;
- (FITDate *)getStartTime;
- (void)setStartTime:(FITDate *)startTime;
// StartPositionLat 
- (BOOL)isStartPositionLatValid;
- (FITSInt32)getStartPositionLat;
- (void)setStartPositionLat:(FITSInt32)startPositionLat;
// StartPositionLong 
- (BOOL)isStartPositionLongValid;
- (FITSInt32)getStartPositionLong;
- (void)setStartPositionLong:(FITSInt32)startPositionLong;
// Sport 
- (BOOL)isSportValid;
- (FITSport)getSport;
- (void)setSport:(FITSport)sport;
// SubSport 
- (BOOL)isSubSportValid;
- (FITSubSport)getSubSport;
- (void)setSubSport:(FITSubSport)subSport;
// TotalElapsedTime 
- (BOOL)isTotalElapsedTimeValid;
- (FITFloat32)getTotalElapsedTime;
- (void)setTotalElapsedTime:(FITFloat32)totalElapsedTime;
// TotalTimerTime 
- (BOOL)isTotalTimerTimeValid;
- (FITFloat32)getTotalTimerTime;
- (void)setTotalTimerTime:(FITFloat32)totalTimerTime;
// TotalDistance 
- (BOOL)isTotalDistanceValid;
- (FITFloat32)getTotalDistance;
- (void)setTotalDistance:(FITFloat32)totalDistance;
// TotalCycles 
- (BOOL)isTotalCyclesValid;
- (FITUInt32)getTotalCycles;
- (void)setTotalCycles:(FITUInt32)totalCycles;
// TotalCycles Sub Fields
- (BOOL)isTotalStridesValid;
- (FITUInt32) getTotalStrides;
- (void)setTotalStrides:(FITUInt32)totalStrides;
- (BOOL)isTotalStrokesValid;
- (FITUInt32) getTotalStrokes;
- (void)setTotalStrokes:(FITUInt32)totalStrokes;
// TotalCalories 
- (BOOL)isTotalCaloriesValid;
- (FITUInt16)getTotalCalories;
- (void)setTotalCalories:(FITUInt16)totalCalories;
// TotalFatCalories 
- (BOOL)isTotalFatCaloriesValid;
- (FITUInt16)getTotalFatCalories;
- (void)setTotalFatCalories:(FITUInt16)totalFatCalories;
// AvgSpeed 
- (BOOL)isAvgSpeedValid;
- (FITFloat32)getAvgSpeed;
- (void)setAvgSpeed:(FITFloat32)avgSpeed;
// MaxSpeed 
- (BOOL)isMaxSpeedValid;
- (FITFloat32)getMaxSpeed;
- (void)setMaxSpeed:(FITFloat32)maxSpeed;
// AvgHeartRate 
- (BOOL)isAvgHeartRateValid;
- (FITUInt8)getAvgHeartRate;
- (void)setAvgHeartRate:(FITUInt8)avgHeartRate;
// MaxHeartRate 
- (BOOL)isMaxHeartRateValid;
- (FITUInt8)getMaxHeartRate;
- (void)setMaxHeartRate:(FITUInt8)maxHeartRate;
// AvgCadence 
- (BOOL)isAvgCadenceValid;
- (FITUInt8)getAvgCadence;
- (void)setAvgCadence:(FITUInt8)avgCadence;
// AvgCadence Sub Fields
- (BOOL)isAvgRunningCadenceValid;
- (FITUInt8) getAvgRunningCadence;
- (void)setAvgRunningCadence:(FITUInt8)avgRunningCadence;
// MaxCadence 
- (BOOL)isMaxCadenceValid;
- (FITUInt8)getMaxCadence;
- (void)setMaxCadence:(FITUInt8)maxCadence;
// MaxCadence Sub Fields
- (BOOL)isMaxRunningCadenceValid;
- (FITUInt8) getMaxRunningCadence;
- (void)setMaxRunningCadence:(FITUInt8)maxRunningCadence;
// AvgPower 
- (BOOL)isAvgPowerValid;
- (FITUInt16)getAvgPower;
- (void)setAvgPower:(FITUInt16)avgPower;
// MaxPower 
- (BOOL)isMaxPowerValid;
- (FITUInt16)getMaxPower;
- (void)setMaxPower:(FITUInt16)maxPower;
// TotalAscent 
- (BOOL)isTotalAscentValid;
- (FITUInt16)getTotalAscent;
- (void)setTotalAscent:(FITUInt16)totalAscent;
// TotalDescent 
- (BOOL)isTotalDescentValid;
- (FITUInt16)getTotalDescent;
- (void)setTotalDescent:(FITUInt16)totalDescent;
// TotalTrainingEffect 
- (BOOL)isTotalTrainingEffectValid;
- (FITFloat32)getTotalTrainingEffect;
- (void)setTotalTrainingEffect:(FITFloat32)totalTrainingEffect;
// FirstLapIndex 
- (BOOL)isFirstLapIndexValid;
- (FITUInt16)getFirstLapIndex;
- (void)setFirstLapIndex:(FITUInt16)firstLapIndex;
// NumLaps 
- (BOOL)isNumLapsValid;
- (FITUInt16)getNumLaps;
- (void)setNumLaps:(FITUInt16)numLaps;
// EventGroup 
- (BOOL)isEventGroupValid;
- (FITUInt8)getEventGroup;
- (void)setEventGroup:(FITUInt8)eventGroup;
// Trigger 
- (BOOL)isTriggerValid;
- (FITSessionTrigger)getTrigger;
- (void)setTrigger:(FITSessionTrigger)trigger;
// NecLat 
- (BOOL)isNecLatValid;
- (FITSInt32)getNecLat;
- (void)setNecLat:(FITSInt32)necLat;
// NecLong 
- (BOOL)isNecLongValid;
- (FITSInt32)getNecLong;
- (void)setNecLong:(FITSInt32)necLong;
// SwcLat 
- (BOOL)isSwcLatValid;
- (FITSInt32)getSwcLat;
- (void)setSwcLat:(FITSInt32)swcLat;
// SwcLong 
- (BOOL)isSwcLongValid;
- (FITSInt32)getSwcLong;
- (void)setSwcLong:(FITSInt32)swcLong;
// NumLengths 
- (BOOL)isNumLengthsValid;
- (FITUInt16)getNumLengths;
- (void)setNumLengths:(FITUInt16)numLengths;
// NormalizedPower 
- (BOOL)isNormalizedPowerValid;
- (FITUInt16)getNormalizedPower;
- (void)setNormalizedPower:(FITUInt16)normalizedPower;
// TrainingStressScore 
- (BOOL)isTrainingStressScoreValid;
- (FITFloat32)getTrainingStressScore;
- (void)setTrainingStressScore:(FITFloat32)trainingStressScore;
// IntensityFactor 
- (BOOL)isIntensityFactorValid;
- (FITFloat32)getIntensityFactor;
- (void)setIntensityFactor:(FITFloat32)intensityFactor;
// LeftRightBalance 
- (BOOL)isLeftRightBalanceValid;
- (FITLeftRightBalance100)getLeftRightBalance;
- (void)setLeftRightBalance:(FITLeftRightBalance100)leftRightBalance;
// EndPositionLat 
- (BOOL)isEndPositionLatValid;
- (FITSInt32)getEndPositionLat;
- (void)setEndPositionLat:(FITSInt32)endPositionLat;
// EndPositionLong 
- (BOOL)isEndPositionLongValid;
- (FITSInt32)getEndPositionLong;
- (void)setEndPositionLong:(FITSInt32)endPositionLong;
// AvgStrokeCount 
- (BOOL)isAvgStrokeCountValid;
- (FITFloat32)getAvgStrokeCount;
- (void)setAvgStrokeCount:(FITFloat32)avgStrokeCount;
// AvgStrokeDistance 
- (BOOL)isAvgStrokeDistanceValid;
- (FITFloat32)getAvgStrokeDistance;
- (void)setAvgStrokeDistance:(FITFloat32)avgStrokeDistance;
// SwimStroke 
- (BOOL)isSwimStrokeValid;
- (FITSwimStroke)getSwimStroke;
- (void)setSwimStroke:(FITSwimStroke)swimStroke;
// PoolLength 
- (BOOL)isPoolLengthValid;
- (FITFloat32)getPoolLength;
- (void)setPoolLength:(FITFloat32)poolLength;
// ThresholdPower 
- (BOOL)isThresholdPowerValid;
- (FITUInt16)getThresholdPower;
- (void)setThresholdPower:(FITUInt16)thresholdPower;
// PoolLengthUnit 
- (BOOL)isPoolLengthUnitValid;
- (FITDisplayMeasure)getPoolLengthUnit;
- (void)setPoolLengthUnit:(FITDisplayMeasure)poolLengthUnit;
// NumActiveLengths 
- (BOOL)isNumActiveLengthsValid;
- (FITUInt16)getNumActiveLengths;
- (void)setNumActiveLengths:(FITUInt16)numActiveLengths;
// TotalWork 
- (BOOL)isTotalWorkValid;
- (FITUInt32)getTotalWork;
- (void)setTotalWork:(FITUInt32)totalWork;
// AvgAltitude 
- (BOOL)isAvgAltitudeValid;
- (FITFloat32)getAvgAltitude;
- (void)setAvgAltitude:(FITFloat32)avgAltitude;
// MaxAltitude 
- (BOOL)isMaxAltitudeValid;
- (FITFloat32)getMaxAltitude;
- (void)setMaxAltitude:(FITFloat32)maxAltitude;
// GpsAccuracy 
- (BOOL)isGpsAccuracyValid;
- (FITUInt8)getGpsAccuracy;
- (void)setGpsAccuracy:(FITUInt8)gpsAccuracy;
// AvgGrade 
- (BOOL)isAvgGradeValid;
- (FITFloat32)getAvgGrade;
- (void)setAvgGrade:(FITFloat32)avgGrade;
// AvgPosGrade 
- (BOOL)isAvgPosGradeValid;
- (FITFloat32)getAvgPosGrade;
- (void)setAvgPosGrade:(FITFloat32)avgPosGrade;
// AvgNegGrade 
- (BOOL)isAvgNegGradeValid;
- (FITFloat32)getAvgNegGrade;
- (void)setAvgNegGrade:(FITFloat32)avgNegGrade;
// MaxPosGrade 
- (BOOL)isMaxPosGradeValid;
- (FITFloat32)getMaxPosGrade;
- (void)setMaxPosGrade:(FITFloat32)maxPosGrade;
// MaxNegGrade 
- (BOOL)isMaxNegGradeValid;
- (FITFloat32)getMaxNegGrade;
- (void)setMaxNegGrade:(FITFloat32)maxNegGrade;
// AvgTemperature 
- (BOOL)isAvgTemperatureValid;
- (FITSInt8)getAvgTemperature;
- (void)setAvgTemperature:(FITSInt8)avgTemperature;
// MaxTemperature 
- (BOOL)isMaxTemperatureValid;
- (FITSInt8)getMaxTemperature;
- (void)setMaxTemperature:(FITSInt8)maxTemperature;
// TotalMovingTime 
- (BOOL)isTotalMovingTimeValid;
- (FITFloat32)getTotalMovingTime;
- (void)setTotalMovingTime:(FITFloat32)totalMovingTime;
// AvgPosVerticalSpeed 
- (BOOL)isAvgPosVerticalSpeedValid;
- (FITFloat32)getAvgPosVerticalSpeed;
- (void)setAvgPosVerticalSpeed:(FITFloat32)avgPosVerticalSpeed;
// AvgNegVerticalSpeed 
- (BOOL)isAvgNegVerticalSpeedValid;
- (FITFloat32)getAvgNegVerticalSpeed;
- (void)setAvgNegVerticalSpeed:(FITFloat32)avgNegVerticalSpeed;
// MaxPosVerticalSpeed 
- (BOOL)isMaxPosVerticalSpeedValid;
- (FITFloat32)getMaxPosVerticalSpeed;
- (void)setMaxPosVerticalSpeed:(FITFloat32)maxPosVerticalSpeed;
// MaxNegVerticalSpeed 
- (BOOL)isMaxNegVerticalSpeedValid;
- (FITFloat32)getMaxNegVerticalSpeed;
- (void)setMaxNegVerticalSpeed:(FITFloat32)maxNegVerticalSpeed;
// MinHeartRate 
- (BOOL)isMinHeartRateValid;
- (FITUInt8)getMinHeartRate;
- (void)setMinHeartRate:(FITUInt8)minHeartRate;
// TimeInHrZone 
@property(readonly,nonatomic) uint8_t numTimeInHrZoneValues;
- (BOOL)isTimeInHrZoneValidforIndex : (uint8_t)index;
- (FITFloat32)getTimeInHrZoneforIndex : (uint8_t)index;
- (void)setTimeInHrZone:(FITFloat32)timeInHrZone forIndex:(uint8_t)index;
// TimeInSpeedZone 
@property(readonly,nonatomic) uint8_t numTimeInSpeedZoneValues;
- (BOOL)isTimeInSpeedZoneValidforIndex : (uint8_t)index;
- (FITFloat32)getTimeInSpeedZoneforIndex : (uint8_t)index;
- (void)setTimeInSpeedZone:(FITFloat32)timeInSpeedZone forIndex:(uint8_t)index;
// TimeInCadenceZone 
@property(readonly,nonatomic) uint8_t numTimeInCadenceZoneValues;
- (BOOL)isTimeInCadenceZoneValidforIndex : (uint8_t)index;
- (FITFloat32)getTimeInCadenceZoneforIndex : (uint8_t)index;
- (void)setTimeInCadenceZone:(FITFloat32)timeInCadenceZone forIndex:(uint8_t)index;
// TimeInPowerZone 
@property(readonly,nonatomic) uint8_t numTimeInPowerZoneValues;
- (BOOL)isTimeInPowerZoneValidforIndex : (uint8_t)index;
- (FITFloat32)getTimeInPowerZoneforIndex : (uint8_t)index;
- (void)setTimeInPowerZone:(FITFloat32)timeInPowerZone forIndex:(uint8_t)index;
// AvgLapTime 
- (BOOL)isAvgLapTimeValid;
- (FITFloat32)getAvgLapTime;
- (void)setAvgLapTime:(FITFloat32)avgLapTime;
// BestLapIndex 
- (BOOL)isBestLapIndexValid;
- (FITUInt16)getBestLapIndex;
- (void)setBestLapIndex:(FITUInt16)bestLapIndex;
// MinAltitude 
- (BOOL)isMinAltitudeValid;
- (FITFloat32)getMinAltitude;
- (void)setMinAltitude:(FITFloat32)minAltitude;
// PlayerScore 
- (BOOL)isPlayerScoreValid;
- (FITUInt16)getPlayerScore;
- (void)setPlayerScore:(FITUInt16)playerScore;
// OpponentScore 
- (BOOL)isOpponentScoreValid;
- (FITUInt16)getOpponentScore;
- (void)setOpponentScore:(FITUInt16)opponentScore;
// OpponentName 
- (BOOL)isOpponentNameValid;
- (NSString *)getOpponentName;
- (void)setOpponentName:(NSString *)opponentName;
// StrokeCount 
@property(readonly,nonatomic) uint8_t numStrokeCountValues;
- (BOOL)isStrokeCountValidforIndex : (uint8_t)index;
- (FITUInt16)getStrokeCountforIndex : (uint8_t)index;
- (void)setStrokeCount:(FITUInt16)strokeCount forIndex:(uint8_t)index;
// ZoneCount 
@property(readonly,nonatomic) uint8_t numZoneCountValues;
- (BOOL)isZoneCountValidforIndex : (uint8_t)index;
- (FITUInt16)getZoneCountforIndex : (uint8_t)index;
- (void)setZoneCount:(FITUInt16)zoneCount forIndex:(uint8_t)index;
// MaxBallSpeed 
- (BOOL)isMaxBallSpeedValid;
- (FITFloat32)getMaxBallSpeed;
- (void)setMaxBallSpeed:(FITFloat32)maxBallSpeed;
// AvgBallSpeed 
- (BOOL)isAvgBallSpeedValid;
- (FITFloat32)getAvgBallSpeed;
- (void)setAvgBallSpeed:(FITFloat32)avgBallSpeed;
// AvgVerticalOscillation 
- (BOOL)isAvgVerticalOscillationValid;
- (FITFloat32)getAvgVerticalOscillation;
- (void)setAvgVerticalOscillation:(FITFloat32)avgVerticalOscillation;
// AvgStanceTimePercent 
- (BOOL)isAvgStanceTimePercentValid;
- (FITFloat32)getAvgStanceTimePercent;
- (void)setAvgStanceTimePercent:(FITFloat32)avgStanceTimePercent;
// AvgStanceTime 
- (BOOL)isAvgStanceTimeValid;
- (FITFloat32)getAvgStanceTime;
- (void)setAvgStanceTime:(FITFloat32)avgStanceTime;
// AvgFractionalCadence 
- (BOOL)isAvgFractionalCadenceValid;
- (FITFloat32)getAvgFractionalCadence;
- (void)setAvgFractionalCadence:(FITFloat32)avgFractionalCadence;
// MaxFractionalCadence 
- (BOOL)isMaxFractionalCadenceValid;
- (FITFloat32)getMaxFractionalCadence;
- (void)setMaxFractionalCadence:(FITFloat32)maxFractionalCadence;
// TotalFractionalCycles 
- (BOOL)isTotalFractionalCyclesValid;
- (FITFloat32)getTotalFractionalCycles;
- (void)setTotalFractionalCycles:(FITFloat32)totalFractionalCycles;
// AvgTotalHemoglobinConc 
@property(readonly,nonatomic) uint8_t numAvgTotalHemoglobinConcValues;
- (BOOL)isAvgTotalHemoglobinConcValidforIndex : (uint8_t)index;
- (FITFloat32)getAvgTotalHemoglobinConcforIndex : (uint8_t)index;
- (void)setAvgTotalHemoglobinConc:(FITFloat32)avgTotalHemoglobinConc forIndex:(uint8_t)index;
// MinTotalHemoglobinConc 
@property(readonly,nonatomic) uint8_t numMinTotalHemoglobinConcValues;
- (BOOL)isMinTotalHemoglobinConcValidforIndex : (uint8_t)index;
- (FITFloat32)getMinTotalHemoglobinConcforIndex : (uint8_t)index;
- (void)setMinTotalHemoglobinConc:(FITFloat32)minTotalHemoglobinConc forIndex:(uint8_t)index;
// MaxTotalHemoglobinConc 
@property(readonly,nonatomic) uint8_t numMaxTotalHemoglobinConcValues;
- (BOOL)isMaxTotalHemoglobinConcValidforIndex : (uint8_t)index;
- (FITFloat32)getMaxTotalHemoglobinConcforIndex : (uint8_t)index;
- (void)setMaxTotalHemoglobinConc:(FITFloat32)maxTotalHemoglobinConc forIndex:(uint8_t)index;
// AvgSaturatedHemoglobinPercent 
@property(readonly,nonatomic) uint8_t numAvgSaturatedHemoglobinPercentValues;
- (BOOL)isAvgSaturatedHemoglobinPercentValidforIndex : (uint8_t)index;
- (FITFloat32)getAvgSaturatedHemoglobinPercentforIndex : (uint8_t)index;
- (void)setAvgSaturatedHemoglobinPercent:(FITFloat32)avgSaturatedHemoglobinPercent forIndex:(uint8_t)index;
// MinSaturatedHemoglobinPercent 
@property(readonly,nonatomic) uint8_t numMinSaturatedHemoglobinPercentValues;
- (BOOL)isMinSaturatedHemoglobinPercentValidforIndex : (uint8_t)index;
- (FITFloat32)getMinSaturatedHemoglobinPercentforIndex : (uint8_t)index;
- (void)setMinSaturatedHemoglobinPercent:(FITFloat32)minSaturatedHemoglobinPercent forIndex:(uint8_t)index;
// MaxSaturatedHemoglobinPercent 
@property(readonly,nonatomic) uint8_t numMaxSaturatedHemoglobinPercentValues;
- (BOOL)isMaxSaturatedHemoglobinPercentValidforIndex : (uint8_t)index;
- (FITFloat32)getMaxSaturatedHemoglobinPercentforIndex : (uint8_t)index;
- (void)setMaxSaturatedHemoglobinPercent:(FITFloat32)maxSaturatedHemoglobinPercent forIndex:(uint8_t)index;
// AvgLeftTorqueEffectiveness 
- (BOOL)isAvgLeftTorqueEffectivenessValid;
- (FITFloat32)getAvgLeftTorqueEffectiveness;
- (void)setAvgLeftTorqueEffectiveness:(FITFloat32)avgLeftTorqueEffectiveness;
// AvgRightTorqueEffectiveness 
- (BOOL)isAvgRightTorqueEffectivenessValid;
- (FITFloat32)getAvgRightTorqueEffectiveness;
- (void)setAvgRightTorqueEffectiveness:(FITFloat32)avgRightTorqueEffectiveness;
// AvgLeftPedalSmoothness 
- (BOOL)isAvgLeftPedalSmoothnessValid;
- (FITFloat32)getAvgLeftPedalSmoothness;
- (void)setAvgLeftPedalSmoothness:(FITFloat32)avgLeftPedalSmoothness;
// AvgRightPedalSmoothness 
- (BOOL)isAvgRightPedalSmoothnessValid;
- (FITFloat32)getAvgRightPedalSmoothness;
- (void)setAvgRightPedalSmoothness:(FITFloat32)avgRightPedalSmoothness;
// AvgCombinedPedalSmoothness 
- (BOOL)isAvgCombinedPedalSmoothnessValid;
- (FITFloat32)getAvgCombinedPedalSmoothness;
- (void)setAvgCombinedPedalSmoothness:(FITFloat32)avgCombinedPedalSmoothness;
// SportProfileName 
- (BOOL)isSportProfileNameValid;
- (NSString *)getSportProfileName;
- (void)setSportProfileName:(NSString *)sportProfileName;
// SportIndex 
- (BOOL)isSportIndexValid;
- (FITUInt8)getSportIndex;
- (void)setSportIndex:(FITUInt8)sportIndex;
// TimeStanding 
- (BOOL)isTimeStandingValid;
- (FITFloat32)getTimeStanding;
- (void)setTimeStanding:(FITFloat32)timeStanding;
// StandCount 
- (BOOL)isStandCountValid;
- (FITUInt16)getStandCount;
- (void)setStandCount:(FITUInt16)standCount;
// AvgLeftPco 
- (BOOL)isAvgLeftPcoValid;
- (FITSInt8)getAvgLeftPco;
- (void)setAvgLeftPco:(FITSInt8)avgLeftPco;
// AvgRightPco 
- (BOOL)isAvgRightPcoValid;
- (FITSInt8)getAvgRightPco;
- (void)setAvgRightPco:(FITSInt8)avgRightPco;
// AvgLeftPowerPhase 
@property(readonly,nonatomic) uint8_t numAvgLeftPowerPhaseValues;
- (BOOL)isAvgLeftPowerPhaseValidforIndex : (uint8_t)index;
- (FITFloat32)getAvgLeftPowerPhaseforIndex : (uint8_t)index;
- (void)setAvgLeftPowerPhase:(FITFloat32)avgLeftPowerPhase forIndex:(uint8_t)index;
// AvgLeftPowerPhasePeak 
@property(readonly,nonatomic) uint8_t numAvgLeftPowerPhasePeakValues;
- (BOOL)isAvgLeftPowerPhasePeakValidforIndex : (uint8_t)index;
- (FITFloat32)getAvgLeftPowerPhasePeakforIndex : (uint8_t)index;
- (void)setAvgLeftPowerPhasePeak:(FITFloat32)avgLeftPowerPhasePeak forIndex:(uint8_t)index;
// AvgRightPowerPhase 
@property(readonly,nonatomic) uint8_t numAvgRightPowerPhaseValues;
- (BOOL)isAvgRightPowerPhaseValidforIndex : (uint8_t)index;
- (FITFloat32)getAvgRightPowerPhaseforIndex : (uint8_t)index;
- (void)setAvgRightPowerPhase:(FITFloat32)avgRightPowerPhase forIndex:(uint8_t)index;
// AvgRightPowerPhasePeak 
@property(readonly,nonatomic) uint8_t numAvgRightPowerPhasePeakValues;
- (BOOL)isAvgRightPowerPhasePeakValidforIndex : (uint8_t)index;
- (FITFloat32)getAvgRightPowerPhasePeakforIndex : (uint8_t)index;
- (void)setAvgRightPowerPhasePeak:(FITFloat32)avgRightPowerPhasePeak forIndex:(uint8_t)index;
// AvgPowerPosition 
@property(readonly,nonatomic) uint8_t numAvgPowerPositionValues;
- (BOOL)isAvgPowerPositionValidforIndex : (uint8_t)index;
- (FITUInt16)getAvgPowerPositionforIndex : (uint8_t)index;
- (void)setAvgPowerPosition:(FITUInt16)avgPowerPosition forIndex:(uint8_t)index;
// MaxPowerPosition 
@property(readonly,nonatomic) uint8_t numMaxPowerPositionValues;
- (BOOL)isMaxPowerPositionValidforIndex : (uint8_t)index;
- (FITUInt16)getMaxPowerPositionforIndex : (uint8_t)index;
- (void)setMaxPowerPosition:(FITUInt16)maxPowerPosition forIndex:(uint8_t)index;
// AvgCadencePosition 
@property(readonly,nonatomic) uint8_t numAvgCadencePositionValues;
- (BOOL)isAvgCadencePositionValidforIndex : (uint8_t)index;
- (FITUInt8)getAvgCadencePositionforIndex : (uint8_t)index;
- (void)setAvgCadencePosition:(FITUInt8)avgCadencePosition forIndex:(uint8_t)index;
// MaxCadencePosition 
@property(readonly,nonatomic) uint8_t numMaxCadencePositionValues;
- (BOOL)isMaxCadencePositionValidforIndex : (uint8_t)index;
- (FITUInt8)getMaxCadencePositionforIndex : (uint8_t)index;
- (void)setMaxCadencePosition:(FITUInt8)maxCadencePosition forIndex:(uint8_t)index;
// EnhancedAvgSpeed 
- (BOOL)isEnhancedAvgSpeedValid;
- (FITFloat32)getEnhancedAvgSpeed;
- (void)setEnhancedAvgSpeed:(FITFloat32)enhancedAvgSpeed;
// EnhancedMaxSpeed 
- (BOOL)isEnhancedMaxSpeedValid;
- (FITFloat32)getEnhancedMaxSpeed;
- (void)setEnhancedMaxSpeed:(FITFloat32)enhancedMaxSpeed;
// EnhancedAvgAltitude 
- (BOOL)isEnhancedAvgAltitudeValid;
- (FITFloat32)getEnhancedAvgAltitude;
- (void)setEnhancedAvgAltitude:(FITFloat32)enhancedAvgAltitude;
// EnhancedMinAltitude 
- (BOOL)isEnhancedMinAltitudeValid;
- (FITFloat32)getEnhancedMinAltitude;
- (void)setEnhancedMinAltitude:(FITFloat32)enhancedMinAltitude;
// EnhancedMaxAltitude 
- (BOOL)isEnhancedMaxAltitudeValid;
- (FITFloat32)getEnhancedMaxAltitude;
- (void)setEnhancedMaxAltitude:(FITFloat32)enhancedMaxAltitude;
// AvgLevMotorPower 
- (BOOL)isAvgLevMotorPowerValid;
- (FITUInt16)getAvgLevMotorPower;
- (void)setAvgLevMotorPower:(FITUInt16)avgLevMotorPower;
// MaxLevMotorPower 
- (BOOL)isMaxLevMotorPowerValid;
- (FITUInt16)getMaxLevMotorPower;
- (void)setMaxLevMotorPower:(FITUInt16)maxLevMotorPower;
// LevBatteryConsumption 
- (BOOL)isLevBatteryConsumptionValid;
- (FITFloat32)getLevBatteryConsumption;
- (void)setLevBatteryConsumption:(FITFloat32)levBatteryConsumption;
// AvgVerticalRatio 
- (BOOL)isAvgVerticalRatioValid;
- (FITFloat32)getAvgVerticalRatio;
- (void)setAvgVerticalRatio:(FITFloat32)avgVerticalRatio;
// AvgStanceTimeBalance 
- (BOOL)isAvgStanceTimeBalanceValid;
- (FITFloat32)getAvgStanceTimeBalance;
- (void)setAvgStanceTimeBalance:(FITFloat32)avgStanceTimeBalance;
// AvgStepLength 
- (BOOL)isAvgStepLengthValid;
- (FITFloat32)getAvgStepLength;
- (void)setAvgStepLength:(FITFloat32)avgStepLength;
// TotalAnaerobicTrainingEffect 
- (BOOL)isTotalAnaerobicTrainingEffectValid;
- (FITFloat32)getTotalAnaerobicTrainingEffect;
- (void)setTotalAnaerobicTrainingEffect:(FITFloat32)totalAnaerobicTrainingEffect;
// AvgVam 
- (BOOL)isAvgVamValid;
- (FITFloat32)getAvgVam;
- (void)setAvgVam:(FITFloat32)avgVam;
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
// AvgRespirationRate 
- (BOOL)isAvgRespirationRateValid;
- (FITUInt8)getAvgRespirationRate;
- (void)setAvgRespirationRate:(FITUInt8)avgRespirationRate;
// MaxRespirationRate 
- (BOOL)isMaxRespirationRateValid;
- (FITUInt8)getMaxRespirationRate;
- (void)setMaxRespirationRate:(FITUInt8)maxRespirationRate;
// MinRespirationRate 
- (BOOL)isMinRespirationRateValid;
- (FITUInt8)getMinRespirationRate;
- (void)setMinRespirationRate:(FITUInt8)minRespirationRate;
// MinTemperature 
- (BOOL)isMinTemperatureValid;
- (FITSInt8)getMinTemperature;
- (void)setMinTemperature:(FITSInt8)minTemperature;
// O2Toxicity 
- (BOOL)isO2ToxicityValid;
- (FITUInt16)getO2Toxicity;
- (void)setO2Toxicity:(FITUInt16)o2Toxicity;
// DiveNumber 
- (BOOL)isDiveNumberValid;
- (FITUInt32)getDiveNumber;
- (void)setDiveNumber:(FITUInt32)diveNumber;
// TrainingLoadPeak 
- (BOOL)isTrainingLoadPeakValid;
- (FITFloat32)getTrainingLoadPeak;
- (void)setTrainingLoadPeak:(FITFloat32)trainingLoadPeak;
// EnhancedAvgRespirationRate 
- (BOOL)isEnhancedAvgRespirationRateValid;
- (FITFloat32)getEnhancedAvgRespirationRate;
- (void)setEnhancedAvgRespirationRate:(FITFloat32)enhancedAvgRespirationRate;
// EnhancedMaxRespirationRate 
- (BOOL)isEnhancedMaxRespirationRateValid;
- (FITFloat32)getEnhancedMaxRespirationRate;
- (void)setEnhancedMaxRespirationRate:(FITFloat32)enhancedMaxRespirationRate;
// EnhancedMinRespirationRate 
- (BOOL)isEnhancedMinRespirationRateValid;
- (FITFloat32)getEnhancedMinRespirationRate;
- (void)setEnhancedMinRespirationRate:(FITFloat32)enhancedMinRespirationRate;
// TotalGrit 
- (BOOL)isTotalGritValid;
- (FITFloat32)getTotalGrit;
- (void)setTotalGrit:(FITFloat32)totalGrit;
// TotalFlow 
- (BOOL)isTotalFlowValid;
- (FITFloat32)getTotalFlow;
- (void)setTotalFlow:(FITFloat32)totalFlow;
// JumpCount 
- (BOOL)isJumpCountValid;
- (FITUInt16)getJumpCount;
- (void)setJumpCount:(FITUInt16)jumpCount;
// AvgGrit 
- (BOOL)isAvgGritValid;
- (FITFloat32)getAvgGrit;
- (void)setAvgGrit:(FITFloat32)avgGrit;
// AvgFlow 
- (BOOL)isAvgFlowValid;
- (FITFloat32)getAvgFlow;
- (void)setAvgFlow:(FITFloat32)avgFlow;
// WorkoutFeel 
- (BOOL)isWorkoutFeelValid;
- (FITUInt8)getWorkoutFeel;
- (void)setWorkoutFeel:(FITUInt8)workoutFeel;
// WorkoutRpe 
- (BOOL)isWorkoutRpeValid;
- (FITUInt8)getWorkoutRpe;
- (void)setWorkoutRpe:(FITUInt8)workoutRpe;
// AvgSpo2 
- (BOOL)isAvgSpo2Valid;
- (FITUInt8)getAvgSpo2;
- (void)setAvgSpo2:(FITUInt8)avgSpo2;
// AvgStress 
- (BOOL)isAvgStressValid;
- (FITUInt8)getAvgStress;
- (void)setAvgStress:(FITUInt8)avgStress;
// SdrrHrv 
- (BOOL)isSdrrHrvValid;
- (FITUInt8)getSdrrHrv;
- (void)setSdrrHrv:(FITUInt8)sdrrHrv;
// RmssdHrv 
- (BOOL)isRmssdHrvValid;
- (FITUInt8)getRmssdHrv;
- (void)setRmssdHrv:(FITUInt8)rmssdHrv;
// TotalFractionalAscent 
- (BOOL)isTotalFractionalAscentValid;
- (FITFloat32)getTotalFractionalAscent;
- (void)setTotalFractionalAscent:(FITFloat32)totalFractionalAscent;
// TotalFractionalDescent 
- (BOOL)isTotalFractionalDescentValid;
- (FITFloat32)getTotalFractionalDescent;
- (void)setTotalFractionalDescent:(FITFloat32)totalFractionalDescent;
// AvgCoreTemperature 
- (BOOL)isAvgCoreTemperatureValid;
- (FITFloat32)getAvgCoreTemperature;
- (void)setAvgCoreTemperature:(FITFloat32)avgCoreTemperature;
// MinCoreTemperature 
- (BOOL)isMinCoreTemperatureValid;
- (FITFloat32)getMinCoreTemperature;
- (void)setMinCoreTemperature:(FITFloat32)minCoreTemperature;
// MaxCoreTemperature 
- (BOOL)isMaxCoreTemperatureValid;
- (FITFloat32)getMaxCoreTemperature;
- (void)setMaxCoreTemperature:(FITFloat32)maxCoreTemperature;

@end

NS_ASSUME_NONNULL_END
