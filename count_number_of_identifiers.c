#include<stdlib.h>

/**
 * countt - counting the identifiers numbers
 *
 * @format: string to count from
 *
 * Return: the result
 */
int countt(const char *format)
{
	int res = 0, i;
	const char *str;

	str = format;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c' || str[i + 1] == 's' || str[i + 1] == 'd' ||
			str[i + 1] == '%' || str[i + 1] == 'i' || str[i + 1] == 'b' ||
			str[i + 1] == 'u' || str[i + 1] == 'o' || str[i + 1]  == 'x' ||
			str[i + 1] == 'X' || str[i + 1] == 'S' || str[i + 1] == 'p')
			{
				res++;
				i++;
			}
		}
	}
	return (res);
}
