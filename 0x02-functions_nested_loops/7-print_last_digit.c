#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @int: Number to be treated
*
* Return: the value of the last digit
*/

int print_last_digit(int n)
{
int j;

j = (n % 10);

_putchar(j + '0');
return (j);
}

