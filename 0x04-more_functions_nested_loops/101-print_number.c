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
putchar('-');
a = -a;
}
if (a > 9)
{
print_number(a / 10);
}
putchar(a % 10 + '0');
}


