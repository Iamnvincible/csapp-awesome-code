#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf(" %.2X", start[i]);
    }
    printf("\n");
}
void show_short(short x)
{
    show_bytes((byte_pointer)&x, sizeof(short));
}
void show_int(int x)
{
    show_bytes((byte_pointer)&x, sizeof(int));
}
void show_long(long x)
{
    show_bytes((byte_pointer)&x, sizeof(long));
}
void show_float(float x)
{
    show_bytes((byte_pointer)&x, sizeof(float));
}
void show_double(double x)
{
    show_bytes((byte_pointer)&x, sizeof(double));
}
void show_pointer(void *x)
{
    show_bytes((byte_pointer)&x, sizeof(void *));
}
void test_show_bytes(int val)
{
    int ival = val;
    float fval = (float)ival;
    double dval = (double)ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_double(dval);
    show_pointer(pval);
}