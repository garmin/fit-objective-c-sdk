/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2025 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////


import XCTest

#if !canImport(ObjectiveC)
public func allTests() -> [XCTestCaseEntry] {
    return [
        testCase(FITTests.allTests),
        testCase(FITDateTests.allTests),
        testCase(ActivityEncode.allTests),
        testCase(DecodeWithBroadcasterTests.allTests),
        testCase(SwiftDecoderTests.allTests),
    ]
}
#endif
