void    *ft_memset(void *s, int c, size_t n)
{   
    int x;

    x = 0;
    if(!s)
        return (NULL);
    while(x < n)
    {
        *(unsigned char*)(s + x) = unsigned char c;
        x++;
    }

    return (s);
}