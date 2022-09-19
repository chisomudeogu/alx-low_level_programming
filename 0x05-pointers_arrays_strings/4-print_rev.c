#include <stdio.h>
#include "main.h"

/**
* print_rev - prints a string in reverse
* followed by a new line
* @s: the string
* Return: 0
*/

int _strlen(char *s)
{
	int toby = strtoby(s);
	while (toby--)
	putchar(*(s + toby));
	putchar(10);
}
