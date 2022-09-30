#include <stdio.h>
#include <stdlib.h>

/**
* main - entry
* @argc: the number of arguments
* @argv: pointer that contains arrays of arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i = argc - 1, j = i - 1, res;

	if (i == 2)
	{
		res = atoi(argv[i]) * atoi(argv[j]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
