/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2025 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////


import XCTest
@testable import ObjcFIT

final class FITDateTests: XCTestCase {

    let fitEpochOffsetFrom1970:TimeInterval = 631065600

    /**
     Test FIT Epoch method
     */
    func testFITDateEpcoh() {
        let fitEpoch = Date(timeIntervalSince1970: fitEpochOffsetFrom1970)
        XCTAssertEqual(fitEpoch.timeIntervalSince1970, FITDate.fitEpoch().timeIntervalSince1970)

        let fitTimeZero = FITDate(timestamp: 0)
        XCTAssertEqual(fitEpoch.timeIntervalSince1970, fitTimeZero.date.timeIntervalSince1970)
    }

    /**
     Test creating a FITDate from another FITDate
     */
    func testFITDateInitFromFITDate() {
        let date1 = FITDate()
        let date2 = FITDate(fitDate: date1)
        XCTAssertTrue(date1.isEqual(to:date2))
    }

    /**
     Test creating a NSDate from a FITDate
     */
    func testDateInitFromFITDate() {
        let date1 = FITDate()
        let date2 = FITDate.date(from: date1)
        XCTAssertTrue(date1.date.compare(date2) == ComparisonResult.orderedSame)
    }

    /**
     Test creating a FITDate from a NSDate
     */
    func testFITDateInitFromDate() {
        let date1 = Date()
        let date2 = FITDate(date: date1)
        XCTAssertEqual(date1.timeIntervalSince1970,date2.date.timeIntervalSince1970, accuracy: 0.001)
    }

    /**
     Test creating a NSDate from a FITDateTime (uint32, seconds sice FIT Epoch)
     */
    func testDateFromFITDateTime() {
        let date1 = FITDate.date(fromFITDateTime: 0)
        XCTAssertEqual(date1.timeIntervalSince1970,fitEpochOffsetFrom1970)
    }

    /**
     Test creating a NSDate from a FITDate
     */
    func testDateFromFITDate() {
        let date1 = FITDate.date(from: FITDate(timestamp: 0))
        XCTAssertEqual(date1.timeIntervalSince1970,fitEpochOffsetFrom1970)
    }

    /**
     Test creating a FITDate (uint32, seconds sice FIT Epoch) from NSDate
     */
    func testFITDateTimeFromDate() {
        let timestamp = FITDate.fitDateTime(from: Date.init(timeIntervalSince1970: fitEpochOffsetFrom1970))
        XCTAssertEqual(timestamp,0)
    }

    /**
     Test FITDate isEqual method
     */
    func testFITDateIsEqual() {
        let date0 = FITDate(timestamp:0)
        let dateZero = FITDate(timestamp:0)
        let future = FITDate(date: Date(timeIntervalSinceNow: 3600))
        let past = FITDate(date: Date(timeIntervalSinceNow: -3600))
        let now = FITDate()

        XCTAssertTrue(date0.isEqual(to: date0))
        XCTAssertTrue(date0.isEqual(to: dateZero))
        XCTAssertTrue(now.isEqual(to: now))
        XCTAssertFalse(now.isEqual(to: past))
        XCTAssertFalse(now.isEqual(to: future))
        XCTAssertFalse(future.isEqual(to: past))
        XCTAssertFalse(past.isEqual(to: future))
    }

    /**
     Test FITDate compare method
     */
    func testFITDateCompare() {
        let date0 = FITDate(timestamp:0)
        let dateZero = FITDate(timestamp:0)
        let future = FITDate(date: Date(timeIntervalSinceNow: 3600))
        let past = FITDate(date: Date(timeIntervalSinceNow: -3600))
        let now = FITDate()

        XCTAssertEqual(date0.compare(date0),.orderedSame)
        XCTAssertEqual(date0.compare(dateZero),.orderedSame)
        XCTAssertEqual(now.compare(now),.orderedSame)
        XCTAssertEqual(now.compare(future),.orderedAscending)
        XCTAssertEqual(now.compare(past),.orderedDescending)
        XCTAssertEqual(past.compare(future),.orderedAscending)
        XCTAssertEqual(future.compare(past),.orderedDescending)
    }

    /**
     Test FITDate isEqual method when there is a fractional timestamp value
     */
    func testFITDateCompareFractional() {
        let date1 = FITDate(timestamp:0, andFractionalTimestamp: 0.1234)
        let date2 = FITDate(timestamp:0, andFractionalTimestamp: 0.1234)
        let date3 = FITDate(timestamp:0, andFractionalTimestamp: 0.1233)
        let date4 = FITDate(timestamp:0, andFractionalTimestamp: 0.1235)

        XCTAssertEqual(date1.compare(date2),.orderedSame)
        XCTAssertEqual(date1.compare(date3),.orderedDescending)
        XCTAssertEqual(date1.compare(date4),.orderedAscending)
    }

    /**
     Test FITDate earlierDate and laterDate methods
     */
    func testFITDateLaterEarlier() {
        let future = FITDate(date: Date(timeIntervalSinceNow: 3600))
        let past = FITDate(date: Date(timeIntervalSinceNow: -3600))
        let now = FITDate()
        let nowAgain = FITDate(fitDate: now)

        XCTAssertEqual(now.laterDate(nowAgain),now)
        XCTAssertEqual(now.laterDate(future),future)
        XCTAssertNotEqual(now.earlierDate(future),future)

        XCTAssertEqual(now.earlierDate(nowAgain),now)
        XCTAssertEqual(now.earlierDate(past),past)
        XCTAssertNotEqual(now.laterDate(past),past)
    }

    /**
     Test FITDate dateByAddingTimeInterval and timeIntervalSinceDate methods
     */
    func testFITDateByAddingTimeInterval() {
        let now = FITDate()
        let timeIntervals:[TimeInterval] = [63.867,93.838,-88.128,67.717,-26.552,12.288,49.946,22.465,-40.075,44.625,
                                     5182.986,16156.018,38138.294,4400.336,21567.8,61023.729,58942.773,
                                     60720.439,2391.725,16122.16,31319.722,-11427.899,33577.889,28239.516,
                                     -50098.106,76352.624,15141.02,80859.832,65037.308,41086.8,36980.84,
                                     48910.366,-76923.858,63799.742,7797.835]

        for timeInterval in timeIntervals {
            let then = now.addingTimeInterval(timeInterval)
            let tiNowThen = now.timeInterval(since: then)
            let tiThenNow = then.timeInterval(since: now)

            XCTAssertEqual(tiNowThen,-timeInterval, accuracy: 0.001)
            XCTAssertEqual(tiThenNow,timeInterval, accuracy: 0.001)
        }
    }

    static var allTests = [
        ("testFITDateEpcoh",testFITDateEpcoh),
        ("testFITDateInitFromFITDate",testFITDateInitFromFITDate),
        ("testDateInitFromFITDate",testDateInitFromFITDate),
        ("testFITDateInitFromDate",testFITDateInitFromDate),
        ("testDateFromFITDateTime",testDateFromFITDateTime),
        ("testDateFromFITDate",testDateFromFITDate),
        ("testFITDateTimeFromDate",testFITDateTimeFromDate),
        ("testFITDateTimeFromDate",testFITDateTimeFromDate),
        ("testFITDateInitFromDate",testFITDateInitFromDate),
        ("testFITDateIsEqual",testFITDateIsEqual),
        ("testFITDateCompare",testFITDateCompare),
        ("testFITDateCompareFractional",testFITDateCompareFractional),
        ("testFITDateLaterEarlier",testFITDateLaterEarlier),
        ("testFITDateByAddingTimeInterval",testFITDateByAddingTimeInterval)
    ]
}
