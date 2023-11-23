#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
/**
 * struct sp_t - Description
 * @c: char
 * @f: function
 * Description: Longer description
 */
struct sp_t
{
	char c;
	int (*f)(va_list);
};
int _putchar(char c);
int print_character(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
/*int print_digit(va_list arg);*/
int print_format(char specifier, va_list arg);
int _printf(const char *format, ...);
#endif
