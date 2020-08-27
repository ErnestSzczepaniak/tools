#ifndef _tools_cast_h
#define _tools_cast_h

/**
 * @file	tools_cast.h
 * @author	en2
 * @date	13-07-2020
 * @brief	
 * @details	
**/

namespace tools::cast
{

template<typename R, typename T>
static inline R variable(T & variable)
{
    return *((R*)&variable);
}

template<typename R, typename T>
static inline R value(const T & value)
{
    return *((R*)&value);
}

}; /* namespace: tools */


#endif /* define: tools_cast_h */