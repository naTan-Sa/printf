#include "main.h"

/**
 * _print_hex_lower - Handles %x specifier (lowercase hex).
 * @args: The va_list arguments stack.
 *
 * Return: Number of characters printed.
 */
int _print_hex_lower(va_list args)
{
	return (base_recursion(va_arg(args, unsigned int), 16, 0));
}

/**
 * _print_hex_upper - Handles %X specifier (uppercase hex).
 * @args: The va_list arguments stack.
 *
 * Return: Number of characters printed.
 */
int _print_hex_upper(va_list args)
{
	return (base_recursion(va_arg(args, unsigned int), 16, 1));
}
