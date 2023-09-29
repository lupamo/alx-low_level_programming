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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int product = num1 * num2;

	printf("%d\n", product);
	return (0);
}
