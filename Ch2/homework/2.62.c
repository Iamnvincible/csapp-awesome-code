// yields 1 when run on a machine that uses arithmetic right shifts for data
// type int and yields 0 otherwise.
// 判断计算机使用的右移是否是算术右移
int int_shifts_are_arithmetic() {
  int x = -1;
  return !(x ^ x >> 1);  //移位运算符优先级高于按位异或运算符
}