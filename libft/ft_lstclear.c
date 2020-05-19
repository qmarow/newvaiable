/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:04:56 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 10:32:30 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *currant;

	if (!lst || !(*lst) || !del)
		return ;
	while (*lst)
	{
		currant = *lst;
		(*lst) = (*lst)->next;
		del(currant->content);
		free(currant);
	}
	*lst = NULL;
}
