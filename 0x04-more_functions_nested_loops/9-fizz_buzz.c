#include <stdio.h>

/**
 * main - counts from 1 to 100
 * prints Fizz for numbers that are multiples of 3
 * prints Buzz for multiples of 5
 * prints FizzBuzz for multiples of both 3 and 5
 * Return: Void
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else
			printf("%d", n);

		if (n != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
