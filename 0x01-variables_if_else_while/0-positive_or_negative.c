#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
	int n;
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Enter an integer number\n");
	scanf("%d", $n);

	(n>0)?
	(printf("%d is positive\n", n)) :
	( (a<0)?
	  (printf("%d is negative\n", n)) :
	  (printf("%d is zero\n", n)) );


	return (0);
}
