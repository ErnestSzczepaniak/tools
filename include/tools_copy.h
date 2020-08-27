#ifndef _tools_copy_h
#define _tools_copy_h

/**
 * @file	tools_copy.h
 * @author	en2
 * @date	13-07-2020
 * @brief	
 * @details	
**/

#include "string.h"

namespace tools::copy
{

namespace memory
{

template<typename T1, typename T2>
static inline void to_memory(T1 * memory_1, T2 * memory_2, int size)
{
    memcpy(memory_2, memory_1, size);
}

template<typename T1, typename T2>
static inline void to_variable(T1 * memory, T2 & variable, int size)
{
    memcpy(memory, &variable, size);
}

}; /* namespace: memory */

namespace variable
{

template<typename T1, typename T2>
static inline void to_memory(T1 & variable, T2 * memory, int size)
{
    memcpy(&variable, memory, size);
}

template<typename T1, typename T2>
static inline void to_variable(T1 & variable_1, T2 & variable_2, int size)
{
    memcpy(&variable_1, &variable_2, size);
}

}; /* namespace: variable */

namespace value
{

template<typename T1, typename T2>
static inline void to_memory(const T1 & value, T2 * memory, int size)
{
    memcpy(&value, memory, size);
}

template<typename T1, typename T2>
static inline void to_variable(const T1 & value, T2 & variable, int size)
{
    memcpy(&value, variable, size);
}

}; /* namespace: value */

}; /* namespace: tools */

#endif /* define: tools_copy_h */