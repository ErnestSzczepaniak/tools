#ifndef _tools_byte_invert_h
#define _tools_byte_invert_h

/**
 * @file	tools_byte_invert.h
 * @author	en2
 * @date	28-08-2020
 * @brief	
 * @details	
**/

#include "tools_byte_get.h"
#include "tools_byte_set.h"

namespace tools::byte::invert
{

static inline void bits(unsigned char & byte, int offset = 0, int size = 8)
{
    unsigned char temp = 0;

    for (int i = 0; i < size; i++)
    {
        set::value(temp, get::value(byte, offset + i, 1), offset + size - i - 1, 1);
    }

    byte = temp;
}

static inline constexpr unsigned char bits(const unsigned char & byte, int offset = 0, int size = 8)
{
    unsigned char temp = 0;

    for (int i = 0; i < size; i++)
    {
        set::value(temp, get::value(byte, offset + i, 1), offset + size - i - 1, 1);
    }

    return temp;
}

}; /* namespace: tools::byte::invert */


#endif /* define: tools_byte_invert_h */