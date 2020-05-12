#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	
	i = -1;
	if (!dest || src == 0)
		return (NULL);
	if (dest > src)
	{
		while (n-- )
			((unsigned char*)dest)[n] = ((unsigned char*)src)[n];
	}
	else 
		while (++i < n)
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
	return (dest);
}