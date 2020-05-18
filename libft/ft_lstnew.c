#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *newcontent;
	
	if (!(newcontent = malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
		newcontent -> content = NULL;
	else
		newcontent->content = content;
	newcontent -> next = NULL;
	return (newcontent);
}