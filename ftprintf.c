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
# include "libftprintf.h"

int	type(char espec,int arg, va_list args)
{
	if(espec == 'c')
		return (ft_print_char(args[arg]));
	else if(espec == 's')
		return (ft_printstr(args[arg]));
	else if(espec == 'p')
		return (ft_print_ponit(args[arg]));
	else if(espec == 'd')
		return (ft_print_double(args[arg]));
	else if(espec == 'i')
		return (ft_printnum(args[arg], false));
	else if(espec == 'u')
		return (ft_printnum(args[arg], true));
	else if(espec == 'x')
		return (ft_print_hex(args[arg], false));
	else if(espec == 'X')
		return (ft_print_hex(args[arg], true));
	else if(espec == '%')
		return (ft_print_char('%'));

}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		count;
	int		len;
	int		arg;

	va_start(args,format);
	count = 0;
	len = 0;
	arg = 0;
	while( format[count])
	{
		if(format[count] == '%')
		{
			count++;
			arg++;
			len += type(format[count], arg, args);
		}else
		{
			count++;
			len ++;
			ft_putchar(format[count]);
		}
	}
	return (len);
}
