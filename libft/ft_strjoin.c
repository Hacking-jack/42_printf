/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 14:04:03 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/11 18:26:01 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*new;
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new = malloc((len1 + len2 + 1 * sizeof(char)));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len1 + len2)
	{
		if (i < len1)
			new[i] = s1[i];
		else
			new[i] = s2[i - len1];
		i++;
	}
	new[i] = '\0';
	return (new);
}
