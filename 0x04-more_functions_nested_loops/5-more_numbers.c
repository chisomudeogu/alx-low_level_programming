#include "main.h"

/**
* more_numbers - prints numbers from 0 to 14 ten times
* a - number to be printed
* i - number of times
* Return - 0
*/

void more_numbers(void)
{
int a, i;

for (a = 0; a < 15; a++)
{
for (i = 0; i < 10; i++)
{
if (a >= 10)
	_putchar(a / 10 + '0');
_putchar(a % 10 + '0');
}
_putchar('\n');
}
}
