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
		{"c", print_character},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_digit},
		{"i", print_digit},
		{NULL, NULL}
	};
	unsigned int i = 0;
	int counter = 0;

	while (spec[i].c != NULL)
	{
		if (specifier == *spec[i].c)
		{
			counter += spec[i].f(arg);
			return (counter);
		}
		i++;
	}
	if (spec[i].c == NULL)
	{
		_putchar('%');
		counter++;
		_putchar(specifier);
		counter++;
		return (counter);
	}
	return (-1);
}
/**
 * _printf - custom printf
 * @format : the string character to print
 * Return: the number of character printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int count = 0;
	int i = 0;

	va_start(arg, format);
	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);

	while (format != NULL && *format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format != '\0')
			{
				count += print_format(*format, arg);
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(arg);
	return (count);
}
