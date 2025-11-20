/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:44:14 by danrodr3          #+#    #+#             */
/*   Updated: 2025/11/18 18:49:32 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	recur(unsigned int n, int fd)
{
	long	nbr;
	int		len;

	len = 0;
	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
		len++;
	}
	if (nbr >= 10)
		len = recur(nbr / 10, fd);
	ft_putchar_fd((nbr % 10) + '0', fd);
	len++;
	return (len);
}

int	ft_print_uns(unsigned int number)
{
	return (recur(number, 1));
}
