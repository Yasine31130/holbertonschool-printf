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
	int digit = 1;

	if (number < 0)
	{
		_putchar('-');
		count++;
		number = -number;
	}

	temp = number;

	while (temp / 10 != 0)
	{
		digit *= 10;
		temp /= 10;
	}
	while (digit != 0)
	{
		_putchar((number / digit) + '0');
		number %= digit;
		digit /= 10;
		count++;
	}
	return (count);
}

int print_recursive_digit(int number)
{
	int count = 0;
	int digit;

	if (number != 0)
	{
		digit = number % 10;
		count += print_recursive_digit(number / 10);
		_putchar(digit + '0');
		count++;
	}
	return (count);
}

int print_integer_10 (va_list arg)
{
	int number = va_arg(arg, int);
	int count = 0;

	if (number < 0)
	{
		_putchar('-');
		count++;
		number = -number;
	}
	if (number == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		count += print_recursive_digit(number);
	}
	return (count);
}
