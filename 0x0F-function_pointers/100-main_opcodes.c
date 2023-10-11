#include <stdio.h>
#include <stdlib.h>
/**
 * main - function encodes its self
 * @argc: number of argument it has
 * @argv: count of arguments
 * Return: encoded val
 */
int main(int argc, char *argv[])
{
	int j, k;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	j = atoi(argv[1]);
	if (k < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (j = 0; j < k; j++)
	{
		printf("%02hhx", *((char *)main + j));
		if (j < k - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
