#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
struct sp_t
{
        char c;
        int (*f)(va_list);
};
int print_character(va_list arg);
int print_string(va_list arg);
int print_percent(__attribute__((unused)) va_list arg);
int print_format(char specifier, va_list arg);
int _printf(const char *format, ...);
#endif
