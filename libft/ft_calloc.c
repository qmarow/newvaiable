/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:03:04 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 10:03:22 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*mem;
	size_t	max;

	max = (size_t)~0;
	if ((num && max / num < size) ||
		(size && max / size < num))
		return (NULL);
	mem = malloc(num * size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, num * size);
	return (mem);
}
