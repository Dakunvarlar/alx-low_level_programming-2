#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cg;

	for (cg = 'a'; cg <= 'z'; cg++)
	{
		putchar(cg);
	}
	putchar('\n');
	return (0);
}
