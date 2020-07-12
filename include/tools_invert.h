#ifndef _tools_invert_h
#define _tools_invert_h

/**
 * @file	tools_invert.h
 * @author	en2
 * @date	12-07-2020
 * @brief	
 * @details	
**/

#include "tools_cast.h"

namespace tools::invert
{

namespace bytes
{

template<typename T>
static inline void in_memory(T * memory, int size, int base = 0)
{
    if (base == 0) base = size;
    if (size % base != 0) return;

    auto * ptr = cast::pointer_to<unsigned char *>(memory);



}

}; /* namespace: bytes */

namespace bits
{



}; /* namespace: bits */


}; /* namespace: tools::invert */


#endif /* define: tools_invert_h */