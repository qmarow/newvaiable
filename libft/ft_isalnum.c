int	ft_isalnum(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	else if (ch >= '0' && ch <= '9')
		return (1);
	else
		return (0);
}
