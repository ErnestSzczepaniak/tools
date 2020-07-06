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

TEST_CASE("asd")
{
    unsigned int word = 0x11223344;

    tools::memory::shift::bytes::right(word, 4 );

    show_bytes(word);
}

TEST_CASE("awee")
{
    unsigned char test = 0x18;

    auto res = tools::bit::invert(test);

    show_bytes(res);
}