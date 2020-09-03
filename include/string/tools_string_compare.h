#ifndef _tools_string_compare_h
#define _tools_string_compare_h

/**
 * @file	tools_string_compare.h
 * @author	en2
 * @date	02-09-2020
 * @brief	
 * @details	
**/

#include "string.h"

namespace tools::string::compare
{

static inline int difference(char * string_1, char * string_2, const char * delimiters = "\0")
{
    auto size_1 = strcspn(string_1, delimiters);
    auto size_2 = strcspn(string_2, delimiters);

    if (size_1 != size_2)
    {
        return (size_1 < size_2) ? size_1 + 1 : size_2 + 1;
    }
    else
    {
        return (strncmp(string_1, string_2, size_1));
    }
    
    return -1;
}

static inline bool equality(char * string_1, char * string_2, const char * delimiters = "\0")
{
    return (difference(string_1, string_2, delimiters) == 0);
}

}; /* namespace: tools::string::compare */

#endif /* define: tools_string_compare_h */