#ifndef _tools_byte_compare_h
#define _tools_byte_compare_h

/**
 * @file	tools_byte_compare.h
 * @author	en2
 * @date	02-09-2020
 * @brief	
 * @details	
**/

#include "tools_byte_find.h"
#include "tools_byte_boolean.h"

namespace tools::byte::compare
{

static inline bool equality(unsigned char & byte_1, unsigned char & byte_2)
{
    return (byte_1 == byte_2);
}

static inline int difference(unsigned char & byte_1, unsigned char & byte_2)
{
    boolean::xadd(byte_1, byte_2);

    return find::bits(byte_1, true);
}

}; /* namespace: tools::byte::compare */


#endif /* define: tools_byte_compare_h */