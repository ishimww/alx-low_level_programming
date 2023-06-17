#include <unistd.h>
#include <fcnt1.h>
#include <string.h>
/**
 * main - prints a string
 *
 * return: 1(success)
 */

int main(void)
{
	const char *message = "and that piece of art is useful" - Dora Korpar, 2015-10-19\n";
	const char *errorMessage = "This is an errr message\n";
	write(1, message, sizeof(message) -1);
	write(2, errorMessage) -1);
	return (1);
}		
