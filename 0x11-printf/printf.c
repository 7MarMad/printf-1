#include "main.h"
#include <stdarg.h>
#include <unistd.h>

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
 * _printf - print format into stdout
 * @format: format of the string to print
 * Return: number of formats printed
 */
int _printf(const char *format, ...)
{
	va_list l;

	va_start(l, format);
	
	int count = 0;
	char ch;

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
						write(1, s, _strlen(s));
						count += _strlen(s);
					}
					break;
				case '%':
					{
						char k = '%';
						write(1, &k, 1);
						count++;
					}
					break;
			}
		}
		else
		{
			write(1, &ch, 1);
			count++;
		}
	}

	va_end(args);

	return count;
}
