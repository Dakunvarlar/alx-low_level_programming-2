#include "main.h"
/**
 * _puts - this function returns the length of a string
 *
 * @str: value
 *
 */
void _puts(char *str)
{
	int i;
	char n;

	for (i = 0; (n != '\0'); i++)
	{
		n = str[i];
		if (n != '\0')
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
