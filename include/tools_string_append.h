#ifndef _tools_string_append_h
#define _tools_string_append_h

/**
 * @file	tools_string_append.h
 * @author	en2
 * @date	02-09-2020
 * @brief	
 * @details	
**/

#include "stdio.h"
#include "tools_string_get.h"

namespace tools::string::append
{

template<typename ...Args>
static inline void format(char * string, int size, const char * format, Args ... args)
{
    auto size_current = get::size(string);

    snprintf(&string[size_current], size - size_current, format, args...);
}

}; /* namespace: tools::string::append */


#endif /* define: tools_string_append_h */