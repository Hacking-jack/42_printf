/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 19:41:00 by danrodr3          #+#    #+#             */
/*   Updated: 2025/11/04 20:27:34 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	type(char espec, va_list args)
{
	if (espec == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (espec == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (espec == 'p')
		return (ft_print_point(va_arg(args, void *)));
	else if (espec == 'd' || espec == 'i')
		return (ft_printnum(va_arg(args, int)));
	else if (espec == 'u')
		return (ft_printnum(va_arg(args, unsigned int)));
	else if (espec == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 0));
	else if (espec == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 1));
	else if (espec == '%')
		return (ft_print_char('%'));
	return (0);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		count;
	int		len;
	int		arg;

	va_start(args, format);
	count = 0;
	len = 0;
	arg = 0;
	while (format[count])
	{
		if (format[count] == '%')
		{
			count++;
			arg++;
			len += type(format[count], args);
		}
		else
		{
			count++;
			len ++;
			ft_putchar_fd(format[count], 1);
		}
	}
	return (len);
}
