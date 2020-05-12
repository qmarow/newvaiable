#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int val, size_t n)
{
	int i;
	int f;

	i = 0;
	f = 0;
	while (n--)
	{
		*((unsigned char*)dest + i) = *((unsigned char*)src + i);
		if (*((unsigned char*)src + i) == val)
			{
				f = i;
				break;
			}
		++i;
	}
	if (f)
	{
		++f;
		return ((unsigned char*)dest + f);
	}
	return NULL;
}