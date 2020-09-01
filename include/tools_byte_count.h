#ifndef _tools_byte_count_h
#define _tools_byte_count_h

/**
 * @file	tools_byte_count.h
 * @author	en2
 * @date	01-09-2020
 * @brief	
 * @details	
**/

#include "tools_byte_get.h"

namespace tools::byte::count
{

static inline int bits(unsigned char & byte, bool value = true)
{
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        if (get::bits(byte, i, 1) == value) count++;
    }
    
    return count;
}

}; /* namespace: tools::byte::count */


#endif /* define: tools_byte_count_h */