#include "main.h"

/**
 * print_format - print the correct type of variable
 * @specifier: to compare
 * @arg: list of variables to print
 * Return: the number of character printed.
 */
int print_format(char specifier, va_list arg)
{
	sp_t spec[] = {
		{'c', print_character},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_digit},
		{'i', print_digit},
		{'\0', NULL}
	};
	int i = 0;
	int j;

	while (spec[i].c != '\0')
	{
		if (specifier == spec[i].c)
		{
			j = spec[i].f(arg);
			break;
		}
		i++;
	}
	if (spec[i].c == '\0')
	{
		_putchar('%');
		_putchar(specifier);
	}
	return (j);
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

	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (format != NULL && *format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			if (*format != '\0')
			{
				j += print_format(*format, arg);
			}
		}
		else
		{
			_putchar(*format);
			j++;
		}
		format++;
	}
	va_end(arg);
	return (j);
}
