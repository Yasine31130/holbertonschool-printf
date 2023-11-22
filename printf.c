#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - custom printf
 * @format : the string character to print
 * Return: the number of character printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int j = 0;
	int i;

	struct sp_t spec[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	va_start(arg, format);

	while (format != NULL && *format != '\0')
	{
		if (*format == '%')
		{
			i = 0;
			format++;
			while (spec[i].c != '\0')
			{
				if (*format == spec[i].c)
				{
					spec[i].f(arg);
					break;
				}
				i++;
			}
			if (spec[i].c == '\0')
			{
				_putchar('%');
				_putchar(*format);
			}
		}
		else
			_putchar(*format);
		format++;
		j++;
	}
	va_end(arg);
	return (j);
}
