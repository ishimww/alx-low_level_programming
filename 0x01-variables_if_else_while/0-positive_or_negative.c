#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * return: 0 (success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
{	
			
	printf("n is positive\n", n);
}	
else if (n == 0)
{
	printf("n is zero\n", n);
}	
else (n < 0)
{
	printf("n is negative\n", n);
}	
	return (0);
}
