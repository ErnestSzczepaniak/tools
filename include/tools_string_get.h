#ifndef _tools_string_get_h
#define _tools_string_get_h

/**
 * @file	tools_string_get.h
 * @author	en2
 * @date	01-09-2020
 * @brief	
 * @details	
**/

#include "tools_string_info.h"

namespace tools::string::get
{

char * character(char * string, int position)
{
    return position > info::size(string) ? &string[position] : nullptr;
}

char * word(char * string, int word)
{
    for (int i = 0; i < word; i++)
    {
        string = strpbrk(string, " ");

        if (string != nullptr) string++;
    }
    
    return string;
}

char * line(char * string, int line)
{

}

}; /* namespace: tools::string::get */

#endif /* define: tools_string_get_h */