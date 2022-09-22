#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string parameters
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i, ii;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; ii < 52; ii++)
		{
			if if (((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A')) && s[i] == input[ii])
			{
				s[i] = datarot[ii];
				break;
			}
		}
	}
	return (s);
}
