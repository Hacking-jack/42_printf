/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:18:39 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/06 13:10:43 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//este metodo revisa si es un caracter imprimible
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*#include <stdio.h>
int main(void)
{
    char tests[] = {
        'A', 'z', '0', '9', ' ', '!', '\n', '\t', 127, 31
    };
    size_t i;

    for (i = 0; i < sizeof(tests)/sizeof(tests[0]); i++)
    {
        char c = tests[i];
        printf("ft_isprint('%c' / ASCII %d) = %d\n",
               (c >= 32 && c <= 126) ? c : '?',
               c,
               ft_isprint(c));
    }

    return 0;
}*/
