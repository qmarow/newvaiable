/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.21-school>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 13:38:42 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 16:22:09 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	perevod(char *str, int i, int f)
{
	unsigned long		a;

	a = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = a * 10 + str[i] - '0';
		++i;
		if (a > 9223372036854775807 && f == -1)
			return (0);
		if (a > 9223372036854775807 && f)
			return (-1);
	}
	return (a);
}

int			ft_atoi(char *str)
{
	int i;
	int f;

	i = 0;
	f = 1;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
	|| (str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
		++i;
	if (str[i] == '+')
		return (perevod(str, ++i, f));
	if (str[i] == '-')
		return (perevod(str, ++i, f * -1) * -1);
	if (str[i] >= '0' && str[i] <= '9')
		return (perevod(str, i, f));
	return (0);
}
