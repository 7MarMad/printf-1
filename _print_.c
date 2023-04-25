#include<stdio.h>
#include<stdarg.h>
#include "main.h"

/**
 * recur_putchar - recursion to print with putchar
 *
 * @value: value in int to print
 *
 * Return: number of characters printed
 */
int recur_putchar(int value)
{
	int numm = 0, k = 0;

	if (value < 0)
	{
		value += 1;
		value = -value;
		_putchar('-');
		numm++;
		k++;
	}
	if (value > 9)
		numm += recur_putchar(value / 10);
	if (k == 1)
		_putchar('0' + ((value % 10) + 1));
	else
		_putchar('0' + (value % 10));
	numm++;
	return (numm);
}
/**
 * recur_binary_put - finding and priting the binary number
 * @n: unsigned integer to be converted to binary
 * Return: num as length of the binary number
 */
int recur_binary_put(unsigned int n)
{
	unsigned int a, r;
	int num = 0;

	a = n / 2;
	if (a != 0)
		num += recur_binary_put(a);
	r = n - (2 * a);
	_putchar('0' + r);
	num++;
	return (num);
}
/**
 * string_printing - printing the types of strings
 * @str2: the character to choose which print it is
 * @arg: the arg passed on
 * Return: numb of printing
 */
int string_printing(char str2, va_list arg)
{
	int num = 0;
	char *ss;

	if (str2 == '%')
	{
		_putchar('%');
		num++;
	}
	else if (str2 == 'c')
	{
		_putchar(va_arg(arg, int));
		num++;
	}
	else if (str2 == 's')
	{
		ss = va_arg(arg, char *);
		if (ss == NULL)
			ss = "(null)";
		while (ss[0] != '\0')
		{
			_putchar(ss[0]);
			ss++;
			num++;
		}
	}
	return (num);
}
/**
 * _print_ - printing the argument in va_list
 *
 * @str: the identifier
 * @str2: the identifier after '%'
 * @arg: arg in _printf
 * Return: number of characters printed
 */
int _print_(char str, char str2, va_list arg)
{
	int num = 0;

	if (str == '%')
	{
		if (str2 == 'c' || str2 == 's' || str2 == '%')
			num += string_printing(str2, arg);
		else if (str2 == 'b')
			num += recur_binary_put(va_arg(arg, unsigned int));
		else if (str2 == 'd' || str2 == 'i')
			num += recur_putchar(va_arg(arg, int));
		else if (str2 == '\0')
			num = -1;
		else
		{
			_putchar('%');
			_putchar(str2);
		}
	}
	return (num);
}
