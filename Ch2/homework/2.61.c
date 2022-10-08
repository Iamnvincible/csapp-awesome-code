#include <stdio.h>
// Any bit of x equals 1.
int any_bits_eqs_1(int x)
{
    return !!x;
}
// Any bit of x equals 0.
int any_bits_eqs_0(int x)
{
    return !x;
}
// Any bit in the least significant byte of x equals 1
int any_bits_in_least_signi_byte_eqs_1(int x)
{
    return !!(x & 0xFF);
}
// Any bit in the most significant byte of x equals 0.
int any_bits_in_most_signi_byte_eqs_0(int x)
{
    return !(x >> (sizeof(int) - 1) << 3 && 0xFF);
}

int main(int argc, char const *argv[])
{
    int vals[] = {-1, 0, 0x33333333};
    for (int i = 0; i < 3; i++)
    {
        int x = vals[i];
        printf("x= %.8x,!!x= %d\n", x, !!x);
        printf("x= %.8x,!~x= %d\n", x, !~x);
    }
    int r1 = any_bits_in_least_signi_byte_eqs_1(1);
    int r2 = any_bits_in_most_signi_byte_eqs_0(1);
    printf("r1 = %d r2 = %d\n", r1, r2);
    return 0;
}
