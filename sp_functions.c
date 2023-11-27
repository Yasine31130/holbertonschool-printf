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
 * print_character - function to print a char arg from the va_list
 * @arg: char to print
 * Return: the number of character (1)
 */
int print_character(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar(c);
	return (1);
}
/**
 * print_string - function to print a string. If NULL, print (null).
 * @arg: string to print
 * Return: num of characters
 */
int print_string(va_list arg)
{
	char *str = va_arg(arg, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	return (count);
}
/**
 * print_percent - print a percent character
 * @arg: link to the va_list
 * Return: 1 (number of character)
 */
int print_percent(__attribute__((unused)) va_list arg)
{
	_putchar('%');
	return (1);
}
/**
 * print_digit - description
 * @arg: int to print
 * Return: num of digits
 */

int print_digit(va_list arg)
{
	int number = va_arg(arg, int);
	int count = 0;
	int temp;
	int digit = 1;
	unsigned int min = number;

	if (number < 0)
	{
		_putchar('-');
		count++;
		min *= -1;
	}

	temp = min;

	while (temp / 10 != 0)
	{
		digit *= 10;
		temp /= 10;
	}
	while (digit != 0)
	{
		_putchar((min / digit) + '0');
		min %= digit;
		digit /= 10;
		count++;
	}
	return (count);
}
