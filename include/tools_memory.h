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
#include "tools_address.h"

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

template<typename T>
static inline void invert(T & destination)
{
    unsigned char buffer[sizeof(T)];
    auto * ptr = address::of(destination);

    memory::copy(buffer, destination);

    for (int i = 0; i < sizeof(T); i++)
    {
        ptr[i] = buffer[sizeof(T) - i - 1];
    }
}

}; /* namespace: tools::memory */

#endif /* define: tools_memory_h */