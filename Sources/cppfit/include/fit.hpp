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




#if !defined(FIT_HPP)
#define FIT_HPP
#include <map>

#include "fit_config.hpp"
#if defined(FIT_CPP_INCLUDE_C)
    #include "fit.h"
#endif

#include <string>
#include <cstring>

#if !defined(FIT_CPP_INCLUDE_C)

#if defined(FIT_USE_STDINT_H)
   #include <stdint.h>
#endif

#endif // !defined(FIT_CPP_INCLUDE_C)

#ifdef __GNUC__
    #define DEPRECATED(mesg) __attribute__((deprecated(mesg)))
#elif defined(_MSC_VER)
    #define DEPRECATED(mesg) __declspec(deprecated(mesg))
#else
#define DEPRECATED(mesg)
#endif

#if !defined(FIT_CPP_INCLUDE_C)

namespace fit
{
#if defined(FIT_USE_STDINT_H)
   typedef ::int8_t           int8_t;
   typedef ::int16_t          int16_t;
   typedef ::int32_t          int32_t;
   typedef ::int64_t          int64_t;
   typedef ::uint8_t          uint8_t;
   typedef ::uint16_t         uint16_t;
   typedef ::uint32_t         uint32_t;
   typedef ::uint64_t         uint64_t;
#else
   typedef unsigned char        uint8_t;
   typedef unsigned short       uint16_t;
   typedef unsigned long        uint32_t;
   typedef unsigned long long   uint64_t;
   typedef signed char          int8_t;
   typedef signed short         int16_t;
   typedef signed long          int32_t;
   typedef signed long long     int64_t;
#endif
}

///////////////////////////////////////////////////////////////////////
// Version
///////////////////////////////////////////////////////////////////////
#endif // !defined(FIT_CPP_INCLUDE_C)

// Non-backwards compatible changes. Decode compatible with this version and earlier.
#define FIT_PROTOCOL_VERSION_MAJOR           ::fit::versionMap.at( ::fit::ProtocolVersion::V20 ).GetMajorVersion()
// Backwards compatible changes.
#define FIT_PROTOCOL_VERSION_MINOR           ::fit::versionMap.at( ::fit::ProtocolVersion::V20 ).GetMinorVersion()
#define FIT_PROTOCOL_VERSION_MAJOR_SHIFT     4
#define FIT_PROTOCOL_VERSION_MAJOR_MASK      ((FIT_UINT8) (0x0F << FIT_PROTOCOL_VERSION_MAJOR_SHIFT))
#define FIT_PROTOCOL_VERSION_MINOR_MASK      ((FIT_UINT8) 0x0F)
#define FIT_PROTOCOL_VERSION                 ::fit::versionMap.at( ::fit::ProtocolVersion::V20 ).GetVersionByte()

#define FIT_PROFILE_VERSION_MAJOR            21
#define FIT_PROFILE_VERSION_MINOR            126
#define FIT_PROFILE_VERSION_SCALE            1000
#define FIT_PROFILE_VERSION                  ((FIT_UINT16) (FIT_PROFILE_VERSION_MAJOR * FIT_PROFILE_VERSION_SCALE + FIT_PROFILE_VERSION_MINOR))

#define FIT_HEADER_SIZE_NO_CRC               12
#define FIT_HEADER_SIZE_WITH_CRC             14

///////////////////////////////////////////////////////////////////////
// Type Definitions
///////////////////////////////////////////////////////////////////////
#if !defined(FIT_CPP_INCLUDE_C)

#define FIT_ANTFS_FILE_DATA_TYPE    128

#define FIT_BASE_TYPE_ENDIAN_FLAG   ((FIT_UINT8)0x80)
#define FIT_BASE_TYPE_RESERVED      ((FIT_UINT8)0x60)
#define FIT_BASE_TYPE_NUM_MASK      ((FIT_UINT8)0x1F)

typedef ::fit::uint8_t FIT_ENUM;
typedef const FIT_ENUM * FIT_CONST_ENUM_PTR;
#define FIT_ENUM_INVALID            ((FIT_ENUM)0xFF)
#define FIT_BASE_TYPE_ENUM          ((FIT_UINT8)0x00)

typedef ::fit::int8_t FIT_SINT8;
typedef const FIT_SINT8 * FIT_CONST_SINT8_PTR;
#define FIT_SINT8_INVALID           ((FIT_SINT8)0x7F)
#define FIT_BASE_TYPE_SINT8         ((FIT_UINT8)0x01)

typedef ::fit::uint8_t FIT_UINT8;
typedef const FIT_UINT8 * FIT_CONST_UINT8_PTR;
#define FIT_UINT8_INVALID           ((FIT_UINT8)0xFF)
#define FIT_BASE_TYPE_UINT8         ((FIT_UINT8)0x02)

typedef ::fit::int16_t FIT_SINT16;
typedef const FIT_SINT16 * FIT_CONST_SINT16_PTR;
#define FIT_SINT16_INVALID          ((FIT_SINT16)0x7FFF)
#define FIT_BASE_TYPE_SINT16        ((FIT_UINT8)0x83)

typedef ::fit::uint16_t FIT_UINT16;
typedef const FIT_UINT16 * FIT_CONST_UINT16_PTR;
#define FIT_UINT16_INVALID   ((FIT_UINT16)0xFFFF)
#define FIT_BASE_TYPE_UINT16 ((FIT_UINT8)0x84)

typedef ::fit::int32_t FIT_SINT32;
typedef const FIT_SINT32 * FIT_CONST_SINT32_PTR;
#define FIT_SINT32_INVALID   ((FIT_SINT32)0x7FFFFFFF)
#define FIT_BASE_TYPE_SINT32 ((FIT_UINT8)0x85)

typedef ::fit::uint32_t FIT_UINT32;
typedef const FIT_UINT32 * FIT_CONST_UINT32_PTR;
#define FIT_UINT32_INVALID   ((FIT_UINT32)0xFFFFFFFF)
#define FIT_BASE_TYPE_UINT32 ((FIT_UINT8)0x86)

typedef char FIT_STRING; // UTF-8 null terminated string
typedef const FIT_STRING * FIT_CONST_STRING_PTR;
#define FIT_STRING_INVALID   ((FIT_STRING)0x00)
#define FIT_BASE_TYPE_STRING ((FIT_UINT8)0x07)

#endif // !defined(FIT_CPP_INCLUDE_C)

typedef float FIT_FLOAT32;
typedef const FIT_FLOAT32 * FIT_CONST_FLOAT32_PTR;
#define FIT_FLOAT32_INVALID   ((FIT_FLOAT32)*((FIT_FLOAT32*)::fit::baseTypeInvalids[FIT_BASE_TYPE_FLOAT32 & FIT_BASE_TYPE_NUM_MASK]))
#define FIT_BASE_TYPE_FLOAT32 ((FIT_UINT8)0x88)

typedef double FIT_FLOAT64;
typedef const FIT_FLOAT64 * FIT_CONST_FLOAT64_PTR;
#define FIT_FLOAT64_INVALID   ((FIT_FLOAT64)*((FIT_FLOAT64*)::fit::baseTypeInvalids[FIT_BASE_TYPE_FLOAT64 & FIT_BASE_TYPE_NUM_MASK]))
#define FIT_BASE_TYPE_FLOAT64 ((FIT_UINT8)0x89)

#if !defined(FIT_CPP_INCLUDE_C)

typedef ::fit::uint8_t FIT_UINT8Z;
typedef const FIT_UINT8Z * FIT_CONST_UINT8Z_PTR;
#define FIT_UINT8Z_INVALID   ((FIT_UINT8Z)0x00)
#define FIT_BASE_TYPE_UINT8Z ((FIT_UINT8)0x0A)

typedef ::fit::uint16_t FIT_UINT16Z;
typedef const FIT_UINT16Z * FIT_CONST_UINT16Z_PTR;
#define FIT_UINT16Z_INVALID   ((FIT_UINT16Z)0x0000)
#define FIT_BASE_TYPE_UINT16Z ((FIT_UINT8)0x8B)

typedef ::fit::uint32_t FIT_UINT32Z;
typedef const FIT_UINT32Z * FIT_CONST_UINT32Z_PTR;
#define FIT_UINT32Z_INVALID   ((FIT_UINT32Z)0x00000000)
#define FIT_BASE_TYPE_UINT32Z ((FIT_UINT8)0x8C)

typedef ::fit::uint8_t FIT_BYTE;
typedef const FIT_BYTE * FIT_CONST_BYTE_PTR;
#define FIT_BYTE_INVALID   ((FIT_BYTE)0xFF) // Field is invalid if all bytes are invalid.
#define FIT_BASE_TYPE_BYTE ((FIT_UINT8)0x0D)

typedef ::fit::int64_t FIT_SINT64;
typedef const FIT_SINT64 * FIT_CONST_SINT64_PTR;
#define FIT_SINT64_INVALID   ((FIT_SINT64)0x7FFFFFFFFFFFFFFFL)
#define FIT_BASE_TYPE_SINT64 ((FIT_UINT8)0x8E)

typedef ::fit::uint64_t FIT_UINT64;
typedef const FIT_UINT64 * FIT_CONST_UINT64_PTR;
#define FIT_UINT64_INVALID   ((FIT_UINT64)0xFFFFFFFFFFFFFFFFL)
#define FIT_BASE_TYPE_UINT64 ((FIT_UINT8)0x8F)

typedef ::fit::uint64_t FIT_UINT64Z;
typedef const FIT_UINT64Z * FIT_CONST_UINT64Z_PTR;
#define FIT_UINT64Z_INVALID   ((FIT_UINT64Z)0x0000000000000000L)
#define FIT_BASE_TYPE_UINT64Z ((FIT_UINT8)0x90)

#define FIT_BASE_TYPES    17

typedef FIT_ENUM FIT_BOOL;
#define FIT_BOOL_INVALID      FIT_ENUM_INVALID
#define FIT_BOOL_FALSE        ((FIT_BOOL)0)
#define FIT_BOOL_TRUE         ((FIT_BOOL)1)
#define FIT_FALSE             FIT_BOOL_FALSE
#define FIT_TRUE              FIT_BOOL_TRUE
#define FIT_NULL              nullptr

typedef FIT_UINT32 (*FIT_READ_BYTES_FUNC)(void *, FIT_UINT32, FIT_UINT32);
#define FIT_MESG_DEF_HEADER_SIZE  FIT_STRUCT_OFFSET(fields, FIT_MESG_DEF)


///////////////////////////////////////////////////////////////////////
// File Header
///////////////////////////////////////////////////////////////////////

typedef struct
{
   FIT_UINT8 header_size; // FIT_FILE_HDR_SIZE (size of this structure)
   FIT_UINT8 protocol_version; // FIT_PROTOCOL_VERSION
   FIT_UINT16 profile_version; // FIT_PROFILE_VERSION
   FIT_UINT32 data_size; // Does not include file header or crc.  Little endian format.
   FIT_UINT8 data_type[4]; // ".FIT"
   FIT_UINT16 crc; // CRC of this file header in little endian format.
} FIT_FILE_HDR;

#define FIT_FILE_HDR_SIZE         14


///////////////////////////////////////////////////////////////////////
// Record Definitions
///////////////////////////////////////////////////////////////////////

#define FIT_HDR_SIZE              1
#define FIT_HDR_TIME_REC_BIT      ((FIT_UINT8) 0x80)
#define FIT_HDR_TIME_TYPE_MASK    ((FIT_UINT8) 0x60)
#define FIT_HDR_TIME_TYPE_SHIFT   5
#define FIT_HDR_TIME_OFFSET_MASK  ((FIT_UINT8) 0x1F)
#define FIT_HDR_TYPE_DEF_BIT      ((FIT_UINT8) 0x40)
#define FIT_HDR_TYPE_MASK         ((FIT_UINT8) 0x0F)
#define FIT_MAX_LOCAL_MESGS       (FIT_HDR_TYPE_MASK + 1)

#endif // !defined(FIT_CPP_INCLUDE_C)

#define FIT_HDR_DEV_FIELD_BIT     ((FIT_UINT8) 0x20)

#if !defined(FIT_CPP_INCLUDE_C)

///////////////////////////////////////////////////////////////////////
// Message Definitions
///////////////////////////////////////////////////////////////////////

typedef struct
{
   FIT_UINT8 field_def_num;
   FIT_UINT8 size;
   FIT_UINT8 base_type;
} FIT_FIELD_DEF;

#define FIT_FIELD_DEF_SIZE        3

typedef struct
{
   FIT_UINT8 reserved_1;
   FIT_UINT8 arch;
   FIT_UINT16 global_mesg_num;
   FIT_UINT8 num_fields;
   FIT_UINT8 fields[1];
} FIT_MESG_DEF;

#define FIT_MAX_MESG_SIZE         ((FIT_UINT16)65535)

#define FIT_ARCH_ENDIAN_MASK      ((FIT_UINT8)0x01)
#define FIT_ARCH_ENDIAN_LITTLE    ((FIT_UINT8)0)
#define FIT_ARCH_ENDIAN_BIG       ((FIT_UINT8)1)


///////////////////////////////////////////////////////////////////////
// Field Definitions
///////////////////////////////////////////////////////////////////////

#define FIT_MAX_FIELD_SIZE             ((FIT_UINT8)255)
#define FIT_FIELD_NUM_INVALID          ((FIT_UINT8)0xFF)
#define FIT_FIELD_NUM_MESSAGE_INDEX    ((FIT_UINT8)254)
#define FIT_FIELD_NUM_TIMESTAMP        ((FIT_UINT8)253)

#define FIT_MESSAGE_INDEX_FIELD_NUM    FIT_FIELD_NUM_MESSAGE_INDEX // For reverse compatibility only.  Use FIT_FIELD_NUM_MESSAGE_INDEX instead.
#define FIT_TIMESTAMP_FIELD_NUM        FIT_FIELD_NUM_TIMESTAMP // For reverse compatibility only.  Use FIT_FIELD_NUM_TIMESTAMP instead.


///////////////////////////////////////////////////////////////////////
// Macros
///////////////////////////////////////////////////////////////////////

#define FIT_STRUCT_OFFSET(MEMBER, STRUCT_TYPE)                                 ( ((FIT_UINT8 *) &(((STRUCT_TYPE *) FIT_NULL)->MEMBER)) - ((FIT_UINT8 *) (FIT_NULL)) ) // Computes the byte offset of a member in a file.  Compiles to a constant.

// Offset of message in file, not including file header.
#define FIT_MESG_OFFSET(MESG_MEMBER, MESG_INDEX, MESG_SIZE, FILE)              (FIT_STRUCT_OFFSET(MESG_MEMBER, FILE) + MESG_INDEX * (FIT_HDR_SIZE + MESG_SIZE) + FIT_HDR_SIZE) // Computes the byte offset of a message in a file structure.  Compiles to a constant.
#define FIT_MESG_DEF_OFFSET(MESG_DEF_MEMBER, FILE)                             (FIT_STRUCT_OFFSET(MESG_DEF_MEMBER, FILE) + FIT_HDR_SIZE) // Computes the byte offset of a message definition in a file structure.  Compiles to a constant.
#define FIT_MESG_DEF_FIELD_OFFSET(FIELD_MEMBER, FIELD_INDEX)                   (FIT_STRUCT_OFFSET(FIELD_MEMBER, FIT_FIELD_DEF) + FIT_FIELD_DEF_SIZE * FIELD_INDEX) // Computes the byte offset of a field definition member.  Compiles to a constant.

// Offset of message in file including file header.
#define FIT_FILE_MESG_OFFSET(MESG_MEMBER, MESG_INDEX, MESG_SIZE, FILE)         (FIT_FILE_HDR_SIZE + FIT_MESG_OFFSET(MESG_MEMBER, MESG_INDEX, MESG_SIZE, FILE))
#define FIT_FILE_MESG_DEF_OFFSET(MESG_DEF_MEMBER, FILE)                        (FIT_MESG_DEF_OFFSET(MESG_DEF_MEMBER, FILE))
#define FIT_FILE_MESG_DEF_FIELD_OFFSET(FIELD_MEMBER, FIELD_INDEX)              (FIT_MESG_DEF_FIELD_OFFSET(FIELD_MEMBER, FIELD_INDEX))

#endif // !defined(FIT_CPP_INCLUDE_C)

///////////////////////////////////////////////////////////////////////
// C++ Specific Definitions
///////////////////////////////////////////////////////////////////////

typedef std::wstring FIT_WSTRING;   // Returned by message/field "Get" APIs and required by "Set" APIs. Encoding defined in fit_config.hpp.
typedef const FIT_WSTRING * FIT_CONST_WSTRING_PTR;
#define FIT_WSTRING_INVALID   (FIT_WSTRING())


namespace fit
{

enum class ProtocolVersion
{
    V10,
    V20
};

class DetailedProtocolVersion
{
public:
    DetailedProtocolVersion( FIT_UINT8 major, FIT_UINT8 minor );

    FIT_UINT8 GetMajorVersion() const;
    FIT_UINT8 GetMinorVersion() const;
    FIT_UINT8 GetVersionByte() const;

private:
    FIT_UINT8 version;
};

///////////////////////////////////////////////////////////////////////
// Public Constants
///////////////////////////////////////////////////////////////////////

const extern FIT_UINT8 baseTypeSizes[FIT_BASE_TYPES];
const extern FIT_UINT8 *baseTypeInvalids[FIT_BASE_TYPES];
const extern std::map<ProtocolVersion, DetailedProtocolVersion> versionMap;


///////////////////////////////////////////////////////////////////////
// Public Functions
///////////////////////////////////////////////////////////////////////

FIT_UINT8 GetArch(void);
///////////////////////////////////////////////////////////////////////
// Returns architecture type.
// Includes runtime check for little or big endian.
// See FIT_MESG_DEF->arch and FIT_ARCH_*.
///////////////////////////////////////////////////////////////////////

} // namespace fit

#endif // !defined(FIT_HPP)
