/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:48:36 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/16 15:08:51 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	size_t	len;

	if (s == NULL)
		return ;
	i = 0;
	len = ft_strlen(s);
	while (s[i] && i < len)
	{
		write(fd, &s[i], 1);
		i++;
	}
}
