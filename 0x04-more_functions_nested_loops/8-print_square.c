#include "main.h"

/**
 * print_square - prints a square of pound (#) character
 * @size: the size of the square
 */
void print_square(int size)
{
	int length;
	int breadth;

	for (length = 1; length <= size; length++)
	{
		for (breadth = 1; breadth <= size; breadth++)
		{
			_putchar(#);
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
