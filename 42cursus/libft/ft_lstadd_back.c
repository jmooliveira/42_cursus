#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_back;

	if (!*lst)
		*lst = new;
	else
	{
		new_back = ft_lstlast(*lst);
		new_back->next = new;
	}
}
