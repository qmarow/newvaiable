/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmarowak <qmarowak@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 10:05:17 by qmarowak          #+#    #+#             */
/*   Updated: 2020/05/19 15:51:14 by qmarowak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *newcontent;

	if (!(newcontent = malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
		newcontent->content = NULL;
	else
		newcontent->content = content;
	newcontent->next = NULL;
	return (newcontent);
}
