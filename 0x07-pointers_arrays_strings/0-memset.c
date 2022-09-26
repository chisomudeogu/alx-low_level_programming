#include "main.h"

/**
* _memset - fills memory with a constant byte
* @n: first number of bytes of the memory area pointed by s
* @s: points to the first n bytes of memory
* @b: the constant byte
*
* Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
	s[n - 1] = b;
	n--;
	}
	return (s);
}
