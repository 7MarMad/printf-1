#include "main.h"
#include <stdlib.h>

/**
 * _atoi - convert a string to an integer
 * @s: the string to be converted to an integer
 * Return: ineteger
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * toUpper - convert to upper case
 * @str: string to convert
 */

void toUpper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
}


/**
 * _print_X_ - prints an hexadecimal Uppercase
 * @str: str to print
 */
void _print_X_(char *str)
{
	int number = 0, count = 0;

	numbers = _atoi(toUpper(str));
	if (number > 15)
		print_u_(number / 16);
	_putchar((number % 16) + '0');
	count++;
	return (count);
}
