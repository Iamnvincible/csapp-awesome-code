#include <stdio.h>
int combine(int x, int y)
{
    int least_x = x & 0xFF;
    int remain_y = y >> 8 & -1;
    return least_x + (remain_y << 8);
}
int combine2(int x, int y)
{
    int least_x = x & 0xFF;
    int remain_y = y & ~0xFF;
    return least_x | remain_y;
}
int main(int argc, char const *argv[])
{
    int x = 0x89ABCDEF, y = 0x76543210;
    int result = 0;
    result = combine(x, y);
    printf("%x\n", result);
    result = combine2(x, y);
    printf("%x\n", result);
    // give 0x765432EF
    return 0;
}
