<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:22:08 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/04 01:22:09 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
=======

>>>>>>> 6d22e0b8a32efea8d23acd1c1f6198115f1ac3c7


#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new && lst)
	{
		new->next = *lst;
		*lst = new;
	}
}
