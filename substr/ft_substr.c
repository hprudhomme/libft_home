char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int x;
    int y;
    char *dst;

    if (!(dst = malloc(sizeof(char) * (len + 1))))
		return (NULL);
    while (x < start)
        x++;
    y = 0;
    while (x < len && s[x])
    {
        dst[y] = s[x];
        x++;
        y++;
    }
    return (dst);
}