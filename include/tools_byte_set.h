#ifndef _tools_byte_set_h
#define _tools_byte_set_h

/**
 * @file	tools_byte_set.h
 * @author	en2
 * @date	28-08-2020
 * @brief	
 * @details	
**/

namespace tools::byte::set
{

template<typename T>
static inline void value(unsigned char & byte, T value, int offset = 0, int size = 8)
{
    unsigned char mask = ((1 << size) - 1) << offset;
    byte &= ~mask;
    byte |= (static_cast<unsigned char>(value) << offset);
}

template<typename T>
static inline constexpr unsigned char value(const unsigned char & byte, T value, int offset = 0, int size = 8)
{
    unsigned char mask = ((1 << size) - 1) << offset;
    return ((byte & ~mask) | (static_cast<unsigned char>(value) << offset));
}

}; /* namespace: tools::byte::set */


#endif /* define: tools_byte_set_h */