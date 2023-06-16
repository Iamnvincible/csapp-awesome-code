#include <assert.h>
/* Return 1 when any odd bit of x equals 1; 0 otherwise.
Assume w=32 */
int any_odd_one(unsigned x) {
  unsigned mask = 0xaaaaaaaa;
  return !!(x & 0xaaaaaaaa);     //如果认为是第 0 位到 31 位
  return !!((x | mask) ^ mask);  //如果认为是第 1 位到 32 位
}
