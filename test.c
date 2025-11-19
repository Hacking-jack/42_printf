
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int r1, r2;

    printf("\n=========================\n");
    printf("   TEST 1: STRING NORMAL\n");
    printf("=========================\n");
    r1 = printf("printf    -> %s\n", "hola mundo");
    r2 = ft_printf("ft_printf -> %s\n", "hola mundo");
    printf("Return printf: %d | ft_printf: %d\n\n", r1, r2);

    printf("=========================\n");
    printf("   TEST 2: STRING NULL\n");
    printf("=========================\n");
    r1 = printf("printf    -> %s\n", NULL);
    r2 = ft_printf("ft_printf -> %s\n", NULL);
    printf("Return printf: %d | ft_printf: %d\n\n", r1, r2);

    printf("=========================\n");
    printf("   TEST 3: CHAR\n");
    printf("=========================\n");
    r1 = printf("printf    -> %c %c %c\n", 'A', 0, 'Z');
    r2 = ft_printf("ft_printf -> %c %c %c\n", 'A', 0, 'Z');
    printf("Return printf: %d | ft_printf: %d\n\n", r1, r2);

    printf("=========================\n");
    printf("   TEST 4: ENTEROS\n");
    printf("=========================\n");
    r1 = printf("printf    -> %d %i %d\n", 42, -42, 0);
    r2 = ft_printf("ft_printf -> %d %i %d\n", 42, -42, 0);
    printf("Return printf: %d | ft_printf: %d\n\n", r1, r2);

    printf("=========================\n");
    printf("   TEST 5: LIMITES INT\n");
    printf("=========================\n");
    r1 = printf("printf    -> %d %d\n", INT_MAX, INT_MIN);
    r2 = ft_printf("ft_printf -> %d %d\n", INT_MAX, INT_MIN);
    printf("Return printf: %d | ft_printf: %d\n\n", r1, r2);

    printf("=========================\n");
    printf("   TEST 6: UNSIGNED\n");
    printf("=========================\n");
    r1 = printf("printf    -> %u %u\n", 0u, UINT_MAX);
    r2 = ft_printf("ft_printf -> %u %u\n", 0u, UINT_MAX);
    printf("Return printf: %d | ft_printf: %d\n\n", r1, r2);

    printf("=========================\n");
    printf("   TEST 7: HEXADECIMAL\n");
    printf("=========================\n");
    r1 = printf("printf    -> %x %X %x\n", 255, 255, 0xabcdef);
    r2 = ft_printf("ft_printf -> %x %X %x\n", 255, 255, 0xabcdef);
    printf("Return printf: %d | ft_printf: %d\n\n", r1, r2);

    printf("=========================\n");
    printf("   TEST 8: PUNTEROS\n");
    printf("=========================\n");
    int x = 123;
    void *null_ptr = NULL;
    r1 = printf("printf    -> %p %p\n", &x, null_ptr);
    r2 = ft_printf("ft_printf -> %p %p\n", &x, null_ptr);
    printf("Return printf: %d | ft_printf: %d\n\n", r1, r2);

    printf("=========================\n");
    printf("   TEST 9: PORCENTAJE\n");
    printf("=========================\n");
    r1 = printf("printf    -> %% %% %%\n");
    r2 = ft_printf("ft_printf -> %% %% %%\n");
    printf("Return printf: %d | ft_printf: %d\n\n", r1, r2);

    printf("=========================\n");
    printf("   TEST 10: MIXTO COMPLEJO\n");
    printf("=========================\n");
    r1 = printf("printf    -> %c %s %d %u %x %% %p\n",
                'A', "test", -42, 420, 255, &x);
    r2 = ft_printf("ft_printf -> %c %s %d %u %x %% %p\n",
                'A', "test", -42, 420, 255, &x);
    printf("Return printf: %d | ft_printf: %d\n\n", r1, r2);

    printf("=========================\n");
    printf("   TEST 11: STRING VACIA\n");
    printf("=========================\n");
    r1 = printf("printf    -> \"%s\"\n", "");
    r2 = ft_printf("ft_printf -> \"%s\"\n", "");
    printf("Return printf: %d | ft_printf: %d\n\n", r1, r2);

    printf("=========================\n");
    printf("   TEST 12: MUCHOS FORMATOS\n");
    printf("=========================\n");
    r1 = printf("printf    -> %d %d %d %d %d %d %d\n", 1,2,3,4,5,6,7);
    r2 = ft_printf("ft_printf -> %d %d %d %d %d %d %d\n", 1,2,3,4,5,6,7);
    printf("Return printf: %d | ft_printf: %d\n\n", r1, r2);

    printf("=========================\n");
    printf("   TEST 13: SIN FORMATOS\n");
    printf("=========================\n");
    r1 = printf("printf    -> hola mundo\n");
    r2 = ft_printf("ft_printf -> hola mundo\n");
    printf("Return printf: %d | ft_printf: %d\n\n", r1, r2);

    printf("=========================\n");
    printf("   TEST 14: FORMATO INVALIDO\n");
    printf("=========================\n");
    r1 = printf("printf    -> %q HOLA\n");
    r2 = ft_printf("ft_printf -> %q HOLA\n");
    printf("OJO: printf imprime %%q literal\n");
    printf("Return printf: %d | ft_printf: %d\n\n", r1, r2);
	
	printf("=========================\n");
    printf("   TEST 4: ENTEROS\n");
    printf("=========================\n");
    r1 = printf("%d %i\n", 42, 42);
    r2 = ft_printf("%d %i\n", 42, 42);
	printf("Return printf: %d | ft_printf: %d\n\n", r1, r2);

    return 0;
}
