size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t x;
    size_t y;
    size_t dst_len;
    size_t src_len;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);

    if (size <= dst_len)
        return (src_len + size);
    x = 0;
    j = dst_len,
    while (src[i] && j < size -1)
        dest[j++] = src[i++];
    dest[j] = '\0';
    return (src_len + dst_len);
}