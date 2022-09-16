#include "main.h"

/**
 * print_triangle - prints a triangle of pond (#) character
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int length, space, body;

	for (length = size; length >= 1; length--)
	{
		for (space = 1; space < length; space++)
		{
			_putchar(' ');
		}
		for (body = -1; body < size - space; body++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
