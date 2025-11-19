/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 23:06:57 by danrodr3          #+#    #+#             */
/*   Updated: 2025/11/04 23:10:19 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printstr(char *string)
{
	if (string == NULL)
		string = "(null)";
	ft_putstr_fd(string, 1);
	return (ft_strlen(string));
}
