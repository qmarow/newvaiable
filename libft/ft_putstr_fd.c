#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	i = -1;
	while (*(s + ++i) != '\0')
		ft_putchar_fd(*(s + i), fd);
}