/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:07:13 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 15:54:52 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_chr(const char *str, char ch)
{
	int i;

	i = -1;
	while (*(str + ++i))
		if (ch == str[i])
			return (1);
	return (0);
}

static int	ft_chr_end(const char *set, const char *s1)
{
	int i;
	int end;

	i = ft_strlen((char*)s1);
	end = 0;
	while (--i)
	{
		if (ft_chr(set, ((char*)s1)[i]))
			++end;
		else
			break ;
	}
	return (end);
}

char		*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		i;
	int		start;
	int		end;

	i = -1;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (((char*)s1)[++i] != '\0')
	{
		if (ft_chr(set, ((char*)s1)[i]))
			++start;
		else
			break ;
	}
	end = ft_chr_end(set, s1);
	if (((char*)s1)[i] == '\0')
		str = ft_substr("", 0, 0);
	else
		str = ft_substr(s1, start, (ft_strlen((char*)s1) - start - end));
	return (str);
}
