/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:06:23 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 15:39:10 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		i;

	i = -1;
	str = (char*)malloc(sizeof(char) * (ft_strlen((char*)src) + 1));
	if (!str)
		return (NULL);
	while (*((char*)src + ++i) != '\0')
		*(str + i) = *(src + i);
	*(str + i) = '\0';
	return (str);
}
