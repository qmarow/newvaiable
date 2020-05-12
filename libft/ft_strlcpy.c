#include "libft.h"

size_t		ft_strlcpy(char *dsr, const char *str, size_t size)
{
	int i;
	int sz;

	i = -1;
	if (size > 0)
	{
		while (size-- && *(str + ++i) != '\0')
			*(dsr + i) = *(str + i);
		*(dsr + i) = '\0';
	}
	sz = strlen(str);
	return ((size_t)sz);
}
