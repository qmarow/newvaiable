#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	int i;

	i = 0;
	while (n--)
	{
		if (*((unsigned char*)arr1 + i) > *((unsigned char*)arr2 + i))
			return 1;
		if (*((unsigned char*)arr1 + i) < *((unsigned char*)arr2 + i))
			return -1;
		++i;
	}
	return 0;
}
