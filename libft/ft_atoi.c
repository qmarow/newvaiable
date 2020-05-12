static int	perevod(char *str, int i)
{
	int a;

	a = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = a * 10 + str[i] - '0';
		++i;
	}
	return a;
}

int	ft_atoi(char *str)
{
	int i;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
		++i;
	if(str[i] == '+')
	{
		++i;
		return (perevod(str, i));
	}
	if(str[i] == '-')
	{
		++i;
		return (perevod(str, i) * -1);
	}
	if(str[i] >= '0' && str[i] <= '9')
		return (perevod(str, i));
	return 0;
}