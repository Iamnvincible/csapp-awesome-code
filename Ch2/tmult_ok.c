/* Determine whether arguments can be multiplied without overflow
 * Page 99
 */
#include <stdint.h>
/**
 * @brief  判断两个整数相乘的积是否会溢出
 * @note   使用除法来判断
 * @param  x: 因数
 * @param  y: 因数
 * @retval 积不溢出返回 1，否则返回 0
 */
int tmult_ok(int x, int y)
{
    int p = x * y;
    return !x || p / x == y;
}
/**
 * @brief  判断两个整数相乘的积是否会溢出
 * @note   使用类型转换来判断
 * @param  x: 
 * @param  y: 
 * @retval 
 */
int tmult_ok_cast(int x, int y)
{
    int64_t pll = (int64_t)x * y;
    return pll == (int)pll;
}