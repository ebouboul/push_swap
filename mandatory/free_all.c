

#include "push_swap.h"

char	**ft_free_all(char **ptr)
{
	size_t	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		ptr[i] = NULL;
		i++;
	}
	free(ptr);
	ptr = NULL;
	return (NULL);
}

int	ft_free_all_all(char *numbers, char **num_split, t_list **stack_a,
		t_list **stack_b)
{
	free(numbers);
	ft_free_all(num_split);
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
	return (0);
}
