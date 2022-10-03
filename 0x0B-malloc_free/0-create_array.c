#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars
 *
 *
 * @size: size of string
 * @c: chars
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *m;

	if (size == 0)
	{
		return (NULL);
	}

	m = malloc(sizeof(char) * size);

	if (m == NULL)
	{
		return (NULL);
	}

	for (i = 0; size > i; i++)
	{
		m[i] = c;
	}
	return (m);
}
