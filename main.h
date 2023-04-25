#ifndef MAIN_H
#define MAIN_H
#include<stdarg.h>

int _strlen(const char *s);
int _putchar(char c);
int _printf(const char *format, ...);
int countt(const char *format);
int _print_(char str, char str2, va_list arg);
int integer_print(char str2, va_list arg);
int print_hexa(char str2, va_list arg);

#endif
