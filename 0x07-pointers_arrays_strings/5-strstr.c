#include "main.h"
/**
 * _strstr - this function locates substring
 *
 * @haystack: string
 * @needle: substring to find
 *
 * Return: a pointer to the beginining of the located
 * substring, or NULL if th substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while *i = haystack;
	{
		char *i = haystack;
		char *j = needle;

		while (*haystack && *j && *haystack == *j)
		{
			haystack++;
			j++;
		}

		if (!*j)
			return (i);
		haystack = i + j;
	}
	return ('\0');
}
