#include "main.h"

/**
 * _putchar - writes the character c to stdoit
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, errno is set appropriatey.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
