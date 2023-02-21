/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2023 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.107Release
// Tag = production/release/21.107.00-0-geade151
/////////////////////////////////////////////////////////////////////////////////////////////


#include <ostream>
#include "fit_field_definition.hpp"

namespace fit
{

FieldDefinition::FieldDefinition()
    : num(FIT_FIELD_NUM_INVALID), size(0), type(FIT_UINT8_INVALID)
{
}

FieldDefinition::FieldDefinition(const Field& field)
    : num(field.GetNum()), size(field.GetSize()), type(field.GetType())
{
}

FieldDefinition::FieldDefinition(const Field* field)
{
    if (field != FIT_NULL)
    {
        num = field->GetNum();
        size = field->GetSize();
        type = field->GetType();
    }
    else
    {
        num = FIT_FIELD_NUM_INVALID;
        size = 0;
        type = FIT_UINT8_INVALID;
    }
}

FIT_UINT8 FieldDefinition::GetNum() const
{
    return num;
}

FIT_UINT8 FieldDefinition::GetSize() const
{
    return size;
}

FIT_UINT8 FieldDefinition::GetType() const
{
    return type;
}

void FieldDefinition::SetNum(const FIT_UINT8 newNum)
{
    num = newNum;
}

void FieldDefinition::SetSize(const FIT_UINT8 newSize)
{
    size = newSize;
}

void FieldDefinition::SetType(const FIT_UINT8 newType)
{
    type = newType;
}

FIT_BOOL FieldDefinition::operator==(const FieldDefinition& field) const
{
    if (num != field.num)
        return FIT_FALSE;

    if (size != field.size)
        return FIT_FALSE;

    if (type != field.type)
        return FIT_FALSE;

    return FIT_TRUE;
}

FIT_BOOL FieldDefinition::operator!=(const FieldDefinition& field) const
{
    return !(*this==field);
}

FIT_UINT8 FieldDefinition::Write(std::ostream &file) const
{
    file.put(num);
    file.put(size);
    file.put(type);

    return 3;
}

} // namespace fit
