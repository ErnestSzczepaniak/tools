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


TEST_CASE("awee")
{
    using namespace tools;

    unsigned char ww[8];
    
    for (int i = 0; i < 8; i++)
    {
        ww[i] = i;
    }
    


    unsigned int t = 0x11223344;
    unsigned int w = 0;
    auto * tp = &t;
    auto * wp = &w;


    show_bytes(t);

    memory::move(w, tp, 4);

    show_bytes(t);
    show_bytes(w);
}