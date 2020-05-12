#include "libft.h"

void	*ft_memset(void *destimation, int c, size_t n)
{
	int i;

	i = 0;
	while (n--)
	{
		*((char*)destimation + i) = c;
		++i;
	}
	return (destimation);
}