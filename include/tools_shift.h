#ifndef _tools_shift_h
#define _tools_shift_h

/**
 * @file	tools_shift.h
 * @author	en2
 * @date	08-07-2020
 * @brief	
 * @details	
**/

#include "tools_memory.h"
#include "tools_byte.h"
#include "tools_bit.h"

namespace tools::shift
{

namespace byte
{

template<typename T>
static inline void left(T & variable, int bytes)
{
    if (bytes > sizeof(T)) return;

    memory::move(address::from(variable, 0), address::from(variable, bytes), sizeof(T) - bytes);
    memory::set(address::from(variable, sizeof(T) - bytes), 0, bytes);
}

template<typename T>
static inline void right(T & variable, int bytes)
{
    if (bytes > sizeof(T)) return;

    auto * ptr = address::of(variable);

    memory::move(&ptr[bytes], &ptr[0], sizeof(T) - bytes);
    memory::set(&ptr[0], 0, bytes);
}

}; /* namespace: byte */

}; /* namespace: tools::shift */

#endif /* define: tools_shift_h */



// #ifndef _tools_shift_h
// #define _tools_shift_h

// /**
//  * @file	tools_shift.h
//  * @author	en2
//  * @date	07-07-2020
//  * @brief	
//  * @details	
// **/

// namespace tools::shift
// {

// namespace shift::bytes
// {



// }; /* namespace: shift::byte */

// namespace shift::bits
// {

// template<typename T>
// static inline void left(T & variable, int bits)
// {
//     T temp = variable;

//     for (int i = 0; i < sizeof(T) * 8 - bits; i++)
//     {
//         bit::set(temp, i, bit::get(variable, i + bits, bit::Order::MSB), bit::Order::MSB);
//     }
    
//     for (int i = 0; i < bits; i++)
//     {
//         bit::set(temp, sizeof(T) * 8 - bits + i, false, bit::Order::MSB);
//     }

//     variable = temp;
// }

// template<typename T>
// static inline void right(T & variable, int bits)
// {
//     T temp = variable;
    
//     for (int i = 0; i < sizeof(T) * 8 - bits; i++)
//     {
//         bit::set(temp, i + bits, bit::get(variable, i, bit::Order::MSB), bit::Order::MSB);
//     }

//     for (int i = 0; i < bits; i++)
//     {
//         bit::set(temp, i, false, bit::Order::MSB);
//     }

//     variable = temp;
// }

// }; /* namespace: shift::bit */

// }; /* namespace: tools::shift */


// #endif /* define: tools_shift_h */