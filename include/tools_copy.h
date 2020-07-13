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

namespace tools
{

/* ---------------------------------------------| memory |--------------------------------------------- */

template<typename T1, typename T2>
static inline void copy(T1 * memory_1, T2 * memory_2, int size = sizeof(T1))
{
    memcpy(memory_1, memory_2, size);
}

template<typename T1, typename T2>
static inline void copy(T1 * memory, T2 & variable, int size = sizeof(T1))
{
    copy(memory, &variable, size);
}

template<typename T1, typename T2>
static inline void copy(T1 * memory, const T2 & value, int size = sizeof(T1))
{
    copy(memory, &value, size);
}

/* ---------------------------------------------| variable |--------------------------------------------- */

template<typename T1, typename T2>
static inline void copy(T1 & variable, T2 * memory, int size = sizeof(T1))
{
    copy(&variable, memory, size);
}

template<typename T1, typename T2>
static inline void copy(T1 & variable_1, T2 & variable_2, int size = sizeof(T1))
{
    copy(&variable_1, &variable_2, size);
}

template<typename T1, typename T2>
static inline void copy(T1 & variable, const T2 & value, int size = sizeof(T1))
{
    copy(&variable, &value, size);
}

/* ---------------------------------------------| value |--------------------------------------------- */

template<typename T1, typename T2>
static inline T1 copy(const T1 & value, T2 * memory, int size = sizeof(T1))
{
    T1 temp = value;
    copy(&temp, memory, size);
    return temp;
}

template<typename T1, typename T2>
static inline T1 copy(const T1 & value, T2 & variable_2, int size = sizeof(T1))
{
    T1 temp = value;
    copy(&temp, &variable_2, size);
    return temp;
}

template<typename T1, typename T2>
static inline T1 copy(const T1 & value_1, const T2 & value_2, int size = sizeof(T1))
{
    T1 temp = value_1;
    copy(&temp, &value_2, size);
    return temp;
}

}; /* namespace: tools */


#endif /* define: tools_copy_h */