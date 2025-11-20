/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodr3 <danrodr3@students.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:03:56 by danrodr3          #+#    #+#             */
/*   Updated: 2025/10/06 13:10:20 by danrodr3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//copies ana arrya to other
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*des;
	unsigned char	*sor;
	size_t			coun;

	if ((src == NULL && dest == NULL) || dest == src)
		return (NULL);
	sor = (unsigned char *)src;
	des = (unsigned char *)dest;
	coun = 0;
	while (coun < n)
	{
		des[coun] = sor[coun];
		coun++;
	}
	return (des);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
    char src_str[] = "Hola mundo!";
    char dest_str1[50];
    char dest_str2[50];

    int src_ints[] = {1, 2, 3, 4, 5};
    int dest_ints1[5];
    int dest_ints2[5];

    size_t i;

    // ---------- Test 1: cadenas ----------
    printf("Test cadenas:\n");
    ft_memcpy(dest_str1, src_str, strlen(src_str)+1);
    memcpy(dest_str2, src_str, strlen(src_str)+1);

    printf("ft_memcpy: %s\n", dest_str1);
    printf("memcpy   : %s\n\n", dest_str2);

    // ---------- Test 2: enteros ----------
    printf("Test enteros:\n");
    ft_memcpy(dest_ints1, src_ints, sizeof(src_ints));
    memcpy(dest_ints2, src_ints, sizeof(src_ints));

    printf("ft_memcpy: ");
    for (i = 0; i < 5; i++)
        printf("%d ", dest_ints1[i]);
    printf("\n");

    printf("memcpy   : ");
    for (i = 0; i < 5; i++)
        printf("%d ", dest_ints2[i]);
    printf("\n\n");

    // ---------- Test 3: bytes ----------
    unsigned char src_bytes[] = {0x00, 0xFF, 0xAA, 0x55};
    unsigned char dest_bytes1[4];
    unsigned char dest_bytes2[4];

    ft_memcpy(dest_bytes1, src_bytes, sizeof(src_bytes));
    memcpy(dest_bytes2, src_bytes, sizeof(src_bytes));

    printf("Test bytes:\n");
    printf("ft_memcpy: ");
    for (i = 0; i < sizeof(src_bytes); i++)
        printf("%02X ", dest_bytes1[i]);
    printf("\n");

    printf("memcpy   : ");
    for (i = 0; i < sizeof(src_bytes); i++)
        printf("%02X ", dest_bytes2[i]);
    printf("\n");

    return 0;
}*/
