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

static inline void left(unsigned char & byte, int bits, bool wrap = false)
{
    if (wrap == false) byte = (byte << bits);
    else
    {
        auto rest = get::bits(byte, 8 - bits, bits);
        byte = (byte << bits);
        set::bits(byte, rest, 0, bits);
    }
}

static inline void right(unsigned char & byte, int bits, bool wrap = false)
{
    if (wrap == false) byte = (byte >> bits);
    else
    {
        auto rest = get::bits(byte, 0, bits);
        byte = (byte >> bits);
        set::bits(byte, rest, 8 - bits, bits);
    }
}

}; /* namespace: tools::byte::shift */

#endif /* define: tools_byte_shift_h */