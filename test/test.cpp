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

TEST_CASE("awee")
{

    auto weawe = tools::set(0x11223344, 0x55, 1);

    show_bytes(weawe);

    using namespace tools;

    unsigned char awww[9];
    for (int i = 0; i < 9; i++)
    {
        awww[i] = i;
    }
    
    tools::expect::compilation(sizeof(int) == 4);

    show_bytes(awww);

    invert::bytes(awww, 9);

    show_bytes(awww);


}