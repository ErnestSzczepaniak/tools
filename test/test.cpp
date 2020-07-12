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

TEST_CASE("awee")
{
    using namespace tools;

    unsigned char awww[10];
    
    unsigned int t = 0x11223344;
    unsigned int w = 0;
    auto * tp = &t;
    auto * wp = &w;


    invert::bytes::in_memory(&t, 4);

    auto * ptr = cast::value_to<Te *>(0x11223344);
    


    show_bytes(t);

    auto st = sizeof(unsigned int * &);

    show_bytes(t);
    show_bytes(awww);
}