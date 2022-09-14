#include "main.h"
/**
 * _isalpha - function checks if c is a letter, lowercase or uppercase
 * @c: is the int that will be used as argument for the function
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	return (0);
}
