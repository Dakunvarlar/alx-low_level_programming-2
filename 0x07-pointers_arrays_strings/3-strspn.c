#include "main.h"
/**
 * _strspn - this function gets the length in bytes
 *
 *
 * @s: string
 * @accept: character to find
 *
 * Return: dest
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int x;
	int z = 0;
	int b = 0;

	while (accept[z] != '\0')
	{
		z++;
	}
	for (i = 0; i <= z; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				b++;
				break;
			}
		}
		if (accept[x] == '\0')
		{
			break;
		}
	}
	return (i);
}
