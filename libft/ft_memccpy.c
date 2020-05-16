#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int val, size_t n)
{
	int i;

	i = 0;
	while (n--)
	{
		*((char*)dest + i) = *((char*)src + i);
		if (*((unsigned char*)src + i) == (unsigned char)val)
				return (dest + ++i);
		++i;
	}
	return NULL;
}