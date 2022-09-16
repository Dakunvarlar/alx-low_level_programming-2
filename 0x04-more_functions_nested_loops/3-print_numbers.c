#include "main.h"

/**
 * print_numbers - prints numbers 0-9 followedby a new line
 * Returns: Nothing
 */

void print_numbers(void)
{
	int num = 0;

	for (num = 0; num >= 0; num++)
		_putchar(num);
	_putchar('\n');
	return (0);
}
