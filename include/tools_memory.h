#ifndef _tools_memory_h
#define _tools_memory_h

/**
 * @file	tools_memory.h
 * @author	en2
 * @date	06-07-2020
 * @brief	
 * @details	
**/

#include "string.h"

namespace tools::memory
{

template<typename T1, typename T2>
static inline void copy(T1 & destination, T2 & source)
{
    memcpy(&destination, &source, sizeof(T1));
}

template<typename T>
static inline void set(T & destination, unsigned char value)
{
    memset(&destination, value, sizeof(T));
}

template<typename T>
static inline bool compare(T & destination, T & source)
{
    return (memcmp(&destination, &source, sizeof(T)) == 0);
}

namespace shift::bytes
{

template<typename T>
static inline void left(T & variable, int bytes)
{
    auto * ptr = (unsigned char *) &variable;

    memmove(&ptr[0], &ptr[bytes], sizeof(T) - bytes);
    memset(&ptr[sizeof(T) - bytes], 0, bytes);
}

template<typename T>
static inline void right(T & variable, int bytes)
{
    auto * ptr = (unsigned char *) &variable;

    memmove(&ptr[bytes], &ptr[0], sizeof(T) - bytes);
    memset(&ptr[0], 0, bytes);
}

}; /* namespace: shift::byte */

namespace shift::bits
{



}; /* namespace: shift::bit */


}; /* namespace: tools::memory */


#endif /* define: tools_memory_h */