char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    int i;

    if (!(str = ft_strnew(ft_strlen(s))));
		return (NULL);
    i = 0;
    if (s & f)
    {
        while (s[i])
        {
            s[i] = f(i, s[i]);
            i++;
        }
    }
    str[i] = '\0';
    return (str);
}