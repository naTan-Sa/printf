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

/* Standard Low-Level Output */
int _putchar(char c);

/* Main Printf Engine & Selection Switchboard */
int _printf(const char *format, ...);
int check_spec(char format_char, va_list args);

/* Core Variadic Specifier Handlers */
int _print_int(va_list args);
int _print_char(va_list args);
int _puts(va_list args);



/* Internal Calculation Helper */
int int_recursion(unsigned int num);

/* Task 3 & 2 Unsigned Base Blueprints */
int base_recursion(unsigned int num, int base, int upper);
int _print_unsigned(va_list args);
int _print_octal(va_list args);
int _print_hex_lower(va_list args);
int _print_hex_upper(va_list args);
int _print_binary(va_list args);

#endif /* MAIN_H */
