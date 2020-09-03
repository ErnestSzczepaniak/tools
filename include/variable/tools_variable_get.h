#ifndef _tools_variable_get_h
#define _tools_variable_get_h

/**
 * @file	tools_variable_get.h
 * @author	en2
 * @date	03-09-2020
 * @brief	
 * @details	
**/

#include "tools_byte_get.h"
#include "tools_byte_set.h"

namespace tools::variable::get
{

template<typename T>
static inline constexpr int size(T & variable)
{
    return sizeof(T);
}

template<typename R = unsigned char *, typename T>
static inline R address(T & variable)
{
    return (R)&variable;
}

/* ---------------------------------------------| info |--------------------------------------------- */

template<typename T>
static inline unsigned char byte(T & variable, int offset = 0)
{
    return address(variable)[offset];
}

template<typename R, typename T>
static inline R bytes(T & variable, int offset = 0, int size = sizeof(T))
{
    if (size + offset > sizeof(T)) size = sizeof(T) - offset;
    if (size > sizeof(R)) size = sizeof(R);

    R temp = {0};

    auto * ptr_variable = address(variable);
    auto * ptr_temp = address(temp);

    for (int i = 0; i < size; i++)
    {
        ptr_temp[i] = ptr_variable[i + offset];
    }
    
    return temp;
}

template<typename T>
static inline T bytes(T & variable, int offset = 0, int size = sizeof(T))
{
    return bytes<T, T>(variable, offset, size);
}

template<typename R, typename T>
static inline R bits(T & variable, int offset = 0, int size = sizeof(T) * 8)
{
    R temp = {0};

    if (size + offset > sizeof(T) * 8) size = sizeof(T) * 8 - offset;
    if (size > sizeof(R) * 8) size = sizeof(R) * 8;

    auto input_bit = offset;
    auto output_bit = 0;

    auto input_size = 8 - input_bit;

    auto * input_variable = address(variable);
    auto * output_variable = address(temp);

    while(output_bit < size)
    {
        auto input = byte::get::bits(input_variable[input_bit / 8], input_bit % 8, input_size);
        byte::set::bits(output_variable[output_bit / 8], input, output_bit % 8, input_size);

        input_bit += input_size;
        output_bit += input_size;
        input_size = 8 - input_size;

        if (output_bit + input_size > size) input_size = size - output_bit;
    }

    return temp;
}

template<typename T>
static inline T bits(T & variable, int offset = 0, int size = sizeof(T) * 8)
{
    return bits<T, T>(variable, offset, size);
}

}; /* namespace: tools::variable::get */


#endif /* define: tools_variable_get_h */