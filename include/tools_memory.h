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

/* ---------------------------------------------| copy |--------------------------------------------- */

template<typename T1, typename T2>
static inline void copy(T1 * destination, T2 * source, int size)
{
    memcpy(destination, source, size);
}

/* ---------------------------------------------| set |--------------------------------------------- */

template<typename T>
static inline void set(T * destination, unsigned char value, int size)
{
    memset(destination, value, size);
}

/* ---------------------------------------------| move |--------------------------------------------- */

template<typename T1, typename T2>
static inline void move(T1 * destination, T2 * source, int size)
{
    memmove(destination, source, size);
}

/* ---------------------------------------------| compare |--------------------------------------------- */

template<typename T1, typename T2>
static inline bool compare(T1 * destination, T2 * source, int size)
{
    return (memcmp(destination, source, size) == 0);
}

/* ---------------------------------------------| find |--------------------------------------------- */

template<typename T>
static inline int find(T * destination, unsigned char value, int size)
{
    auto * ptr = (unsigned char *) destination;
    auto * result = (unsigned char *) memchr(destination, value, size);
    return (result - ptr);
}

}; /* namespace: tools::memory */

#endif /* define: tools_memory_h */