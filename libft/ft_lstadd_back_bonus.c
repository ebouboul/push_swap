<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:22:13 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/04 01:22:15 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
=======

>>>>>>> 6d22e0b8a32efea8d23acd1c1f6198115f1ac3c7


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
