#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int i;

	i = -1;
	while (*((char*)str + ++i))
		if (*(str + i) == ch)
			return (((char*)str + i));
	if (ch == '\0')
		return (((char*)str + i));
	return (NULL);
}
