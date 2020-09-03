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

namespace left
{

static inline void bits(unsigned char & byte, int bits)
{
    auto mask = mask::get::value<unsigned char>(8 - bits, bits);
    byte &= ~mask;
}

}; /* namespace: left */

namespace right
{

static inline void bits(unsigned char & byte, int bits)
{
    auto mask = mask::get::value<unsigned char>(0, bits);
    byte &= ~mask;
}

}; /* namespace: right */

}; /* namespace: tools::byte::trim */

#endif /* define: tools_byte_trim_h */