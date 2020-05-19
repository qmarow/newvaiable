/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:07:04 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 15:14:26 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t a;

	i = -1;
	if (!*s2)
		return ((char*)s1);
	while (*((char*)s1 + ++i) != '\0' && len)
	{
		a = 0;
		while ((*((char*)s1 + i + a) == *((char*)s2 + a)) && len)
		{
			if (*((char*)s1 + i + a) == *((char*)s2 + a)
			&& *((char*)s2 + a + 1) == '\0')
				return (((char*)s1 + i));
			++a;
			--len;
		}
		--len;
	}
	return (NULL);
}
