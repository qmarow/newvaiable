#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *currant;

	if (!lst || !(*lst))
		return ;
	if (!del)
		return ;
    while (*lst)
    {
        currant = *lst;
		(*lst) = (*lst) -> next;
		del(currant -> content);
		free(currant);
    }
	*lst = NULL;	
}