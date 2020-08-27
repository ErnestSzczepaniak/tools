#ifndef _tools_invert_h
#define _tools_invert_h

/**
 * @file	tools_invert.h
 * @author	en2
 * @date	13-07-2020
 * @brief	
 * @details	
**/

namespace tools::invert
{

namespace bytes
{

template<typename T>
static inline void in_memory(T * memory, int size)
{
    auto * ptr = cast::value<unsigned char *>(memory);

    for (int i = 0; i < size / 2; i++)
    {
        auto temp = ptr[i];
        ptr[i] = ptr[size - i - 1];
        ptr[size - i - 1] = temp;
    }
}

template<typename T>
static inline void in_variable(T & variable, int size = sizeof(T))
{
    auto * ptr = cast::value<unsigned char *>(&variable);

    for (int i = 0; i < size / 2; i++)
    {
        auto temp = ptr[i];
        ptr[i] = ptr[size - i - 1];
        ptr[size - i - 1] = temp;
    }
}

}; /* namespace: bytes */

namespace bits
{



}; /* namespace: bits */


}; /* namespace: tools */

#endif /* define: tools_invert_h */