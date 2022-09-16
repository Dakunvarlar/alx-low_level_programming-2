#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: the number of lines / diagonals to print
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		for (n => 1; n++)
		_putchar('\\');
	}
	else if (n <= 0)
		_putchar(\n);
}
