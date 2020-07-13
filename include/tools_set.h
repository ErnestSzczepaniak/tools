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

namespace tools
{

template<typename T>
static inline void set(T * memory, unsigned char value, int size = sizeof(T))
{
    memset(memory, value, size);
}

template<typename T> 
static inline void set(T & variable, unsigned char value, int size = sizeof(T))
{
    set(&variable, value, size);
}

template<typename T>
static inline T set(const T & value_1, unsigned char value_2, int size = sizeof(T))
{
    T temp = value_1;
    set(&temp, value_2, size);
    return temp;
}

}; /* namespace: tools */

#endif /* define: tools_set_h */