#include <stdio.h>
/**
 * main - prints the sum of arguments
 * @argc: counts arguments of program
 * @argv: stores arguments of argc in array
 * Return: 0 after success of program
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	int adding = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int num = 0;
		int j = 0;

		while (arg[j] != '\0')
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (arg[j] - '0');
			j++;
		}
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		adding += num;
	}
	printf("%d\n", adding);
	return (0);
}
