#include "main.h"

/**
 * _printf - Produces output according to a format string.
 * @format: A character string containing characters and specifiers.
 *
 * Description: Scans the format string, handles %c, %s, and %%,
 * and prints output directly to stdout using _putchar.
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{

	int count = 0, i = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]), count++;
		}
		else
		{
			if (format[i + 1] == '\0')
			{
				va_end(args), return (-1);
			}
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(args, int)), count++;
					break;
				case 's':
					count += _puts(va_arg(args, char*));
					break;
				case '%':
					_putchar('%'), count++;
					break;
				default:
					_putchar('%');
					_putchar(format[i + 1]), count += 2;
					break;
			}
			i++;
		}
		i++;
	}
	va_end(args), return (count);
}
