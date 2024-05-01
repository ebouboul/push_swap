

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	if (lst && new)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			head = ft_lstlast(*lst);
			head->next = new;
		}
	}
}
