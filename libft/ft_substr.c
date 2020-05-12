#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int	i;
	size_t	len_s;

	i = -1;
	len_s = (unsigned int)ft_strlen((char*)s);
	if (start > len_s)
	{
		str = (char*)malloc(sizeof(char) * 1);
		*(str + 0) = '\0';
		return (str);
	}
	str = (char*)malloc(sizeof(char) * (len + 1));
	while (*(s + start) != '\0' && len--)
		*(str + ++i) = *(s + start++);
	++i;
	*(str + i) = '\0';
	return (str);
}