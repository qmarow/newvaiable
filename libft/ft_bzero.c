void	ft_bzero(void *s, int n)
{
	while (n--)
		*((char*)s + n) = 0;
}
