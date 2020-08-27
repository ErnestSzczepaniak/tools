#ifndef _tools_bit_boolean_add_h
#define _tools_bit_boolean_add_h

/**
 * @file	tools_bit_boolean_add.h
 * @author	en2
 * @date	27-08-2020
 * @brief	
 * @details	
**/

namespace tools::bit::boolean::add
{

/* ---------------------------------------------| from_reference |--------------------------------------------- */

namespace from_reference
{

static inline void to_reference(bool & reference_1, bool & reference_2)
{
    reference_2 |= reference_1;
}

static inline void to_pointer(bool & reference, bool * pointer)
{
    *pointer |= reference;
}

static inline bool with_reference(bool & reference_1, bool & reference_2)
{
    return (reference_1 | reference_2);
}

static inline bool with_pointer(bool & reference, bool * pointer)
{
    return (reference | *pointer);
}

static inline bool with_value(bool & reference, const bool & value)
{
    return (reference | value);
}

}; /* namespace: from_reference */

/* ---------------------------------------------| from_pointer |--------------------------------------------- */

namespace from_pointer
{

static inline void to_reference(bool * pointer, bool & reference)
{
    reference |= *pointer;
}

static inline void to_pointer(bool * pointer_1, bool * pointer_2)
{
    *pointer_2 |= *pointer_1;
}

static inline bool with_reference(bool * pointer, bool & reference)
{
    return (*pointer | reference);
}

static inline bool with_pointer(bool * pointer_1, bool * pointer_2)
{
    return (*pointer_1 | *pointer_2);
}

static inline bool with_value(bool * pointer, const bool & value)
{
    return (*pointer | value);
}

}; /* namespace: from_pointer */

/* ---------------------------------------------| from_value |--------------------------------------------- */

namespace value
{



}; /* namespace: from_value */


}; /* namespace: tools::bit::boolean::add */


#endif /* define: tools_bit_boolean_add_h */