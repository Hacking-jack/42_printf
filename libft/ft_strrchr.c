/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:01:54 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/08 18:02:20 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int	i;

	i = ft_strlen(string);
	if (c > 255)
		c = c % 256;
	while (i >= 0)
	{
		if (string[i] == c)
			return ((char *)&string[i]);
		i--;
	}
	return (NULL);
}
