#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new space in memory
 *
 * @str: string
 *
 * Return: char
 */
char *_strdup(char *str)
{
	char *m;
	char n = 'a';
	int i;
	int l;

	if (str == NULL)
	{
		return (NULL);
	}

	for  (l = 0; n; l++)
	{
		n = str[l];
	}

	m = malloc(sizeof(char) * l);

	if (m == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < 1; i++)
	{
		m[i] = str[i];
	}
	return (m);
}
