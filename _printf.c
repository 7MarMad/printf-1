#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);

int recur_putchar(int value);

int _strlen(char *s);

/**
 * _printf - print format into stdout
 * @format: format of the string to print
 * Return: number of formats printed
 */
int _printf(const char *format, ...)
{
	va_list l;

	int num, count = 0;
	char ch;

	va_start(l, format);

	if (format == NULL)
		return (-1);

	while ((ch = *format++) != '\0')
	{
		if (ch == '%')
		{
			ch = *format++;
			switch (ch)
			{
				case 'c':
					{
						char c = (char) va_arg(l, int);

						write(1, &c, 1);
						count++;
					}
					break;
				case 's':
					{
						char *s = va_arg(l, char *);

						if (s == NULL)
							s ="(null)";
						write(1, s, _strlen(s));
						count += _strlen(s);
					}
					break;
				case '%':
					{
						write(1, &ch, 1);
						count++;
					}
					break;
				case 'd':
					{
						num += recur_putchar(va_arg(l, int));
						count += num;
					}
					break;
				case 'i':
					{
						num += recur_putchar(va_arg(l, int));
						count += num;
					}
					break;
				default:
					{
						return (0);
					}
			}
		}
		else
		{
			write(1, &ch, 1);
			count++;
		}
	}
	va_end(l);

	return (count);
}

/**
 * _strlen - count the length of a character
 * @s: the character to be counted
 * Return: the length integer
 */
int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * recur_putchar - recursion to print with putchar
 *
 * @value: value in int to print
 *
 * Return: number of characters printed
 */
int recur_putchar(int value)
{
	int num = 0;

	if (value < 0)
	{
		_putchar('-');
		value *= -1;
	}
	if (value > 9)
		num += recur_putchar(value / 10);

	_putchar('0' + (value % 10));
	num++;
	return (num);
}
