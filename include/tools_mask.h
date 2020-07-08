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

template<typename T = unsigned int>
static inline T get(int offset, int size, bool value = true)
{
    auto mask = ((((T) 1 << size) - 1) << offset);
    return value ? mask : ~mask;
}

}; /* namespace: tools::mask */

#endif /* define: tools_mask_h */