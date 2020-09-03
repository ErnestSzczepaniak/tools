#ifndef _tools_byte_find_h
#define _tools_byte_find_h

/**
 * @file	tools_byte_find.h
 * @author	en2
 * @date	02-09-2020
 * @brief	
 * @details	
**/

#include "tools_byte_get.h"
#include "tools_mask_get.h"

namespace tools::byte::find
{

template<typename T>
static inline int bits(unsigned char & byte, T value, int size = 1)
{
    auto mask_value = mask::get::value<unsigned char>(0, size);
    auto checks = 8 - size + 1;

    value &= mask_value;

    for (int i = 0; i < checks; i++)
    {
        if (get::bits(byte, i, size) == value) return i;
    }

    return -1;
}

}; /* namespace: tools::byte::find */


#endif /* define: tools_byte_find_h */