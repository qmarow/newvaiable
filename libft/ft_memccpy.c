#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int val, size_t n)
{
	int i;

	i = 0;
	if (src == dest || !n)
		return (dest);
	while (n--)
	{
		*((unsigned char*)dest + i) = *((unsigned char*)src + i);
		if (*((unsigned char*)src + i) == (unsigned char)val)
			{
				return (dest + ++i);
			}
		++i;
	}
	return NULL;
}