#ifndef _tools_byte_set_h
#define _tools_byte_set_h

/**
 * @file	tools_byte_set.h
 * @author	en2
 * @date	01-09-2020
 * @brief	
 * @details	
**/

#include "tools_mask.h"

namespace tools::byte::set
{

template<typename T>
static inline void bits(unsigned char & byte, T value, int offset = 0, int size = 8)
{
    auto mask_byte = mask::get::value<unsigned char>(offset, size);
    auto mask_value = mask::get::value<unsigned char>(0, size);

    byte &= ~mask_byte;
    value &= mask_value;

    byte |= (value << offset);
}

}; /* namespace: tools::byte::set */

#endif /* define: tools_byte_set_h */