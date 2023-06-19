#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 71 || n == 65)
		{
			n++;
		        continue;
		}
	        putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}


