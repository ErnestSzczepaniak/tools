#ifndef _tools_string_h
#define _tools_string_h

/**
 * @file	tools_string.h
 * @author	en2
 * @date	01-09-2020
 * @brief	
 * @details	
**/

#include "tools_string_compare.h"
#include "tools_string_get.h"
#include "tools_string_count.h"
#include "tools_string_find.h"
#include "tools_string_trim.h"
#include "tools_string_set.h"

namespace tools::string
{

// static inline void insert(char * to, int offset, char * from)
// {
//     auto size_destination = length(to);
//     auto size_source = length(from);
//     auto size_copy = size_destination - offset;

//     memcpy(&to[offset] + size_source, &to[offset], size_destination - offset);
//     memcpy(&to[offset], from, size_source);
// }

}; /* namespace: tools::string */


#endif /* define: tools_string_h */