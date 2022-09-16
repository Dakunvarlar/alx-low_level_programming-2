#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: the number of lines / diagonals to print
 */
void print_diagonal(int n)
{
	int numofline;
	int numofspace;

	for (numofline = 1; numofline <= n; numofline++)
	{
		for (numofspace = 0; numofspace < numofile - 1; numofspace++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n < 1)
		_putcha('\n');
}
