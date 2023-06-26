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
	char *t = s


	while (*t != '\0')
	{
		length++;
		t++;
	}
	while (length > 0)
	{
		t--;
		_putchar(*s);
		length--;
	}
	_putchar('\n');
}
