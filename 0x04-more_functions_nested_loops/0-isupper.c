#include "main.h"
/**
 * _isupper - function checks if character is upper case
 * @c: charactr to be checked
 * Return: 0 for false and 1 for true
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
