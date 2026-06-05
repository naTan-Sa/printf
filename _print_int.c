#include "main.h"

/**
 * int_recursion - Recusively steps down an unsigned int to write digits.
 * @num: the unsigned repersentation of our integer.
 *
 * Return: Number of digits written.
 */
int int_recursion(unsigned int num)
{
	int count = 0;

	if (num / 10 != 0)
		count += int_recursion(num / 10);

	_putchar((num % 10) + '0');
	return (count + 1);
}

/**
 * _print_int - Extracts and process an integer from the argument stack.
 * @args: the va_list tracking system.
 *
 * Return: Number of characters written.
 */
int _print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = (unsigned int)(-n);
	}
	else
	{
		num = (unsigned int)n;
	}

	count += int_recursion(num);
	return (count);
}
