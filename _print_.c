#include <stdio.h>
#include <stdarg.h>
#include "main.h"

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
		if (str2 == 'c' || str2 == 's' || str2 == '%' || str2 == 'S' ||
		str2 == 'r' || str2 == 'R')
			num += string_printing(str2, arg);
		else if (str2 == 'b' || str2 == 'd' || str2 == 'i' || str2 == 'o' ||
		str2 == 'u')
			num += integer_print(str2, arg);
		else if (str2 == 'x' || str2 == 'X' || str2 == 'p')
			num += print_hexa(str2, arg);
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
