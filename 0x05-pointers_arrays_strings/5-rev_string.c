#include <stdio.h>
#include "main.h"
#include <string.h>

void rev_string(char *s)
{
	int toby = strtoby(s);
	while (toby--)
	putchar(*(s + toby));
	putchar(10);
}
