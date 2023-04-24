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
	int numm = 0;

	if (value < 0)
	{
		value = -value;
		_putchar('-');
	}
	if (value > 9)
		numm += recur_putchar(value / 10);
	_putchar('0' + (value % 10));
	numm++;
	return (numm);
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
	char *ss;
	int num = 0;

	if (str == '%')
	{
		if (str2 == '%')
		{
			_putchar('%');
			num++;
		}
		if (str2 == 'c')
		{
			_putchar(va_arg(arg, int));
			num++;
		}
		if (str2 == 's')
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
		if (str2 == 'd' || str2 == 'i')
			num += recur_putchar(va_arg(arg, int));
	}
	return (num);
}
