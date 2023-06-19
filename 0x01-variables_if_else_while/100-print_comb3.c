#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 89, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
		  for (k = j + 1; j <= 9; k++)
		    { 	
			putchar(i + '0');
			putchar(j  + '0');
			putchar(k + '0');

			if (i == 7 || j == 8 || k == 9)
			{	
				continue;

			  putchar(',');
			  putchar(' ');
			}
		     }
		}
	  
	}

	putchar('\n');

	return (0);
}
