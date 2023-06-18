#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeofa(char));
	printf("Size of an int: %zu byte(s)\n", sizeofa(int));
	printf("Size of a long int: %zu bytes(s)\n", sizeofa(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeofa(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeofa(float));
	return (0);
}		
