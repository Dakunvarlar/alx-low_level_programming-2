#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an aray of iintegers
 *
 * @min: values from included
 * @max: from this
 *
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *m;
	int i;
	int x = miin;

	if (min > max)
		return (NULL);
	m = malloc(sizeof(int) * ((max + 1) - (min)));
	if (m == NULL)
		return (NULL);
	for (i = 0; x <= max; i++)
	{
		m[i] = x;
		x++;
	}
	return (m);
}
