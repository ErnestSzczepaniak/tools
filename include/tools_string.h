#ifndef _tools_string_h
#define _tools_string_h

/**
 * @file	tools_string.h
 * @author	en2
 * @date	06-07-2020
 * @brief	
 * @details	
**/

namespace tools::string
{

static inline bool compare(const char * string_1, const char * string_2)
{
    return (strcmp(string_1, string_2) == 0);
}

static inline int length(const char * string)
{
    return strlen(string);
}

}; /* namespace: tools::string */


#endif /* define: tools_string_h */