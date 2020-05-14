#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;

	i = 0;
	if (n == 0 || dst == src)
		return (dst);
	while (n-- )
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		++i;
	}
	return dst;
}