#ifndef _tools_mask_h
#define _tools_mask_h

/**
 * @file	tools_mask.h
 * @author	en2
 * @date	01-09-2020
 * @brief	
 * @details	
**/

namespace tools::mask
{

template<typename T>
static inline T create(int offset, int size)
{
    return (((1 << size) - 1) << offset);
}

static inline constexpr auto create(const int & offset, const int & size)
{
    return (((1 << size) - 1) << offset);
}

}; /* namespace: tools::mask */


#endif /* define: tools_mask_h */