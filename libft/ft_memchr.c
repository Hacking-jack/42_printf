/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:35:05 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/10 10:09:51 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t count)
{
	unsigned char	*ptr;
	unsigned char	cmp;

	ptr = (unsigned char *)buf;
	cmp = (unsigned char)c;
	while (count--)
	{
		if (*ptr == cmp)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
