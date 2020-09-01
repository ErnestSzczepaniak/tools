#ifndef _tools_string_info_h
#define _tools_string_info_h

/**
 * @file	tools_string_info.h
 * @author	en2
 * @date	01-09-2020
 * @brief	
 * @details	
**/

#include "string.h"

namespace tools::string::info
{

static inline int size(char * string, const char * delimiter = "\n")
{
    return (string != nullptr) ? strcspn(string, delimiter) : 0;
}

}; /* namespace: tools::string::info */


#endif /* define: tools_string_info_h */