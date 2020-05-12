#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int	i;

	i = -1;
	str = (char*)malloc(sizeof(char) * (ft_strlen((char*)src) + 1));
	while (*((char*)src + ++i) != '\0')
		*(str + i) = *(src + i);
	*(str + i) = '\0';
	return (str);
}
