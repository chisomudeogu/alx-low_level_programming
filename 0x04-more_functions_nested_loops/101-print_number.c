#include <stdio.h>
#include "main.h"

/**
* print_number - prints a number
* @n: the number to print
*/

void print_number(int n)
{
unsigned int a = n;

if (n < 0)
{
_putchar('-');
a = -a;
}
if (a > 9)
{
_print_number(a / 10);
}
_putchar(a % 10 + '0');
}


