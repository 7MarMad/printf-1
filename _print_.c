#include<stdio.h>
#include<stdarg.h>
#include "main.h"

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
	else if (str2 == 's' || str2 == 'S')
	{
		ss = va_arg(arg, char *);
		if (ss == NULL)
			ss = "(null)";
		while (ss[0] != '\0')
		{
			if (ss[0] == 0 || (31 < ss[0] && ss[0] < 127))
			{
				_putchar(ss[0]);
				ss++;
				num++;
			}
			else
			{
				_putchar('\\');
				_putchar('x');
				if (ss[0] < 15)
				{
					_putchar('0');
					num++;
				}
				num += hex_calc_upp(ss[0]);
				ss++;
				num += 2;
			}
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
		if (str2 == 'c' || str2 == 's' || str2 == '%' || str2 == 'S')
			num += string_printing(str2, arg);
		else if (str2 == 'b' || str2 == 'd' || str2 == 'i' || str2 == 'o' ||
			str2 == 'u')
			num += integer_print(str2, arg);
		else if (str2 == 'x' || str2 == 'X')
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
