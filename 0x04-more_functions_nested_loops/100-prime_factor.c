#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 * Return: 0 for success and 1 for failure
 */
int main(void)
{
	unsigned long int number =  612852475143;
	unsigned long int temp = number;
	unsigned long int loop;
	unsigned long int primefactor = 1;

	for (loop = 2; loop < number; loop++)
	{
		if (temp % loop == 0)
		{
			primefactor *= loop;
			temp /= loop;
			if (temp == 1)
			{
				printf("%lu\n", loop);
				return (0);
			}
			loop = 1;
		}
	}
	return (0);
}
