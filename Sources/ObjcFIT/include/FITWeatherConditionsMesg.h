/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2023 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.126.0Release
// Tag = production/release/21.126.0-0-g0576dfe
/////////////////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>

#import "FITDate.h"
#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITWeatherConditionsMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// WeatherReport 
- (BOOL)isWeatherReportValid;
- (FITWeatherReport)getWeatherReport;
- (void)setWeatherReport:(FITWeatherReport)weatherReport;
// Temperature 
- (BOOL)isTemperatureValid;
- (FITSInt8)getTemperature;
- (void)setTemperature:(FITSInt8)temperature;
// Condition 
- (BOOL)isConditionValid;
- (FITWeatherStatus)getCondition;
- (void)setCondition:(FITWeatherStatus)condition;
// WindDirection 
- (BOOL)isWindDirectionValid;
- (FITUInt16)getWindDirection;
- (void)setWindDirection:(FITUInt16)windDirection;
// WindSpeed 
- (BOOL)isWindSpeedValid;
- (FITFloat32)getWindSpeed;
- (void)setWindSpeed:(FITFloat32)windSpeed;
// PrecipitationProbability 
- (BOOL)isPrecipitationProbabilityValid;
- (FITUInt8)getPrecipitationProbability;
- (void)setPrecipitationProbability:(FITUInt8)precipitationProbability;
// TemperatureFeelsLike 
- (BOOL)isTemperatureFeelsLikeValid;
- (FITSInt8)getTemperatureFeelsLike;
- (void)setTemperatureFeelsLike:(FITSInt8)temperatureFeelsLike;
// RelativeHumidity 
- (BOOL)isRelativeHumidityValid;
- (FITUInt8)getRelativeHumidity;
- (void)setRelativeHumidity:(FITUInt8)relativeHumidity;
// Location 
- (BOOL)isLocationValid;
- (NSString *)getLocation;
- (void)setLocation:(NSString *)location;
// ObservedAtTime 
- (BOOL)isObservedAtTimeValid;
- (FITDate *)getObservedAtTime;
- (void)setObservedAtTime:(FITDate *)observedAtTime;
// ObservedLocationLat 
- (BOOL)isObservedLocationLatValid;
- (FITSInt32)getObservedLocationLat;
- (void)setObservedLocationLat:(FITSInt32)observedLocationLat;
// ObservedLocationLong 
- (BOOL)isObservedLocationLongValid;
- (FITSInt32)getObservedLocationLong;
- (void)setObservedLocationLong:(FITSInt32)observedLocationLong;
// DayOfWeek 
- (BOOL)isDayOfWeekValid;
- (FITDayOfWeek)getDayOfWeek;
- (void)setDayOfWeek:(FITDayOfWeek)dayOfWeek;
// HighTemperature 
- (BOOL)isHighTemperatureValid;
- (FITSInt8)getHighTemperature;
- (void)setHighTemperature:(FITSInt8)highTemperature;
// LowTemperature 
- (BOOL)isLowTemperatureValid;
- (FITSInt8)getLowTemperature;
- (void)setLowTemperature:(FITSInt8)lowTemperature;

@end

NS_ASSUME_NONNULL_END
