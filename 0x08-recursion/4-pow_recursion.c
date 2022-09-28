#include "main.h"
/**
* _pow_recursion - returns the value x raised to the power of y
* @x: number to return
* @y: power
* Return: -1 or 1 or result of pow
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
