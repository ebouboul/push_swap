/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:21:23 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/04 01:21:24 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



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
