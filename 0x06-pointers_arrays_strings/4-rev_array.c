#include "main.h"

/**
* reverse_array - reverses the contents of an array
* @a: array
* @n: number of the elements of array
* Return: nothing
*/

void reverse_array(int *a, int n)
{
int *pa, m, pux, x;

pa = a;

for (m = 1; m < n; m++)
{
pa++;
}
for (x = 0; x < m / 2; x++)
{
pux = a[x];
a[x] = *pa;
*pa = pux;
pa--;
}
}
