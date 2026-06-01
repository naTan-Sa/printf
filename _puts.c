#include "main.h"

/**
 * _puts - Prints a string to stdout and counts the characters.
 * @str: Pointer to the string.
 *
 * Return: Number of characters printed.
 */
int _puts(char *str)
{
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
