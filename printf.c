#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include "main.h"

/**
 *
 *
 *
 */

int print_character(int c)
{
        return write(1, &c, 1);
}

int print_string(char *str)
{
        int count = 0;
        
	if (str == '\0')
		return (NULL);

        while (*str != '\0')
        {
                print_character((int)*str);
		count++;
                str++;
        }
	return (count);
}

int _printf(const char *format, ...)
{
	va_list ap;
	int count = 0;
	va_start(ap, format);
	while (*format != 
