/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 16:54:02 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 16:54:03 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dsr, const char *str, size_t size)
{
	int i;
	int sz;

	i = -1;
	if (!dsr || !str)
		return (0);
	if (size > 0)
	{
		while (size-- && *(str + ++i) != '\0')
			*(dsr + i) = *(str + i);
		*(dsr + i) = '\0';
	}
	sz = ft_strlen((char*)str);
	return ((size_t)sz);
}
