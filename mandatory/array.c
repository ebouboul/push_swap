/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:19:59 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/07 16:31:49 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_fill_array(t_list *stack)
{
	int	*array;
	int	i;

	i = 0;
	array = malloc(ft_lstsize(stack) * sizeof(int));
	if (!array)
		return (NULL);
	while (stack)
	{
		array[i] = stack->value;
		stack = stack->next;
		i++;
	}
	return (array);
}

int	ft_check_array(int *array, int size_arr)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	while ((i + 1) < size_arr)
	{
		while (j < size_arr)
		{
			if (array[i] > array[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

void	ft_sort_array(int *array, int size_arr)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = i + 1;
	while (ft_check_array(array, size_arr) == 0)
	{
		while (j < size_arr)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
			i++;
			j++;
		}
		i = 0;
		j = i + 1;
	}
}
