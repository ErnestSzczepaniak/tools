#ifndef _tools_string_find_h
#define _tools_string_find_h

/**
 * @file	tools_string_find.h
 * @author	en2
 * @date	03-09-2020
 * @brief	
 * @details	
**/

#include "tools_string_count.h"
#include "tools_string_get.h"

namespace tools::string::find
{

static inline char * substring(char *s1, char *s2, int n) 
{
    // simplistic algorithm with O(n2) worst case
    size_t i, len;
    char c = *s2;

    if (c == '\0')
        return (char *)s1;

    for (len = strlen(s2); len <= n; n--, s1++) {
        if (*s1 == c) {
            for (i = 1;; i++) {
                if (i == len)
                    return (char *)s1;
                if (s1[i] != s2[i])
                    break;
            }
        }
    }
    return NULL;
}

namespace position
{

static inline int character(char * string, char * character)
{
    for (int i = 0; i < get::size(string); i++)
    {
        if (string[i] == *character) return i;
    }
    
    return -1;
}

static inline int word(char * string, char * word, const char * delimiters = " ")
{
    for (int i = 0; i < count::words(string, delimiters); i++)
    {
        auto * current = get::word(string, i, delimiters);

        if (compare::equality(current, word, delimiters) == true) return (current - string);
    }

    return -1;
}

}; /* namespace: position */

namespace index
{

static inline int character(char * string, char * character)
{
    return position::character(string, character);
}

static inline int word(char * string, char * word, const char * delimiters = " ")
{
    for (int i = 0; i < count::words(string, delimiters); i++)
    {
        auto * current = get::word(string, i, delimiters);

        if (compare::equality(current, word, delimiters) == true) return i;
    }

    return -1;
}

}; /* namespace: index */

}; /* namespace: tools::string::find */

#endif /* define: tools_string_find_h */