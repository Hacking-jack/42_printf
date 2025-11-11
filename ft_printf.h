/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:05:39 by danrodr3          #+#    #+#             */
/*   Updated: 2025/11/04 15:07:44 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include "libft/libft.h"

int	ft_printf(char const *format, ...);

int	ft_printstr(char *string);

int	ft_print_char(char c);

int	ft_print_point(void *point);

int	ft_print_double(float number);

int	ft_printnum(int number);

int	ft_print_hex(int num, int up_case);
#endif
