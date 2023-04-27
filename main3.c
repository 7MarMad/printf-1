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
        _printf("%p", (void *)0x7fff5100b608);
        _printf("%p", (void *)0x7fff5100b608);

        _printf("%p", NULL);
        _printf("%p", NULL);

        _printf("Can you print an address?\n%p\nNice!\n", (void *)0x7fff5100b6f8);
        _printf("Can you print an address?\n%p\nNice!\n", (void *)0x7fff5100b6f8);

        _printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8);
        _printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8);

        _printf("");
        _printf("");

        _printf("Can you print an address?\n%p\nNice!\n", (void *)-1);
        _printf("Can you print an address?\n%p\nNice!\n", (void *)-1);

        _printf("%pppp", (void *)0x7fff5100b6f8);
        _printf("%pppp", (void *)0x7fff5100b6f8);


        return (0);
}
