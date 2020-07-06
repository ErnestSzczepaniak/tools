#ifndef _tools_bit_h
#define _tools_bit_h

/**
 * @file	tools_bit.h
 * @author	en2
 * @date	06-07-2020
 * @brief	
 * @details	
**/

#include "tools_byte.h"

namespace tools::bit
{

enum class Order : unsigned char
{
    LSB,
    MSB
}; /* enum: Ordering */

template<typename T>
static inline bool get(T & variable, int bit, Order order = Order::LSB)
{

}

template<typename T>
static inline void set(T & variable, int bit, bool value = true, Order order = Order::LSB)
{

}

template<typename T>
static inline T invert(T & variable)
{
    T temp;

    for (int i = 0; i < sizeof(T) * 8; i++) set(temp, i, get(variable, sizeof(T) * 8 - i - 1));

    return temp;
} 

}; /* namespace: tools::bit */


#endif /* define: tools_bit_h */