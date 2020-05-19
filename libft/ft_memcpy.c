/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:05:41 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 15:30:20 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;

	i = 0;
	if (n == 0 || dst == src)
		return (dst);
	while (n--)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		++i;
	}
	return (dst);
}
