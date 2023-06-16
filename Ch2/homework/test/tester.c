#include "../ch2_homework.h"

#include <assert.h>
#include <stdio.h>
void test_any_odd_one()
{
    // unsigned x = 0xaaaaaaaa;
    // assert(any_odd_one(x + 1));
    // //   assert(any_odd_one(0x1));
    // assert(any_odd_one(0x3));
    // assert(!any_odd_one(0x4));
}

void test_odd_ones()
{
    assert(odd_ones(0x1) == 1);
    assert(odd_ones(0x3) == 0);
    assert(odd_ones(0xFFFFFFFF) == 0);
}
void test_leftmost_one()
{
    assert(leftmost_one(0xff0f) == 0x8000);
    assert(leftmost_one(0xff00) == 0x8000);
    assert(leftmost_one(0x6600) == 0x4000);
}
void test_bad_int_size_is_32()
{
    int r = bad_int_size_is_32();
    assert(r == 1);
}

int main(int argc, char const *argv[])
{
    test_odd_ones();
    test_leftmost_one();
    test_bad_int_size_is_32();
    fprintf(stdout, "test success\n");
    return 0;
}
