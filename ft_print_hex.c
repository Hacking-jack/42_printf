/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:09:49 by danrodr3          #+#    #+#             */
/*   Updated: 2025/11/11 14:32:14 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft/libft.h"

static int	ft_putnbr_base(unsigned int nbr, char *base)
{
	int	size;
	int	result[256];
	int	i;
	int	count;

	i = 0;
	size = ft_strlen(base);
	count = 0;
	while (nbr)
	{
		result[i] = nbr % size;
		nbr = nbr / size;
		i++;
	}
	count = i;
	while (--i >= 0)
		ft_putchar_fd(base[result[i]], 1);
	return (count);
}

int	ft_print_hex(unsigned int hex, int up_case)
{
	if (up_case == 1)
		return (ft_putnbr_base (hex, "0123456789ABCDEF"));
	else
		return (ft_putnbr_base (hex, "0123456789abcdef"));
}
