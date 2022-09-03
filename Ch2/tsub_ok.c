/* Determine whether arguments can be subtracted without overflow
 * Page 94
 */
#include "integer_arith.h"
#include <limits.h>
/**
 * @brief  判断两个整数相减的差是否会溢出
 * @note
 * @param  x: 被减数
 * @param  y: 减数
 * @retval 差不溢出返回 1，否则返回 0
 */
int tsub_ok(int x, int y)
{
    if (y == INT_MIN)
    {
        return x < 0;
    }
    return tadd_ok(x, -y);
}