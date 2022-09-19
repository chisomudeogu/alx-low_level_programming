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
	int len = strlen(s);
	while (len--)
	putchar(*(s + len));
	putchar(10);
}
