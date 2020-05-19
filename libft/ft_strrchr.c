/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:07:09 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 15:49:40 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int i;
	int f;

	i = -1;
	f = -1;
	while (*((char*)str + ++i) != '\0')
		if (*((char*)str + i) == ch)
			f = i;
	if (f != -1)
		return (((char*)str + f));
	if (*((char*)str + i) == ch)
		return (((char*)str + i));
	return (NULL);
}
