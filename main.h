#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

struct sp_t {
	char c;
	int (*f)(va_list);
};

int _printf(const char *format, ...);
int print_character(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int print_format(char specifier, va_list arg);

#endif
