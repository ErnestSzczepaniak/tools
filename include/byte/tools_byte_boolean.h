#ifndef _tools_byte_boolean_h
#define _tools_byte_boolean_h

/**
 * @file	tools_byte_boolean.h
 * @author	en2
 * @date	28-08-2020
 * @brief	
 * @details	
**/

#include "tools_byte_get.h"
#include "tools_byte_set.h"

namespace tools::byte::boolean
{

template<typename T>
static inline void add(unsigned char & byte, T value, int offset = 0, int size = 8)
{
    auto mask_value = mask::get::value<unsigned char>(0, size);

    value &= mask_value;

    byte |= (value << offset);
}

template<typename T>
static inline void xadd(unsigned char & byte, T value, int offset = 0, int size = 8)
{
    auto mask_value = mask::get::value<unsigned char>(0, size);

    value &= mask_value;

    byte ^= (value << offset);
}

template<typename T>
static inline void multiply(unsigned char & byte, T value, int offset = 0, int size = 8)
{
    auto mask_value = mask::get::value<unsigned char>(0, size);

    byte &= (value << offset);
}

static inline void negate(unsigned char & byte, int offset = 0, int size = 8)
{
    set::bits(byte, ~get::bits(byte, offset, size), offset, size);
}

}; /* namespace: tools::byte::boolean */

#endif /* define: tools_byte_boolean_h */