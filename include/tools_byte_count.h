#ifndef _tools_byte_count_h
#define _tools_byte_count_h

/**
 * @file	tools_byte_count.h
 * @author	en2
 * @date	28-08-2020
 * @brief	
 * @details	
**/

namespace tools::byte::count
{

static inline int bits(unsigned char & byte, bool value)
{
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        if (((byte >> i) & 0x1) == value) count++;
    }
    
    return count;
}

static inline constexpr int bits(const unsigned char & byte, bool value)
{
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        if (((byte >> i) & 0x1) == value) count++;
    }
    
    return count;
}

static inline constexpr int bytes(unsigned char & byte)
{
    return sizeof(byte);
}

static inline constexpr int bytes(const unsigned char & byte)
{
    return sizeof(byte);
}

}; /* namespace: tools::byte::count */


#endif /* define: tools_byte_count_h */