#ifndef _tools_string_word_h
#define _tools_string_word_h

/**
 * @file	tools_string_word.h
 * @author	en2
 * @date	01-09-2020
 * @brief	
 * @details	
**/

#include "tools_string.h"

namespace tools::string::word
{

// int count(char * string)
// {
//     auto counter = 0;
//     auto iterator = 0; 

//     while(true)
//     {
//         if (get(string, iterator++) != nullptr) counter++;
//         else break;
//     }
    
//     return counter;
// }

// char * find(char * string, char * word, int occurence = 0)
// {
//     auto words = count(string);
//     auto occurences = 0;

//     for (int i = 0; i < words; i++)
//     {
//         auto * next = get(string, i);

//         if ((compare(next, word) == true) && (occurences == occurence)) return next;
//         else occurences++;
//     }

//     return nullptr;
// }

}; /* namespace: tools::string::word */


#endif /* define: tools_string_word_h */