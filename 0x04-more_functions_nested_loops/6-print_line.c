#include "main.h"

/**
 * print_line - prints line in the terminal
 * @n: number of lines to print
 */

void print_line(int n)
{
	int linecount;

	linecount = 0;
	while (linecount < n)
	{
		_putchar('_');
		linecount++;
	}
	_putchar('\n');
}
