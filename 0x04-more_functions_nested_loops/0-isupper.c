#include "main.h"
/**
 * _isupper - function checks if character is upper case
 * @c: charactr to be checked
 * Return: 0 for false and 1 for true
 */
int _isupper(int c);
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
