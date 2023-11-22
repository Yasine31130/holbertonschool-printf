#include "main.h"
/**
 * print_format - print the correct type of variable
 * @specifier: to compare
 * @arg: list of variables to print
 * Return: the number of character printed.
 */
int print_format(char specifier, va_list arg)
{
	struct sp_t spec[] = {
		{'c', print_character},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};
	int i = 0;

	while (spec[i].c != '\0')
	{
		if (specifier == spec[i].c)
		{
			spec[i].f(arg);
			break;
		}
		i++;
	}
	if (spec[i].c == '\0')
	{
		_putchar('%');
		_putchar(specifier);
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
			if (*format != '\0')
			{
				i = print_format(*format, arg);
			}
		}
		else
		{
			_putchar(*format);
		}
		format++;
		j += i;
	}
	va_end(arg);
	return (j);
}
