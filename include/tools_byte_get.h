#ifndef _tools_byte_get_h
#define _tools_byte_get_h

/**
 * @file	tools_byte_get.h
 * @author	en2
 * @date	01-09-2020
 * @brief	
 * @details	
**/

#include "tools_mask.h"

namespace tools::byte::get
{

static inline unsigned char bits(unsigned char & byte, int offset = 0, int size = 8)
{
    auto mask = mask::get::value<unsigned char>(offset, size);

    return ((byte & mask) >> offset);
}

}; /* namespace: tools::byte::get */

#endif /* define: tools_byte_get_h */