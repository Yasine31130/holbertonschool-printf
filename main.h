#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

struct sp_t {
	char c;
	int (*f)(va_list);
};

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int print_format(char specifier, va_list arg);

#endif
