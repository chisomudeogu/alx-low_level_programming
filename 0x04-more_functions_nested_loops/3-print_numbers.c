#include <stdio.h>
#include "main.h"

/**
* print_numbers - a function that prints the numbers fro 0 to 9
* a -  the number to print
* Return - 0
*/

void print_numbers(void)
{
int a;

for (a = 48; a < 58; a++)
{
	_putchar(a);
}
	_putchar('\n');
}
