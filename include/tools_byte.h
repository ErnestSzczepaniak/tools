#ifndef _tools_byte_h
#define _tools_byte_h

/**
 * @file	tools_byte.h
 * @author	en2
 * @date	27-08-2020
 * @brief	
 * @details	
**/

namespace tools::byte
{

namespace set::variable
{

static inline void with_variable(unsigned char & variable_1, unsigned char & variable_2)
{
    variable_1 = variable_2;
}

static inline void with_value(unsigned char & variable, const unsigned char & value)
{
    variable = value;
}

}; /* namespace: set::variable */

namespace set::value
{

static inline constexpr bool with_variable(const unsigned char & value, unsigned char & variable)
{
    
}

static inline void with_value(unsigned char & variable, const unsigned char & value)
{
    variable = value;
}

}; /* namespace: set::variable */

}; /* namespace: tools::byte */


#endif /* define: tools_byte_h */