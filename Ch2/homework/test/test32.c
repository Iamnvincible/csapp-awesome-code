#include <assert.h>
#include <stdio.h>
/*
You are given the task of writing a procedure int_size_is_32() that yields 1
when run on a machine for which an int is 32 bits, and yields 0 otherwise. You are
not allowed to use the sizeof operator. Here is a first attempt:
检测机器上 int 字长是不是 32 位。

When compiled and run on a 32-bit SUN SPARC, however, this procedure
returns 0. The following compiler message gives us an indication of the problem:
warning: left shift count >= width of type
*/

/* The following code does not run properly on some machines */
int bad_int_size_is_32()
{
    /* Set most significant bit (msb) of 32-bit machine */
    int set_msb = 1 << 31;
    /* Shift past msb of 32-bit word */
    int beyond_msb = 1 << 32;
    /* set_msb is nonzero when word size >= 32
    beyond_msb is zero when word size <= 32
     */
    return set_msb && !beyond_msb;
}

int int_size_is_32()
{
    return !(-1 ^ 0xFFFFFFFF);
}

void test_bad_int_size_is_32()
{
    int r = bad_int_size_is_32();
    r = int_size_is_32();
    // printf("%d\n", r);

    assert(r == 1);
}
int main(int argc, char const *argv[])
{
    test_bad_int_size_is_32();
    return 0;
}
