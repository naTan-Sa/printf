#include "main.h"

/**
 * _putchar - Buffers a character and writes to stdout when full or flushed.
 * @c: The character to print. Pass -1 to force a buffer flush.
 *
 * Return: Always returns 1.
 */
int _putchar(char c)
{
	static char buffer[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		if (i > 0)
		{
			write(1, buffer, i);
			i = 0;
		}
	}

	if (c != -1)
	{
		buffer[i] = c;
		i++;
	}
	return (1);
}
