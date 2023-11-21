#include "main.h"
struct sp_t {
	char c;
	int (*f)(va_list);
};
/**
 * print_char - description
 * @c: char to print
 * Return: charecter
 */
int print_char(char c)
{
	return(write(1, &c, 1));
}
/**
 * print_string - description
 * @str: string to print
 * Return: num of characters 
 */
int print_string(char * str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		print_char(str[count]);
		count++;
		return (count);
	}
}
/**
 * print_percent - description
 * @list: next argument of va_list
 * Return: charecter %
 */
int print_percent(__attribute__((unused)) va_list list)
{
	print_char('%');
	return (1);
}
