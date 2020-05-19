/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:06:13 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 15:54:21 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strl(const char *s, char c)
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
				break ;
		}
	}
	return (a);
}

static void		ft_clear(char **str)
{
	int a;

	a = 0;
	while (str[a])
		free(str[a]);
	free(str);
}

static void		ft_record(char *s, char c, char **str, int count)
{
	int i;
	int a;
	int size;

	i = 0;
	a = -1;
	while (++a < count)
	{
		size = 0;
		while (*(s + i) == c)
			++i;
		while (*(s + i + size) && *(s + i + size) != c)
			++size;
		str[a] = ft_substr(s, i, size);
		if (!str)
		{
			ft_clear(str);
			return ;
		}
		i += size;
	}
}

char			**ft_split(char const *s, char c)
{
	int		count;
	char	**str;

	if (!s)
		return (NULL);
	count = ft_strl(s, c);
	str = (char**)malloc(sizeof(char*) * (count + 1));
	if (!str)
		return (NULL);
	*(str + count) = 0;
	ft_record((char*)s, c, str, count);
	return (str);
}
