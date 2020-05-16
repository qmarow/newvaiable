#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	int i;

	i = -1;
	while (n--)
	{
		++i;
		if (*((unsigned char*)arr1 + i) != *((unsigned char*)arr2 + i))
			return (*((unsigned char*)arr1 + i) - *((unsigned char*)arr2 + i));
	}
	return 0;
}