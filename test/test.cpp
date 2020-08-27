#include "test.h"
#include "tools.h"

struct Te
{
    int k2;
}; /* structure: T */


template<typename T>
void show_bytes(T & payload)
{
    auto * ptr = (unsigned char *) &payload;
    int size = sizeof(T);

    for (int i = 0; i < size; i++) printf("%02X ", ptr[i]);

    printf("\r\n");
}

// template<typename T>
// void show_bits(T & value)
// {
//     int w = 0;

//     for (int i = 0; i < sizeof(T) * 8; i++)
//     {
//         printf("%d ", tools::bit::get(value, i, tools::bit::Order::MSB));
//         w++;
//         if (w == 8)
//         {
//             printf(", ");
//             w = 0;
//         }
//     }
//     printf("\r\n");
// }

#include "tools.h"

template<typename R, typename T>
static inline R address(T & variable)
{
    return (R)&variable;
}


#include <type_traits>


template<typename T>
void ttt(T & v, int bits)
{
    if (std::is_pointer_v<T&>)
    {
        printf("Is pointer\n");
    }
    else
    {
        printf("Is reference\n");
    }
}

template<typename T>
int ttt(const T & v, int bits)
{
    return {};
}

TEST_CASE("awee")
{
    using namespace tools;

    unsigned char awww[9];
    for (int i = 0; i < 9; i++)
    {
        awww[i] = i;
    }

    show_bytes(awww);

    set::byte::in_memory(awww, 8, 0x22);
    set::memory(awww, 9, 0x22);

    bool s;
    bit::set::from_value::to_pointer(false, &s);

    bit::boolean::add::from_reference::with_value(s, false);

    int k;
    auto * awe = &k;

    ttt(awww, 1);
    auto awewae = ttt(1, 1);
    //shift<const int &>(1, 1);


    // tools::copy::memory::to_variable()

}