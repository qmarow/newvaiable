/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:06:49 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 10:06:50 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		++i;
	return (i);
}
