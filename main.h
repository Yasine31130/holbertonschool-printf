#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>


int _putchar(char c);
typedef struct specifier
{
	char *s;
	void (*func)(va_list);
} spe_t;

#endif
