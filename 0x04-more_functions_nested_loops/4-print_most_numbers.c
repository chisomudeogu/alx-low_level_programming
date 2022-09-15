#include "main.h"

/**
* print_most_numbers - a function that prints 0 to 9 except 2 and 4
* a - number to be printed
* Return - 0
*/

void print_most_numbers(void)
{
int a;
	for (a = 48; a < 58; a++)
	{
	if (a != 52)
	{
	if (a != 50)
	{
	_putchar(a);
	}
	}
	}
	_putchar('\n');
}
