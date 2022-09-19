#include "main.h"
/**
 * rev_string - this function returns the length of a string
 *
 * @s: value
 *
 */
void rev_string(char *s)
{
	char charAc;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	whie (j <= i)
	{
		charAc = s[j];
		s[j] = s[i];
		s[i] = charAc;
		i--;
		j++;
	}
}
