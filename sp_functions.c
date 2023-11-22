#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_character - description
 * @arg: char to print
 * Return: charecter
 */
int print_character(va_list arg)
{
	char c = va_arg(arg, int);

	return (write(1, &c, 1));
}
/**
 * print_string - description
 * @arg: string to print
 * Return: num of characters
 */
int print_string(va_list arg)
{
	char *str = va_arg(arg, char *);
	int count = 0;

	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
	return (count);
}
/**
 * print_percent - description
 * @arg: next argument of va_list
 * Return: charecter %
 */
int print_percent(va_list arg)
{
	va_arg(arg, int);
	_putchar('%');
	return (0);
}
