#ifndef _tools_byte_info_h
#define _tools_byte_info_h

/**
 * @file	tools_byte_info.h
 * @author	en2
 * @date	01-09-2020
 * @brief	
 * @details	
**/

namespace tools::byte::info
{

static inline int size(unsigned char & byte)
{
    return sizeof(byte);
}

}; /* namespace: tools::byte::info */

#endif /* define: tools_byte_info_h */