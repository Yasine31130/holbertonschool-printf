#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct specifiers - a structure linking the format specifier
 * and the right function pointer to print correctly
 * @c: pointer to the specifier
 * @f: function pointer for the specifier
 * Description: Longer description
 */

typedef struct specifiers
{
	char *c;
	int (*f)(va_list);
} sp_t;

int _putchar(char c);
int print_character(va_list arg);
int print_string(va_list arg);
int print_percent(__attribute__((unused)) va_list arg);
int print_digit(va_list arg);
int print_format(char specifier, va_list arg);
int _printf(const char *format, ...);

#endif
