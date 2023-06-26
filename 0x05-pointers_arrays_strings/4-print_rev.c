#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse.
 *@length: length of string
 *@s: string to print
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int length = 0;
	char *s = str;


	while (*s != '\0')
	{
		length++;
		s++;
	}
	while (length > 0)
	{
		s--;
		_putchar(*s);
		length--;
	}
	_putchar('\n');
}
