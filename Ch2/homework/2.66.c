/*
* Generate mask indicating leftmost 1 in x. Assume w=32.
* For example, 0xFF00 -> 0x8000, and 0x6600 --> 0x4000.
* If x = 0, then return 0.
保留最左边的一位 1，其余位都置零。
*/
int leftmost_one(unsigned x)
{
    x |= x>>1;
    x |= x>>2;
    x |= x>>4;
    x |= x>>8;
    x |= x>>16;
    return x^(x>>1);
}
/*
Your function should follow the bit-level integer coding rules (page 164),
except that you may assume that data type int has w = 32 bits.
Your code should contain a total of at most 15 arithmetic, bitwise, and logical
operations.
Hint: First transform x into a bit vector of the form [0 . . . 011 . . . 1].
*/
/*
按提示，将最高位 1 的右边所有位置为 1.
题设限制使用的运算的数量，可以联想到上一题，可能也需要多步位运算完成。
由于最高位为 1，将其与其他位或，可将其他位置 1。
稍有不同的是，这次要 1 位、2 位、4 位……这样置 1，每次 1 的数量加倍。
最后，得到一个从原数最高位 1 到最右边位全部为 1 的数，将这个数右移一位，与没有右移的数相异或，可得结果。
*/