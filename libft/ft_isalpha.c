/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 18:08:37 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/06 13:11:33 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
int main(void) {
    char c1 = 'a';
    char c2 = '1';

    printf("Resultado con '%c': %d\n", c1, ft_isalpha(c1));
    printf("Resultado con '%c': %d\n", c2, ft_isalpha(c2));

    return 0;
}
*/
