#include "main.h"

/**
 * pointer_recursion - Prints the lowercase hexadecimal of a 64-bit number.
 * @num: The unsigned long integer to convert and print.
 *
 * Return: Number of charcters printed.
 */
int pointer_recursion(unsigned long int num)
{
	int count = 0;
	char *hex_digits = "0123456789abcdef";

	if (num / 16)
		count += pointer_recursion(num / 16);

	_putchar(hex_digits[num % 16]);
	count++;

	return (count);
}

int _print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long int addr;
	int count = 0;
	char *nil_str = "(nil)";

	if (ptr == NULL)
	{
		while (*nil_str)
		{
			_putchar(*nil_str);
			count++;
			nil_str++;
		}
		return (count);
	}
	addr = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	count += 2;

	count += pointer_recursion(addr);

	return (count);
}
