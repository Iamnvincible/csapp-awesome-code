/*CSAPP Chapter 2,Integer Arithmetic useful functions*/

void show_short(short x);
void show_int(int x);
void show_long(long x);
void show_float(float x);
void show_double(double x);
void show_pointer(void *x);
void test_show_bytes(int val);

int uadd_ok(unsigned x, unsigned y);
int tadd_ok(int x, int y);
int tsub_ok(int x, int y);
int tmult_ok(int x, int y);
int tmult_ok_cast(int x, int y);

int is_little_endian();
