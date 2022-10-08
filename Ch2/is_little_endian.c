
int is_little_endian()
{
    unsigned x = 0xFF;
    unsigned char *bytes = (unsigned char *)&x;
    return bytes[0] == 0xFF;
}