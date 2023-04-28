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
	int len, len2;

	len = _printf("Complete the sentence: You %r nothing, Jon Snow.\n", "know");
	len2 = printf("Complete the sentence: You wonk nothing, Jon Snow.\n");

	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}

	_printf("%p\n", (void *)0x7fff5100b608);
	printf("%p\n", (void *)0x7fff5100b608);

	_printf("%p\n", NULL);
	printf("%p\n", NULL);

	_printf("Can you print an address?\n%p\nNice!\n", (void *)0x7fff5100b6f8);
	printf("Can you print an address?\n%p\nNice!\n", (void *)0x7fff5100b6f8);

	_printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8);
	printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8);

	_printf("\n");
	printf("\n");

	_printf("Can you print an address?\n%p\nNice!\n", (void *)-1);
	printf("Can you print an address?\n%p\nNice!\n", (void *)-1);

	_printf("%pppp\n", (void *)0x7fff5100b6f8);
	printf("%pppp\n", (void *)0x7fff5100b6f8);

	return (0);
}
