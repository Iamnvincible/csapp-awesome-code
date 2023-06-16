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