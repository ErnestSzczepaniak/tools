#ifndef _tools_byte_boolean_h
#define _tools_byte_boolean_h

/**
 * @file	tools_byte_boolean.h
 * @author	en2
 * @date	28-08-2020
 * @brief	
 * @details	
**/

#include "tools_byte_get.h"
#include "tools_byte_set.h"

namespace tools::byte::boolean
{

template<typename T>
static inline void add(unsigned char & byte, T value, int offset = 0, int size = 8)
{
    unsigned char mask = ((1 << size) - 1) << offset;
    byte |= (static_cast<unsigned char>(value) & mask);
}

template<typename T>
static inline  unsigned char add(const unsigned char & byte, T value, int offset = 0, int size = 8)
{
    unsigned char mask = ((1 << size) - 1) << offset;
    return (byte | (static_cast<unsigned char>(value) & mask));
}

template<typename T>
static inline void xadd(unsigned char & byte, T value, int offset = 0, int size = 8)
{
    unsigned char mask = ((1 << size) - 1) << offset;
    byte ^= (static_cast<unsigned char>(value) & mask);
}

template<typename T>
static inline  unsigned char xadd(const unsigned char & byte, T value, int offset = 0, int size = 8)
{
    unsigned char mask = ((1 << size) - 1) << offset;
    return (byte ^ (static_cast<unsigned char>(value) & mask));
}

template<typename T>
static inline void multiply(unsigned char & byte, T value, int offset = 0, int size = 8)
{
    unsigned char mask = ((1 << size) - 1) << offset;
    byte &= (static_cast<unsigned char>(value) & mask);
}

template<typename T>
static inline  unsigned char multiply(const unsigned char & byte, T value, int offset = 0, int size = 8)
{
    unsigned char mask = ((1 << size) - 1) << offset;
    return (byte & (static_cast<unsigned char>(value) & mask));
}

static inline void negate(unsigned char & byte, int offset = 0, int size = 8)
{
    set::value(byte, ~get::value(byte, offset, size), offset, size);
}

static inline  unsigned char negate(const unsigned char & byte, int offset = 0, int size = 8)
{
    const auto temp = byte;
    set::value(temp, ~get::value(temp, offset, size), offset, size);
    return temp;
}

}; /* namespace: tools::byte::boolean */



#endif /* define: tools_byte_boolean_h */