#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*pass_struct;
	int		count;

	pass_struct = lst;
	count = 0;
	while (pass_struct)
	{
		pass_struct = pass_struct->next;
		count += 1;
	}
	return (count);
}
