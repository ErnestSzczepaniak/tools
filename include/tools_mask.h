#ifndef _tools_mask_h
#define _tools_mask_h

/**
 * @file	tools_mask.h
 * @author	en2
 * @date	06-07-2020
 * @brief	
 * @details	
**/

namespace tools::mask
{

static inline unsigned int get(int offset, int size)
{
    return (((1 << size) - 1) << offset);
}

}; /* namespace: tools::mask */

#endif /* define: tools_mask_h */