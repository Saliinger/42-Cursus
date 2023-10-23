int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		++i;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			c *= -1;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		j *= 10;
		j += str[i] + '0';
		++i;
	}
	return (j * c);
}
