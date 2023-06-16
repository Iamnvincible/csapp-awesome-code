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