char	*ft_strnstr(const char *big, const char *little, size_t n)
{
    size_t x;
    size_t y;

    if (*little == '\0')
        return ((char*)big);
    x = 0;
    while (big[x] && x < n)
    {
        y = 0;
        while (big[x + y] == little[y] && (i + j) < n)
        {   
            y++;
            if (little[y] == '\0')
                return ((char*)big + x);
        }
        x++;
    }
    return (NULL);
}