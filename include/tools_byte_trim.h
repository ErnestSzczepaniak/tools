#ifndef _tools_byte_trim_h
#define _tools_byte_trim_h

/**
 * @file	tools_byte_trim.h
 * @author	en2
 * @date	28-08-2020
 * @brief	
 * @details	
**/

#include "tools_mask.h"

namespace tools::byte::trim
{

static inline void left(unsigned char & byte, int bits)
{
    auto mask = mask::create<unsigned char>(8 - bits, bits);
    byte &= ~mask;
}

static inline void right(unsigned char & byte, int bits)
{
    auto mask = mask::create<unsigned char>(0, bits);
    byte &= ~mask;
}

}; /* namespace: tools::byte::trim */

#endif /* define: tools_byte_trim_h */