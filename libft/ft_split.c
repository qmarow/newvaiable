#include "libft.h"

static int	ft_strl_l(const char *s, int *i, char c)
{
	int a;

	a = 0;
	while (*(s + ++(*i)) != '\0')
	{
		if (*(s + (*i)) != c)
		{
			while (*(s + (*i)) != c && *(s + *i) != '\0')
			{	
				++a;
				++(*i);
			}
			break;
		}
	}
	return a;
}

static int	ft_strl(const char *s,char c)
{
	int i;
	int a;

	i = -1;
	a = 0;
	while (*(s + ++i) != '\0')
	{
		if (*(s + i) != c && *(s + i) != '\0') 
		{
			while (*(s + i) != c && *(s + i))
				++i;
			++a;
			if (*(s + i) == '\0')
				break;
		}
	}
	return a;
}

static char	**ft_record(const char *s, char c, char **str, int t)
{
	int i;
	int a;
	int b;

	i = 0;
	a = 0;
	b = -1;
	while (t--)
	{
		while (*(s + i) == c)
			++i;
		if (*(s + i) != c )
		{
			while (*(s + i) != c && *(s + i) != '\0')
				str[a][++b] = *(s + i++);
			str[a][++b] = '\0';
			++a;
			b = -1;
		}
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	count;
	char	**str;
	int	t;

	i = -1;
	t = -1;
	if (!s)
		return (NULL);
	count = ft_strl(s, c);
	str = (char**)malloc(sizeof(char*) * (count + 1));
	if (!str)
		return (NULL);
	*(str + count) = 0;
	while(count--)
	{
		*(str + ++t) = (char*)malloc(sizeof(char) * (ft_strl_l(s, &i, c) + 1));
		if (!str[t])
			return (NULL);
	}
	return (ft_record(s, c, str, t + 1));
}