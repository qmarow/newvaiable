#include "libft.h"

int ft_lstsize(t_list *lst)
{
	t_list	*currant;
	int	i;

	currant = lst;
	i = 0;
	while (currant && ++i)
		currant = currant -> next;
	return (i);
}