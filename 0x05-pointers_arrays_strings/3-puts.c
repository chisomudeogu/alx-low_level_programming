#include <stdio.h>
#include "main.h"

/**
* _puts - prints a string followed by a new line
* @str: the string
* Return: 0
*/

void _puts(char *str)
{
	int b = 0;

	while (*(str + b) != '\0')
	{
		putchar(*(str + b));
			b++;
	}
		putchar(10);
	}

