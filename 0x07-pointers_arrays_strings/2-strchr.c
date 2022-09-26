#include "main.h"

/**
* _strchr - locates a character in a string
* @s: the string
* @c: the character
* Return: a pointer to the first occurence of
* the character c
*/

char *_strchr(char *s, char c)
{
	char *i = s;

	while (*i != 0 && *i != c)
{
	i++;
}
	if (*i != c)
{
	return (0);
}
	return (i);
}

