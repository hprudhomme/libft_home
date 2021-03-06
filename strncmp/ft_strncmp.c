int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	if (n <= 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return ((int)s1[i] - (int)s2[i]);
}