#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
typedef struct specifier
{
	char *s;
	void (*func)(va_list);
} spe_t;
