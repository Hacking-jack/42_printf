/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:42:08 by danrodr3          #+#    #+#             */
/*   Updated: 2025/11/11 15:56:27 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

int	ft_printnum(int n)
{
	long	nbr;
	int		i;
	char	c;

	i = 0;
	nbr = n;
	if (nbr < 0)
	{
		i += write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
		i += ft_printnum(nbr / 10);
	c = (nbr % 10) + '0';
	i += write(1, &c, 1);
	return (i);
}
/*
int	ft_printnum(int num)
{
	long	len;
	long	nbr;

	len = 0;
	nbr = num;
	ft_putnbr_fd(num,1);
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	len++;
	return ((int) len);
}
int main(void)
{
	int i = ft_printnum(-99999);
	printf("\n%i",i);
}*/
