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
#include "tools_mask.h"

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
    auto msk = order == Order::LSB ? mask::get(bit % 8, 1) : mask::get(7 - bit % 8, 1);
    return byte::get(variable, bit / 8) & msk;
}

template<typename T>
static inline void set(T & variable, int bit, bool value = true, Order order = Order::LSB)
{
    auto msk = order == Order::LSB ? mask::get(bit % 8, 1) : mask::get(7 - bit % 8, 1);
    auto bt = value == false ? (byte::get(variable, bit / 8) & ~msk) : (byte::get(variable, bit / 8) | msk);
    byte::set(variable, bit / 8, bt);
}

template<typename T>
static inline void invert(T & variable)
{
    T temp;

    for (int i = 0; i < sizeof(T) * 8; i++)
    {
        set(temp, i, get(variable, sizeof(T) * 8 - i - 1));  
    }

    variable = temp;
} 

}; /* namespace: tools::bit */


#endif /* define: tools_bit_h */