#ifndef _tools_byte_h
#define _tools_byte_h

/**
 * @file	tools_byte.h
 * @author	en2
 * @date	06-07-2020
 * @brief	
 * @details	
**/

#include "tools_memory.h"
#include "tools_address.h"

namespace tools::byte
{

template<typename T>
static inline unsigned char get(T & variable, int byte)
{
    return address::of(variable)[byte];
}

template<typename T>
static inline void set(T & variable, int byte, unsigned char value)
{
    address::of(variable)[byte] = value;
}

template<typename T>
static inline void swap(T & variable_1, T & variable_2, int byte)
{
    unsigned char temp = address::of(variable_1)[byte];
    address::of(variable_1)[byte] = address::of(variable_2)[byte];
    address::of(variable_2)[byte] = temp;
}

}; /* namespace: tools::byte */

#endif /* define: tools_byte_h */