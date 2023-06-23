#include "main.h"

/**
 * more_numbers - nmbr
 * Return: no return
 */
void more_numbers(void)
{
	int a;
	int j;

	for (a = 0; a <= 14; a++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(a + '0');
			_putchar(' ');
		}
		_putchar('\n');
		Return(0);
	}
}
