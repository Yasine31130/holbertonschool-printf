#include "main.h"

/**
 *
 *
 */

int print_digit(va_list arg)
{
	int number = va_arg(arg, int);
	int count = 0;
	int temp;
	int digit;

	if (number < 0)
	{
		_putchar('-');
		count++;
		number = -number;
	}

	temp = number;

	while (temp != 0)
	{
		temp /= 10;
		count++;
	}
	while (number != 0)
	{
		digit = number % 10;
		_putchar(digit + '0');
		number /= 10;
		count--;
	}
	return (count);
}

int print_octal_hexa(va_list arg)
{

