// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2025 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////


import PackageDescription

let package = Package(
    name: "FIT",
    platforms: [
            .iOS(.v13),
            .macOS(.v10_15),
            .tvOS(.v13),
            .watchOS(.v6),
    ],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "FIT",
            targets: ["SwiftFIT","ObjcFIT"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .target(
            name: "cppfit",
            dependencies: [],
             resources: [
                .copy("include")],
            cSettings: [
                .headerSearchPath("./include/")]),
        .target(
            name: "ObjcFIT",
            dependencies: ["cppfit"],
            cSettings: [
                .headerSearchPath("../cppfit/include")]),
        .target(
            name: "SwiftFIT",
            dependencies: ["ObjcFIT"]),
        .testTarget(
            name: "FITTests",
            dependencies: ["SwiftFIT"]),
    ],
    cxxLanguageStandard: .gnucxx11
)

