#include "main.h"

/**
 * binary_recursion - recursively devides by w to print binery digits.
 * @num: the unsigned integer to convert.
 *
 * Return: Number of digits printed.
 */
int binaty_recursion(unsigned int num)
{
	int count = 0;

	if (num / 2 != 0)
		count += binery_recursion(num / 2);

	_putchar((num % 2) + '0');
	return (count + 1);
}


/**
 * _print_binary - extracts an unsigned int and routes it to binary conversion.
 * @args: The va_list tracking system.
 *
 * Return: Number of characters written.
 */
int _print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	return (binary_recursion(num));
}
