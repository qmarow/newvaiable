/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timur <timur@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:05:20 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 16:42:54 by timur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	t_list	*currant;
	int		i;

	currant = lst;
	i = 0;
	while (currant && ++i)
		currant = currant->next;
	return (i);
}
