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

    auto v = byte::shift::left(0xc0, 2, true);
    show_bytes(v);

    auto df = byte::count::bits(0x13, false);

    auto t = byte::boolean::negate(0xff, 0, 4);


    show_bytes(t);


    // tools::copy::memory::to_variable()

}