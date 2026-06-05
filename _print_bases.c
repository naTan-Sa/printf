#include "main.h"

/**
 * base_recursion - converts and prints an unsigned int to a given base.
 * @num: The number to print.
 * @base: The base to convert to (2, 8, 10, or 16).
 * @upper: Flag to use uppercase hex letters if 1.
 *
 * Return: Number of charcters printed.
 */
int base_recursion(unsigned int num, int base , int upper)
{
	int count = 0;
	char *hex_digits;

	if (upper)
		hex_digits = "0123456789ABCDEF";
	else
		hex_digits = "0123456789abcdef";

	if (num / base != 0)
		count += base_recursion(num / base, base, upper);

	_putchar(hex_digits[num % base]);
	return (count + 1);
}

/**
 * _print_unsigned - Handles %u specifier.
 * @args: The va_list arguments stack.
 *
 * Return: Number of charachters printed.
 */
int _print_unsigned(va_list args)
{
	return (base_recursion(va_arg(args, unsigned int), 10, 0));
}
/**
 * _print_octal - Handles %o specifier.
 * @args: The va_list arguments stack.
 *
 * Return: Number of characters printed.
 */
int _print_octal(va_list args)
{
	return (base_recursion(va_arg(args, unsigned int), 8, 0));
}

/**
 * _print_binary - Handles %b specifier using the base engine.
 * @args: The va_list arguments stack.
 *
 * Return: Number of characters printed.
 */
int _print_binary(va_list args)
{
	return (base_recursion(va_arg(args, unsigned int), 2, 0));
}
