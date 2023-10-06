#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - checks if arguments placed are correct
 * @argc: number of arguments
 * @argv: counts arguments
 * Return: 98 if not correct
 */
int main(int argc, char *argv[])
{
	int i, j;
	int num1, num2;
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < strlen(argv[1]); i++)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (j = 0; j < strlen(argv[2]); j++)
	{
		if (!isdigit(argv[2][j]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	if (num1 < 0 || num2 < 0)
	{
		printf("Error\n");
		exit(98);
	}
	product = num1 * num2;
	printf("%d\n", product);
	return (0);
}
