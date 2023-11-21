#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

struct sp_t spec[] = {
	{'c', print_character},
	{'s', print_string},
	{'%', print_percent},
	{'\0', NULL}
};

int print_format(char specifier, va_list arg)
{
	int i = 0;

	while (spec[i].c != '\0')
	{
		if (specifier == spec[i].c)
			return (spec[i].f(arg));
		i++;
	}
	return (i);
}
/**
 * _printf - custom printf
 * @format : the string character to print
 * Return: the number of character printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i;
	int j = 0;
	va_start(arg, format);

	while (format != NULL && *format != '\0')
	{
		i = 0;
		while (spec[i].c != '\0')
		{
			if (*format == '%')
			{
				print_format(*format, arg);
			}
			i++;
		}
		write (1, format, 1);
		format++;
		j++;
	}
	va_end(arg);
	return(j);
}
