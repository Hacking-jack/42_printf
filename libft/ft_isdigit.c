/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:05:34 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/06 13:11:00 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
}
/*
#include "isdigit.h"
#include <stdio.h>

int main(void) {
  int c1 = 'a';
  int c2 = '1';

  printf("Resultado con '%c': %d\n", c1, ft_isdigit(c1));
  printf("Resultado con '%c': %d\n", c2, ft_isdigit(c2));

  return 0;
}*/
