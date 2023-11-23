#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
/**
 * struct specifiers - Description
 * @c: char
 * @f: function
 * Description: Longer description
 */
typedef struct specifiers
{
	char c;
	int (*f)(va_list);
} sp_t;

int _putchar(char c);
int print_character(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int print_format(char specifier, va_list arg);
int _printf(const char *format, ...);

#endif
