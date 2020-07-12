// #ifndef _tools_byte_h
// #define _tools_byte_h

// /**
//  * @file	tools_byte.h
//  * @author	en2
//  * @date	06-07-2020
//  * @brief	
//  * @details	
// **/

// #include "tools_memory.h"
// #include "tools_address.h"

// namespace tools::byte
// {

// template<typename T>
// static inline unsigned char get(T & variable, int byte)
// {
//     if (sizeof(T) <= byte) return 0;

//     return address::of(variable)[byte];
// }

// template<typename T>
// static inline void set(T & variable, int byte, unsigned char value)
// {
//     if (sizeof(T) <= byte) return;
    
//     address::of(variable)[byte] = value;
// }

// template<typename T>
// static inline void swap(T & variable_1, T & variable_2, int byte)
// {
//     if (sizeof(T) <= byte) return;

//     unsigned char temp = address::of(variable_1)[byte];
//     address::of(variable_1)[byte] = address::of(variable_2)[byte];
//     address::of(variable_2)[byte] = temp;
// }

// template<typename T>
// static inline void invert(T & destination, int base = sizeof(T), int size = sizeof(T))
// {
//     if (sizeof(T) % base != 0) return;

//     unsigned char buffer[sizeof(T)];
//     auto * ptr = address::of(destination);

//     memory::copy(buffer, destination);

//     auto beats = size / base;

//     for (int i = 0; i < beats; i++)
//     {
//         for (int j = 0; j < base; j++)
//         {
//             ptr[i * base + j] = buffer[i * base + base - 1 -j];
//         }
//     }  
// }

// }; /* namespace: tools::byte */

// #endif /* define: tools_byte_h */