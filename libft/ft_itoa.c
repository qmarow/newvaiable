/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:04:40 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 15:52:45 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int i;

	i = 0;
	if (n <= 0)
		++i;
	while (n)
	{
		n /= 10;
		++i;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		num;
	int		f;
	char	*str;

	num = ft_numlen(n);
	f = 1;
	str = (char*)malloc(sizeof(char) * (num + 1));
	if (!str)
		return (NULL);
	*(str + num) = '\0';
	if (n == 0)
		*(str + --num) = '0';
	if (n < 0)
		f = -1;
	while (n)
	{
		*(str + --num) = '0' + (n % 10) * f;
		n /= 10;
	}
	if (f == -1)
		*(str + --num) = '-';
	return (str);
}
