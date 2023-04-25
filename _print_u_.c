#include "main.h"
#include <stdlib.h>

/**
 * _print_u_ - prints an unsigned integer
 * @number: the unsigned integer to print
 * @count: pointer to count of characters printed
 */
void _print_u_(unsigned int number)
{
	if (number > 9)
		print_unsigned_helper(number / 10);
	_putchar((number % 10) + '0');
}
