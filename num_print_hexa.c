#include<stdarg.h>
#include"main.h"

/**
 * hex_calc_low - getting hexadecimal number in lower case
 *
 * @n: the number to be converted
 *
 * Return: count for how many prints
 */
int hex_calc_low(unsigned int n)
{
	int count = 0;
	unsigned int a, r;

	a = n / 16;
	if (a != 0)
		count += hex_calc_low(a);
	r = n - (a * 16);
	if (r < 10)
		_putchar('0' + r);
	else
		_putchar('a' + (r % 10));
	count++;
	return (count);
}

/**
 * hex_calc_upp - getting hexadecimal number in upper case
 *
 * @n: the number to be converted
 *
 * Return: count for how many prints
 */

int hex_calc_upp(unsigned int n)
{
	int num = 0;
	unsigned int a, r;

	a = n / 16;
	if (a != 0)
		num += hex_calc_upp(a);
	r = n - (a * 16);
	if (r < 10)
		_putchar('0' + r);
	else
		_putchar('A' + (r % 10));
	num++;
	return (num);
}


/**
 * print_hexa - printing a number in hexadecimal
 *
 * @str2: charcter as decider
 * @arg: argument passed to be printed
 *
 * Return: num as time of printed characters
 */

int print_hexa(char str2, va_list arg)
{
	int num = 0;

	if (str2 == 'x')
		num += hex_calc_low(va_arg(arg, unsigned int));
	else if (str2 == 'X')
		num += hex_calc_upp(va_arg(arg, unsigned int));
	return (num);
}
