#include <assert.h>
unsigned srl(unsigned x, int k) {
  /* Perform shift arithmetically */
  //对无符号数执行右移位运算，但使用了算术右移。
  unsigned xsra = (int)x >> k;
  //以下不能使用右移和除法。
  int w = sizeof(int) << 3;
  unsigned mask = ~(-1 << w - k);
  return mask & xsra;
}
int sra(int x, int k) {
  /* Perform shift logically */
  //对有符号数执行右移位运算，但使用了逻辑右移。
  int xsrl = (unsigned)x >> k;
  //以下不能使用右移和除法。
  int w = sizeof(int) << 3;
  //正数和负数都要考虑
  //正数保持不变，负数替换为 1
  unsigned sign = (1 << w - k - 1) & xsrl;  //如果>0就是负数，=0就是正数
  unsigned mask = -1 << w - k;
  //如果符号位 sign 为 1，说明原数为负数，掩码不能变
  //如果符号位 sign 为 0，说明原数为正数，掩码要变 0
  mask &= (!sign - 1);
  return mask | xsrl;
}
// int main(int argc, char const *argv[]) {
//   unsigned x = 1 << 31;
//   int y = 1;
//   int z = -1;
//   assert(srl(x, 8) == x >> 8);
//   assert(sra(y, 8) == y >> 8);
//   assert(sra(z, 8) == z >> 8);
//   return 0;
// }
