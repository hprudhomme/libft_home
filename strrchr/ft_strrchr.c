char    *ft_strrchr(const char *s, int c)
{      
    char *save = 0;

    while (*s)
    {
        if (*s == c)
            save = (char*)s;
        *s++;
    }
    return (save);
}