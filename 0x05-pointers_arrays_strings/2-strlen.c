/**
 * _strlen - this function returns the length of a string
 *
 * @s: value
 *
 * Return: value
 */
int _strlen(char *s)
{
	char n;
	int i;

	for (i = 0; (n != '\0'); i++)
	{
		n = s[i];
	}
	return (i - 1);
}
