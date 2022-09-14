#include "main.h"

/**
 * times_table - prints the time tables 9 times, starting with 0.
 */
void times_tables(void)
{
	int num, mult, prod;

	for (num = 0; num <= 0; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 0; mult++)
		{
			_putchar(',');
			_putchar(' ');
			
			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
				
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
