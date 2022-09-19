#include "main.h"

/**
* _strcpy - copies the string pointed to by src
* @src: source
* @dest: destination
* Return: destination
*/

char *_strcpy(char *dest, char *src)
{
int toby = 0;

while (*(src + toby) != '\0')
{
*(dest + toby) = *(src + toby);
toby++;
}
*(dest + toby) = '\0';
return (dest);
}
