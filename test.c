#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_printf.h"

int main(void)
{
    int ret1, ret2;

    printf("----- TEST: Caracteres -----\n");
    ret1 = printf("printf: %c %c %c\n", 'a', 'B', '0');
    ret2 = ft_printf("ft_printf: %c %c %c\n", 'a', 'B', '0');
    printf("Return: printf=%d ft_printf=%d\n\n", ret1, ret2);

    printf("----- TEST: Strings -----\n");
    ret1 = printf("printf: %s %s %s\n", "Hello", "", NULL);
    ret2 = ft_printf("ft_printf: %s %s %s\n", "Hello", "", NULL);
    printf("Return: printf=%d ft_printf=%d\n\n", ret1, ret2);

    printf("----- TEST: Enteros con signo -----\n");
    ret1 = printf("printf: %d %i %d\n", 42, -42, INT_MAX);
    ret2 = ft_printf("ft_printf: %d %i %d\n", 42, -42, INT_MAX);
    printf("Return: printf=%d ft_printf=%d\n\n", ret1, ret2);

    printf("----- TEST: Enteros sin signo -----\n");
    ret1 = printf("printf: %u %u %u\n", 0, 42, UINT_MAX);
    ret2 = ft_printf("ft_printf: %u %u %u\n", 0, 42, UINT_MAX);
    printf("Return: printf=%d ft_printf=%d\n\n", ret1, ret2);

    printf("----- TEST: Hexadecimal -----\n");
    ret1 = printf("printf: %x %X %x\n", 42, 42, UINT_MAX);
    ret2 = ft_printf("ft_printf: %x %X %x\n", 42, 42, UINT_MAX);
    printf("Return: printf=%d ft_printf=%d\n\n", ret1, ret2);

    printf("----- TEST: Punteros -----\n");
    int a = 42;
    ret1 = printf("printf: %p %p %p\n", &a, NULL, (void *)0x1234);
    ret2 = ft_printf("ft_printf: %p %p %p\n", &a, NULL, (void *)0x1234);
    printf("Return: printf=%d ft_printf=%d\n\n", ret1, ret2);

    printf("----- TEST: Porcentaje literal -----\n");
    ret1 = printf("printf: %% %%\n");
    ret2 = ft_printf("ft_printf: %% %%\n");
    printf("Return: printf=%d ft_printf=%d\n\n", ret1, ret2);

    return 0;
}
