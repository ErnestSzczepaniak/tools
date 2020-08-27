#ifndef _tools_shift_h
#define _tools_shift_h

/**
 * @file	tools_shift.h
 * @author	en2
 * @date	27-08-2020
 * @brief	
 * @details	
**/

#include "string.h"
#include "tools_cast.h"

namespace tools::shift
{

namespace bytes
{

namespace left
{

template<typename T>
static inline void in_memory(T * memory, int size, int shift)
{
    auto * ptr = cast::variable<unsigned char *>(memory);

    memmove(ptr, ptr + shift, size - shift);
    memset(ptr + size - shift, 0, shift);
}

template<typename T>
static inline void in_variable(T & variable, int shift)
{
    in_memory(&variable, sizeof(T), shift);
}

}; /* namespace: left */

namespace right
{

template<typename T>
static inline void in_memory(T * memory, int size, int shift)
{
    auto * ptr = cast::variable<unsigned char *>(memory);

    memmove(ptr + shift, ptr, size - shift);
    memset(ptr, 0, shift);
}

template<typename T>
static inline void in_variable(T & variable, int shift)
{
    in_memory(&variable, sizeof(T), shift);
}

}; /* namespace: right */

}; /* namespace: bytes */

namespace bits
{



}; /* namespace: bits */


}; /* namespace: tools::shift */


#endif /* define: tools_shift_h */