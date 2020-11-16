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

int divisor(int a, int b)
{
    return (b == 0) ? a : divisor(b, a % b);
}

bool substring(char * c1, char * c2, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (tools::string::compare::equality(c1, c2) == true) return true;
        else c1++;
    }

    return false;
}

TEST_CASE("awee")
{
    REQUIRE(1 == 1);


}

TEST_CASE("qweqwe")
{
    REQUIRE(true == false);
}