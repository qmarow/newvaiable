#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void *mem;

	mem = malloc(num * size);
	if (mem == NULL)
		return NULL;
	ft_bzero(mem, num * size);
	return mem;
}
