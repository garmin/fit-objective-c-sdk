/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2025 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////


import XCTest

import FITTests
import ActivityEncodeTests
import DecodeEasyMethodTests
import SwiftDecoderTests

var tests = [XCTestCaseEntry]()
tests += FITTests.allTests()
tests += FITDateTests.allTests()
tests += ActivityEncode.allTests()
tests += DecodeEasyMethodTests.allTests()
tests += SwiftDecoderTests.allTests()
XCTMain(tests)
