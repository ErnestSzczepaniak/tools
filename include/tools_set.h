#ifndef _tools_set_h
#define _tools_set_h

/**
 * @file	tools_set.h
 * @author	en2
 * @date	08-07-2020
 * @brief	
 * @details	
**/

#include "string.h"
#include "tools_cast.h"

namespace tools::set
{

template<typename T>
static inline void memory(T * memory, int size, unsigned char value)
{
    memset(memory, value, size);
}

template<typename T> 
static inline void variable(T & variable, unsigned char value)
{
    memory(&variable, sizeof(T), value);
}

namespace byte
{

template<typename T>
static inline void in_memory(T * memory, int position, unsigned char value)
{
    auto * ptr = cast::variable<unsigned char *>(memory);

    ptr[position] = value;
}

template<typename T>
static inline void in_variable(T & variable, int position, unsigned char value)
{
    in_memory(&variable, position, value);
}

}; /* namespace: byte */

namespace bit
{

template<typename T>
static inline void in_memory(T * memory, int position, bool value)
{
    auto * ptr = cast::variable<unsigned char *>(memory);
    auto byte = position / 8;

    ptr[position] = value;
}

}; /* namespace: bit */

}; /* namespace: tools */

#endif /* define: tools_set_h */