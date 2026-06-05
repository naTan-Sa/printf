#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _print_int(va_list args);
int _print_char(va_list args);
int _puts(va_list args);
#endif
