

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*head;
	int		result;

	head = lst;
	result = 0;
	if (!lst)
		return (0);
	while (head != NULL)
	{
		result++;
		head = head->next;
	}
	return (result);
}
