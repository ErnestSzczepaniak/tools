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

static inline int size(char * string, const char * delimiters = "\0")
{
    return strcspn(string, delimiters);
}

namespace character
{

static inline char * by_index(char * string, int index, const char * delimiters = "\0")
{
    if (index > size(string, delimiters)) return nullptr;

    return &string[index];
}

static inline char * by_match(char * string, char * character, const char * delimiters = "\0")
{
    for (int i = 0; i < size(string, delimiters); i++)
    {
        if (string[i] == *character) return &string[i];
    }
    
    return nullptr;
}

static inline int occurence(char * string, char * character, const char * delimiters = "\0")
{
    auto counter = 0;

    for (int i = 0; i < size(string, delimiters); i++)
    {
        if (string[i] == *character) counter++;
    }

    return counter;
}

static inline int position(char * string, char * character, const char * delimiters = "\0")
{
    for (int i = 0; i < size(string, delimiters); i++)
    {
        if (string[i] == *character) return i;
    }
    
    return -1;
}

static inline int index(char * string, char * character)
{
    return position(string, character);
}

}; /* namespace: character */

namespace word
{

static inline char * by_index(char * string, int index, const char * delimiters = " ")
{
    for (int i = 0; i < index; i++)
    {
        string = strpbrk(string, delimiters);

        if (string != nullptr) string++;
    }
    
    return string;
}

static inline int count(char * string, const char * delimiters = " ")
{
    auto counter = 0;
    auto iterator = 0;

    while(true)
    {
        if (by_index(string, iterator++, delimiters) != nullptr) counter++;
        else break;
    }
    
    return counter;
}

static inline char * by_match(char * string, char * word, const char * delimiters = " ")
{
    for (int i = 0; i < count(string, delimiters); i++)
    {
        auto * current = by_index(string, i, delimiters);

        if (compare::equality(current, word, delimiters) == true) return current;
    }

    return nullptr;
}

static inline int size(char * word, const char * delimiters = " ")
{
    return strcspn(word, delimiters);
}

static inline int occurence(char * string, char * word, const char * delimiters = " ")
{
    auto counter = 0;

    for (int i = 0; i < count(string, delimiters); i++)
    {
        auto * current = by_index(string, i, delimiters);

        if (compare::equality(current, word, delimiters) == true) counter++;
    }
    
    return counter;
}

static inline int position(char * string, char * word, const char * delimiters = " ")
{
    auto * ptr = by_match(string, word, delimiters);

    return (ptr - string);
}

static inline int index(char * string, char * word, const char * delimiters = " ")
{
    auto counter = 0;

    for (int i = 0; i < count(string, delimiters); i++)
    {
        auto * current = by_index(string, i, delimiters);

        if (compare::equality(current, word, delimiters) == true) return counter;
        else counter++;
    }
    
    return -1;
}

}; /* namespace: word */

}; /* namespace: tools::string::get */

#endif /* define: tools_string_get_h */