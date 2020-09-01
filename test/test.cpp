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

void show_string(char * string)
{
    printf("%s", string);
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



    char s[] = "test test sample";

    auto size = string::info::size(s);


    // tools::copy::memory::to_variable()

}