/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:19:48 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/07 16:40:16 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_space(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != ' ')
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_num(t_list **lst, int num)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp->next)
	{
		if (num == tmp->value)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	ft_check(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((s[i] == '-' || s[i] == '+') && ((i != 0 && s[i - 1] != ' ') || s[i
					+ 1] == ' '))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_arg(char *s)
{
	int	i;

	i = 0;
	if (ft_check_space(s) == 0)
		return (0);
	while (s[i])
	{
		if (ft_isdigit(s[i]) == 0)
			return (0);
		i++;
	}
	if (ft_check(s) == 0)
		return (0);
	return (1);
}
