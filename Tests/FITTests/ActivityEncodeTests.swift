/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2025 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////


import XCTest
@testable import ObjcFIT

final class ActivityEncodeTests: XCTestCase {

    func testTimeBasedActivity() {
        let twoPI:Double = Double.pi * 2.0
        let semicirclesPerMeter:Double = 107.173
        let fileName = "SwiftActivityEncodeRecipe.fit"

        var messages:[FITMessage] = []

        // The starting timestamp for the activity
        let startTime = FITDate()

        // Timer Events are a BEST PRACTICE for FIT ACTIVITY files
        let eventMesgStart = FITEventMesg()
        eventMesgStart.setTimestamp(startTime)
        eventMesgStart.setEvent(FITEventTimer)
        eventMesgStart.setEventType(FITEventTypeStart)
        messages.append(eventMesgStart)

        // Create the Developer Id message for the developer data fields.
        let developerIdMesg = FITDeveloperDataIdMesg();
        // It is a BEST PRACTICE to reuse the same Guid for all FIT files created by your platform
        // "00010203-0405-0607-0809-0A0B0C0D0E0F"
        let appId: [UInt8] = [0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f]
        for byte in appId {
            developerIdMesg.setApplicationId(byte, for: byte)
        }

        developerIdMesg.setDeveloperDataIndex(0);
        developerIdMesg.setApplicationVersion(110);
        messages.append(developerIdMesg);

        // Create the Developer Data Field Descriptions
        let doughnutsFieldDescMesg = FITFieldDescriptionMesg();
        doughnutsFieldDescMesg.setDeveloperDataIndex(0);
        doughnutsFieldDescMesg.setFieldDefinitionNumber(0);
        doughnutsFieldDescMesg.setFitBaseTypeId(FITFitBaseTypeFloat32);
        doughnutsFieldDescMesg.setFieldName("Doughnuts Earned", for:0);
        doughnutsFieldDescMesg.setUnits("doughnuts", for:0);
        doughnutsFieldDescMesg.setNativeMesgNum(FITMesgNumSession);
        messages.append(doughnutsFieldDescMesg);

        let hrFieldDescMesg = FITFieldDescriptionMesg();
        hrFieldDescMesg.setDeveloperDataIndex(0);
        hrFieldDescMesg.setFieldDefinitionNumber(1);
        hrFieldDescMesg.setFitBaseTypeId(FITFitBaseTypeUint8);
        hrFieldDescMesg.setFieldName("Heart Rate", for:0);
        hrFieldDescMesg.setUnits("bpm", for:0);
        hrFieldDescMesg.setNativeFieldNum(FITRecordMesgFieldDefNumHeartRate.rawValue);
        hrFieldDescMesg.setNativeMesgNum(FITMesgNumRecord);
        messages.append(hrFieldDescMesg);

        // Every FIT ACTIVITY file MUST contain Record messages
        var timestamp = FITDate(fitDate: startTime)

        // Create one hour (3600 seconds) of Record data
        for i in 0...3600 {
            // Create a new Record message and set the timestamp
            let recordMesg = FITRecordMesg();
            recordMesg.setTimestamp(timestamp);

            // Fake Record Data of Various Signal Patterns
            recordMesg.setDistance(FITFloat32(i)); // Ramp
            recordMesg.setSpeed(1); // Flatline
            recordMesg.setHeartRate(FITUInt8((sin(twoPI * (0.01 * Double(i) + 10)) + 1.0) * 127.0)); // Sine
            recordMesg.setCadence(FITUInt8(i % 255)); // Sawtooth
            recordMesg.setPower(FITUInt16((i % 255) < 127 ? 150 : 250)); // Square
            recordMesg.setAltitude(FITFloat32(abs(Float(i).truncatingRemainder(dividingBy: 255.0) - 127.0))); // Triangle
            recordMesg.setPositionLat(0);
            recordMesg.setPositionLong(FITSInt32(round(Double(i) * semicirclesPerMeter)));

            // Add a Developer Field to the Record Message
            let hrDevField = FITDeveloperField(fieldDescriptionMesg: hrFieldDescMesg, andDeveloperDataIdMesg: developerIdMesg);
            hrDevField.addValue(NSNumber(value: ((sin(twoPI * (0.01 * Double(i) + 10)) + 1.0) * 127.0)), for: 0);
            recordMesg.add(hrDevField);

            messages.append(recordMesg);

            // Increment the timestamp by one second
            timestamp = timestamp.addingTimeInterval(1);
        }

        // Timer Events are a BEST PRACTICE for FIT ACTIVITY files
        let eventMesgStop = FITEventMesg();
        eventMesgStop.setTimestamp(timestamp);
        eventMesgStop.setEvent(FITEventTimer);
        eventMesgStop.setEventType(FITEventTypeStopAll);
        messages.append(eventMesgStop);

        // Every FIT ACTIVITY file MUST contain at least one Lap message
        let lapMesg = FITLapMesg();
        lapMesg.setMessageIndex(0);
        lapMesg.setTimestamp(timestamp);
        lapMesg.setStartTime(startTime);
        lapMesg.setTotalElapsedTime(FITFloat32(timestamp.timestamp - startTime.timestamp));
        lapMesg.setTotalTimerTime(FITFloat32(timestamp.timestamp - startTime.timestamp));
        messages.append(lapMesg);

        // Every FIT ACTIVITY file MUST contain at least one Session message
        let sessionMesg = FITSessionMesg();
        sessionMesg.setMessageIndex(0);
        sessionMesg.setTimestamp(timestamp);
        sessionMesg.setStartTime(startTime);
        sessionMesg.setTotalElapsedTime(FITFloat32(timestamp.timestamp - startTime.timestamp));
        sessionMesg.setTotalTimerTime(FITFloat32(timestamp.timestamp - startTime.timestamp));
        sessionMesg.setSport(FITSportStandUpPaddleboarding);
        sessionMesg.setSubSport(FITSubSportGeneric);
        sessionMesg.setFirstLapIndex(0);
        sessionMesg.setNumLaps(1);

        // Add a Developer Field to the Session message
        let doughnutsEarnedDevField = FITDeveloperField(fieldDescriptionMesg: doughnutsFieldDescMesg, andDeveloperDataIdMesg: developerIdMesg);
        doughnutsEarnedDevField.addValue(NSNumber(value: sessionMesg.getTotalElapsedTime() / 1200.0), for: 0);
        sessionMesg.add(doughnutsEarnedDevField);
        messages.append(sessionMesg);

        // Every FIT ACTIVITY file MUST contain EXACTLY one Activity message
        let activityMesg = FITActivityMesg();
        activityMesg.setTimestamp(timestamp);
        activityMesg.setTotalTimerTime(sessionMesg.getTotalTimerTime());
        activityMesg.setNumSessions(1);
        let timezoneOffset = TimeZone.current.secondsFromGMT();
        activityMesg.setLocalTimestamp(FITLocalDateTime(Int(timestamp.timestamp) + timezoneOffset));
        messages.append(activityMesg);

        createActivityFile(messages: messages, fileName: fileName, startTime: startTime);
    }

    func testLapSwimActivity() {
        // Example Swim Data representing a 500 yard pool swim using different strokes and drills.
        let swimData:[[String:Any]] = [
            ["type": "Active","duration":20,"stroke":"Freestyle","strokes":30],
            ["type": "Active","duration":25,"stroke":"Freestyle","strokes":20],
            ["type": "Active","duration":30,"stroke":"Freestyle","strokes":10],
            ["type": "Active","duration":35,"stroke":"Freestyle","strokes":20],
            ["type": "Lap"],
            ["type": "Idle","duration":60],
            ["type": "Lap"],
            ["type": "Active","duration":20,"stroke":"Backstroke","strokes":30],
            ["type": "Active","duration":25,"stroke":"Backstroke","strokes":20],
            ["type": "Active","duration":30,"stroke":"Backstroke","strokes":10],
            ["type": "Active","duration":35,"stroke":"Backstroke","strokes":20],
            ["type": "Lap"],
            ["type": "Idle","duration":60],
            ["type": "Lap"],
            ["type": "Active","duration":20,"stroke":"Breaststroke","strokes":30],
            ["type": "Active","duration":25,"stroke":"Breaststroke","strokes":20],
            ["type": "Active","duration":30,"stroke":"Breaststroke","strokes":10],
            ["type": "Active","duration":35,"stroke":"Breaststroke","strokes":20],
            ["type": "Lap"],
            ["type": "Idle","duration":60],
            ["type": "Lap"],
            ["type": "Active","duration":20,"stroke":"Butterfly","strokes":30],
            ["type": "Active","duration":25,"stroke":"Butterfly","strokes":20],
            ["type": "Active","duration":30,"stroke":"Butterfly","strokes":10],
            ["type": "Active","duration":35,"stroke":"Butterfly","strokes":20],
            ["type": "Lap"],
            ["type": "Idle","duration":60],
            ["type": "Lap"],
            ["type": "Active","duration":40,"stroke":"Drill"],
            ["type": "Active","duration":40,"stroke":"Drill"],
            ["type": "Active","duration":40,"stroke":"Drill"],
            ["type": "Active","duration":40,"stroke":"Drill"],
            ["type": "Lap"]
        ]

        let lengthTypes = [
            "Invalid":FITLengthTypeInvalid,
            "Idle":FITLengthTypeIdle,
            "Active":FITLengthTypeActive
        ]

        let strokeTypes = [
            "Invalid":FITSwimStrokeInvalid,
            "Freestyle":FITSwimStrokeFreestyle,
            "Backstroke":FITSwimStrokeBackstroke,
            "Breaststroke":FITSwimStrokeBreaststroke,
            "Butterfly":FITSwimStrokeButterfly,
            "Drill":FITSwimStrokeDrill,
            "Mixed":FITSwimStrokeMixed,
            "Im":FITSwimStrokeIm
        ]

        let fileName = "SwiftActivityEncodeRecipeLapSwim.fit"
        var messages:[FITMessage] = []

        // The starting timestamp for the activity
        let startTime = FITDate()

        // Timer Events are a BEST PRACTICE for FIT ACTIVITY files
        let eventMesgStart = FITEventMesg()
        eventMesgStart.setTimestamp(startTime)
        eventMesgStart.setEvent(FITEventTimer)
        eventMesgStart.setEventType(FITEventTypeStart)
        messages.append(eventMesgStart)

        //
        // Create a Length or Lap message for each item in the sample swim data. Calculate
        // distance, duration, and stroke count for each lap and the overall session.
        //

        // Session Accumulators
        var sessionTotalElapsedTime:Float = 0;
        var sessionDistance:Float = 0;
        var sessionNumLengths:UInt16 = 0;
        var sessionNumActiveLengths:UInt16 = 0;
        var sessionTotalStrokes:UInt32 = 0;

        // Lap accumulators
        var lapTotalElapsedTime:Float = 0;
        var lapDistance:Float = 0;
        var lapNumActiveLengths:UInt16 = 0;
        var lapNumLengths:UInt16 = 0;
        var lapFirstLengthIndex:UInt16 = 0;
        var lapTotalStrokes:UInt32 = 0;
        var lapStartTime = FITDate(fitDate: startTime);

        let poolLength:Float = 22.86;
        let poolLengthUnit = FITDisplayMeasureStatute;
        var timestamp = FITDate(fitDate: startTime);
        var messageIndex:UInt16 = 0;

        for swimLength in swimData {
            let type = swimLength["type"] as! String;

            if (type == "Lap") {
                // Create a Lap message, set its fields, and write it to the file
                let lapMesg = FITLapMesg();
                lapMesg.setTimestamp(timestamp);
                lapMesg.setStartTime(lapStartTime);
                lapMesg.setTotalElapsedTime(lapTotalElapsedTime);
                lapMesg.setTotalTimerTime(lapTotalElapsedTime);
                lapMesg.setTotalDistance(lapDistance);
                lapMesg.setFirstLengthIndex(lapFirstLengthIndex);
                lapMesg.setNumActiveLengths(lapNumActiveLengths);
                lapMesg.setNumLengths(lapNumLengths);
                lapMesg.setTotalStrokes(FITUInt32(lapTotalStrokes));
                lapMesg.setAvgStrokeDistance(lapDistance / Float(lapTotalStrokes));
                lapMesg.setSport(FITSportSwimming);
                lapMesg.setSubSport(FITSubSportLapSwimming);
                messages.append(lapMesg);

                // Reset the Lap accumulators
                lapFirstLengthIndex = messageIndex;
                lapNumActiveLengths = 0;
                lapNumLengths = 0;
                lapTotalElapsedTime = 0;
                lapDistance = 0;
                lapTotalStrokes = 0;
                lapStartTime = FITDate(fitDate: timestamp);
            }
            else {
                let duration = Float(swimLength["duration"] as! Int);
                let lengthType = lengthTypes[type] ?? FITLengthTypeInvalid;

                // Create a Length message and its fields
                let lengthMesg = FITLengthMesg();
                lengthMesg.setMessageIndex(messageIndex);
                lengthMesg.setStartTime(timestamp);
                lengthMesg.setTotalElapsedTime(duration)
                lengthMesg.setTotalTimerTime(duration)
                lengthMesg.setLengthType(lengthType);

                timestamp = timestamp.addingTimeInterval(TimeInterval(duration));
                lengthMesg.setTimestamp(timestamp);

                // Create the Record message that pairs with the Length Message
                let recordMesg = FITRecordMesg();
                recordMesg.setTimestamp(timestamp);
                recordMesg.setDistance(sessionDistance + poolLength);

                // Is this an Active Length?
                if (lengthType == FITLengthTypeActive) {
                    // Get the Active data from the model
                    let stroke = swimLength.keys.contains("stroke") ? swimLength["stroke"] as! String : "Invalid";
                    let strokes = swimLength.keys.contains("strokes") ? UInt32(swimLength["strokes"] as! Int) : 0;
                    let swimStroke = strokeTypes[stroke] ?? FITSwimStrokeInvalid;

                    // Set the Active data on the Length Message
                    lengthMesg.setAvgSpeed(poolLength / duration);
                    lengthMesg.setSwimStroke(swimStroke);

                    if (strokes > 0)
                    {
                        lengthMesg.setTotalStrokes(FITUInt16(strokes));
                        lengthMesg.setAvgSwimmingCadence(FITUInt8((Float(strokes) * 60) / duration));
                    }

                    // Set the Active data on the Record Message
                    recordMesg.setSpeed(poolLength / duration);
                    if (strokes > 0)
                    {
                        recordMesg.setCadence(FITUInt8((Float(strokes) * 60) / duration));
                    }

                    // Increment the "Active" accumulators
                    sessionNumActiveLengths += 1;
                    lapNumActiveLengths += 1;
                    sessionDistance += poolLength;
                    lapDistance += poolLength;
                    sessionTotalStrokes += strokes;
                    lapTotalStrokes += strokes;
                }

                // Write the messages to the file
                messages.append(recordMesg);
                messages.append(lengthMesg);

                // Increment the "Total" accumulators
                sessionTotalElapsedTime += duration;
                lapTotalElapsedTime += duration;
                sessionNumLengths += 1;
                lapNumLengths += 1;
                messageIndex += 1;
            }
        }

        // Timer Events are a BEST PRACTICE for FIT ACTIVITY files
        let eventMesgStop = FITEventMesg();
        eventMesgStop.setTimestamp(timestamp);
        eventMesgStop.setEvent(FITEventTimer);
        eventMesgStop.setEventType(FITEventTypeStopAll);
        messages.append(eventMesgStop);

        // Every FIT ACTIVITY file MUST contain at least one Session message
        let sessionMesg = FITSessionMesg();
        sessionMesg.setTimestamp(timestamp);
        sessionMesg.setStartTime(startTime);
        sessionMesg.setTotalElapsedTime(sessionTotalElapsedTime);
        sessionMesg.setTotalTimerTime(sessionTotalElapsedTime);
        sessionMesg.setTotalDistance(sessionDistance);
        sessionMesg.setSport(FITSportSwimming);
        sessionMesg.setSubSport(FITSubSportLapSwimming);
        sessionMesg.setFirstLapIndex(0);
        sessionMesg.setNumLaps(1);
        sessionMesg.setPoolLength(poolLength);
        sessionMesg.setPoolLengthUnit(poolLengthUnit);
        sessionMesg.setNumLengths(sessionNumLengths);
        sessionMesg.setNumActiveLengths(sessionNumActiveLengths);
        sessionMesg.setTotalStrokes(sessionTotalStrokes);
        sessionMesg.setAvgStrokeDistance(sessionDistance / Float(sessionTotalStrokes));
        messages.append(sessionMesg);

        // Every FIT ACTIVITY file MUST contain EXACTLY one Activity message
        let activityMesg = FITActivityMesg();
        activityMesg.setTimestamp(timestamp);
        activityMesg.setTotalTimerTime(sessionMesg.getTotalTimerTime());
        activityMesg.setNumSessions(1);
        let timezoneOffset = TimeZone.current.secondsFromGMT();
        activityMesg.setLocalTimestamp(FITLocalDateTime(Int(timestamp.timestamp) + timezoneOffset));
        messages.append(activityMesg);

        createActivityFile(messages: messages, fileName: fileName, startTime: startTime);
    }

    func createActivityFile(messages:[FITMessage], fileName:String, startTime:FITDate) {
        let documentsPathString = NSSearchPathForDirectoriesInDomains(.documentDirectory, .userDomainMask,true).first ?? ""
        let filePath = documentsPathString + "/" + fileName

        // The combination of file type, manufacturer id, product id, and serial number should be unique.
        // When available, a non-random serial number should be used.
        let fileType = FITFileActivity;
        let manufacturerId = FITManufacturerDevelopment;
        let productId:UInt16 = 0;
        let softwareVersion:Float32 = 1.0;
        let serialNumber = UInt32.random(in: 1..<UInt32.max)

        // Every FIT file MUST contain a File ID message
        let fileIdMesg = FITFileIdMesg();
        fileIdMesg.setType(fileType);
        fileIdMesg.setManufacturer(manufacturerId);
        fileIdMesg.setProduct(productId);
        fileIdMesg.setTimeCreated(startTime);
        fileIdMesg.setSerialNumber(serialNumber);

        // A Device Info message is a BEST PRACTICE for FIT ACTIVITY files
        let deviceInfoMesg = FITDeviceInfoMesg();
        deviceInfoMesg.setDeviceIndex(FITDeviceIndexCreator);
        deviceInfoMesg.setManufacturer(manufacturerId);
        deviceInfoMesg.setProduct(productId);
        deviceInfoMesg.setProductName("FIT Cookbook"); // Max 20 Chars
        deviceInfoMesg.setSerialNumber(serialNumber);
        deviceInfoMesg.setSoftwareVersion(softwareVersion);
        deviceInfoMesg.setTimestamp(startTime);

        // Create a FIT Encode object
        let encoder = FITEncoder(version: .V20)

        // Write the FIT header to the output stream
        XCTAssertTrue(encoder.open(filePath))

        // Write the messages to the file, in the proper sequence
        encoder.write(fileIdMesg)
        encoder.write(deviceInfoMesg)

        for mesg in messages {
            encoder.write(mesg)
        }

        // Update the data size in the header and calculate the CRC
        XCTAssertTrue(encoder.close())
    }

    static var allTests = [
        ("testTimeBasedActivity", testTimeBasedActivity),
    ]
}
