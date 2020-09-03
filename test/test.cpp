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

void show_string(char * string)
{
    printf("%s", string);
    printf("\r\n");
}

template<typename T>
void show_bits(T & value)
{
    auto * ptr = tools::variable::get::address(value);

    for (int i = 0; i < sizeof(T); i++)
    {
        auto byte = ptr[i];

        printf("[");

        for (int i = 0; i < 8; i++)
        {
            printf("%d", tools::byte::get::bits(byte, 7 - i, 1));
        }

        printf("]");
    }
    
    printf("\r\n");

}

#include "tools.h"


TEST_CASE("awee")
{
    using namespace tools;

    unsigned char mem[8];
    
    for (int i = 0; i < 8; i++)
    {
        mem[i] = i;
    }
    
    show_bytes(mem);


    memory::shift::left::bytes(mem, 8, 1, true);

    show_bytes(mem);

    // tools::copy::memory::to_variable()


}