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

TEST_CASE("asd")
{
    unsigned int word = 0x11223344;

    tools::memory::shift::bytes::right(word, 4 );

    show_bytes(word);
}

TEST_CASE("awee")
{
    using namespace tools;

    unsigned int test = 0xff553344;
    byte::invert(test);

    show_bytes(test);
    show_bits(test);

    memory::shift::bits::left(test, 20);

    show_bytes(test);
    show_bits(test);
}