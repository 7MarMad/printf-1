#include<stdio.h>
#include "main.h"
int main(void)
{

	_printf("%d", 1024);
	printf("%d", 1024);

	_printf("%d", -1024);
	printf("%d", -1024);

	_printf("%d", 0);
	printf("%d", 0);

	_printf("%d", INT_MAX);
	printf("%d", INT_MAX);

	_printf("%d", INT_MIN);
	printf("%d", INT_MIN);

	long int l = INT_MAX + 1024;
	_printf("%d", l);
	printf("%d", l);

	l = INT_MAX - 1024;
	_printf("%d", l);
	printf("%d", l);

	_printf("There is %d bytes in %d KB\n", 1024, 1);
	printf("There is %d bytes in %d KB\n", 1024, 1);

	_printf("%d - %d = %d\n", 1024, 2048, -1024);
	printf("%d - %d = %d\n", 1024, 2048, -1024);

	_printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

	_printf("%i", 1024);
	printf("%i", 1024);

	_printf("%i", -1024);
	printf("%i", -1024);

	_printf("%i", 0);
	printf("%i", 0);

	_printf("%i", INT_MAX);
	printf("%i", INT_MAX);

	_printf("%i", INT_MIN);
	printf("%i", INT_MIN);

	l = INT_MAX + 1024;
	_printf("%i", l);
	printf("%i", l);

	l = INT_MIN - 1024;
	_printf("%i", l);
	printf("%i", l);

	_printf("There is %i bytes in %i KB\n", 1024, 1);
	printf("There is %i bytes in %i KB\n", 1024, 1);

	_printf("%i - %i = %i\n", 1024, 2048, -1024);
	printf("%i - %i = %i\n", 1024, 2048, -1024);

	_printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

	_printf("%d == %i\n", 1024, 1024);
	printf("%d == %i\n", 1024, 1024);

	_printf("iddi%diddiiddi\n", 1024);
	printf("iddi%diddiiddi\n", 1024);
	
	_printf("%d", 10000);
	printf("%d", 10000);

	_printf("%i", 10000);
	printf("%i", 10000);

	return (0);
}
