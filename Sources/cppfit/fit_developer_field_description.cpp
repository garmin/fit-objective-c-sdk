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


#include "fit_developer_field_description.hpp"

namespace fit
{
DeveloperFieldDescription::DeveloperFieldDescription
    (
    const DeveloperFieldDescription& other
    )
    : description( new FieldDescriptionMesg( *other.description ) )
    , developer( new DeveloperDataIdMesg( *other.developer ) )
{

}

DeveloperFieldDescription::DeveloperFieldDescription
    (
    const FieldDescriptionMesg& desc,
    const DeveloperDataIdMesg& developer
    )
    : description( new FieldDescriptionMesg( desc ) )
    , developer( new DeveloperDataIdMesg( developer ) )
{
}

DeveloperFieldDescription::~DeveloperFieldDescription()
{
    delete developer;
    delete description;
}

FIT_UINT32 DeveloperFieldDescription::GetApplicationVersion() const
{
    return developer->GetApplicationVersion();
}

FIT_UINT8 DeveloperFieldDescription::GetFieldDefinitionNumber() const
{
    return description->GetFieldDefinitionNumber();
}

std::vector<FIT_UINT8> DeveloperFieldDescription::GetApplicationId() const
{
    // This is a UUID, and thus we expect the return value to be exactly 16 bytes.
    // if it is not we will return an empty vector
    std::vector< FIT_UINT8 > rv( 16 );

    if ( developer->GetNumApplicationId() == 16 )
    {
        for ( FIT_UINT8 i = 0; i < 16; i++ )
        {
            rv[i] = developer->GetApplicationId( i );
        }
    }

    return rv;
}
} // namespace fit
