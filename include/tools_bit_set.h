#ifndef _tools_bit_set_h
#define _tools_bit_set_h

/**
 * @file	tools_bit_set.h
 * @author	en2
 * @date	27-08-2020
 * @brief	
 * @details	
**/

namespace tools::bit::set
{

/* ---------------------------------------------| from_reference |--------------------------------------------- */

namespace from_reference
{

static inline void to_reference(bool & reference_1, bool & reference_2)
{
    reference_2 = reference_1;
}

static inline void to_pointer(bool & reference, bool * pointer)
{
    *pointer = reference;
}

}; /* namespace: reference */

/* ---------------------------------------------| from_pointer |--------------------------------------------- */

namespace from_pointer
{

static inline void to_reference(bool * pointer, bool & reference)
{
    reference = *pointer;
}

static inline void to_pointer(bool * pointer_1, bool * pointer_2)
{
    *pointer_2 = *pointer_1;
}

}; /* namespace: pointer */

/* ---------------------------------------------| from_value |--------------------------------------------- */

namespace from_value
{

static inline void to_reference(const bool & value, bool & reference)
{
    reference = value;
}

static inline void to_pointer(const bool & value, bool * pointer)
{
    *pointer = value;
}

}; /* namespace: value */

}; /* namespace: tools::bit::set */

#endif /* define: tools_bit_set_h */