#include "libft.h"
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	int	i;
	int	a;

	i = -1;
	a = -1;
	str = (char*)malloc(sizeof(char) * (ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1));
	while (*(s1 + ++i) != '\0')
		*(str + i) = *(s1 + i);
	while (*(s2 + ++a) != '\0')
		*(str + i++) = *(s2 + a);
	*(str + i) = '\0';
	return (str);
}
