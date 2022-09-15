#include "main.h"

/**
* print_diagonal - prints diagonal lines on the terminal
* @n: number of times to print the character \
* Return: 0
*/

void print_diagonal(int n)
{
if (n <= 0)
{
	_putchar('\n');
}
else
{
int i;

for (i = 1; i <= n; i++)
{
	_putchar('\\');
	_putchar('\n');
}
	_putchar('\n');
}
}

