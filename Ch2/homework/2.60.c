unsigned replace_byte(unsigned x, int i, unsigned char b)
{
    unsigned char *bytes = (unsigned char *)&x;
    bytes[i] = b;
    return *(unsigned *)bytes;
}
