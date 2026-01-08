/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2025 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////


import XCTest
@testable import ObjcFIT

final class DecodeWithBroadcasterTests: XCTestCase, FITMesgDelegate, FITFileIdMesgDelegate, FITActivityMesgDelegate, FITSessionMesgDelegate, FITLapMesgDelegate, FITRecordMesgDelegate, FITDeveloperFieldDefinitionDelegate {

    /**
     Test decoding a FIT file using the FITMessageBroadcaster and delegate methods.
     - Note: This mimics the decoding paradigm used by other FIT SDKs.
     - Note: Implement the delegate method for each message of interested, and connect it to the  Broadcaster.
     */
    func testDecoderUsingMessageBroadcaster() throws {
        let filename = ""

        try XCTSkipIf(filename.count == 0, "Set the path to the file to be decoded.")

        let decoder = FITDecoder()
        let broadcaster = FITMessageBroadcaster()
        decoder.mesgDelegate = broadcaster
        decoder.developerFieldDefinitionDelegate = self
        broadcaster.mesgDelegate = self
        broadcaster.fitFileIdMesgDelegate = self
        broadcaster.fitActivityMesgDelegate = self
        broadcaster.fitSessionMesgDelegate = self
        broadcaster.fitLapMesgDelegate = self
        broadcaster.fitRecordMesgDelegate = self

        XCTAssertTrue(decoder.isFIT(filename))
        XCTAssertTrue(decoder.checkIntegrity(filename))
        XCTAssertTrue(decoder.decodeFile(filename))
    }

    // This is the generic onMesg delegate that gets called for every message
    func onMesg(_ message: FITMessage) {
        if(message.getNum() == FITMesgNumFileId) {
            let fileIdMesg = FITFileIdMesg(message: message)
            XCTAssertNotEqual(FITFileInvalid,fileIdMesg.getType())
        }

        return
    }

    func onFileIdMesg(_ message: FITFileIdMesg) {
        XCTAssertEqual(FITMesgNumFileId,message.getNum())
        return
    }

    func onActivityMesg(_ message: FITActivityMesg) {
        XCTAssertEqual(FITMesgNumActivity,message.getNum())
    }

    func onSessionMesg(_ message: FITSessionMesg) {
        XCTAssertEqual(FITMesgNumSession,message.getNum())
    }

    func onLapMesg(_ message: FITLapMesg) {
        XCTAssertEqual(FITMesgNumLap,message.getNum())
    }

    func onRecordMesg(_ message: FITRecordMesg) {
        XCTAssertEqual(FITMesgNumRecord,message.getNum())
    }

    func onDeveloperFieldDefinition(_ developerFieldDef: FITDeveloperFieldDefinition) {
        XCTAssertTrue(developerFieldDef.isDefined())

        XCTAssertNotEqual(FITUInt8Invalid,developerFieldDef.fieldDescription.getDeveloperDataIndex())
        XCTAssertNotEqual(FITUInt8Invalid,developerFieldDef.fieldDescription.getFieldDefinitionNumber())
        XCTAssertNotEqual(FITUInt8Invalid,developerFieldDef.developer.getDeveloperDataIndex())
    }

    static var allTests = [
        ("testDecoder",testDecoderUsingMessageBroadcaster)
    ]
}
