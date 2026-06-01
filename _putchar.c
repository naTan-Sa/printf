#include "main.h"

/**
 * _putchar - 
 * @c: the character to be printed
 *
 * Return: 0 
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
