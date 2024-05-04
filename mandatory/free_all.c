<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:18:27 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/04 01:18:28 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
=======

>>>>>>> 6d22e0b8a32efea8d23acd1c1f6198115f1ac3c7



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
