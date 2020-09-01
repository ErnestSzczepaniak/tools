#ifndef _tools_string_compare_h
#define _tools_string_compare_h

/**
 * @file	tools_string_compare.h
 * @author	en2
 * @date	01-09-2020
 * @brief	
 * @details	
**/

#include "tools_string_info.h"

namespace tools::string::compare
{

static inline bool strings(char * string_1, char * string_2)
{
    return (strcmp(string_1, string_2) == 0);
}

static inline bool words(char * word_1, char * word_2, const char * delimiters = " \n")
{
    auto size_1 = info::size(word_1, delimiters);
    auto size_2 = info::size(word_2, delimiters);

    return (size_1 == size_2) ? (strncmp(word_1, word_2, size_1) == 0) : false;
}

}; /* namespace: tools::string::compare */


#endif /* define: tools_string_compare_h */