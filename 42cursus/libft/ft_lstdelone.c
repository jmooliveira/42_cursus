#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
/*
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
*/
