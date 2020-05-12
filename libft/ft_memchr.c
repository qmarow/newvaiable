#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	int i;

	i = 0;
	while (n--)
		if (((char*)arr)[i++] == c)
			return ((char*)arr + (i - 1));
	return NULL;
}
