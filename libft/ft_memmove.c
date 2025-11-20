/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:41:04 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/06 13:09:41 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//copies an array into another
//same as memcpy  but prevents
//array overlapping it copies form 
//the back to the front 
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sor;
	size_t			i;

	dst = (unsigned char *)dest;
	sor = (unsigned char *)src;
	i = 0;
	if (dest == src || n == 0)
		return (dest);
	if (dst > sor)
	{
		while (n--)
			dst[n] = sor[n];
	}
	else
	{
		while (i < n)
		{
			dst[i] = sor[i];
			i++;
		}
	}
	return (dst);
}
/*
# include <stdio.h>
int main(void)
{
	char str[20] = "123456789";
	ft_memmove(str + 2, str, 5);
	printf("%s\n", str);
	return 0;
}*/
