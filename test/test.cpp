#include "test.h"
#include "tools.h"

template<typename T>
void show_bytes(T & payload)
{
    auto * ptr = (unsigned char *) &payload;
    int size = sizeof(T);

    for (int i = 0; i < size; i++) printf("%02X ", ptr[i]);

    printf("\r\n");
}

template<typename T>
void show_bits(T & value)
{
    int w = 0;

    for (int i = 0; i < sizeof(T) * 8; i++)
    {
        printf("%d ", tools::bit::get(value, i, tools::bit::Order::MSB));
        w++;
        if (w == 8)
        {
            printf(", ");
            w = 0;
        }
    }
    printf("\r\n");
}

struct Test
{
    int k;
}; /* structure: Test */


TEST_CASE("awee")
{


    using namespace tools;

    auto * t = address::from<Test>(0x20000000);

    unsigned char ww[8];
    
    for (int i = 0; i < 8; i++)
    {
        ww[i] = i;
    }
    
    show_bytes(ww);

    memory::invert(ww);

    show_bytes(ww);
}