#include "main.h"

/**
 * print_hex_padding - Prints a two digit uppercase hex value for a n ASCII code.
 * @c: The non printable character.
 *
 * Return: Always 2 (two hex digits).
 */
int print_hex_padding(char c)
{
	char *hex = "0123456789ABCDEF";

	_putchar(hex[(unsigned char)c / 16]);
	_putchar(hex[(unsigned char)c % 16]);

	return (2);
} 

/**
 * _print_custom_string - Prints a string, converting non printable characters.
 * @args: The va_list tracking system.
 *
 * Return: Number of Characters printed.
 */
int _print_custom_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		if ((*str > 0 && *str < 32) || *str >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += print_hex_padding(*str);
		}
		else
		{
			_putchar(*str);
			count++;
		}
		str++;
	}
	return (count);
}


