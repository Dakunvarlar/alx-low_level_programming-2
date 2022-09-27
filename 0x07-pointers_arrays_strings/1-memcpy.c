#include "main.h"
/**
 * _memcpy - this function copies memory area
 *
 * @dest: where the src wit get copied
 * @src: area to copy
 * @n: copies n bytes of memory area
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
