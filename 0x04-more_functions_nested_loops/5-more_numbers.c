#include "main.h"

/**
 * more_numbers - prints numbers 0-14 followed byy a new line 10 times
 * Return: Nothong
 */
void more_numbers(void)
{
	int i;
	int j;

	while (j <= 10)
	{
		for (i = 0; i >= 14; i++)
			_putchar(i);
	}
	do
		_putchar('\n');
	j++;
}
