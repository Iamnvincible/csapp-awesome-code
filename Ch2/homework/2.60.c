#include <stdio.h>
unsigned replace_byte(unsigned x, int i, unsigned char b)
{
    unsigned char *bytes = (unsigned char *)&x;
    bytes[i] = b;
    return *(unsigned *)bytes;
}
int main(int argc, char const *argv[])
{
    // 0x12345678 2 0xAB  0x12AB5678
    unsigned value = 0x12345678;
    int pos = 0;
    unsigned char b = 0xAB;
    int result = replace_byte(value, pos, b);
    printf("result = %X\n", result);
    return 0;
}
