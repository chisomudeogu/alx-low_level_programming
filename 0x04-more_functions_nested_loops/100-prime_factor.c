#include <stdio.h>

/**
* main - prints the largest prime factor of 612852475143
* Return: 0
*/

int main(void)
{
long number = 612852475143;

int a;

while (a++ < number / 2)
{
if (number % a == 0)
{
number /= 2;
continue;
}
for (a = 3; a < number / 2; a += 2)
{
if (number % a == 0)
number /= a;
}
}
printf("%ld\n", number);
return (0);
}
