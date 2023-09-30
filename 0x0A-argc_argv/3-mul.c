#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints a product of two args
 * @argc: counts num of args
 * @argv: checks argc snum
 * Return: 0 after success
 */
int main(int argc, char *argv[])
{
	int numA = 0, numB = 0;

	if (argc == 3)
	{
		numA = atoi(argv[1]);
		numB = atoi(argv[2]);
		printf("%d\n", numA * numB);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
