#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    unsigned int     i;
	char	*str;

	if (!s || !f)
		return (NULL);
	str = (char*)malloc(sizeof(char) * (ft_strlen((char*)s) + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (s[++i])
		str[i] = f(i, s[i]);
	str[i] = '\0';
	return (str);
}