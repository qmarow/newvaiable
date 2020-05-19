/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:06:17 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 16:53:40 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int i;

	i = -1;
	while (*((char*)str + ++i))
		if (*(str + i) == ch)
			return (((char*)str + i));
	if (ch == '\0')
		return (((char*)str + i));
	return (NULL);
}
