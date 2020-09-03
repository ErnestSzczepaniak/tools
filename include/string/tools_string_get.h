#ifndef _tools_string_get_h
#define _tools_string_get_h

/**
 * @file	tools_string_get.h
 * @author	en2
 * @date	01-09-2020
 * @brief	
 * @details	
**/


#include "tools_string_compare.h"

namespace tools::string::get
{

static inline char * word(char * string, int index, const char * delimiters = " ")
{
    for (int i = 0; i < index; i++)
    {
        string = strpbrk(string, delimiters);

        if (string != nullptr) string++;
    }
    
    return string;
}

}; /* namespace: tools::string::get */

#endif /* define: tools_string_get_h */