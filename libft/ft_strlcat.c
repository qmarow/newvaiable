#include "libft.h"

size_t		ft_strlcat(char *dsr, const char *src, size_t size)
{
	int		i;
	int		a;
	size_t	len;
	size_t	len_s;

	i = -1;
	a = -1;
	len = (size_t)ft_strlen(dsr);
	len_s = (size_t)ft_strlen((char*)src);
	if (len >= size)
		return (size + len_s);
	else
	{
		while (*(dsr + ++i) != '\0')
			--size;
		while (*(src + ++a) != '\0' && --size)
		{	
			*(dsr + i) = *(src + a);
			++i;
		}
		*(dsr + i) = '\0';
	}
	return (len + len_s);
	
}	
