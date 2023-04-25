#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    long int l = (long int)UINT_MAX + 1024;
    long int res = (long int)INT_MAX * 2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    _printf("%u", 1024);
    printf("%u", 1024);

    _printf("%u", -1024);
    printf("%u", -1024);

    _printf("%u", 0);
    printf("%u", 0);

    _printf("%u", UINT_MAX);
    printf("%u", UINT_MAX);

    _printf("%u", l);
    printf("%u", l);

    _printf("There is %u bytes in %u KB\n", 1024, 1);
    printf("There is %u bytes in %u KB\n", 1024, 1);

    _printf("%u - %u = %u\n", 2048, 1024, 1024);
    printf("%u - %u = %u\n", 2048, 1024, 1024);

    _printf("%u + %u = %u\n", INT_MAX, INT_MAX, res);
    printf("%u + %u = %u\n", INT_MAX, INT_MAX, res);

    _printf("%o", 1024);
    printf("%o", 1024);

    _printf("%o", -1024);
    printf("%o", -1024);

    _printf("%o", 0);
    printf("%o", 0);

    _printf("%o", UINT_MAX);
    printf("%o", UINT_MAX);

    _printf("%o", l);
    printf("%o", l);

    _printf("There is %o bytes in %o KB\n", 1024, 1);
    printf("There is %o bytes in %o KB\n", 1024, 1);

    _printf("%o - %o = %o\n", 2048, 1024, 1024);
    printf("%o - %o = %o\n", 2048, 1024, 1024);

    _printf("%o + %o = %o\n", INT_MAX, INT_MAX, res);
    printf("%o + %o = %o\n", INT_MAX, INT_MAX, res);

    _printf("%x", 1024);
    printf("%x", 1024);

    _printf("%x", -1024);
    printf("%x", -1024);

    _printf("%x", 0);
    printf("%x", 0);

    _printf("%x", UINT_MAX);
    printf("%x", UINT_MAX);

    _printf("%x", l);
    printf("%x", l);

    _printf("There is %x bytes in %x KB\n", 1024, 1);
    printf("There is %x bytes in %x KB\n", 1024, 1);

    _printf("%x - %x = %x\n", 2048, 1024, 1024);
    printf("%x - %x = %x\n", 2048, 1024, 1024);

    _printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);
    printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);

    _printf("%X", 1024);
    printf("%X", 1024);

    _printf("%X", -1024);
    printf("%X", -1024);

    _printf("%X", 0);
    printf("%X", 0);

    _printf("%X", UINT_MAX);
    printf("%X", UINT_MAX);

    _printf("%X", l);
    printf("%X", l);

    _printf("There is %X bytes in %X KB\n", 1024, 1);
    printf("There is %X bytes in %X KB\n", 1024, 1);

    _printf("%X - %X = %X\n", 2048, 1024, 1024);
    printf("%X - %X = %X\n", 2048, 1024, 1024);

    _printf("%X + %X = %X\n", INT_MAX, INT_MAX, res);
    printf("%X + %X = %X\n", INT_MAX, INT_MAX, res);

    _printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
    printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);

    _printf("uuoxxX%xuoXo\n", 1024);
    printf("uuoxxX%xuoXo\n", 1024);

    return (0);
