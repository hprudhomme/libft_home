char *ft_strjoin(char const *s1, char const *s2)
{   
    char *str;
    int x;
    int y;

    if (!(str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)))))
		return (NULL);
    x = 0;
    y = 0;
    while (s1[x])
    {
        str[y] = s1[x];
        y++;
        x++;
    }
    x = 0;
    while (s2[x])
    {
        str[y] = s2[x];
        y++;
        x++;
    }
    str[y] = '\0';
    return (str);
}