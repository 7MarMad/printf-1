#include<stdio.h>
#include"main.h"

int main(void)
{
	int len;

	len = _printf("%x\n", 236);
	printf("%d\n", len);
	return (0);
}
