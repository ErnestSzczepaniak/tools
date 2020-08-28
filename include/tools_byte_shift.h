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
#include "tools_byte_trim.h"

namespace tools::byte::shift
{

static inline void left(unsigned char & byte, int bits, bool wrap = false)
{
    if (wrap == false) byte = (byte << bits);
    else
    {
        auto rest = get::value(byte, 8 - bits, bits);
        byte = (byte << bits);
        trim::right(byte, bits);
        set::value(byte, rest, 0, bits);
    }
}

static unsigned char left(const unsigned char & byte, int bits, bool wrap = false)
{
    if (wrap == false) return (byte << bits);
    else
    {
        auto rest = get::value(byte, 8 - bits, bits);
        unsigned char temp = (byte << bits);
        trim::right(temp, bits);
        set::value(temp, rest, 0, bits);
        return temp;
    }
}

static inline void right(unsigned char & byte, int bits, bool wrap = false)
{
    if (wrap == false) byte = (byte >> bits);
    else
    {
        auto rest = get::value(byte, 0, bits);
        byte = (byte >> bits);
        trim::left(byte, bits);
        set::value(byte, rest, 8 - bits, bits);
    }
}

static inline constexpr unsigned char right(const unsigned char & byte, int bits, bool wrap = false)
{
    if (wrap == false) return (byte >> bits);
    else
    {
        auto rest = get::value(byte, 0, bits);
        unsigned char temp = (byte >> bits);
        trim::left(temp, bits);
        set::value(temp, rest, 8 - bits, bits);
        return temp;
    }
}

}; /* namespace: tools::byte::shift */

#endif /* define: tools_byte_shift_h */