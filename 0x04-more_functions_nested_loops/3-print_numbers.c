#include "main.h"

/**
 * print_numbers - prints numbers 0-9 followedby a new line in ASCII
 * Returns: Nothing
 */

void print_numbers(void)
{
	int character = '0';

	while (character)
	{
		_putchar(character);
		character++;
	}
	_putchar('\n');
}
