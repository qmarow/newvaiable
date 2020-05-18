#include "libft.h"

t_list		*ft_lstlast(t_list *lst)
{
	t_list  *currant;

	currant = lst;
	while (currant -> next)
		currant = currant -> next;
	return (currant);
}