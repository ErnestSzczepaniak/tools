#ifndef _tools_compare_h
#define _tools_compare_h

/**
 * @file	tools_compare.h
 * @author	en2
 * @date	08-07-2020
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
static inline bool with_memory(T1 * first, T2 * second, int size)
{
    return (memcmp(first, second, size) == 0);
}

template<typename T1, typename T2>
static inline bool with_variable(T1 * first, T2 & second, int size)
{
    return (memcmp(first, &second, size) == 0);
}

template<typename T1, typename T2>
static inline bool with_value(T1 * first, T2 second, int size)
{
    return (memcmp(first, &second, size) == 0);
}

}; /* namespace: memory */

namespace variable
{

template<typename T1, typename T2>
static inline bool with_memory(T1 & first, T2 * second, int size)
{
    return (memcmp(&first, second, size) == 0);
}

template<typename T1, typename T2>
static inline bool with_variable(T1 & first, T2 & second, int size = sizeof(T1))
{
    return (memcmp(&first, &second, size) == 0);
}

template<typename T1, typename T2>
static inline bool with_value(T1 & first, T2 second, int size = sizeof(T1))
{
    return (memcmp(&first, &second, size) == 0);
}

}; /* namespace: variable */

namespace value
{

template<typename T1, typename T2>
static inline bool with_memory(T1 first, T2 * second, int size)
{
    return (memcmp(&first, second, size) == 0);
}

template<typename T1, typename T2>
static inline bool with_variable(T1 first, T2 & second, int size = sizeof(T1))
{
    return (memcmp(&first, &second, size) == 0);
}

template<typename T1, typename T2>
static inline bool with_value(T1 first, T2 second, int size = sizeof(T1))
{
    return (memcmp(&first, &second, size) == 0);
}

}; /* namespace: variable */

}; /* namespace: tools::compare */

#endif /* define: tools_compare_h */