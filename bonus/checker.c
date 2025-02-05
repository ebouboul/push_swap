/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:35:41 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/07 21:37:49 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_check_ns(int argc, char **argv)
{
	if (ft_check_null(argc, argv) == 0)
		return (ft_printf("Error\n"));
	if (ft_check_full_space(argc, argv) == 0)
		return (ft_printf("Error\n"));
	return (0);
}

int	ft_check_sort(t_list *stack_a)
{
	static int	*array;

	array = ft_fill_array(stack_a);
	if (ft_check_array(array, ft_lstsize(stack_a)) == 1)
	{
		free(array);
		return (1);
	}
	free(array);
	return (0);
}

void	ft_valid(t_list *stack_a, t_list *stack_b)
{
	if (ft_lstsize(stack_a) > 0 && ft_check_sort(stack_a) == 1
		&& ft_lstsize(stack_b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

char	*ft_join_to_numbers(int argc, char **argv)
{
	char		*numbers;
	char		*tmp;
	int			i;

	i = 1;
	numbers = NULL;
	while (i < argc)
	{
		tmp = numbers;
		numbers = ft_strjoin(numbers, argv[i++]);
		free(tmp);
	}
	return (numbers);
}

int	main(int argc, char **argv)
{
	char		*numbers;
	char		**num_split;
	t_list		*stack_a;
	t_list		*stack_b;

	if (argc < 2)
		return (0);
	if (ft_check_ns(argc, argv) != 0)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	numbers = ft_join_to_numbers(argc, argv);
	if (ft_check_arg(numbers) == 0)
	{
		free(numbers);
		return (ft_printf("Error\n"));
	}
	num_split = ft_split(numbers, ' ');
	if (ft_split_to_node(num_split, 0, NULL, &stack_a) == 1)
		call_applic(&stack_a, &stack_b);
	else
		exit(0);
	ft_valid(stack_a, stack_b);
	ft_free_all_all(numbers, num_split, &stack_a, &stack_b);
}
