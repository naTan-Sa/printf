#include "main.h"

/**
 * _puts - Extracts and prints a string from the variadic arguments.
 * @args: The va_list containing the string argument.
 *
 * Return: Number of characters printed.
 */
int _puts(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		_putchar(*str);
		count++;
		str++;
	}

	return (count);
}
