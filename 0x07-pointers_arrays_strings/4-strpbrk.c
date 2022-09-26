#include "main.h"
/**
 * _strpbrk - this function gets the length in bytes
 *
 *
 * @s: string
 * @accept: character to find
 *
 * Return: dest
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int x = 0;

	while (s[i] != '\0')
	{
		while (accept[x] != '\0')
		{
			if (s[i] == accept[x])
			{
				return (s + i);
			}
			x++;
		}
		i++;
		x = 0;
	}
	return (0);
}
