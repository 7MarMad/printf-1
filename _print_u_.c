#include "main.h"
#include <stdlib.h>

/**
 * _print_u_ - prints an unsigned integer
 * @number: the unsigned integer to print
 */
int _print_u_(unsigned int number)
{
	int count = 0;

	if (number > 9)
		print_u_(number / 10);
	_putchar((number % 10) + '0');
	count++;
	return (count);
}
