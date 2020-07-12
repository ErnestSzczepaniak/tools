#ifndef _tools_cast_h
#define _tools_cast_h

/**
 * @file	tools_cast.h
 * @author	en2
 * @date	12-07-2020
 * @brief	
 * @details	
**/

namespace tools::cast
{

template<typename R, typename T>
static inline R pointer_to(T * pointer)
{
    return (R)(pointer);
}

template<typename R, typename T>
static inline R value_to(T value)
{
    return (R)(value);
}

}; /* namespace: tools::cast */


#endif /* define: tools_cast_h */