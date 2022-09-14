#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * O error, -1 is returned, and errno is set approximately.
 */
int main(void)
{
	int _putchar(char c)
	{
	return (write(1, &c,1));
	}
}
