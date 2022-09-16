#include "main.h"
/**
 * isadigit - checks whether character is a digit
 * @c: is to be used as argument
 * Return: 1 on success
 * Return: 0 on error
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
