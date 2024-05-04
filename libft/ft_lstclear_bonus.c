<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:21:57 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/04 01:22:03 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
=======
>>>>>>> 6d22e0b8a32efea8d23acd1c1f6198115f1ac3c7



#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*temp;

	if (!lst || !(*lst))
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
