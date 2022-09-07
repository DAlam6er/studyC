#include <stdio.h>
#include <inttypes.h>

int main()
{
    int x = -100;
    unsigned int y = 10U;
    long long int z = x + y;
    printf( "sizeof(char)=%lu\n"
            "sizeof(int)=%lu\n"
            "sizeof(int8_t)=%lu\n"
            "sizeof(int16_t)=%lu\n"
            "sizeof(int32_t)=%lu\n"
            "sizeof(int64_t)=%lu\n" 
            "sizeof(long int)=%lu\n"
            "sizeof(long long int)=%lu\n",
            sizeof(char),
            sizeof(int), sizeof(int8_t),
            sizeof(int16_t), sizeof(int32_t), 
            sizeof(int64_t), sizeof(long int),
            sizeof(long long int));
    printf( "long long int z =\n"
            "int x + unsigned int y =\n"
            "-100 + 10U = %llu\n", z);
    return 0;
}
