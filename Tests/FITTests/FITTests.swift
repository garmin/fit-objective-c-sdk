/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2025 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////


import XCTest
@testable import ObjcFIT

final class FITTests: XCTestCase {

    func testEnumField() {
        let fileIdMesg = FITFileIdMesg()
        fileIdMesg.setType(FITFileActivity)
        XCTAssertEqual(FITFileActivity,fileIdMesg.getType())
    }

    func testStringField() {
        let fileId = FITFileIdMesg()

        let inputString = "ProductName ç おはよう"
        fileId.setProductName(inputString)
        let outputString = fileId.getProductName()

        XCTAssertEqual(inputString,outputString)
    }

    func testEncoder() {
        let documentsPathString = NSSearchPathForDirectoriesInDomains(.documentDirectory, .userDomainMask,true).first ?? ""
        let filename = documentsPathString + "/testEncoder.fit"

        let fileIdMesg = FITFileIdMesg()
        fileIdMesg.setManufacturer(FITManufacturerDevelopment)
        fileIdMesg.setProduct(0)
        fileIdMesg.setType(FITFileActivity)
        fileIdMesg.setProductName("Product Name")
        fileIdMesg.setTimeCreated(FITDate())

        let encoder = FITEncoder(version: .V20)
        encoder.open(filename)
        encoder.write(fileIdMesg)

        XCTAssertTrue(encoder.close())
    }

    func testScale() {
        let inputMeters:Float = 1609.34
        let sessionMesg = FITSessionMesg()
        sessionMesg.setMinAltitude(inputMeters)

        let outputMeters = sessionMesg.getMinAltitude()
        XCTAssertEqual(inputMeters,outputMeters,  accuracy: 0.09)
    }

    func testWorkoutStepMesgSubFields() {
        let distanceScale:Float = 100
        let timeScale:Float = 1000

        let inputTime:Float = 3654

        let workoutStepMesg = FITWorkoutStepMesg()
        XCTAssertFalse(workoutStepMesg.isDurationTimeValid())

        workoutStepMesg.setDurationType(FITWktStepDurationTime)
        XCTAssertFalse(workoutStepMesg.isDurationTimeValid())

        workoutStepMesg.setDurationTime(inputTime)
        XCTAssertTrue(workoutStepMesg.isDurationTimeValid())

        let outputTime = workoutStepMesg.getDurationTime()
        XCTAssertEqual(inputTime,outputTime)

        XCTAssertFalse(workoutStepMesg.isDurationDistanceValid())
        workoutStepMesg.setDurationType(FITWktStepDurationDistance)
        XCTAssertTrue(workoutStepMesg.isDurationDistanceValid())
        let outputDistance = workoutStepMesg.getDurationDistance()

        let outputDuration = Float(workoutStepMesg.getDurationValue())
        XCTAssertEqual(outputDistance,Float(outputDuration / distanceScale))
        XCTAssertEqual(outputTime,Float(outputDuration / timeScale))
    }

    func testArrayField() {
        let hrvMesg = FITHrvMesg()
        XCTAssertEqual(0,hrvMesg.numTimeValues)
        XCTAssertFalse(hrvMesg.isTimeValidforIndex(UInt8(0)))

        let intervals:[Float] = [1.0, 2.0, 3.0, 4.0, 5.0]

        for (index, interval) in intervals.enumerated() {
            hrvMesg.setTime(interval, for: UInt8(index))
        }
        XCTAssertEqual(intervals.count,Int(hrvMesg.numTimeValues))
        XCTAssertFalse(hrvMesg.isTimeValidforIndex(UInt8(intervals.count)))

        for (index, intervalIn) in intervals.enumerated() {
            XCTAssertTrue(hrvMesg.isTimeValidforIndex(UInt8(index)))
            let intervalOut = hrvMesg.getTimeforIndex(UInt8(index))
            XCTAssertEqual(intervalIn,intervalOut)
        }
    }

    func testDeveloperField() {
        // Create a Developer Data Id message, and a set fake values
        let developerIdMesg = FITDeveloperDataIdMesg()
        // "00010203-0405-0607-0809-0A0B0C0D0E0F")
        let appId: [UInt8] = [0x03,0x02,0x01,0x00,0x05,0x04,0x07,0x06,0x08,0x09,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f]
        for byte in appId {
            developerIdMesg.setApplicationId(byte, for: byte)
        }
        developerIdMesg.setDeveloperDataIndex(0)
        developerIdMesg.setApplicationVersion(110)

        // Create the Developer Data Field Descriptions
        let doughnutsFieldDescMesg = FITFieldDescriptionMesg()
        doughnutsFieldDescMesg.setDeveloperDataIndex(0)
        doughnutsFieldDescMesg.setFieldDefinitionNumber(0)
        doughnutsFieldDescMesg.setFitBaseTypeId(FITFitBaseTypeFloat32)
        doughnutsFieldDescMesg.setFieldName("Doughnuts Earned", for: 0)
        doughnutsFieldDescMesg.setUnits("Doughnuts", for: 0)
        doughnutsFieldDescMesg.setNativeMesgNum(FITMesgNumSession)

        let effortStringFieldDescMesg = FITFieldDescriptionMesg()
        effortStringFieldDescMesg.setDeveloperDataIndex(0)
        effortStringFieldDescMesg.setFieldDefinitionNumber(1)
        effortStringFieldDescMesg.setFitBaseTypeId(FITFitBaseTypeString)
        effortStringFieldDescMesg.setFieldName("Effort", for: 0)
        effortStringFieldDescMesg.setNativeMesgNum(FITMesgNumSession)

        let ubyteIn:UInt8 = 0xF
        let ushortIn:UInt16 = 0xF0F
        let uintIn:UInt32 = 0xFFFFF
        let float32In:Float32 = 1234.56789;
        let float64In:Double = 1234.56789;
        let stringIn:String = "Moderate";

        let doughnutsEarnedDevField = FITDeveloperField(fieldDescriptionMesg: doughnutsFieldDescMesg,andDeveloperDataIdMesg: developerIdMesg)
        doughnutsEarnedDevField.addValue(ubyteIn as NSNumber, for: 0)
        doughnutsEarnedDevField.addValue(ushortIn as NSNumber, for: 1)
        doughnutsEarnedDevField.addValue(uintIn as NSNumber, for: 2)
        doughnutsEarnedDevField.addValue(float32In as NSNumber, for: 3)
        doughnutsEarnedDevField.addValue(float64In as NSNumber, for: 4)

        let effortStringDevField = FITDeveloperField(fieldDescriptionMesg: effortStringFieldDescMesg,andDeveloperDataIdMesg: developerIdMesg)
        effortStringDevField.addStringValue(stringIn, for: 0);

        let ubyteOut = doughnutsEarnedDevField.getValueFor(0)
        let ushortOut = doughnutsEarnedDevField.getValueFor(1)
        let uintOut = doughnutsEarnedDevField.getValueFor(2)
        let float32Out = doughnutsEarnedDevField.getValueFor(3)
        let float64Out = doughnutsEarnedDevField.getValueFor(4)
        let stringOut = effortStringDevField.getStringValue(for: 0)

        XCTAssertEqual(ubyteIn, ubyteOut.uint8Value)
        XCTAssertEqual(ushortIn, ushortOut.uint16Value)
        XCTAssertEqual(uintIn, uintOut.uint32Value)
        XCTAssertEqual(float32In, float32Out.floatValue)
        XCTAssertEqual(float64In, float64Out.doubleValue, accuracy: 0.0001)
        XCTAssertEqual(stringIn, stringOut)
    }

    func testCopyingDeveloperField() {
        let developerIdMesg = FITDeveloperDataIdMesg()
        developerIdMesg.setDeveloperDataIndex(0)

        let fieldDescriptionMesg = FITFieldDescriptionMesg()
        fieldDescriptionMesg.setDeveloperDataIndex(0)
        fieldDescriptionMesg.setFieldDefinitionNumber(0)
        fieldDescriptionMesg.setFitBaseTypeId(FITFitBaseTypeFloat32)
        fieldDescriptionMesg.setFieldName("Dev Field", for: 0)

        let devField = FITDeveloperField(fieldDescriptionMesg: fieldDescriptionMesg, andDeveloperDataIdMesg: developerIdMesg)
        devField.addValue(0xFFFF as NSNumber, for: 0)

        let originalRecord = FITRecordMesg()
        originalRecord.add(devField)

        let copiedRecord = FITRecordMesg(message: originalRecord)

        let originalDevField = originalRecord.getDeveloperFields().first as! FITDeveloperField
        let copiedDevField = copiedRecord.getDeveloperFields().first as! FITDeveloperField

        XCTAssertNotNil(originalDevField.definition)
        XCTAssertNotNil(copiedDevField.definition)

        XCTAssertNotNil(originalDevField.description)
        XCTAssertNotNil(copiedDevField.description)

        XCTAssertNotNil(originalDevField.developer)
        XCTAssertNotNil(copiedDevField.developer)
    }

    static var allTests = [
        ("testEnumField",testEnumField),
        ("testStringField",testStringField),
        ("testEncoder",testEncoder),
        ("testScale",testScale),
        ("testWorkoutStepMesgSubFields",testWorkoutStepMesgSubFields),
        ("testArrayField",testArrayField),
        ("testDeveloperField",testDeveloperField),
        ("testCopyingDeveloperField",testCopyingDeveloperField)
    ]
}
