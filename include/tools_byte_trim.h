#ifndef _tools_byte_trim_h
#define _tools_byte_trim_h

/**
 * @file	tools_byte_trim.h
 * @author	en2
 * @date	28-08-2020
 * @brief	
 * @details	
**/

namespace tools::byte::trim
{

static inline void left(unsigned char & byte, int bits)
{
    unsigned char mask = ((1 << bits) - 1) << (8 - bits);
    byte &= ~mask;
}

static inline constexpr unsigned char left(const unsigned char & byte, int bits)
{
    unsigned char mask = ((1 << bits) - 1) << (8 - bits);
    return (byte & ~mask);
}

static inline void right(unsigned char & byte, int bits)
{
    unsigned char mask = ((1 << bits) - 1);
    byte &= ~mask;
}

static inline constexpr unsigned char right(const unsigned char & byte, int bits)
{
    unsigned char mask = ((1 << bits) - 1);
    return (byte & ~mask);
}

}; /* namespace: tools::byte::trim */

#endif /* define: tools_byte_trim_h */