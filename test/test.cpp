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

    unsigned char awww[9];
    for (int i = 0; i < 9; i++)
    {
        awww[i] = i;
    }

    show_bytes(awww);


    unsigned char v = 0x5f;
    
    byte::boolean::negate(v, 4, 4);

    show_bytes(v);

    auto w = mask::create(0, 5);


    // tools::copy::memory::to_variable()

}