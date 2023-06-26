#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse.
 *@length: length of string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int length = 0;
	int 0;


	while (*s != '\0')
	{
		length++;
		s++;
	}
	while (length > 0)
	{
		end--;
		_putchar(*s);
		length--;
	}
	_putchar('\n');
}
