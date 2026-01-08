/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2025 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////


import XCTest
@testable import ObjcFIT
@testable import SwiftFIT

final class SwiftDecoderTests: XCTestCase {

    /**
     Test decoding a FIT file using the FITListener and FITMessages classes.
     - Note: FITListener is a Swift class that implements each message type's delegate.
     - Note: FITMessages is a Swift class that contains a mutable array for each message type.
     - Attention: FITListener routes the decoded messages to their corresponding array in FITMessages. After the file is decoded, all of the messages will be in an instance of a FITMessages class.
     */
    func testDecoder() throws {
        let filename = ""

        try XCTSkipIf(filename.count == 0, "Set the path to the file to be decoded.")

        let decoder = FITDecoder()
        let listener = FITListener()
        decoder.mesgDelegate = listener

        XCTAssertTrue(decoder.decodeFile(filename))

        let messages = listener.messages;
        XCTAssertEqual(messages.getFileIdMesgs().count,1)
    }

    func testListener() {
        let listener = FITListener()
        listener.onMesg(FITFileIdMesg())
        listener.onMesg(FITActivityMesg())
        listener.onMesg(FITSessionMesg())
        listener.onMesg(FITLapMesg())
        listener.onMesg(FITRecordMesg())

        XCTAssertEqual(listener.messages.getFileIdMesgs().count,1)
        XCTAssertEqual(listener.messages.getActivityMesgs().count,1)
        XCTAssertEqual(listener.messages.getSessionMesgs().count,1)
        XCTAssertEqual(listener.messages.getLapMesgs().count,1)
        XCTAssertEqual(listener.messages.getRecordMesgs().count,1)
    }


    static var allTests = [
        ("testDecoder",testDecoder),
        ("testDecoder",testListener)
    ]
}
