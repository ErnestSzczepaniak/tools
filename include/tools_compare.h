#ifndef _tools_compare_h
#define _tools_compare_h

/**
 * @file	tools_compare.h
 * @author	en2
 * @date	13-07-2020
 * @brief	
 * @details	
**/

#include "string.h"

namespace tools::compare
{

namespace string
{

static inline bool with_string(const char * string_1, const char * string_2)
{
    return (strcmp(string_1, string_2) == 0);
}

}; /* namespace: string */

namespace memory
{

template<typename T1, typename T2>
static inline bool with_memory(T1 * memory_1, T2 * memory_2, int size)
{
    return (memcmp(memory_1, memory_2, size) == 0);
}

template<typename T1, typename T2>
static inline bool with_varaible(T1 * memory, T2 & variable, int size)
{
    return (memcmp(memory, &variable, size) == 0);
}

template<typename T1, typename T2>
static inline bool with_value(T1 * memory, const T2 & value, int size)
{
    return (memcmp(memory, &value, size) == 0);
}

}; /* namespace: memory */

namespace variable
{

template<typename T1, typename T2>
static inline bool with_memory(T1 & variable, T2 * memory, int size)
{
    return (memcmp(&variable, memory, size) == 0);
}

template<typename T1, typename T2>
static inline bool with_variable(T1 & variable_1, T2 & variable_2, int size)
{
    return (memcmp(&variable_1, &variable_2, size) == 0);
}

template<typename T1, typename T2>
static inline bool with_value(T1 & variable, const T2 & value, int size)
{
    return (memcmp(&variable, &value, size) == 0);
}

}; /* namespace: variable */

namespace value
{

template<typename T1, typename T2>
static inline bool with_memory(const T1 & value, T2 * memory, int size)
{
    return (memcmp(&value, memory, size) == 0);
}

template<typename T1, typename T2>
static inline bool with_variable(const T1 & value, T2 & variable, int size)
{
    return (memcmp(&value, &variable, size) == 0);
}

template<typename T1, typename T2>
static inline bool with_value(const T1 & value_1, const T2 & value_2, int size)
{
    return (memcmp(&value_1, &value_2, size) == 0);
}

}; /* namespace: value */

}; /* namespace: tools */

#endif /* define: tools_compare_h */