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

namespace tools::set
{

template<typename T>
static inline void memory(T * memory, unsigned char value, int size)
{   
    memset(memory, value, size);
}

template<typename T>
static inline void variable(T & variable, unsigned char value, int size = sizeof(T))
{
    memset(&variable, value, size);
}

}; /* namespace: tools::set */


#endif /* define: tools_set_h */