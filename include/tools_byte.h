#ifndef _tools_byte_h
#define _tools_byte_h

/**
 * @file	tools_byte.h
 * @author	en2
 * @date	27-08-2020
 * @brief	
 * @details	
**/

#include "tools_mask.h"

namespace tools::byte
{

static inline unsigned char get(unsigned char & byte, int offset = 0, int size = 8)
{
    auto mask = mask::create<unsigned char>(offset, size);

    return ((byte & mask) >> offset);
}

template<typename T>
static inline void set(unsigned char & byte, T value, int offset = 0, int size = 8)
{
    auto mask_byte = mask::create<unsigned char>(offset, size);
    auto mask_value = mask::create<unsigned char>(0, size);

    byte &= ~mask_byte;
    value &= mask_value;

    byte |= (value << offset);
}

static inline void invert(unsigned char & byte, int offset = 0, int size = 8)
{
    unsigned char temp = 0;

    for (int i = 0; i < size; i++)
    {
        set(temp, get(byte, offset + i, 1), offset + size - i - 1, 1);
    }

    byte = temp;
}

static inline int count(unsigned char & byte, bool value = true)
{
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        if (get(byte, i, 1) == value) count++;
    }
    
    return count;
}

}; /* namespace: tools::byte */

#endif /* define: tools_byte_h */