#include "main.h"
#include <stdlib.h>

/**
 * _print_u_ - prints an unsigned integer
 * @number: the unsigned integer to print
 */
void _print_u_(unsigned int number)
{
	if (number > 9)
		print_u_(number / 10);
	_putchar((number % 10) + '0');
}
