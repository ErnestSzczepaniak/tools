#ifndef _tools_string_insert_h
#define _tools_string_insert_h

/**
 * @file	tools_string_insert.h
 * @author	en2
 * @date	07-09-2020
 * @brief	
 * @details	
**/

#include "tools_string_get.h"
#include "stdio.h"

namespace tools::string::insert
{

namespace append
{

template<typename ...Args>
static inline int format(char * string, int size, const char * format, Args ... args)
{
    char buffer[256];

    auto size_format = snprintf(buffer, 256, format, args...);
    auto size_string = get::size(string);

    if (size_string + size_format < size)
    {
        memcpy(&string[size_string], buffer, size_format);
        return size_format;
    }

    return -1;
}

static inline int text(char * string, int size, char * text)
{
    auto size_text = get::size(text);
    auto size_string = get::size(string);

    if (size_string + size_text < size)
    {
        memcpy(&string[size_string], text, size_text);
        return size_text;
    }

    return -1;
}

}; /* namespace: append */

namespace preppend
{

template<typename ...Args>
static inline int format(char * string, int size, const char * format, Args ... args)
{
    char buffer[256];

    auto size_format = snprintf(buffer, 256, format, args...);
    auto size_string = get::size(string);

    if (size_string + size_format < size)
    {
        memmove(&string[size_format], string, size_string);
        memcpy(string, buffer, size_format);
        return size_format;
    }

    return -1;
}

static inline int text(char * string, int size, char * text)
{
    auto size_text = get::size(text);
    auto size_string = get::size(string);

    if (size_string + size_text < size)
    {
        memmove(&string[size_text], string, size_string);
        memcpy(string, text, size_text);
        return size_text;
    }

    return -1;
}

}; /* namespace: preppend */

}; /* namespace: tools::string::insert */


#endif /* define: tools_string_insert_h */