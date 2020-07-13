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

template<typename T>
static inline void bytes(T * memory, int size = sizeof(T))
{
    auto * ptr = cast<unsigned char *>(memory);

    for (int i = 0; i < size / 2; i++)
    {
        auto temp = ptr[i];
        ptr[i] = ptr[size - i - 1];
        ptr[size - i - 1] = temp;
    }
}

template<typename T>
static inline void bytes(T & variable, int size = sizeof(T))
{
    auto * ptr = cast<unsigned char *>(&variable);

    for (int i = 0; i < size / 2; i++)
    {
        auto temp = ptr[i];
        ptr[i] = ptr[size - i - 1];
        ptr[size - i - 1] = temp;
    }
}

template<typename T>
static inline T bytes(const T & value, int size = sizeof(T))
{
    T temp = value;
    auto * ptr = cast<unsigned char *>(&temp);

    for (int i = 0; i < size / 2; i++)
    {
        auto temp = ptr[i];
        ptr[i] = ptr[size - i - 1];
        ptr[size - i - 1] = temp;
    }

    return temp;
}

}; /* namespace: tools */


#endif /* define: tools_invert_h */