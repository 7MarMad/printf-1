#include<stdio.h>
#include<stdarg.h>
#include "main.h"

/**
 * string_sub_print - print for % and c
 * @str2: identifier
 * @arg: argument passed in function
 * Return: numb of printing
 */
int string_sub_print(char str2, va_list arg)
{
	int num = 0;

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
	return (num);
}

/**
 * print_pointer - print the adress in a pointer
 * @arg: argument to be printed
 * Return: count
 */
int print_pointer(va_list arg)
{
	unsigned long int address = (unsigned long int) va_arg(arg, void *);
	int count = 0, digit;
	unsigned int i;
	char hex[16];
	char *prefix;
	for(i = 0; i < sizeof(void *) * 2; i++)
	{
		digit = address % 16;
		if(digit < 10)
		{
			hex[sizeof(void *) * 2 - i - 1] = '0' + digit;
		}
		else
		{
			hex[sizeof(void *) * 2 - i - 1] = 'a' + digit - 10;
		}
		address /= 16;
	}
	
	prefix = "0x";

	for(i = 0; i < 2; i++)
	{
		_putchar(prefix[i]);
		count++;
	}
	for(i = 0; i < sizeof(void *) * 2; i++)
	{
		_putchar(hex[i]);
		count++;
	}
	return (count);
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

	if (str2 == '%' || str2 == 'c')
		num += string_sub_print(str2, arg);
	else if (str2 == 's' || str2 == 'S' || str2 == 'p')
	{
		ss = va_arg(arg, char *);
		if (ss == NULL)
			ss = "(null)";
		while (ss[0] != '\0')
		{
			if (str2 != 'S' || (ss[0] == 0 || (ss[0] > 31 && ss[0] < 127)))
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
		if (str2 == 'c' || str2 == 's' || str2 == '%' || str2 == 'S' || str2 == 'p')
			num += string_printing(str2, arg);
		else if (str2 == 'b' || str2 == 'd' || str2 == 'i' || str2 == 'o' ||
			str2 == 'u')
			num += integer_print(str2, arg);
		else if (str2 == 'x' || str2 == 'X')
			num += print_hexa(str2, arg);
		else if  (str2 == 'p')
			num += print_pointer(arg);
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
