#include <stdio.h>
#include <stdlib.h>

/**
* main - entry
* @argc: number of arguments
* @argv: pointer that contains arrays of the arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}

