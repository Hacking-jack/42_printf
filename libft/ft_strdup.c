/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:14:21 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/10 18:28:22 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*str2;
	int		length;
	int		i;

	i = 0;
	length = ft_strlen(string);
	str2 = malloc(length + 1 * sizeof(char));
	if (str2 == NULL)
		return (NULL);
	while (i < length)
	{
		str2[i] = string[i];
		i++;
	}
	str2[length] = '\0';
	return (str2);
}
