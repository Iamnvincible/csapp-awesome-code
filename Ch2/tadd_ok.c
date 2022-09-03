/* Determine wheter arguments can be added without overflow
 * Page 94
 */

/**
 * @brief  判断两个整数相加的和是否会溢出
 * @note
 * @param  x: 加数
 * @param  y: 加数
 * @retval 和不溢出返回 1，否则返回 0
 */
int tadd_ok(int x, int y)
{
    int sum = x + y;
    int neg_over = x < 0 && y < 0 && sum >= 0;
    int pos_over = x >= 0 && y >= 0 && sum < 0;
    return !neg_over && !pos_over;
}
/**
 * @brief  判断两个整数相加是否会溢出
 * @note  更容易理解的写法
 * @param  x: 加数
 * @param  y: 加数
 * @retval 和不溢出返回 1，否则返回 0
 */
int tadd_ok_mine(int x, int y)
{
    int sum = x + y;
    if (x > 0 && y > 0)
    {
        return sum >= 0;
    }
    if (x < 0 && y < 0)
    {
        return sum < 0;
    }
    return 1;
} 
