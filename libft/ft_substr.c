/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:07:17 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 15:33:21 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	size_t	len_s;

	i = -1;
	if (!s)
		return (NULL);
	len_s = (unsigned int)ft_strlen((char*)s);
	if (start > len_s)
		return (ft_strdup(""));
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (*(s + start) != '\0' && len--)
		*(str + ++i) = *(s + start++);
	++i;
	*(str + i) = '\0';
	return (str);
}
