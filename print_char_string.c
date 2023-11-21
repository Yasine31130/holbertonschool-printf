#include <unistd.h>
#include <stdarg.h>


/**
 *
 *
 *
 */

int print_character(va_list arg)
{
	int c = va_arg(arg, int);
	return (write (1, &c, 1));
}


int print_string(va_list arg)
{
	char *str = va_arg(arg, char *);
	int count = 0;

	while (str[count] != '\0')
	{
		print_character(arg);
		count++;
	}
	return (count);
}

int print_percent(va_list arg)
{
	print_character(arg);
	return(1);
}
