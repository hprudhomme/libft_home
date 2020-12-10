void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *sdest;
    unsigned char *ssrc;

    sdest = (unsigned char*)dest;
    ssrc = (unsigned char*)src;

    while (n--)
    {
        *sdest = *ssrc;
        *sdest++;
        *ssrc++;
    }

    return (dest);
}