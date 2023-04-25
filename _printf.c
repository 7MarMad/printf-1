#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<string.h>
#include "main.h"


/**
 * _printf - the smae function as printf
 *
 * @format: string to print with identifiers
 *
 * Return: lentgh of the string that will be printed
 */
int _printf(const char *format, ...)
{
	int len, i, j = 0, *track, num_of_char = 0, l, count = 0;
	va_list args;
	const char *str;

	if (format == NULL)
		return (-1);
	len = _strlen(format);
	track = malloc((len / 2) * sizeof(int));
	if (track == NULL)
		return (-1);
	count = countt(format, track);
	va_start(args, format);
	str = format;
	l = track[j];
	len -= count * 2;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != '%')
			_putchar(str[i]);
		if (i == l && str[i] == '%' && str[i + 1] != '\0')
		{
			num_of_char = _print_(str[i], str[i + 1], args);
			i++;
			l = track[++j];
			len += num_of_char;
		}
		if (str[i] == '%' && str[i + 1] == '\0')
			len = -1;
	}
	va_end(args);
	free(track);
	return (len);
}
