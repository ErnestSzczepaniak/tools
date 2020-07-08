#ifndef _tools_address_h
#define _tools_address_h

/**
 * @file	tools_address.h
 * @author	en2
 * @date	07-07-2020
 * @brief	
 * @details	
**/

#include <type_traits>

namespace tools::address
{

template<typename T, typename R = unsigned char *>
static inline R of(T & variable)
{
    return (R)(&variable);
}

template<typename T, typename R = unsigned char *>
static inline R from(T & variable, int offset)
{
    return ((R)(&variable) + offset);
}

template<typename R, typename T>
static inline R * at(T address)
{
    return ((R*) address);
}

}; /* namespace: tools::address */


#endif /* define: tools_address_h */