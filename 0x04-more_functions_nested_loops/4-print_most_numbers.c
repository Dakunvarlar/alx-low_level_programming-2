#include "main.h"

/**
 * void print_most_numbers(void) - prints digits 0-9 in ASCII
 * without 2 and 4
 * Return: Nothing
 */

void print_most_numbers(void);
{
	int character = '0';

	while (character <= '9')
	{
		if (character != '2' && character != '4')
		{
			_putchar(character);
		}
		character++;
	}
	_putchar('\n');
}
