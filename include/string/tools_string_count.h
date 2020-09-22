#ifndef _tools_string_count_h
#define _tools_string_count_h

/**
 * @file	tools_string_count.h
 * @author	en2
 * @date	03-09-2020
 * @brief	
 * @details	
**/

#include "tools_string_get.h"

namespace tools::string::count
{

static inline int character(char * string, char character)
{
    auto counter = 0;

    for (int i = 0; i < get::size(string); i++)
    {
        if (string[i] == character) counter++;
    }

    return counter;
}

static inline int words(char * string, const char * delimiters = " ")
{
    if (*string == 0) return 0;

    auto counter = 0;
    auto iterator = 0;

    while(true)
    {
        if (get::word(string, iterator++, delimiters) != nullptr) counter++;
        else break;
    }
    
    return counter;
}

static inline int word(char * string, char * word, const char * delimiters = " ")
{
    auto counter = 0;

    for (int i = 0; i < words(string, delimiters); i++)
    {
        auto * current = get::word(string, i, delimiters);

        if (compare::equality(current, word, delimiters) == true) counter++;
    }
    
    return counter;
}

}; /* namespace: tools::string::count */


#endif /* define: tools_string_count_h */