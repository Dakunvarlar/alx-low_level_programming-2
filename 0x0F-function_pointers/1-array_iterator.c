#include <stddef.h>
#include "function_pointers.h"
/**
 * arry_iterator - executes a function given as a
 * parameter on each element of an array.
 *
 * @array: input integer array.
 * @size: size of array
 * @action: pointer to function.
 *
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size <= 0 || array == NULL || !action)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
