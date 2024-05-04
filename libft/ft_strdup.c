<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouboul <ebouboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 01:20:56 by ebouboul          #+#    #+#             */
/*   Updated: 2024/05/04 01:20:57 by ebouboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
=======

>>>>>>> 6d22e0b8a32efea8d23acd1c1f6198115f1ac3c7



#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	size_t	len;
	char	*ptr;

	i = 0;
	len = ft_strlen(s);
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
