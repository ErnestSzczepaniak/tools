#ifndef _tools_byte_get_h
#define _tools_byte_get_h

/**
 * @file	tools_byte_get.h
 * @author	en2
 * @date	28-08-2020
 * @brief	
 * @details	
**/

namespace tools::byte::get
{

static inline unsigned char value(unsigned char & byte, int offset = 0, int size = 8)
{
    unsigned char mask = ((1 << size) - 1) << offset;
    return ((byte & mask) >> offset);
}

static inline constexpr unsigned char value(const unsigned char & value, int offset = 0, int size = 8)
{
    unsigned char mask = ((1 << size) - 1) << offset;
    return ((value & mask) >> offset);
}

}; /* namespace: tools::byte::get */


#endif /* define: tools_byte_get_h */