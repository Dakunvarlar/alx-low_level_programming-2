#include "main.h"

/**
 * print_line - prints line in the terminal
 * @n: number of lines to print
 */

void print_line(int n)
{
	int n;

	if (n >= 1)
		for (n >= 1; n++)
			_putchar(_);
	else if (n == 0 || n < 0)
		_putchar('\n');
}
