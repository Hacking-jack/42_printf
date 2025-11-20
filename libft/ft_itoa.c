/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:01:38 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/14 18:34:08 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	long	tmp;
	char	result[12];

	if (n == 0)
		return (ft_strdup("0"));
	tmp = n;
	i = 11;
	result[11] = '\0';
	if (tmp < 0)
		tmp *= -1;
	while (tmp > 0)
	{
		result[i--] = (tmp % 10) + '0';
		tmp /= 10;
	}
	if (n < 0)
		result[i--] = '-';
	return (ft_strdup(&result[i + 1]));
}
