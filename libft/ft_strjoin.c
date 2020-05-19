/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:06:30 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 15:40:09 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	int		i;
	int		a;

	i = -1;
	a = -1;
	if (!s1 || !s2)
		return (NULL);
	str = (char*)malloc(sizeof(char) *
	(ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1));
	if (!str)
		return (NULL);
	while (*(s1 + ++i) != '\0')
		*(str + i) = *(s1 + i);
	while (*(s2 + ++a) != '\0')
		*(str + i++) = *(s2 + a);
	*(str + i) = '\0';
	return (str);
}
