size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t x;

    if (dst == NULL || src == NULL)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
    x = 0;
    while (x < size - 1 && src[x] != '\0')
    {
        dest[x] = src[x];
        x++;
    }
    dest[x] = '\0';
    return (ft_strlen(src));
}