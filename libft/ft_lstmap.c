#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*start;

	if (!lst || !f || !del)
		return (NULL);
	if (!(list = ft_lstnew(f(lst -> content))))
		return (NULL);
	start = list;
	while (lst -> next)
	{
		lst = lst -> next;
		if (!(list -> next = ft_lstnew(f(lst -> content))))
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		list = list -> next;
	}
	return (start);
}