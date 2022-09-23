#include "main.h"

/**
 * void print_most_numbers(void) - prints digits 0-9 in ASCII
 * without 2 and 4
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' || i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
