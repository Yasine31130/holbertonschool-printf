#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
typedef struct specifier
{
	char *s;
	void (*func)(va_list);
} spe_t;
int print_char(char c);
int print_string(char *str);
int print_percent(__attribute__((unused)) va_list list);
#endif
