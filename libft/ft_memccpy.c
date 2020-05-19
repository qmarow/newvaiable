/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:05:25 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 15:45:37 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int val, size_t n)
{
	int i;

	i = 0;
	while (n--)
	{
		*((char*)dest + i) = *((char*)src + i);
		if (*((unsigned char*)src + i) == (unsigned char)val)
			return ((dest + ++i));
		++i;
	}
	return (NULL);
}
