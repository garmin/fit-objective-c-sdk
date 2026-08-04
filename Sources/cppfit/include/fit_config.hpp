/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2026 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_CONFIG_HPP)
#define FIT_CONFIG_HPP


#if defined(__cplusplus)
   extern "C" {
#endif

#define FIT_USE_STDINT_H            // Define to use stdint.h types. By default size in bytes of integer types assumed to be char=1, short=2, long=4.

#define FIT_WIDE_CHAR_SIZE       4     // Define the size of a wide character (1, 2 or 4 bytes).
                                       // Character encoding also defined by size.   1: UTF-8   2: UTF-16   4: UTF-32
//#define FIT_CPP_INCLUDE_C // Define to include C definitions in C++ header file.  Allows C and C++ code to be compiled together.

//#define FIT_ENABLE_LEGACY_FLOAT_CASTS // Enable to allow compiler-specific implicit float to unsigned integer casts. This is the default behavior of the FIT SDK prior to version 21.209.0

#if defined(__cplusplus)
   }
#endif

#endif // !defined(FIT_CONFIG_HPP)
