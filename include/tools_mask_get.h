#ifndef _tools_mask_get_h
#define _tools_mask_get_h

/**
 * @file	tools_mask_get.h
 * @author	en2
 * @date	02-09-2020
 * @brief	
 * @details	
**/

namespace tools::mask::get
{

template<typename T>
static inline T value(int offset, int size)
{
    return (((1 << size) - 1) << offset);
}

}; /* namespace: tools::mask::get */

#endif /* define: tools_mask_get_h */