/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:20:24 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/07 16:42:14 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_finde, size_t len)
{
	size_t	i;
	size_t	check;
	size_t	to_finde_len;

	if (!str && !len)
		return (NULL);
	i = 0;
	if (!*to_finde)
		return ((char *)str);
	to_finde_len = ft_strlen(to_finde);
	while (str[i] && to_finde_len <= len - i)
	{
		check = 0;
		while (str[i + check] == to_finde[check] && to_finde[check])
			check++;
		if (to_finde_len == check)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
