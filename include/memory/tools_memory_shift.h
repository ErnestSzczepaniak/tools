#ifndef _tools_memory_shift_h
#define _tools_memory_shift_h

/**
 * @file	tools_memory_shift.h
 * @author	en2
 * @date	03-09-2020
 * @brief	
 * @details	
**/

#include "string.h"

namespace tools::memory::shift
{

namespace left
{

static inline void bytes(void * memory, int size, int number, bool wrap = false)
{
    auto * ptr = (unsigned char *) memory;

    if (wrap == false) memmove(ptr, ptr + number, size - number);
    else
    {
        for (int i = 0; i < size - number; i++)
        {
            if (i < number) // wrap
            {
                auto temp1 = ptr[i];
                auto temp2 = ptr[size - number + i];

                ptr[i] = ptr[i + number];
                ptr[size - number + i] = temp1; 
                ptr[i + number] = temp2;
            }
            else ptr[i - number] = ptr[i];
        }
    }
}

static inline void bits(void * memory, int size, int number, bool wrap = false)
{

}

}; /* namespace: left */

namespace right
{



}; /* namespace: right */



}; /* namespace: tools::memory::shift */


#endif /* define: tools_memory_shift_h */