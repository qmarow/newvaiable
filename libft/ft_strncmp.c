#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	while ((*(str1 + i) || *(str2 + i)) && i < n)
	{
		if (*(str1 + i) != *(str2 + i))
		{
			if (ft_isascii(*(str1 + i)) && ft_isascii(*(str2 + i)))
				return (*(str1 + i) - *(str2 + i));
			else
				return (1);
		}
		++i;
	}
	return 0;
}