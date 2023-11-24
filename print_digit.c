#include "main.h"

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
