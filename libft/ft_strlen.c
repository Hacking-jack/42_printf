/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:17:45 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/06 13:08:29 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
/*
int main(void)
{
    char *str1 = "como";
    char *str2 = "linea\nnueva";

    printf("ft_strlen(\"%s\") = %zu\n", str1, ft_strlen(str1));
    printf("ft_strlen(\"%s\") = %zu\n", str2, ft_strlen(str2));


    return 0;
}*/
