#include <stdio.h>
#include "main.h"
/**
* print_numbers: function that prints the numbers from 0 to 9
* followed by a new line
* a: number to print
* _putchar: function to print the number
* Return: Always 0 (Success)
*/

void print_numbers(void)
{
int a;

for (a >= 48; a <= 57; a++)
{
	_putchar(a);
}
	_putchar('\n');
}
