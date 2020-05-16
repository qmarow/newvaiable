static int	perevod(char *str, int i, int f)
{
	unsigned long a;

	a = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = a * 10 + str[i] - '0';
		++i;
		if (a > 9223372036854775807 && f == -1)
			return (0);
		if (a > 9223372036854775807 && f)
			return (-1);
	}
	return a;
}

int	ft_atoi(char *str)
{
	int i;
	int f;

	i = 0;
	f = 1;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
		++i;
	if(str[i] == '+')
		return (perevod(str, ++i, f));
	if(str[i] == '-')
		return (perevod(str, ++i, f * -1) * -1);
	if(str[i] >= '0' && str[i] <= '9')
		return (perevod(str, i, f));
	return 0;
}