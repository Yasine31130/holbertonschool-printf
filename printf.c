#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

struct sp_t spec[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	{'\0', NULL}
};

/**
 * print_format - function to identify the specifier character
 * @specifier: the character specified
 * @arg: the structure that matches with the specifier
 * return: index of the specifier in the spec array
 *
 */
int print_format(char specifier, va_list arg)
{
	int i = 0;

	while (spec[i].c != '\0')
	{
		if (specifier == spec[i].c)
		{
			(spec[i].f(arg));
			return (i);
		}
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
	int j = 0;
	int i;
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
	return(j);
}
