/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:05:52 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 15:43:18 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destimation, int c, size_t n)
{
	int i;

	i = 0;
	while (n--)
	{
		*((char*)destimation + i) = c;
		++i;
	}
	return (destimation);
}
