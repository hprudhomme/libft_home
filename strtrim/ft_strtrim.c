static int istrim(char c, char const *set)
{
    int x;

    x = 0;
    while (set[x])
    {
        if (set[x] == c)
            return (1);
        x++;
    }
    return (0);
}

static int calc_trim_malloc(char const *s1, char const *set)
{   
    int x;
    int count;

    count = 0;
    x = 0;
    while (s1[x])
    {
        if (istrim(s1[x], set))
            count++;
        x++;
    }
    return (count);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int x;
    int y;
    int malloc_size;
    char *str;

    if (!(str = malloc(sizeof(char) * (ft_strlen(s1) - calc_trim_malloc(s1, set) + 1))))
		return (NULL);
    x = 0;
    y = 0;
    while (s1[x])
    {
        if (!(istrim(s1[x], set)))
        {
            str[y] = s1[x];
            y++
        }
    }
    str[y] = '\0';
    return (str);
}