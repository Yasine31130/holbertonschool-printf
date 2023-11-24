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
		number *= -1;
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