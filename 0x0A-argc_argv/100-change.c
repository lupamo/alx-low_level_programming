#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints change in cents
 * @argc: first argument for cents
 * @argv: array of argc
 * Return: 0 affter success
 */
int main(int argc, char *argv[])
{
	int count, balance;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	balance = atoi(argv[1]);
	for (count = 0; balance > 0; count++)
	{
		if (balance - 25 >= 0)
		{
			balance = balance - 25;
		}
		else if (balance - 10 >= 0)
		{
			balance = balance - 5;
		}
		else if (balance - 2 >= 0)
		{
			balance = balance - 2;
		}
		else if (balance - 1 >= 0)
		{
			balance = balance - 1;
		}
	}
	printf("%d\n", count);
	return (0);
}
