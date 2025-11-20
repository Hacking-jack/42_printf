/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ponit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:51:34 by danrodr3          #+#    #+#             */
/*   Updated: 2025/11/05 17:51:34 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>
static int	print_hex(uintptr_t pont)
{
	int	count;

	count = 0;
	if (pont >= 16)
		count += print_hex(pont / 16);
	count += ft_print_char("0123456789abcdef"[pont % 16]);
	return count;
}
int	ft_print_point(void *point)
{
	int				i;
	uintptr_t	pont;

	i = 0;
	if (!point)
		return ft_printstr("(nil)");
	pont = (uintptr_t) point;
	i += ft_printstr("0x");
	i += print_hex(pont);
	return (i);
}
