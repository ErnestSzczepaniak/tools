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

namespace tools // moze jednak zwracac indeks ?
{

/* ---------------------------------------------| string |--------------------------------------------- */

static inline bool compare(const char * string_1, const char * string_2)
{
    return (strcmp(string_1, string_2) == 0);
}

/* ---------------------------------------------| memory |--------------------------------------------- */

template<typename T1, typename T2>
static inline bool compare(T1 * memory_1, T2 * memory_2, int size = sizeof(T1))
{
    return (memcmp(memory_1, memory_2, size) == 0);
}

template<typename T1, typename T2>
static inline bool compare(T1 * memory, T2 & variable, int size = sizeof(T1))
{
    return compare(memory, &variable, size);
}

template<typename T1, typename T2>
static inline bool compare(T1 * memory, const T2 & value, int size = sizeof(T1))
{
    return compare(memory, &value, size);
}

/* ---------------------------------------------| variable |--------------------------------------------- */

template<typename T1, typename T2>
static inline bool compare(T1 & variable, T2 * memory, int size = sizeof(T1))
{
    return compare(&variable, memory, size);
}

template<typename T1, typename T2>
static inline bool compare(T1 & variable_1, T2 & variable_2, int size = sizeof(T1))
{
    return compare(&variable_1, &variable_2, size);
}

template<typename T1, typename T2>
static inline bool compare(T1 & variable, const T2 & value, int size = sizeof(T1))
{
    return compare(&variable, &value, size);
}

/* ---------------------------------------------| value |--------------------------------------------- */

template<typename T1, typename T2>
static inline bool compare(const T1 & value, T2 * memory, int size = sizeof(T1))
{
    return compare(&value, memory, size);
}

template<typename T1, typename T2>
static inline bool compare(const T1 & value, T2 & variable, int size = sizeof(T1))
{
    return compare(&value, &variable, size);
}

template<typename T1, typename T2>
static inline bool compare(const T1 & value_1, const T2 & value_2, int size = sizeof(T1))
{
    return compare(&value_1, &value_2, size);
}

}; /* namespace: tools */


#endif /* define: tools_compare_h */