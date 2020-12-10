int		ft_atoi(const char *str)
{
	int sign;
	int res;

	n = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		i++;
	if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
	res = 0;
	while (ft_isdigit((int)*str))
	{
		res = (res * 10) + *str - 48;
		str++;
	}
	return (res * n);
}