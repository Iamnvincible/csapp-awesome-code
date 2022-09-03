/* Determine whether arguments can be added without overflow
 * Page 89
 */

/**
 * @brief  判断两个无符号整数相加的和是否会溢出
 * @note
 * @param  x: 加数
 * @param  y: 加数
 * @retval 和不溢出返回 1，否则返回 0
 */
int uadd_ok(unsigned x, unsigned y)
{
    unsigned sum = x + y;
    return sum >= x;
}