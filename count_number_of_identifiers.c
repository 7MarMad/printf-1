#include<stdlib.h>

/**
 * countt - counting the identifiers numbers
 *
 * @format: string to count from
 * @track: array of indexes
 *
 * Return: the result
 */
int countt(const char *format, int *track)
{
	int res = 0, i, j = 0, alone = 0;
	const char *str;

	str = format;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c' || str[i + 1] == 's' ||
			str[i + 1] == 'd' || str[i + 1] == '%' ||
			str[i + 1] == 'i')
			{
				res++;
				track[j++] = i;
				i++;
			}
			else
				alone++;
		}
	}
	return (res);
}
