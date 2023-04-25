
#include<stdio.h>
#include "main.h"

int main(void)
{
        int len, len2;

        len = _printf("Let's print a simple %s %d %i %c sentence.\n", "as mutch as possible", 8965, 88, 'T');
        len2 = printf("Let's print a simple %s %d %i %c sentence.\n", "as mutch as possible", 8965, 88, 'T');
        _printf("Length:[%d, %i]\n", len, len);
        printf("Length:[%d, %i]\n", len2, len2);
	return (0);
}
