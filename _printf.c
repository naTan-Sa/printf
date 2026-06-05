#include "main.h"

/**
 * check_spec - matches a format flag with its processing worker.
 * @format_char: the potential specifier character.
 * @args: the vardic srgument stack scout.
 *
 * Return: Number of characters printed, or 0 if no match.
 */
int check_spec(char format_char, va_list args)
{
	spec_t specs[] = {
		{"c", _print_char},
		{"s", _puts},
		{"d", _print_int},
		{"i", _print_int},
		{NULL, NULL}
	};

	int i = 0;

	while (specs[i].valid != NULL)
	{
		if (specs[i].valid[0] == format_char)
			return (specs[i].f(args));
		i++;
	}
	return (0);
}
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
	int count = 0, i = 0, printed = 0;
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
				va_end(args);
				return (-1);
			}
			if (format[i + 1] == '%')
			{
				_putchar('%'), count++, i++;
			}
			else
			{
				printed = check_spec(format[i + 1], args);
				if (printed > 0)
					count += printed, i++;
				else
					_putchar('%'), count++;
			}
		}
		i++;
	}
	va_end(args);
	return (count);
}
