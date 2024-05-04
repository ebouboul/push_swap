<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:21:51 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/04 01:21:52 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
=======

>>>>>>> 6d22e0b8a32efea8d23acd1c1f6198115f1ac3c7


#include "libft.h"

void	ft_lstdelone(t_list *lst)
{
	if (!lst)
		return ;
	free(lst);
	lst = NULL;
}
