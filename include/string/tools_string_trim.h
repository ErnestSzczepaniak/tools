#ifndef _tools_string_trim_h
#define _tools_string_trim_h

/**
 * @file	tools_string_trim.h
 * @author	en2
 * @date	01-09-2020
 * @brief	
 * @details	
**/

#include "tools_string_get.h"

namespace tools::string::trim
{

namespace left
{

static inline void characters(char * string, int number)
{
    auto size = get::size(string);

    memmove(string, string + number, size - number);
    memset(&string[size - number], 0, number);
}

static inline void words(char * string, int number)
{

}


}; /* namespace: left */

namespace right
{

static inline void characters(char * string, int number)
{
    auto size = get::size(string);

    memset(&string[size - number], 0, number);
}

static inline void words(char * string, int number)
{

}

}; /* namespace: right */

namespace middle
{

static inline void characters(char * string, int offset, int number)
{
    auto size = get::size(string);

    if (offset + number > size) return;

    memmove(&string[offset], &string[offset + number], size - number);
    memset(&string[size - number], 0, number);
}

}; /* namespace: middle */


}; /* namespace: tools::string::trim */

#endif /* define: tools_string_trim_h */