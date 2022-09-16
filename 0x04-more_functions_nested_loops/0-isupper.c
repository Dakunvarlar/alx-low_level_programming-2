#include "main.h"

/**
 * _isupper - function checks if character is upper case
 * @c: charactr to be checked
 * Return: 0 or 1 to signify true or false
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
