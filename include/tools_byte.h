#ifndef _tools_byte_h
#define _tools_byte_h

/**
 * @file	tools_byte.h
 * @author	en2
 * @date	06-07-2020
 * @brief	
 * @details	
**/

namespace tools::byte
{

enum class Order : unsigned char
{
    LITTLE,
    BIT
}; /* enum: Order */

template<typename T>
static inline unsigned char get(T & variable, int byte)
{
    auto * ptr = (unsigned char *) &variable;
    return ptr[byte];
}

template<typename T>
static inline void set(T & variable, int byte, unsigned char value)
{
    auto * ptr = (unsigned char *) &variable;
    ptr[byte] = value;
}

template<typename T>
static inline T invert(T & variable)
{
    T temp;

    auto * ptr_in = (unsigned char *) &variable;
    auto * ptr_out = (unsigned char *) &temp;

    for (int i = 0; i < sizeof(T); i++) ptr_out[sizeof(T) - i - 1] = ptr_in[i];

    return temp;
}

}; /* namespace: tools::byte */


#endif /* define: tools_byte_h */