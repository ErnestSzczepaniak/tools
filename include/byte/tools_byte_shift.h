#ifndef _tools_byte_shift_h
#define _tools_byte_shift_h

/**
 * @file	tools_byte_shift.h
 * @author	en2
 * @date	28-08-2020
 * @brief	
 * @details	
**/

#include "tools_byte_get.h"
#include "tools_byte_set.h"

namespace tools::byte::shift
{

namespace left
{

static inline void bits(unsigned char & byte, int number, bool wrap = false)
{
    if (wrap == false) byte = (byte << number);
    else
    {
        auto rest = get::bits(byte, 8 - number, number);
        byte = (byte << number);
        set::bits(byte, rest, 0, number);
    }
}

}; /* namespace: left */

namespace right
{

static inline void bits(unsigned char & byte, int number, bool wrap = false)
{
    if (wrap == false) byte = (byte >> number);
    else
    {
        auto rest = get::bits(byte, 0, number);
        byte = (byte >> number);
        set::bits(byte, rest, 8 - number, number);
    }
}

}; /* namespace: right */

}; /* namespace: tools::byte::shift */

#endif /* define: tools_byte_shift_h */