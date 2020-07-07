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

// template<typename T>
// static inline void left(T & variable, int bytes)
// {
//     auto * ptr = (unsigned char *) &variable;

//     memmove(&ptr[0], &ptr[bytes], sizeof(T) - bytes);
//     memset(&ptr[sizeof(T) - bytes], 0, bytes);
// }

// template<typename T>
// static inline void right(T & variable, int bytes)
// {
//     auto * ptr = (unsigned char *) &variable;

//     memmove(&ptr[bytes], &ptr[0], sizeof(T) - bytes);
//     memset(&ptr[0], 0, bytes);
// }

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