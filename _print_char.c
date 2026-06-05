#include "main.h"

/**
 * _print_char - Extracts and prints a single character from arguments.
 * @args: The va_list containing the character argument.
 *
 * Return: Always 1.
 */
int _print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
