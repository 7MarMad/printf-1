#include "main.h"
#include <stdlib.h>

/**
 * _print_o_ - prints the octal representation of a number
 * @number: the number to print
 * Return: number of printed int
 */
 
int _print_o_(unsigned int number)
{
	int count = 0;

	if (number > 7)
		_print_o_(number / 8);
	_putchar((number % 8) + '0');
	return (count++);
}
