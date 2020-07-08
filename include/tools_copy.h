#ifndef _tools_copy_h
#define _tools_copy_h

/**
 * @file	tools_copy.h
 * @author	en2
 * @date	08-07-2020
 * @brief	
 * @details	
**/

#include "string.h"

namespace tools::copy
{

/* ---------------------------------------------| memory |--------------------------------------------- */

namespace memory
{

template<typename T1, typename T2>
static inline void to_memory(T1 * source, T2 * destination, int size)
{
    memcpy(destination, source, size);
}

template<typename T1, typename T2>
static inline void to_variable(T1 * source, T2 & destination, int size)
{
    memcpy(&destination, source, size);
}

}; /* namespace: memory */

/* ---------------------------------------------| variable |--------------------------------------------- */

namespace variable
{

template<typename T1, typename T2>
static inline void to_memory(T1 & source, T2 * destination, int size = sizeof(T1))
{
    memcpy(destination, &source, size);
}

template<typename T1, typename T2>
static inline void to_variable(T1 & source, T2 & destination, int size = sizeof(T1))
{
    memcpy(&destination, &source, size);
}

}; /* namespace: variable */


/* ---------------------------------------------| value |--------------------------------------------- */

namespace value
{

template<typename T1, typename T2>
static inline void to_memory(T1 source, T2 * destination, int size = sizeof(T1))
{
    memcpy(destination, &source, size);
}

template<typename T1, typename T2>
static inline void to_variable(T1 source, T2 & destination, int size = sizeof(T1))
{
    memcpy(&destination, &source, size);
}

}; /* namespace: value */

}; /* namespace: tools::copy */

#endif /* define: tools_copy_h */