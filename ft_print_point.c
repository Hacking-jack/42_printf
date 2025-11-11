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

int	ft_print_point(void *point)
{
	int	i;
	int	pont;

	i = 0;
	pont = (int)(uintptr_t) point;
	if (point == NULL)
	{
		i = ft_printstr("0x");
		i = ft_print_hex(pont, 0);
	}
	return (i);
}
