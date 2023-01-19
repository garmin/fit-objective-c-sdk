/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2023 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.101Release
// Tag = production/release/21.101.00-0-gceb92d5
/////////////////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_ACCUMULATED_FIELD_HPP)
#define FIT_ACCUMULATED_FIELD_HPP

#include "fit.hpp"

namespace fit
{

class AccumulatedField
{
   public:
      FIT_UINT16 mesgNum;
      FIT_UINT8 destFieldNum; //Field# to accumulate into
      FIT_UINT32 lastValue;
      FIT_UINT32 accumulatedValue;

      AccumulatedField();
      AccumulatedField(const FIT_UINT16 newMesgNum, const FIT_UINT8 destFieldNum);
      FIT_UINT32 Accumulate(const FIT_UINT32 value, const FIT_UINT8 bits);
      FIT_UINT32 Set(FIT_UINT32 value);

   private:
};

} // namespace fit

#endif // defined(FIT_ACCUMULATED_FIELD_HPP)


